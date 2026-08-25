/***************************************************************************** 
*Copyright 2012-2014, National Instruments, Corporation. All Rights Reserved.* 
*****************************************************************************/

/*****************************************************************************
*  Agilent N934X Spectrum Analyzer Instrument Driver 
*  Instrument Driver Example Program                              
*  Developed with LabWindows/CVI 2010                                     
*  Original Release: 06/15/2012                                  
*
*  Purpose:  This example program initializes the spectrum analyzer and 
*            configures it for ACPR measurement.
*
*            To run this example program, do the following:
*            1) Create a new project in LabWindows/CVI.
*            2) Add this file to the project.  To add files to the project,
*               select the Add Files To Project from the Edit menu of the 
*               Project window.
*            3) Add one of the following files to the project:
*               agn934xni.fp, agn934xni.c, or agn934xni.lib.
*            4) Check that the resource name used in agn934xni_init ()
*               function is correct.
*            5) Run the project.
******************************************************************************/

#include <cvirte.h>
#include <ansi_c.h> 
#include <userint.h>
#include <utility.h>
#include "agn934xni.h"

#define BUFFER_SIZE 256
int main (int argc, char *argv[])
{
    ViStatus    error = VI_SUCCESS;
    ViSession   vi;
    ViInt32     status = 0;
    ViReal64    nLowerACP = 0, nLowACPR = 0, nUpperACP = 0, nUpperACPR = 0, nMainChannelPower = 0;
    ViReal64    nMarkerPosition, nMarkerAmplitude;
    ViChar      szMsg[BUFFER_SIZE];
    ViChar      szTemp[] = "Main Channel Power: %.2f dBm/1.0kHz\n"
                           "Lower ACPR: %.2f dB\n"
                           "Upper ACPR: %.2f dB\n"
                           "Lower Channel Power: %.2f dBm/1.0kHz\n"
                           "Upper Channel Power: %.2f dBm/1.0kHz";

    if (InitCVIRTE (0, argv, 0) == 0)
        return -1;    /* out of memory */
   
    /*- Initialize the spectrum analyzer ------------------------------------*/ 
    viCheckErr( agn934xni_InitWithOptions ("TCPIP0::10.144.8.194::INSTR", VI_TRUE, VI_TRUE, 
                                           "Simulate=0,RangeCheck=1,QueryInstrStatus=1,Cache=1", &vi));
	
    /*- Select ACPR measurement type -----------------------------------------*/ 
    viCheckErr( agn934xni_ConfigureMeasurementType(vi, AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER, 
                AGN934XNI_VAL_MEASUREMENT_TYPE_ACPR));
	
    viCheckErr( agn934xni_ConfigureLevel (vi, AGN934XNI_VAL_AMPLITUDE_UNITS_DBM, 50.0, 0.0, 0.0, VI_TRUE, 20.0));
	
    /*- Configure measurement average ---------------------------------------*/ 
    viCheckErr( agn934xni_ConfigureAverage (vi, VI_FALSE, 100, AGN934XNI_VAL_AVERAGE_TYPE_LOGPOWER, VI_FALSE, 60));
	
    /*- Configure marker ----------------------------------------------------*/ 
    viCheckErr( agn934xni_SetActiveMarker (vi, "MARKER1"));
    viCheckErr( agn934xni_ConfigureMarkerEnabled (vi, VI_TRUE, "TRACE1"));
    viCheckErr( agn934xni_MoveMarker (vi, 3.5e9));
	
    /*- Configure ACP relevant settings -------------------------------------*/ 
    viCheckErr( agn934xni_ConfigureACPR (vi, 3.5e9, 1.0E6));
	
    /*- Initiate and wait ---------------------------------------------------*/ 
    viCheckErr( agn934xni_Initiate(vi));
    viCheckErr( agn934xni_AcquisitionStatus(vi, &status));

    if (status == AGN934XNI_VAL_ACQUISITION_STATUS_COMPLETE)
        viCheckErr( agn934xni_FetchMeasurementACPR(vi, &nLowerACP, &nLowACPR, &nUpperACP, &nUpperACPR, &nMainChannelPower));
    
    viCheckErr( agn934xni_QueryMarker(vi, &nMarkerPosition, &nMarkerAmplitude));
    
    sprintf(szMsg, szTemp, nMainChannelPower, nLowACPR, nUpperACPR, nLowerACP, nUpperACP);     
    MessagePopup("Message", szMsg);

Error:
    if (error != VI_SUCCESS)
    {
        ViChar   errStr[2048];

        agn934xni_GetError(vi, &error, 2048, errStr);
        MessagePopup ("Error!", errStr);
    }
    
    if(vi != VI_NULL)
        agn934xni_close (vi);
    
    return 0;
}

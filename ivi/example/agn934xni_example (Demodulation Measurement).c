/***************************************************************************** 
* Copyright 2013-2014, National Instruments, Corporation. All Rights Reserved.    * 
*****************************************************************************/

/*****************************************************************************
*  Agilent N934X Spectrum Analyzer Instrument Driver 
*  Instrument Driver Example Program                              
*  Developed with LabWindows/CVI 2012                                     
*  Original Release: 06/15/2012
*  Update Release: 07/15/2013                                   
*
*  Purpose:  This example program initializes the spectrum analyzer and 
*            configures it for demodulation measurement.
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
*
*  Note:     This example is valid only for N9322C model.
******************************************************************************/

#include <cvirte.h>
#include <ansi_c.h> 
#include <userint.h>
#include <utility.h>
#include "agn934xni.h"

/*- Define the data array length ----------*/
#define DATA_LEN          3

#define BUFFER_SIZE       1024L


int main (int argc, char *argv[])
{
    const       ViChar szTitleAMDur[] = "AM Demodulation Duration Data (5 secs)\n";
    const       ViChar szDataCur[] = "\n=========Current==========\n";
    const       ViChar szDataMax[] = "\n==========Max===========\n";
    const       ViChar szDataMin[] = "\n==========Min===========\n";
    const       ViChar szReadData[] = "Carrier Power : %.2f dBm\nModulation Rate : %.3f Hz\nAM Depth : %.2f %%\n"
                                      "SINAD : %.2f dB\nTHD : %.2f dB\nCarrier Freq Offset : %.4f Hz\n";
    const       ViChar szPostfix[] = "\nPress <Enter> to continue";
    
    ViChar      szBuff[DATA_LEN][BUFFER_SIZE];
    ViChar      szMsg[BUFFER_SIZE];
    ViStatus    error = VI_SUCCESS;
    ViSession   vi;
    ViReal64    CarrierPower[DATA_LEN], 
                ModulationRate[DATA_LEN], 
                AmDepth[DATA_LEN], 
                Sinad[DATA_LEN],
				THD[DATA_LEN],
                CarrierFreqOffset[DATA_LEN];
    ViInt32     i = 0;
    

    if (InitCVIRTE (0, argv, 0) == 0)
        return -1;    /* out of memory */
    
    /*- Initialize the spectrum analyzer ------------------------------------*/ 
    viCheckErr( agn934xni_InitWithOptions ("TCPIP0::10.144.8.194::INSTR", VI_TRUE, VI_TRUE, 
                                           "Simulate=0,RangeCheck=1,QueryInstrStatus=0,Cache=1", &vi));

    /*- Select AM demodulation measurement type -----------------------------*/ 
    viCheckErr( agn934xni_ConfigureMeasurementType (vi, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION, AGN934XNI_VAL_MEASUREMENT_TYPE_OFF));
    viCheckErr( agn934xni_ConfigureDemodulationMode (vi, AGN934XNI_VAL_DEMODULATION_MODE_AM));

    /*- Configure AM relevant settings --------------------------------------*/ 
    viCheckErr( agn934xni_ConfigureAMFMMeasurement(vi,
	                                               VI_FALSE,
	                                               40,
	                                               AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_POSITIVE_PEAK, 
	                                               VI_FALSE,
	                                               VI_FALSE,
	                                               400000,
												   AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_AUTO));	
	
    viCheckErr( agn934xni_ConfigureCarrierFrequency(vi, VI_FALSE, 3.5e9, 1e8));   

    /*- Configure limits ---------------------------------------------------*/
	viCheckErr( agn934xni_ConfigureDemodulationLimit (vi, VI_TRUE, -20, 50, 10, 0));

    /*- Configure display */    
	viCheckErr( agn934xni_ConfigureDemodulationDisplay(vi, 
		                                               AGN934XNI_VAL_DEMODULATION_AXIS_X,
										               VI_TRUE,
										               0.00002,
										               1.2,
										               AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_CENTER,
										               AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_WAVEFORM));  
	viCheckErr( agn934xni_ConfigureDemodulationDisplay(vi, 
		                                               AGN934XNI_VAL_DEMODULATION_AXIS_Y,
										               VI_TRUE,
										               11,
										               1.4,
										               AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_CENTER,
										               AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_WAVEFORM));

    /*- Read AM demodulation measurement data in duration mode -------------------------------*/ 
    viCheckErr( agn934xni_ReadAMMeasurementData (vi, 
                                                 5000,
                                                 3,
                                                 CarrierPower, 
                                                 ModulationRate, 
                                                 AmDepth, 
                                                 Sinad,
												 THD,
                                                 CarrierFreqOffset));
    
    /* Display a message as the finish */
    for (i = 0; i < DATA_LEN; i++)
    {
        sprintf(szBuff[i], szReadData, CarrierPower[i], ModulationRate[i], AmDepth[i], Sinad[i], THD[i], CarrierFreqOffset[i]); 
    }
    
    sprintf(szMsg, "%s%s%s%s%s%s%s%s", szTitleAMDur, szDataCur, szBuff[0], 
            szDataMax, szBuff[1], szDataMin, szBuff[2], szPostfix);     
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

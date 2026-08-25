/***************************************************************************** 
 *  Copyright 2012-2014, National Instruments Corporation.  All Rights Reserved.  *
 *****************************************************************************/

/****************************************************************************
 *                       Agilent N934X Handheld Spectrum Analyzer                           
 *                                                                          
 * Title:    agn934xni.h                                        
 * Purpose:  Agilent N934X Handheld Spectrum Analyzer                                       
 *           instrument driver declarations.                                
 *                                                                          
 ****************************************************************************/

#ifndef __AGN934XNI_HEADER
#define __AGN934XNI_HEADER

#include <ivi.h>
#include <ivispecan.h>  
    

#if defined(__cplusplus) || defined(__cplusplus__)
extern "C" {
#endif

/****************************************************************************
 *----------------- Instrument Driver Revision Information -----------------*
 ****************************************************************************/

#define AGN934XNI_MAJOR_VERSION                2     /* Instrument driver major version   */
#define AGN934XNI_MINOR_VERSION                3     /* Instrument driver minor version   */

#define AGN934XNI_CLASS_SPEC_MAJOR_VERSION     2     /* Class specification major version */
#define AGN934XNI_CLASS_SPEC_MINOR_VERSION     0     /* Class specification minor version */        
                                                                    

#define AGN934XNI_SUPPORTED_INSTRUMENT_MODELS  "N9342C,N9343C,N9344C,N9322C,N9321C,N9323C,N9324C"
#define AGN934XNI_DRIVER_VENDOR                "National Instruments"
#ifdef  _IVI_mswin64_
#define AGN934XNI_DRIVER_DESCRIPTION           "Agilent N934X Handheld Spectrum Analyzer Instrument Driver [Compiled for 64-bit.]"
#else                    
#define AGN934XNI_DRIVER_DESCRIPTION           "Agilent N934X Handheld Spectrum Analyzer Instrument Driver"
#endif
                    
 /**************************************************************************** 
 *------------------------------ Useful Macros -----------------------------* 
 ****************************************************************************/


/**************************************************************************** 
 *---------------------------- Attribute Defines ---------------------------* 
 ****************************************************************************/

    /*- IVI Inherent Instrument Attributes ---------------------------------*/    

        /* User Options */
#define AGN934XNI_ATTR_RANGE_CHECK                                  IVI_ATTR_RANGE_CHECK                                   /* ViBoolean */
#define AGN934XNI_ATTR_QUERY_INSTRUMENT_STATUS                      IVI_ATTR_QUERY_INSTRUMENT_STATUS                       /* ViBoolean */
#define AGN934XNI_ATTR_CACHE                                        IVI_ATTR_CACHE                                         /* ViBoolean */
#define AGN934XNI_ATTR_SIMULATE                                     IVI_ATTR_SIMULATE                                      /* ViBoolean */
#define AGN934XNI_ATTR_RECORD_COERCIONS                             IVI_ATTR_RECORD_COERCIONS                              /* ViBoolean */
#define AGN934XNI_ATTR_INTERCHANGE_CHECK                            IVI_ATTR_INTERCHANGE_CHECK                             /* ViBoolean */
        
        /* Driver Information  */
#define AGN934XNI_ATTR_SPECIFIC_DRIVER_PREFIX                       IVI_ATTR_SPECIFIC_DRIVER_PREFIX                        /* ViString, read-only  */
#define AGN934XNI_ATTR_SUPPORTED_INSTRUMENT_MODELS                  IVI_ATTR_SUPPORTED_INSTRUMENT_MODELS                   /* ViString, read-only  */
#define AGN934XNI_ATTR_GROUP_CAPABILITIES                           IVI_ATTR_GROUP_CAPABILITIES                            /* ViString, read-only  */
#define AGN934XNI_ATTR_INSTRUMENT_MANUFACTURER                      IVI_ATTR_INSTRUMENT_MANUFACTURER                       /* ViString, read-only  */
#define AGN934XNI_ATTR_INSTRUMENT_MODEL                             IVI_ATTR_INSTRUMENT_MODEL                              /* ViString, read-only  */
#define AGN934XNI_ATTR_INSTRUMENT_FIRMWARE_REVISION                 IVI_ATTR_INSTRUMENT_FIRMWARE_REVISION                  /* ViString, read-only  */
#define AGN934XNI_ATTR_SPECIFIC_DRIVER_REVISION                     IVI_ATTR_SPECIFIC_DRIVER_REVISION                      /* ViString, read-only  */
#define AGN934XNI_ATTR_SPECIFIC_DRIVER_VENDOR                       IVI_ATTR_SPECIFIC_DRIVER_VENDOR                        /* ViString, read-only  */
#define AGN934XNI_ATTR_SPECIFIC_DRIVER_DESCRIPTION                  IVI_ATTR_SPECIFIC_DRIVER_DESCRIPTION                   /* ViString, read-only  */
#define AGN934XNI_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION     IVI_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION      /* ViInt32, read-only   */
#define AGN934XNI_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION     IVI_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION      /* ViInt32, read-only   */

        /* Advanced Session Information */
#define AGN934XNI_ATTR_LOGICAL_NAME                                 IVI_ATTR_LOGICAL_NAME                                  /* ViString, read-only  */
#define AGN934XNI_ATTR_IO_RESOURCE_DESCRIPTOR                       IVI_ATTR_IO_RESOURCE_DESCRIPTOR                        /* ViString, read-only  */
#define AGN934XNI_ATTR_DRIVER_SETUP                                 IVI_ATTR_DRIVER_SETUP                                  /* ViString, read-only  */

     /*- Instrument-Specific Attributes -------------------------------------*/ 
/*- IviSpecAn IviSpecAnBase Group Attributes ---------------*/
#define AGN934XNI_ATTR_AMPLITUDE_UNITS                              IVISPECAN_ATTR_AMPLITUDE_UNITS                         /* ViInt32      */
#define AGN934XNI_ATTR_ATTENUATION                                  IVISPECAN_ATTR_ATTENUATION                             /* ViReal64     */
#define AGN934XNI_ATTR_ATTENUATION_AUTO                             IVISPECAN_ATTR_ATTENUATION_AUTO                        /* ViBoolean    */
#define AGN934XNI_ATTR_DETECTOR_TYPE                                IVISPECAN_ATTR_DETECTOR_TYPE                           /* ViInt32      */
#define AGN934XNI_ATTR_DETECTOR_TYPE_AUTO                           IVISPECAN_ATTR_DETECTOR_TYPE_AUTO                      /* ViBoolean    */
#define AGN934XNI_ATTR_FREQUENCY_START                              IVISPECAN_ATTR_FREQUENCY_START                         /* ViReal64     */
#define AGN934XNI_ATTR_FREQUENCY_STOP                               IVISPECAN_ATTR_FREQUENCY_STOP                          /* ViReal64     */
#define AGN934XNI_ATTR_FREQUENCY_OFFSET                             IVISPECAN_ATTR_FREQUENCY_OFFSET                        /* ViReal64     */
#define AGN934XNI_ATTR_INPUT_IMPEDANCE                              IVISPECAN_ATTR_INPUT_IMPEDANCE                         /* ViInt32      */
#define AGN934XNI_ATTR_NUMBER_OF_SWEEPS                             IVISPECAN_ATTR_NUMBER_OF_SWEEPS                        /* ViInt32      */
#define AGN934XNI_ATTR_REFERENCE_LEVEL                              IVISPECAN_ATTR_REFERENCE_LEVEL                         /* ViReal64     */
#define AGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET                       IVISPECAN_ATTR_REFERENCE_LEVEL_OFFSET                  /* ViReal64     */
#define AGN934XNI_ATTR_RESOLUTION_BANDWIDTH                         IVISPECAN_ATTR_RESOLUTION_BANDWIDTH                    /* ViReal64     */
#define AGN934XNI_ATTR_RESOLUTION_BANDWIDTH_AUTO                    IVISPECAN_ATTR_RESOLUTION_BANDWIDTH_AUTO               /* ViBoolean    */
#define AGN934XNI_ATTR_SWEEP_MODE_CONTINUOUS                        IVISPECAN_ATTR_SWEEP_MODE_CONTINUOUS                   /* ViBoolean    */
#define AGN934XNI_ATTR_SWEEP_TIME                                   IVISPECAN_ATTR_SWEEP_TIME                              /* ViReal64     */
#define AGN934XNI_ATTR_SWEEP_TIME_AUTO                              IVISPECAN_ATTR_SWEEP_TIME_AUTO                         /* ViBoolean    */
#define AGN934XNI_ATTR_TRACE_COUNT                                  IVISPECAN_ATTR_TRACE_COUNT                             /* ViInt32      */
#define AGN934XNI_ATTR_TRACE_SIZE                                   IVISPECAN_ATTR_TRACE_SIZE                              /* ViInt32      */
#define AGN934XNI_ATTR_TRACE_TYPE                                   IVISPECAN_ATTR_TRACE_TYPE                              /* ViInt32      */
#define AGN934XNI_ATTR_VERTICAL_SCALE                               IVISPECAN_ATTR_VERTICAL_SCALE                          /* ViInt32      */
#define AGN934XNI_ATTR_VIDEO_BANDWIDTH                              IVISPECAN_ATTR_VIDEO_BANDWIDTH                         /* ViReal64     */
#define AGN934XNI_ATTR_VIDEO_BANDWIDTH_AUTO                         IVISPECAN_ATTR_VIDEO_BANDWIDTH_AUTO                    /* ViBoolean    */

 /*- IviSpecAn IviSpecAnMarker Group Attributes ---------------*/
#define AGN934XNI_ATTR_ACTIVE_MARKER                                IVISPECAN_ATTR_ACTIVE_MARKER                           /* ViString     */
#define AGN934XNI_ATTR_MARKER_AMPLITUDE                             IVISPECAN_ATTR_MARKER_AMPLITUDE                        /* ViReal64     */
#define AGN934XNI_ATTR_MARKER_COUNT                                 IVISPECAN_ATTR_MARKER_COUNT                            /* ViInt32      */
#define AGN934XNI_ATTR_MARKER_ENABLED                               IVISPECAN_ATTR_MARKER_ENABLED                          /* ViBoolean    */
#define AGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED             IVISPECAN_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED        /* ViBoolean    */
#define AGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_RESOLUTION          IVISPECAN_ATTR_MARKER_FREQUENCY_COUNTER_RESOLUTION     /* ViReal64     */
#define AGN934XNI_ATTR_MARKER_POSITION                              IVISPECAN_ATTR_MARKER_POSITION                         /* ViReal64     */
#define AGN934XNI_ATTR_MARKER_THRESHOLD                             IVISPECAN_ATTR_MARKER_THRESHOLD                        /* ViReal64     */
#define AGN934XNI_ATTR_MARKER_TRACE                                 IVISPECAN_ATTR_MARKER_TRACE                            /* ViString     */
#define AGN934XNI_ATTR_PEAK_EXCURSION                               IVISPECAN_ATTR_PEAK_EXCURSION                          /* ViReal64     */
#define AGN934XNI_ATTR_SIGNAL_TRACK_ENABLED                         IVISPECAN_ATTR_SIGNAL_TRACK_ENABLED                    /* ViBoolean    */

 /*- IviSpecAn IviSpecAnTrigger Group Attributes ---------------*/
#define AGN934XNI_ATTR_TRIGGER_SOURCE                               IVISPECAN_ATTR_TRIGGER_SOURCE                          /* ViInt32      */

 /*- IviSpecAn IviSpecAnExternalTrigger Group Attributes ---------------*/
#define AGN934XNI_ATTR_EXTERNAL_TRIGGER_LEVEL                       IVISPECAN_ATTR_EXTERNAL_TRIGGER_LEVEL                  /* ViReal64     */
#define AGN934XNI_ATTR_EXTERNAL_TRIGGER_SLOPE                       IVISPECAN_ATTR_EXTERNAL_TRIGGER_SLOPE                  /* ViInt32      */

 /*- IviSpecAn IviSpecAnVideoTrigger Group Attributes ---------------*/
#define AGN934XNI_ATTR_VIDEO_TRIGGER_LEVEL                          IVISPECAN_ATTR_VIDEO_TRIGGER_LEVEL                     /* ViReal64     */
#define AGN934XNI_ATTR_VIDEO_TRIGGER_SLOPE                          IVISPECAN_ATTR_VIDEO_TRIGGER_SLOPE                     /* ViInt32      */

 /*- IviSpecAn IviSpecAnDisplay Group Attributes ---------------*/
#define AGN934XNI_ATTR_NUMBER_OF_DIVISIONS                          IVISPECAN_ATTR_NUMBER_OF_DIVISIONS                     /* ViInt32      */
#define AGN934XNI_ATTR_UNITS_PER_DIVISION                           IVISPECAN_ATTR_UNITS_PER_DIVISION                      /* ViReal64     */

 /*- IviSpecAn IviSpecAnMarkerType Group Attributes ---------------*/
#define AGN934XNI_ATTR_MARKER_TYPE                                  IVISPECAN_ATTR_MARKER_TYPE                             /* ViInt32      */

/*- agn934xni-Specific Attributes -------------------------------------*/


#define AGN934XNI_ATTR_ID_QUERY_RESPONSE                            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1L)                    /* ViString (Read Only) */
 /*- IviSpecAnBase Group Attributes ---------------*/
#define AGN934XNI_ATTR_ACTIVE_TRACE                                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1001L)                 /* ViString     */
#define AGN934XNI_ATTR_TRACE_MATH_TYPE                              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1002L)                 /* ViInt32      */
#define AGN934XNI_ATTR_HIGH_SENSITIVITY_ENABLE                      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1003L)                 /* ViBoolean    */
#define AGN934XNI_ATTR_VBW_RBW_RATIO_AUTO                           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1004L)                 /* ViBoolean    */
#define AGN934XNI_ATTR_VBW_RBW_RATIO                                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1005L)                 /* ViReal64     */
#define AGN934XNI_ATTR_AVERAGE_DURATION_ENABLE                      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1006L)                 /* ViBoolean    */
#define AGN934XNI_ATTR_AVERAGE_DURATION                             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1007L)                 /* ViReal64     */
#define AGN934XNI_ATTR_AVERAGE_TYPE                                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1008L)                 /* ViInt32      */
#define AGN934XNI_ATTR_AVERAGE_ENABLE                               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1009L)                 /* ViBoolean    */
#define AGN934XNI_ATTR_AVERAGE_COUNT                                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1010L)                 /* ViInt32      */
#define AGN934XNI_ATTR_MEASUREMENT_TYPE                             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1011L)                 /* ViInt32      */
#define AGN934XNI_ATTR_INSTRUMENT_MODE                              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1012L)                 /* ViInt32      */
#define AGN934XNI_ATTR_CENTER_FREQUENCY                             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1013L)                 /* ViReal64     */
#define AGN934XNI_ATTR_FREQUENCY_SPAN                               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1014L)                 /* ViReal64     */
#define AGN934XNI_ATTR_SWEEP_MODE                                   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1015L)                 /* ViInt32      */
#define AGN934XNI_ATTR_FREQUENCY_SPAN_MODE                          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1016L)                 /* ViInt32      */

/*- Tracking Generator Group Attributes ---------------*/
#define AGN934XNI_ATTR_TG_NORMAILIZE_REFERENCE_POSITION             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 2001L)                 /* ViReal64     */
#define AGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 2002L)                 /* ViReal64     */
#define AGN934XNI_ATTR_TG_NORMALIZE_ENABLE                          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 2003L)                 /* ViBoolean    */
#define AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_OFFSET                   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 2004L)                 /* ViReal64     */
#define AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_STEP                     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 2005L)                 /* ViReal64     */
#define AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_ENABLE                   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 2006L)                 /* ViBoolean    */
#define AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE                          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 2007L)                 /* ViReal64     */

/*- OBW Group Attributes ---------------*/
#define AGN934XNI_ATTR_OBW_POWER_LEVEL                              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 3001L)                 /* ViReal64     */
#define AGN934XNI_ATTR_OBW_POWER_PERCENTAGE                         (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 3002L)                 /* ViReal64     */
#define AGN934XNI_ATTR_OBW_METHOD                                   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 3003L)                 /* ViInt32      */

/*- CHP Group Attributes ---------------*/
#define AGN934XNI_ATTR_CHP_BOTTOM_RANGE                             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 4001L)                 /* ViReal64     */
#define AGN934XNI_ATTR_CHP_TOP_RANGE                                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 4002L)                 /* ViReal64     */
#define AGN934XNI_ATTR_CHP_AUTO_RANGE                               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 4003L)                 /* ViBoolean    */
#define AGN934XNI_ATTR_CHP_CHANNEL_SPAN                             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 4004L)                 /* ViReal64     */
#define AGN934XNI_ATTR_CHP_INTEGRATION_BANDWIDTH                    (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 4005L)                 /* ViReal64     */
#define AGN934XNI_ATTR_CHP_CENTER_FREQUENCY                         (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 4006L)                 /* ViReal64     */
#define AGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH                     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 4007L)                 /* ViReal64     */
#define AGN934XNI_ATTR_CHP_RRC_FILTER_ENABLE                        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 4008L)                 /* ViBoolean    */
#define AGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE                   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 4009L)                 /* ViReal64     */

/*- ACPR Group Attributes ---------------*/
#define AGN934XNI_ATTR_ACPR_MAIN_CHANNEL_INTERGRATION_BANDWIDTH     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 5001L)                 /* ViReal64     */
#define AGN934XNI_ATTR_ACPR_CENTER_FREQUENCY                        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 5002L)                 /* ViReal64     */
#define AGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE                  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 5003L)                 /* ViReal64     */
#define AGN934XNI_ATTR_ACPR_RRC_FILTER_ENABLE                       (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 5004L)                 /* ViBoolean    */

/*- IviSpecAnMarker Group Attributes ---------------*/
#define AGN934XNI_ATTR_MARKER_DEMODULATION_DELAY_TIME               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 6001L)                 /* ViReal64     */
#define AGN934XNI_ATTR_MARKER_DEMODULATION_SPEAKER_VOLUME           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 6002L)                 /* ViReal64     */
#define AGN934XNI_ATTR_MARKER_DEMODULATION_FUNCTION                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 6003L)                 /* ViInt32      */
#define AGN934XNI_ATTR_MARKER_X_READOUT                             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 6004L)                 /* ViInt32      */
#define AGN934XNI_ATTR_PEAK_SEARCH_TYPE                             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 6006L)                 /* ViInt32      */
#define AGN934XNI_ATTR_MARKER_FUNCTION                              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 6007L)                 /* ViInt32      */
#define AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING                    (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 6008L)                 /* ViInt32      */
#define AGN934XNI_ATTR_MARKER_PEAK_SEARCH                           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 6009L)                 /* ViInt32      */
#define AGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 6010L)                 /* ViBoolean    */

/*- IviSpecAnTrigger Group Attributes ---------------*/
#define AGN934XNI_ATTR_TRIGGER_DELAY_TIME_ENABLE                    (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 7001L)                 /* ViBoolean    */
#define AGN934XNI_ATTR_TRIGGER_DELAY_TIME                           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 7002L)                 /* ViReal64     */

/*- IviSpecAnDisplay Group Attributes ---------------*/

/*- Limit Line Group Attributes ---------------*/
#define AGN934XNI_ATTR_LIMIT_LINE_X_VALUE                           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 9001L)                 /* ViInt32      */
#define AGN934XNI_ATTR_LIMIT_LINE_Y_VALUE                           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 9002L)                 /* ViReal64     */
#define AGN934XNI_ATTR_LIMIT_LINE_MODE                              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 9003L)                 /* ViInt32      */
#define AGN934XNI_ATTR_LIMIT_LINE_ENABLED                           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 9004L)                 /* ViBoolean    */
#define AGN934XNI_ATTR_LIMIT_LINE_TYPE                              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 9005L)                 /* ViInt32      */

/*- Demodulation Group Attributes ---------------*/
#define AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_ENABLE            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11002L)                /* ViBoolean    */
#define AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11003L)                /* ViReal64     */
#define AGN934XNI_ATTR_ASK_FSK_DEMODULATION_EXTERNAL_TRIGGER_TYPE           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11004L)                /* ViInt32      */
#define AGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11005L)                /* ViReal64     */
#define AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_TYPE                    (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11006L)                /* ViInt32      */
#define AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11007L)                /* ViInt32      */
#define AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11008L)                /* ViReal64     */
#define AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS                  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11009L)                /* ViInt32      */
#define AGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11010L)                /* ViInt32      */
#define AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11011L)                /* ViInt32      */
#define AGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE                     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11012L)                /* ViReal64     */
#define AGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE                       (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11013L)                /* ViInt32      */
#define AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_COUPLING_ENABLE         (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11014L)                /* ViBoolean    */
#define AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_COUPLING_ENABLE           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11015L)                /* ViBoolean    */
#define AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_REFERENCE_POSITION      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11016L)                /* ViInt32      */
#define AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_REFERENCE_POSITION        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11017L)                /* ViInt32      */
#define AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11018L)                /* ViReal64     */
#define AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11019L)                /* ViReal64     */
#define AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11020L)                /* ViReal64     */
#define AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_REFERENCE_VALUE              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11021L)                /* ViReal64     */
#define AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION                    (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11022L)                /* ViInt64      */
#define AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION                    (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11023L)                /* ViReal64     */
#define AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION                     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11024L)                /* ViReal64     */
#define AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION                     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11025L)                /* ViReal64     */
#define AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_COUPLING_ENABLE         (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11026L)                /* ViBoolean    */
#define AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_COUPLING_ENABLE           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11027L)                /* ViBoolean    */
#define AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_POSITION      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11028L)                /* ViInt32      */
#define AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_POSITION        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11029L)                /* ViInt32      */
#define AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE         (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11030L)                /* ViReal64     */
#define AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11031L)                /* ViReal64     */
#define AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11032L)                /* ViInt32      */
#define AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION                  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11033L)                /* ViReal64     */
#define AGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT         (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11034L)                /* ViReal64     */
#define AGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11035L)                /* ViReal64     */
#define AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT                   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11036L)                /* ViReal64     */
#define AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT                  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11037L)                /* ViReal64     */
#define AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT                   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11038L)                /* ViReal64     */
#define AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT                  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11039L)                /* ViReal64     */
#define AGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT                                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11040L)                /* ViReal64     */
#define AGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT                                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11041L)                /* ViReal64     */
#define AGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT                                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11042L)                /* ViReal64     */
#define AGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT                                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11043L)                /* ViReal64     */
#define AGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT                      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11044L)                /* ViReal64     */
#define AGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT                    (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11045L)                /* ViReal64     */
#define AGN934XNI_ATTR_AM_FM_LIMIT_STATE                                    (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11046L)                /* ViBoolean    */
#define AGN934XNI_ATTR_ASK_FSK_LIMIT_STATE                                  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11047L)                /* ViBoolean    */
#define AGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER                          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11048L)                /* ViInt32      */
#define AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_AUTO                              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11049L)                /* ViBoolean    */
#define AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH                                   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11050L)                /* ViReal64     */
#define AGN934XNI_ATTR_AM_FM_DETECTOR_PEAK_HOLD_ENABLE                      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11051L)                /* ViBoolean    */
#define AGN934XNI_ATTR_AM_FM_DETECTOR_TYPE                                  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11052L)                /* ViInt32      */
#define AGN934XNI_ATTR_AM_FM_AVERAGE_ENABLE                                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11053L)                /* ViBoolean    */
#define AGN934XNI_ATTR_ASK_FSK_AVERAGE_ENABLE                               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11054L)                /* ViBoolean    */
#define AGN934XNI_ATTR_AM_FM_AVERAGE_COUNT                                  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11055L)                /* ViInt32      */
#define AGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT                                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11056L)                /* ViInt32      */
#define AGN934XNI_ATTR_EXTERNAL_GAIN                                        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11057L)                /* ViReal64     */
#define AGN934XNI_ATTR_PREAMPLIFIER_ENABLE                                  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11058L)                /* ViBoolean    */
#define AGN934XNI_ATTR_AUTO_CARRIER_FREQUENCY_ENABLE                        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11059L)                /* ViBoolean    */
#define AGN934XNI_ATTR_CARRIER_FREQUENCY_STEP                               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11060L)                /* ViReal64     */
#define AGN934XNI_ATTR_CARRIER_FREQUENCY                                    (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11061L)                /* ViReal64     */
#define AGN934XNI_ATTR_DEMODULATION_MODE                                    (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11062L)                /* ViInt32      */

/*- SEM Group Attributes ---------------*/
#define AGN934XNI_ATTR_SEM_FAIL_LOG_ENABLE                                  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 12003L)                /* ViBoolean    */
#define AGN934XNI_ATTR_SEM_FAIL_HOLD_ENABLE                                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 12004L)                /* ViBoolean    */
#define AGN934XNI_ATTR_SEM_FAIL_BEEP_ENABLE                                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 12005L)                /* ViBoolean    */
#define AGN934XNI_ATTR_SEM_MEASUREMENT_TYPE                                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 12006L)                /* ViInt32      */
#define AGN934XNI_ATTR_SEM_CENTER_FREQUENCY                                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 12009L)                /* ViReal64     */
#define AGN934XNI_ATTR_SEM_CHANNEL_SPAN                                     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 12010L)                /* ViReal64     */
#define AGN934XNI_ATTR_SEM_AUTO_TOTAL_POWER_REFERENCE_ENABLE                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 12011L)                /* ViBoolean    */
#define AGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE                            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 12012L)                /* ViReal64     */
#define AGN934XNI_ATTR_SEM_AUTO_RESOLUTION_BANDWIDTH_ENABLE                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 12013L)                /* ViBoolean    */
#define AGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH                             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 12014L)                /* ViReal64     */
#define AGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH                      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 12015L)                /* ViReal64     */
#define AGN934XNI_ATTR_SEM_AVERAGE_ENABLE                                   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 12016L)                /* ViBoolean    */
#define AGN934XNI_ATTR_SEM_AVERAGE_NUMBER                                   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 12017L)                /* ViInt32      */

/*- Power Meter Group Attributes ---------------*/
#define AGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13001L)                /* ViReal64     */
#define AGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME                     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13002L)                /* ViReal64     */
#define AGN934XNI_ATTR_POWER_METER_TRIGGER_SLOPE                            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13003L)                /* ViInt32      */
#define AGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME                       (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13004L)                /* ViReal64     */
#define AGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL                            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13005L)                /* ViReal64     */
#define AGN934XNI_ATTR_POWER_METER_AUTO_TRIGGER_LEVEL_ENABLE                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13006L)                /* ViBoolean    */
#define AGN934XNI_ATTR_POWER_METER_TRIGGER_SOURCE                           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13007L)                /* ViInt32      */
#define AGN934XNI_ATTR_POWER_METER_TRIGGER_TYPE                             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13008L)                /* ViInt32      */
#define AGN934XNI_ATTR_POWER_METER_LIMIT_BEEP_ENABLE                        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13010L)                /* ViBoolean    */
#define AGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE                        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13011L)                /* ViReal64     */
#define AGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE                        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13012L)                /* ViReal64     */
#define AGN934XNI_ATTR_POWER_METER_LIMIT_ENABLE                             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13013L)                /* ViBoolean    */
#define AGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME                         (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13014L)                /* ViReal64     */
#define AGN934XNI_ATTR_POWER_METER_GATE_START_TIME                          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13015L)                /* ViReal64     */
#define AGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE                      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13016L)                /* ViReal64     */
#define AGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE                        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13017L)                /* ViReal64     */
#define AGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME                       (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13018L)                /* ViReal64     */
#define AGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME                       (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13019L)                /* ViReal64     */
#define AGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT                      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13020L)                /* ViInt32      */
#define AGN934XNI_ATTR_POWER_METER_AUTO_VIDEO_AVERAGE_COUNT_ENABLE          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13021L)                /* ViBoolean    */
#define AGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE                     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13022L)                /* ViInt32      */
#define AGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13023L)                /* ViReal64     */
#define AGN934XNI_ATTR_POWER_METER_AVERAGE_STEP_DETECT_ENABLE               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13024L)                /* ViBoolean    */
#define AGN934XNI_ATTR_POWER_METER_AUTO_AVERAGE_COUNT_ENABLE                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13025L)                /* ViBoolean    */
#define AGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER                     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13026L)                /* ViInt32      */
#define AGN934XNI_ATTR_POWER_METER_AVERAGE_ENABLE                           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13027L)                /* ViBoolean    */
#define AGN934XNI_ATTR_POWER_METER_OFFSET_VALUE                             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13028L)                /* ViReal64     */
#define AGN934XNI_ATTR_POWER_METER_OFFSET_ENABLE                            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13029L)                /* ViBoolean    */
#define AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE                    (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13030L)                /* ViReal64     */
#define AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_ENABLE                   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13031L)                /* ViBoolean    */
#define AGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY                         (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13032L)                /* ViReal64     */
#define AGN934XNI_ATTR_POWER_METER_AUTO_POWER_RANGE_ENABLE                  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13033L)                /* ViBoolean    */
#define AGN934XNI_ATTR_POWER_METER_POWER_RANGE                              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13034L)                /* ViInt32      */
#define AGN934XNI_ATTR_POWER_METER_SWEEP_STATE                              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13035L)                /* ViInt32      */
#define AGN934XNI_ATTR_POWER_METER_ZEROING_TYPE                             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13036L)                /* ViInt32      */

/*- Limit Line Group Attributes ---------------*/
#define AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE                           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 14001L)                /* ViReal64     */
#define AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_ENABLE                          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 14002L)                /* ViBoolean    */
#define AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE                              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 14003L)                /* ViReal64     */
#define AGN934XNI_ATTR_LIMIT_LINE_MARGIN_ENABLE                             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 14004L)                /* ViBoolean    */
#define AGN934XNI_ATTR_LIMIT_LINE_BEEP_ENABLE                               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 14006L)                /* ViBoolean    */

/*- Reflection Measurement Group Attributes ---------------*/
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_MARKER_CONTINUOUS_VALLEY_ENABLE   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15002L)                /* ViBoolean    */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_ENABLE              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15004L)                /* ViBoolean    */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15005L)                /* ViInt32      */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE                   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15006L)                /* ViInt32      */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_DISPLAY_TYPE                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15007L)                /* ViInt32      */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15008L)                /* ViReal64     */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15009L)                /* ViReal64     */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DTF_FREQUENCY_DOMAIN_ENABLE       (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15010L)                /* ViBoolean    */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_UNIT                     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15011L)                /* ViInt32      */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_STOP                     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15012L)                /* ViReal64     */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_START                    (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15013L)                /* ViReal64     */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN                    (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15014L)                /* ViReal64     */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY                  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15015L)                /* ViReal64     */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY                    (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15016L)                /* ViReal64     */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY                   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15017L)                /* ViReal64     */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW                            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15018L)                /* ViInt32      */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15019L)                /* ViReal64     */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_ATTENUATION                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15020L)                /* ViReal64     */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_TYPE                        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15021L)                /* ViInt32      */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_IIM_ENABLE                        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15022L)                /* ViBoolean    */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CALIBRATION_TYPE                  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15023L)                /* ViInt32      */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TYPE                              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15024L)                /* ViInt32      */
#define AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISPLAY_TYPE                      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15025L)                /* ViInt32      */

/*- Sweep Group Attributes ---------------*/
#define AGN934XNI_ATTR_GATE_SOURCE                                              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 18001L)                /* ViInt32      */
#define AGN934XNI_ATTR_GATE_LENGTH                                              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 18002L)                /* ViReal64     */
#define AGN934XNI_ATTR_GATE_DELAY                                               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 18003L)                /* ViReal64     */
#define AGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME                                     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 18004L)                /* ViReal64     */
#define AGN934XNI_ATTR_GATE_VIEW_ENABLE                                         (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 18005L)                /* ViBoolean    */
#define AGN934XNI_ATTR_GATED_SWEEP_ENABLE                                       (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 18006L)                /* ViBoolean    */


/****************************************************************************
 *------------------------ Attribute Value Defines -------------------------*
****************************************************************************/

/*- Defined values for attribute AGN934XNI_ATTR_AMPLITUDE_UNITS -*/
#define AGN934XNI_VAL_AMPLITUDE_UNITS_DBM                           IVISPECAN_VAL_AMPLITUDE_UNITS_DBM
#define AGN934XNI_VAL_AMPLITUDE_UNITS_DBMV                          IVISPECAN_VAL_AMPLITUDE_UNITS_DBMV
#define AGN934XNI_VAL_AMPLITUDE_UNITS_DBUV                          IVISPECAN_VAL_AMPLITUDE_UNITS_DBUV
#define AGN934XNI_VAL_AMPLITUDE_UNITS_VOLT                          IVISPECAN_VAL_AMPLITUDE_UNITS_VOLT
#define AGN934XNI_VAL_AMPLITUDE_UNITS_WATT                          IVISPECAN_VAL_AMPLITUDE_UNITS_WATT
#define AGN934XNI_VAL_AMPLITUDE_UNITS_DBMVEMF                       (IVISPECAN_VAL_AMPLITUDE_UNITS_SPECIFIC_EXT_BASE + 1L)
#define AGN934XNI_VAL_AMPLITUDE_UNITS_DBUVEMF                       (IVISPECAN_VAL_AMPLITUDE_UNITS_SPECIFIC_EXT_BASE + 2L)
#define AGN934XNI_VAL_AMPLITUDE_UNITS_VEMF                          (IVISPECAN_VAL_AMPLITUDE_UNITS_SPECIFIC_EXT_BASE + 3L)

/*- Defined values for attribute AGN934XNI_ATTR_DETECTOR_TYPE -*/
#define AGN934XNI_VAL_DETECTOR_TYPE_AVERAGE                         IVISPECAN_VAL_DETECTOR_TYPE_AVERAGE
#define AGN934XNI_VAL_DETECTOR_TYPE_MAX_PEAK                        IVISPECAN_VAL_DETECTOR_TYPE_MAX_PEAK
#define AGN934XNI_VAL_DETECTOR_TYPE_MIN_PEAK                        IVISPECAN_VAL_DETECTOR_TYPE_MIN_PEAK
#define AGN934XNI_VAL_DETECTOR_TYPE_SAMPLE                          IVISPECAN_VAL_DETECTOR_TYPE_SAMPLE
#define AGN934XNI_VAL_DETECTOR_TYPE_NORMAL                          IVISPECAN_VAL_DETECTOR_TYPE_RMS

/*- Defined values for attribute AGN934XNI_ATTR_TRACE_TYPE -*/
#define AGN934XNI_VAL_TRACE_TYPE_CLEAR_WRITE                        IVISPECAN_VAL_TRACE_TYPE_CLEAR_WRITE
#define AGN934XNI_VAL_TRACE_TYPE_MAX_HOLD                           IVISPECAN_VAL_TRACE_TYPE_MAX_HOLD
#define AGN934XNI_VAL_TRACE_TYPE_MIN_HOLD                           IVISPECAN_VAL_TRACE_TYPE_MIN_HOLD
#define AGN934XNI_VAL_TRACE_TYPE_VIEW                               IVISPECAN_VAL_TRACE_TYPE_VIEW
#define AGN934XNI_VAL_TRACE_TYPE_STORE                              IVISPECAN_VAL_TRACE_TYPE_STORE

/*- Defined values for attribute AGN934XNI_ATTR_VERTICAL_SCALE -*/
#define AGN934XNI_VAL_VERTICAL_SCALE_LINEAR                         IVISPECAN_VAL_VERTICAL_SCALE_LINEAR
#define AGN934XNI_VAL_VERTICAL_SCALE_LOGARITHMIC                    IVISPECAN_VAL_VERTICAL_SCALE_LOGARITHMIC

/*- Defined values for attribute AGN934XNI_ATTR_TRIGGER_SOURCE -*/
#define AGN934XNI_VAL_TRIGGER_SOURCE_EXTERNAL                       IVISPECAN_VAL_TRIGGER_SOURCE_EXTERNAL
#define AGN934XNI_VAL_TRIGGER_SOURCE_IMMEDIATE                      IVISPECAN_VAL_TRIGGER_SOURCE_IMMEDIATE
#define AGN934XNI_VAL_TRIGGER_SOURCE_VIDEO                          IVISPECAN_VAL_TRIGGER_SOURCE_VIDEO

/*- Defined values for attribute AGN934XNI_ATTR_EXTERNAL_TRIGGER_SLOPE -*/
#define AGN934XNI_VAL_EXTERNAL_TRIGGER_SLOPE_POSITIVE               IVISPECAN_VAL_EXTERNAL_TRIGGER_SLOPE_POSITIVE
#define AGN934XNI_VAL_EXTERNAL_TRIGGER_SLOPE_NEGATIVE               IVISPECAN_VAL_EXTERNAL_TRIGGER_SLOPE_NEGATIVE

/*- Defined values for attribute AGN934XNI_ATTR_VIDEO_TRIGGER_SLOPE -*/
#define AGN934XNI_VAL_VIDEO_TRIGGER_SLOPE_POSITIVE                  IVISPECAN_VAL_VIDEO_TRIGGER_SLOPE_POSITIVE
#define AGN934XNI_VAL_VIDEO_TRIGGER_SLOPE_NEGATIVE                  IVISPECAN_VAL_VIDEO_TRIGGER_SLOPE_NEGATIVE

/*- Defined values for attribute AGN934XNI_ATTR_MARKER_TYPE -*/
#define AGN934XNI_VAL_MARKER_TYPE_NORMAL                            IVISPECAN_VAL_MARKER_TYPE_NORMAL
#define AGN934XNI_VAL_MARKER_TYPE_DELTA                             IVISPECAN_VAL_MARKER_TYPE_DELTA
#define AGN934XNI_VAL_MARKER_TYPE_OFF                               (IVISPECAN_VAL_MARKER_TYPE_SPECIFIC_EXT_BASE+1)
    
/*- Defined values for agn934xni_AcquisitionStatus ------------------------*/
#define AGN934XNI_VAL_ACQUISITION_STATUS_COMPLETE                   IVISPECAN_VAL_ACQUISITION_STATUS_COMPLETE            
#define AGN934XNI_VAL_ACQUISITION_STATUS_IN_PROGRESS                IVISPECAN_VAL_ACQUISITION_STATUS_IN_PROGRESS         
#define AGN934XNI_VAL_ACQUISITION_STATUS_UNKNOWN                    IVISPECAN_VAL_ACQUISITION_STATUS_UNKNOWN   

/* Instrument specific attribute value definitions */

/*- Defined values for attribute AGN934XNI_ATTR_INPUT_IMPEDANCE -*/
#define AGN934XNI_VAL_INPUT_IMPEDANCE_50_OHM   (50)
#define AGN934XNI_VAL_INPUT_IMPEDANCE_75_OHM   (75)

/*- Defined values for attribute AGN934XNI_ATTR_LIMIT_LINE_TYPE -*/
#define AGN934XNI_VAL_LIMIT_LINE_UPPER   (1)
#define AGN934XNI_VAL_LIMIT_LINE_LOWER   (2)

/*- Defined values for attribute AGN934XNI_ATTR_LIMIT_LINE_MODE -*/
#define AGN934XNI_VAL_LIMIT_LINE_FIXED      (1)
#define AGN934XNI_VAL_LIMIT_LINE_RELATIVE   (2)

/*- Defined values for attribute AGN934XNI_ATTR_LIMIT_LINE_X_VALUE -*/
#define AGN934XNI_VAL_LIMIT_LINE_FREQUENCY   (1)
#define AGN934XNI_VAL_LIMIT_LINE_TIME        (2)

/*- Defined values for attribute AGN934XNI_ATTR_MARKER_PEAK_SEARCH -*/
#define AGN934XNI_VAL_MARKER_SEARCH_HIGHEST          (1)
#define AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK_LEFT   (2)
#define AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK_RIGHT  (3)
#define AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK        (4)

/*- Defined values for attribute AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING -*/
#define AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_CENTER   (1)
#define AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_START    (2)
#define AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_STOP     (3)

/*- Defined values for attribute AGN934XNI_ATTR_MARKER_FUNCTION -*/
#define AGN934XNI_VAL_MARKER_FUNCTION_FCOUNT   (1)
#define AGN934XNI_VAL_MARKER_FUNCTION_NOISE    (2)
#define AGN934XNI_VAL_MARKER_FUNCTION_OFF      (3)

/*- Defined values for attribute AGN934XNI_ATTR_PEAK_SEARCH_TYPE -*/
#define AGN934XNI_VAL_PEAK_SEARCH_MODE_MAXIMUM   (1)
#define AGN934XNI_VAL_PEAK_SEARCH_MODE_MINIMUM   (2)

/*- Defined values for attribute AGN934XNI_ATTR_MARKER_TRACE -*/
#define AGN934XNI_VAL_TRACE_NAME_TRACE_1   ("TRACE1")
#define AGN934XNI_VAL_TRACE_NAME_TRACE_2   ("TRACE2")
#define AGN934XNI_VAL_TRACE_NAME_TRACE_3   ("TRACE3")
#define AGN934XNI_VAL_TRACE_NAME_TRACE_4   ("TRACE4")

/*- Defined values for attribute AGN934XNI_ATTR_MARKER_X_READOUT -*/
#define AGN934XNI_VAL_MARKER_X_READOUT_FREQUENCY   (1)
#define AGN934XNI_VAL_MARKER_X_READOUT_TIME        (2)
#define AGN934XNI_VAL_MARKER_X_READOUT_PERIOD      (3)

/*- Defined values for attribute AGN934XNI_ATTR_MARKER_DEMODULATION_FUNCTION -*/
#define AGN934XNI_VAL_MARKER_DEMODULATION_FUNCTION_AM   (1)
#define AGN934XNI_VAL_MARKER_DEMODULATION_FUNCTION_FM   (2)

/*- Defined values for attribute AGN934XNI_ATTR_INSTRUMENT_MODE -*/
#define AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER           (1)
#define AGN934XNI_VAL_INSTRUMENT_MODE_TRACKING_GENERATOR          (2)
#define AGN934XNI_VAL_INSTRUMENT_MODE_POWERMETER                  (3)
#define AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION                (4)
#define AGN934XNI_VAL_INSTRUMENT_MODE_REFLECTION_MEASUREMENT      (5)

/*- Defined values for attribute AGN934XNI_ATTR_MEASUREMENT_TYPE -*/
#define AGN934XNI_VAL_MEASUREMENT_TYPE_OFF   (1)
#define AGN934XNI_VAL_MEASUREMENT_TYPE_CHP   (2)
#define AGN934XNI_VAL_MEASUREMENT_TYPE_ACPR  (3)
#define AGN934XNI_VAL_MEASUREMENT_TYPE_OBW   (4)
#define AGN934XNI_VAL_MEASUREMENT_TYPE_SM    (5)
#define AGN934XNI_VAL_MEASUREMENT_TYPE_SEM   (6)

/*- Defined values for attribute AGN934XNI_ATTR_AVERAGE_TYPE -*/
#define AGN934XNI_VAL_AVERAGE_TYPE_LOGPOWER   (1)
#define AGN934XNI_VAL_AVERAGE_TYPE_POWER      (2)
#define AGN934XNI_VAL_AVERAGE_TYPE_VOLTAGE    (3)

/*- Defined values for attribute AGN934XNI_ATTR_SWEEP_MODE -*/
#define AGN934XNI_VAL_SWEEP_MODE_NORMAL   (1)
#define AGN934XNI_VAL_SWEEP_MODE_FAST     (2)
#define AGN934XNI_VAL_SWEEP_MODE_AUTO     (3)

/*- Defined values for attribute AGN934XNI_ATTR_OBW_METHOD -*/
#define AGN934XNI_VAL_OBW_METHOD_PERCENT   (1)
#define AGN934XNI_VAL_OBW_METHOD_DBC       (2)

/*- Defined values for attribute AGN934XNI_ATTR_TRACE_MATH_TYPE -*/
#define AGN934XNI_VAL_TRACE_MATH_TYPE_LOG_POWER   (1)
#define AGN934XNI_VAL_TRACE_MATH_TYPE_POWER       (2)
    
/*- Defined values for attribute AGN934XNI_ATTR_FREQUENCY_SPAN_MODE -*/
#define AGN934XNI_VAL_FREQUENCY_SPAN_MODE_FULL       (1)
#define AGN934XNI_VAL_FREQUENCY_SPAN_MODE_ZERO       (2)
#define AGN934XNI_VAL_FREQUENCY_SPAN_MODE_PREVIOUS   (3)
     
/*- Defined values for attribute AGN934XNI_ATTR_DEMODULATION_MODE -*/
#define AGN934XNI_VAL_DEMODULATION_MODE_AM    (1)
#define AGN934XNI_VAL_DEMODULATION_MODE_FM    (2)
#define AGN934XNI_VAL_DEMODULATION_MODE_ASK   (3)
#define AGN934XNI_VAL_DEMODULATION_MODE_FSK   (4)
#define AGN934XNI_VAL_DEMODULATION_MODE_NONE  (5)

/*- Defined values for attribute AGN934XNI_ATTR_AM_FM_DETECTOR_TYPE -*/
#define AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_POSITIVE_PEAK   (1)
#define AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_NEGATIVE_PEAK   (2)
#define AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_AVERAGE_PEAK    (3)
#define AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_RMS             (4)

/*- Defined values for attribute AGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER -*/
#define AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_AUTO       (1)
#define AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_OFF        (2)
#define AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW6      (3)
#define AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW20     (4)
#define AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW60     (5)
#define AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW200    (6)
#define AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW600    (7)
#define AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW2000   (8)

/*- Defined values for attribute AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_POSITION -*/
/*- Defined values for attribute AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_POSITION -*/
#define AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_LEFT     (1)
#define AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_CENTER   (2)
#define AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_RIGHT    (3)

/*- Defined values for attribute AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_REFERENCE_POSITION -*/
/*- Defined values for attribute AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_REFERENCE_POSITION -*/
#define AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_TOP      (1)
#define AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_CENTER   (2)
#define AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_BOTTOM   (3)

/*- Defined values for attribute AGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE -*/
#define AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_WAVEFORM   (1)
#define AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_SYMBOL     (2)
#define AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_EYE        (3)
#define AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_ERROR      (4)

/*- Defined values for attribute AGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER -*/
/*- Defined values for attribute AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER -*/
#define AGN934XNI_VAL_DEMODULATION_FILTER_OFF         (1)
#define AGN934XNI_VAL_DEMODULATION_FILTER_RNYQUIST    (2)
#define AGN934XNI_VAL_DEMODULATION_FILTER_NYQUIST     (3)
#define AGN934XNI_VAL_DEMODULATION_FILTER_GAUSSIAN    (4)

/*- Defined values for attribute AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_TYPE -*/
#define AGN934XNI_VAL_DEMODULATION_TRIGGER_TYPE_IMMEDIATE   (1)
#define AGN934XNI_VAL_DEMODULATION_TRIGGER_TYPE_EXTERNAL    (2)
#define AGN934XNI_VAL_DEMODULATION_TRIGGER_TYPE_RFTRIGGER   (3)

/*- Defined values for attribute AGN934XNI_ATTR_ASK_FSK_DEMODULATION_EXTERNAL_TRIGGER_TYPE -*/
#define AGN934XNI_VAL_DEMODULATION_EXTERNAL_TRIGGER_TYPE_POSITIVE   (1)
#define AGN934XNI_VAL_DEMODULATION_EXTERNAL_TRIGGER_TYPE_NEGATIVE   (2)

#define AGN934XNI_VAL_DEMODULATION_AXIS_X   (1)
#define AGN934XNI_VAL_DEMODULATION_AXIS_Y   (2)

#define AGN934XNI_VAL_LIMIT_VALUE_DELETE_LAST   (1)
#define AGN934XNI_VAL_LIMIT_VALUE_DELETE_ALL    (2)

/*- Defined values for attribute AGN934XNI_ATTR_POWER_METER_ZEROING_TYPE -*/
#define AGN934XNI_VAL_ZEROING_TYPE_EXTERNAL   (1)
#define AGN934XNI_VAL_ZEROING_TYPE_INTERNAL   (2)

/*- Defined values for attribute AGN934XNI_ATTR_POWER_METER_SWEEP_STATE -*/
#define AGN934XNI_VAL_POWER_METER_SWEEP_STATE_RUN     (1)
#define AGN934XNI_VAL_POWER_METER_SWEEP_STATE_PAUSE   (2)

/*- Defined values for attribute AGN934XNI_ATTR_POWER_METER_POWER_RANGE -*/
#define AGN934XNI_VAL_POWER_METER_POWER_RANGE_UPPER   (1)
#define AGN934XNI_VAL_POWER_METER_POWER_RANGE_LOWER   (2)

/*- Defined values for attribute AGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE -*/
#define AGN934XNI_VAL_POWER_METER_VIDEO_BANDWIDTH_TYPE_HIGH     (1)
#define AGN934XNI_VAL_POWER_METER_VIDEO_BANDWIDTH_TYPE_MEDIUM   (2)
#define AGN934XNI_VAL_POWER_METER_VIDEO_BANDWIDTH_TYPE_LOW      (3)
#define AGN934XNI_VAL_POWER_METER_VIDEO_BANDWIDTH_TYPE_OFF      (4)

/*- Defined values for attribute AGN934XNI_ATTR_POWER_METER_TRIGGER_TYPE -*/
#define AGN934XNI_VAL_POWER_METER_TRIGGER_TYPE_FREERUN      (1)
#define AGN934XNI_VAL_POWER_METER_TRIGGER_TYPE_CONTINUOUS   (2)
#define AGN934XNI_VAL_POWER_METER_TRIGGER_TYPE_SINGLE       (3)

/*- Defined values for attribute AGN934XNI_ATTR_POWER_METER_TRIGGER_SOURCE -*/
#define AGN934XNI_VAL_POWER_METER_TRIGGER_SOURCE_EXTERNAL   (1)
#define AGN934XNI_VAL_POWER_METER_TRIGGER_SOURCE_INTERNAL   (2)

/*- Defined values for attribute AGN934XNI_ATTR_POWER_METER_TRIGGER_SLOPE -*/
#define AGN934XNI_VAL_POWER_METER_TRIGGER_SLOPE_NEGATIVE   (1)
#define AGN934XNI_VAL_POWER_METER_TRIGGER_SLOPE_POSITIVE   (2)

/*- Defined values for attribute AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TYPE -*/
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_TYPE_REFLECTION_ONE_PORT_INSERTION_LOSS   (1)
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_TYPE_REFLECTION                           (2)
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_TYPE_DISTANCE_TO_FAULT                    (3)

/*- Defined values for attribute AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CALIBRATION_TYPE -*/
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_CALIBRATION_TYPE_FULL       (1)
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_CALIBRATION_TYPE_SELECTED   (2)

/*- Defined values for attribute AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_TYPE -*/
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_S1000    (1)
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_S2000    (2)
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_S2500    (3)
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_CUSTOM   (4)

/*- Defined values for attribute AGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW -*/
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_OFF                 (1)
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_RECTANGULAR         (2)
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_HAMMING             (3)
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_3_SAMPLE_BLACKMAN   (4)
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_4_SAMPLE_BLACKMAN   (5)

/*- Defined values for attribute AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISPLAY_TYPE -*/
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISPLAY_TYPE_RL              (1)
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISPLAY_TYPE_VSWR            (2)
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISPLAY_TYPE_LIN             (3)

/*- Defined values for attribute AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_UNIT -*/
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISTANCE_UNIT_METERS   (1)
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISTANCE_UNIT_FEET     (2)

/*- Defined values for attribute AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_DISPLAY_TYPE -*/
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_TYPE_DATA   (1)
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_TYPE_MEM    (2)
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_TYPE_BOTH   (3)

/*- Defined values for attribute AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE -*/
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_OFF   (1)
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_ADD   (2)
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_SUB   (3)
#define AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_DIV   (4)

#define AGN934XNI_VAL_SEM_OFFSET_CHANNEL_CHARACTERISTIC_START_FREQUENCY      (1)
#define AGN934XNI_VAL_SEM_OFFSET_CHANNEL_CHARACTERISTIC_STOP_FREQUENCY       (2)
#define AGN934XNI_VAL_SEM_OFFSET_CHANNEL_CHARACTERISTIC_SWEEP_TIME           (3)
#define AGN934XNI_VAL_SEM_OFFSET_CHANNEL_CHARACTERISTIC_RESOLUTION_BW        (4)
#define AGN934XNI_VAL_SEM_OFFSET_CHANNEL_CHARACTERISTIC_MEASUREMENT_BW       (5)
#define AGN934XNI_VAL_SEM_OFFSET_CHANNEL_CHARACTERISTIC_ABS_STARTAMPT        (6)
#define AGN934XNI_VAL_SEM_OFFSET_CHANNEL_CHARACTERISTIC_ABS_STOPAMPT         (7)
#define AGN934XNI_VAL_SEM_OFFSET_CHANNEL_CHARACTERISTIC_RELATIVE_STARTAMPT   (8)
#define AGN934XNI_VAL_SEM_OFFSET_CHANNEL_CHARACTERISTIC_RELATIVE_STOPAMPT    (9)

#define AGN934XNI_VAL_SEM_OFFSET_MASK_ABSOLUTE   (1)
#define AGN934XNI_VAL_SEM_OFFSET_MASK_RELATIVE   (2)
#define AGN934XNI_VAL_SEM_OFFSET_MASK_BOTH       (3)
#define AGN934XNI_VAL_SEM_OFFSET_MASK_EITHER     (4)

/*- Defined values for attribute AGN934XNI_ATTR_SEM_MEASUREMENT_TYPE -*/
#define AGN934XNI_VAL_SEM_MEASUREMENT_TYPE_TOTAL_POWER_REFERENCE   (1)
#define AGN934XNI_VAL_SEM_MEASUREMENT_TYPE_PSD_REFERENCE           (2)

#define AGN934XNI_VAL_SEM_OFFSET_FAIL_FLAG_LOWER   (1)
#define AGN934XNI_VAL_SEM_OFFSET_FAIL_FLAG_UPPER   (2)

#define AGN934XNI_VAL_SEM_OFFSET_DATA_LOWER_POWER            (1)
#define AGN934XNI_VAL_SEM_OFFSET_DATA_UPPER_POWER            (2)
#define AGN934XNI_VAL_SEM_OFFSET_DATA_LOWER_PEAK_FREQUENCY   (3)
#define AGN934XNI_VAL_SEM_OFFSET_DATA_UPPER_PEAK_FREQUENCY   (4)

#define AGN934XNI_VAL_FREQUENCY_SETTING_MODE_START_STOP    (1)
#define AGN934XNI_VAL_FREQUENCY_SETTING_MODE_CENTER_SPAN   (2)

/*- Defined values for attribute AGN934XNI_ATTR_GATE_SOURCE -*/
#define AGN934XNI_VAL_GATE_SOURCE_EXTERNAL         (1)
#define AGN934XNI_VAL_GATE_SOURCE_PERIODIC_TIMER   (2)
#define AGN934XNI_VAL_GATE_SOURCE_RF_BURST         (3)

#define AGN934XNI_VAL_MODEL_N9342C                                  1
#define AGN934XNI_VAL_MODEL_N9343C                                  2
#define AGN934XNI_VAL_MODEL_N9344C                                  3
#define AGN934XNI_VAL_MODEL_N9322C                                  4
#define AGN934XNI_VAL_MODEL_N9321C                                  5
#define AGN934XNI_VAL_MODEL_N9323C                                  6
#define AGN934XNI_VAL_MODEL_N9324C                                  7


/****************************************************************************
*---------------- Instrument Driver Function Declarations -----------------*
****************************************************************************/

/*- Init and Close Functions -------------------------------------------*/
ViStatus _VI_FUNC  agn934xni_init (ViRsrc resourceName, 
                                   ViBoolean IDQuery,
                                   ViBoolean resetDevice,
                                   ViSession *vi);
ViStatus _VI_FUNC  agn934xni_InitWithOptions (ViRsrc resourceName, 
                                              ViBoolean IDQuery,
                                              ViBoolean resetDevice, 
                                              ViConstString optionString, 
                                              ViSession *newVi);
ViStatus _VI_FUNC  agn934xni_close (ViSession vi);   

    /*- Coercion Info Functions --------------------------------------------*/
ViStatus _VI_FUNC  agn934xni_GetNextCoercionRecord (ViSession vi,
                                                    ViInt32 bufferSize,
                                                    ViChar record[]);
    
    /*- Locking Functions --------------------------------------------------*/
ViStatus _VI_FUNC  agn934xni_LockSession (ViSession vi, ViBoolean *callerHasLock);   
ViStatus _VI_FUNC  agn934xni_UnlockSession (ViSession vi, ViBoolean *callerHasLock);
/*- Tracking Generator Group Functions ----------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_ConfigureNormalize(ViSession vi, 
                                               ViBoolean NormalizeEnable,
                                               ViReal64 NormalizeReferenceLevel, 
                                               ViInt32 NormalizeReferencePosition);
ViStatus _VI_FUNC agn934xni_ConfigureTrackingGenerator(ViSession vi,
                                                       ViBoolean OutputEnabled, 
                                                       ViReal64 OutputPower, 
                                                       ViReal64 OutputPowerStep,
                                                       ViReal64 OutputPowerOffset);

/*- OBW Group Functions ----------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_ConfigureOBW(ViSession vi, 
                                         ViInt32 OBWMethod, 
                                         ViReal64 OBWPowerPercentage, 
                                         ViReal64 OBWPowerLevel);

/*- CHP Group Functions ----------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_ConfigureCHP(ViSession vi, 
                                         ViReal64 CenterFrequency,
                                         ViReal64 IntegrationBandwidth, 
                                         ViReal64 ChannelSpan,
                                         ViBoolean AutoRange,
                                         ViReal64 BottomRange, 
                                         ViReal64 TopRange);
ViStatus _VI_FUNC agn934xni_ConfigureCHPFilter(ViSession vi,
                                               ViBoolean EnableCHPFilter,
                                               ViReal64 RRCFilterAlphaValue,
                                               ViReal64 RRCFilterBandwidth);

/*- IviSpecAnBase Group Functions ----------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_ConfigureFrequencySpanMode (ViSession vi,  
                                                        ViInt32 FrequencySpanMode);
ViStatus _VI_FUNC agn934xni_SetActiveTrace(ViSession vi, 
                                           ViConstString ActiveTrace);
ViStatus _VI_FUNC agn934xni_FetchMeasurementACPR(ViSession vi, 
                                                 ViReal64* LowACP, 
                                                 ViReal64* LowACPR, 
                                                 ViReal64* UpperACP,
                                                 ViReal64* UpperACPR,
                                                 ViReal64* MainChannelPower);
ViStatus _VI_FUNC agn934xni_FetchMeasurementCHP(ViSession vi,
                                                ViReal64* MainChannelPower,
                                                ViReal64* PowerDensity);
ViStatus _VI_FUNC agn934xni_FetchMeasurementOBW (ViSession vi,
                                                 ViReal64* OccupiedBandwidth,
                                                 ViReal64* BandwidthCentroid,
                                                 ViReal64* XDbBandwidth);
ViStatus _VI_FUNC agn934xni_ReadMeasurementACPR(ViSession vi,
                                                ViInt32 MaxTime,
                                                ViReal64* LowACP,
                                                ViReal64* LowACPR,
                                                ViReal64* UpperACP,
                                                ViReal64* UpperACPR, 
                                                ViReal64* MainChannelPower);
ViStatus _VI_FUNC agn934xni_ReadMeasurementCHP(ViSession vi,
                                               ViInt32 MaxTime,
                                               ViReal64* MainChannelPower, 
                                               ViReal64* PowerDensity);
ViStatus _VI_FUNC agn934xni_ReadMeasurementOBW (ViSession vi,
                                                ViInt32 MaxTime,
                                                ViReal64* OccupiedBandwidth, 
                                                ViReal64* BandwidthCentroid,
                                                ViReal64* XDbBandwidth);
ViStatus _VI_FUNC agn934xni_ConfigureHighSensitivityEnable(ViSession vi,
                                                           ViBoolean HighSensitiveFunctionEnable);
ViStatus _VI_FUNC agn934xni_ConfigureTrace(ViSession vi,
                                           ViBoolean TraceMathFunctionEnable,
                                           ViInt32 TraceMathType);
ViStatus _VI_FUNC agn934xni_ConfigureVBWRBWRatio(ViSession vi,
                                                 ViBoolean RatioAuto,
                                                 ViReal64 Ratio);
ViStatus _VI_FUNC agn934xni_ConfigureAverage(ViSession vi,
                                             ViBoolean AverageEnable,
                                             ViInt32 AverageCount, 
                                             ViInt32 AverageType,
                                             ViBoolean AverageDurationEnable,
                                             ViReal64 AverageDuration);
ViStatus _VI_FUNC agn934xni_RestartTraceAverage(ViSession vi);
ViStatus _VI_FUNC agn934xni_ConfigureMeasurementType(ViSession vi,
                                                     ViInt32 InstrumentMode,
                                                     ViInt32 MeasurementType);
ViStatus _VI_FUNC agn934xni_Abort(ViSession vi);
ViStatus _VI_FUNC agn934xni_AcquisitionStatus(ViSession vi,
                                              ViInt32* Status);
ViStatus _VI_FUNC agn934xni_ConfigureAcquisition(ViSession vi,
                                                 ViBoolean SweepModeContinuous,
                                                 ViInt32 NumberOfSweeps, 
                                                 ViBoolean DetectorTypeAuto,
                                                 ViInt32 DetectorType,
                                                 ViInt32 VerticalScale);
ViStatus _VI_FUNC agn934xni_ConfigureFrequencyCenterSpan(ViSession vi,
                                                         ViReal64 CenterFrequency,
                                                         ViReal64 Span);
ViStatus _VI_FUNC agn934xni_ConfigureFrequencyOffset(ViSession vi,
                                                     ViReal64 FrequencyOffset);
ViStatus _VI_FUNC agn934xni_ConfigureFrequencyStartStop(ViSession vi,
                                                        ViReal64 StartFrequency,
                                                        ViReal64 StopFrequency);
ViStatus _VI_FUNC agn934xni_ConfigureLevel(ViSession vi,
                                           ViInt32 AmplitudeUnits,
                                           ViReal64 InputImpedance, 
                                           ViReal64 ReferenceLevel,
                                           ViReal64 ReferenceLevelOffset,
                                           ViBoolean AttenuationAuto, 
                                           ViReal64 Attenuation);
ViStatus _VI_FUNC agn934xni_ConfigureSweepCoupling(ViSession vi, 
                                                   ViBoolean ResolutionBandwidthAuto,
                                                   ViReal64 ResolutionBandwidth, 
                                                   ViBoolean VideoBandwidthAuto,
                                                   ViReal64 VideoBandwidth,
                                                   ViBoolean SweepTimeAuto, 
                                                   ViReal64 SweepTime);
ViStatus _VI_FUNC agn934xni_ConfigureTraceType(ViSession vi,
                                               ViConstString TraceName,
                                               ViInt32 TraceType);
ViStatus _VI_FUNC agn934xni_FetchYTrace(ViSession vi,
                                        ViConstString TraceName,
                                        ViInt32 ArrayLength, 
                                        ViInt32* ActualPoints, 
                                        ViReal64 Amplitude[]);
ViStatus _VI_FUNC agn934xni_GetTraceName(ViSession vi, 
                                         ViInt32 Index,
                                         ViInt32 NameBufferSize, 
                                         ViChar Name[]);
ViStatus _VI_FUNC agn934xni_Initiate(ViSession vi);
ViStatus _VI_FUNC agn934xni_QueryTraceSize(ViSession vi,
                                           ViConstString TraceName,
                                           ViInt32* TraceSize);
ViStatus _VI_FUNC agn934xni_ReadYTrace(ViSession vi,
                                       ViConstString TraceName,
                                       ViInt32 MaxTimeMilliseconds, 
                                       ViInt32 ArrayLength,
                                       ViInt32* ActualPoints,
                                       ViReal64 Amplitude[]);

/*- ACPR Group Functions ----------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_ConfigureACPR(ViSession vi,
                                          ViReal64 CenterFrequency,
                                          ViReal64 MainIntergrationBandwidth);
ViStatus _VI_FUNC agn934xni_ConfigureACPRFilter(ViSession vi, 
                                                ViBoolean EnableRRCFilter,
                                                ViReal64 RRCFilterAlphaValue);

/*- IviSpecAnMultitrace Group Functions ----------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_AddTraces(ViSession vi,
                                      ViConstString DestinationTrace,
                                      ViConstString Trace1, 
                                      ViConstString Trace2);
ViStatus _VI_FUNC agn934xni_CopyTrace(ViSession vi,
                                      ViConstString DestinationTrace,
                                      ViConstString SourceTrace);
ViStatus _VI_FUNC agn934xni_ExchangeTraces(ViSession vi,
                                           ViConstString Trace1,
                                           ViConstString Trace2);
ViStatus _VI_FUNC agn934xni_SubtractTraces(ViSession vi,
                                           ViConstString DestinationTrace,
                                           ViConstString Trace1, 
                                           ViConstString Trace2);

/*- IviSpecAnMarker Group Functions ----------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_ConfigureDemodulation(ViSession vi,
                                                  ViInt32 DemodulationFunction,
                                                  ViReal64 SpeakerVolume, 
                                                  ViReal64 DelayTime);
ViStatus _VI_FUNC agn934xni_ConfigureMarkerPeakSearch(ViSession vi,
                                                      ViBoolean MarkerContinuousPeakingEnable,
                                                      ViInt32 PeakSearchMode);
ViStatus _VI_FUNC agn934xni_ConfigureMarkerEnabled(ViSession vi,
                                                   ViBoolean MarkerEnabled,
                                                   ViConstString MarkerTraceName);
ViStatus _VI_FUNC agn934xni_ConfigureMarkerFrequencyCounter(ViSession vi,
                                                            ViBoolean Enabled,
                                                            ViReal64 Resolution);
ViStatus _VI_FUNC agn934xni_ConfigureMarkerSearch(ViSession vi,
                                                  ViReal64 PeakExcursion,
                                                  ViReal64 MarkerThreshold);
ViStatus _VI_FUNC agn934xni_ConfigureSignalTrackEnabled(ViSession vi,
                                                        ViBoolean SignalTrackEnabled);
ViStatus _VI_FUNC agn934xni_DisableAllMarkers(ViSession vi);
ViStatus _VI_FUNC agn934xni_GetMarkerName(ViSession vi,
                                          ViInt32 Index,
                                          ViInt32 NameBufferSize, 
                                          ViChar Name[]);
ViStatus _VI_FUNC agn934xni_MarkerSearch(ViSession vi,
                                         ViInt32 SearchType);
ViStatus _VI_FUNC agn934xni_MoveMarker(ViSession vi,
                                       ViReal64 MarkerPosition);
ViStatus _VI_FUNC agn934xni_QueryMarker(ViSession vi,
                                        ViReal64* MarkerPosition,
                                        ViReal64* MarkerAmplitude);
ViStatus _VI_FUNC agn934xni_SetActiveMarker(ViSession vi,
                                            ViConstString ActiveMarker);
ViStatus _VI_FUNC agn934xni_SetInstrumentFromMarker(ViSession vi,
                                                    ViInt32 InstrumentSetting);

/*- IviSpecAnTrigger Group Functions ----------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_ConfigureTriggerDelay(ViSession vi,
                                                  ViBoolean TriggerDelayTimeEnable,
                                                  ViReal64 TriggerDelayTime);
ViStatus _VI_FUNC agn934xni_ConfigureTriggerSource(ViSession vi,
                                                   ViInt32 TriggerSource);

/*- Measurement Group Functions ----------------------------------------------------*/

/*- IviSpecAnExternalTrigger Group Functions ----------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_ConfigureExternalTrigger(ViSession vi,
                                                     ViReal64 ExternalTriggerLevel,
                                                     ViInt32 ExternalTriggerSlope);

/*- IviSpecAnVideoTrigger Group Functions ----------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_ConfigureVideoTrigger(ViSession vi,
                                                  ViReal64 VideoTriggerLevel,
                                                  ViInt32 VideoTriggerSlope);

/*- IviSpecAnMarkerType Group Functions ----------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_ConfigureMarkerType(ViSession vi,
                                                ViInt32 MarkerType,
                                                ViInt32 MarkerFunction);
ViStatus _VI_FUNC agn934xni_QueryMarkerType(ViSession vi,
                                            ViInt32* MarkerType);

/*- Limit Line Group Functions ----------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_ConfigureLimitLine(ViSession vi,
                                               ViConstString LimitLine,
                                               ViBoolean Enabled, 
                                               ViInt32 Type, 
                                               ViInt32 XValue, 
                                               ViReal64 YValue, 
                                               ViInt32 LimitMode);

/*- Reflection Measurement Group Functions ----------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_EnableMarkerContinuousValley(ViSession vi, ViBoolean EnableContinuousValley);
ViStatus _VI_FUNC agn934xni_ConfigureReflectionMeasurementTrace(ViSession vi, ViInt32 DisplayType, ViInt32 MathType, 
                  ViBoolean EnableAverageNumber, ViInt32 AverageNumber);
ViStatus _VI_FUNC agn934xni_ConfigureReflectionMeasurementAmplitude(ViSession vi, ViBoolean AutoScale, ViReal64 ReferenceLevel, 
                  ViReal64 ScalePerDivision);
ViStatus _VI_FUNC agn934xni_ConfigureReflectionMeasurementDistance(ViSession vi, ViInt32 DistanceUnit, ViReal64 StartDistancePoint, 
                  ViReal64 StopDistancePoint);
ViStatus _VI_FUNC agn934xni_ConfigureReflectionMeasurementFrequency(ViSession vi, ViInt32 SettingMode, ViReal64 StartFrequency, 
                  ViReal64 StopFrequency, ViReal64 CenterFrequency, ViReal64 FrequencySpan);
ViStatus _VI_FUNC agn934xni_ConfigureReflectionMeasurementCalibration(ViSession vi, ViInt32 CalibrationType);
ViStatus _VI_FUNC agn934xni_ConfigureReflectionMeasurementDispalyType(ViSession vi, ViInt32 DisplayType, ViBoolean EnableDTFFrequencyDomain);
ViStatus _VI_FUNC agn934xni_ConfigureReflectionMeasurement(ViSession vi, ViInt32 MeasurementType, ViBoolean EnableIIM);
ViStatus _VI_FUNC agn934xni_ReadCurrentLimitsResult(ViSession vi, ViConstString LimitLine, ViInt32* LimitResult);
ViStatus _VI_FUNC agn934xni_StartMarkerValleySearch(ViSession vi);
ViStatus _VI_FUNC agn934xni_StartMarkerPeakSearch(ViSession vi);
ViStatus _VI_FUNC agn934xni_ReadReferenceMarker(ViSession vi, ViReal64* XAxisValue, ViReal64* YAxisValue);
ViStatus _VI_FUNC agn934xni_ReadReflectionMeasurementTraceData(ViSession vi, ViInt32 MaxTime, ViInt32 DataType, ViReal64 ResultArray[], 
                  ViInt32 ResultArrayLength, ViInt32* ActualNumber);
ViStatus _VI_FUNC agn934xni_SaveTraceData(ViSession vi);
ViStatus _VI_FUNC agn934xni_EnableReflectionMeasurementIIM(ViSession vi, ViBoolean EnableIIM);
ViStatus _VI_FUNC agn934xni_ConfigureReflectionMeasurementCable(ViSession vi, ViInt32 CableType, ViConstString CableName, 
                  ViReal64 CableAttenuation, ViReal64 CableVelocityFactor);

/*- SEM Group Functions ----------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_ConfigureSEMAverage(ViSession vi, ViBoolean AverageEnable, ViInt32 AverageNumber);
ViStatus _VI_FUNC agn934xni_ConfigureSEMRefChannel(ViSession vi, ViReal64 ChannelIntegrateBandwidth, ViReal64 CenterFrequency, 
                  ViReal64 ChannelSpan, ViBoolean AutoTotalPowerReference, ViReal64 TotalPowerReference, 
                  ViBoolean AutoResolutionBandwidth, ViReal64 ResolutionBandwidth);
ViStatus _VI_FUNC agn934xni_ReadSEMData(ViSession vi, ViInt32 MaxTime, ViInt32 DataType, ViReal64* OffsetAValue, 
                  ViReal64* OffsetBValue, ViReal64* OffsetCValue, ViReal64* OffsetDValue, 
                  ViReal64* OffsetEValue);
ViStatus _VI_FUNC agn934xni_ReadSEMFailFlag(ViSession vi, ViInt32 MaxTime, ViInt32 FlagType, ViBoolean* OffsetAResult, 
                  ViBoolean* OffsetBResult, ViBoolean* OffsetCResult, ViBoolean* OffsetDResult, 
                  ViBoolean* OffsetEResult);
ViStatus _VI_FUNC agn934xni_ConfigureSEMFailSettings(ViSession vi, ViBoolean EnableLog, ViBoolean EnableHold, 
                  ViBoolean EnableBeep);
ViStatus _VI_FUNC agn934xni_ConfigureSEMMeasurementType(ViSession vi, ViInt32 MeasurementType);
ViStatus _VI_FUNC agn934xni_ConfigureSEMOffsetMask(ViSession vi, ViInt32 OffsetAMaskType, ViInt32 OffsetBMaskType, 
                  ViInt32 OffsetCMaskType, ViInt32 OffsetDMaskType, ViInt32 OffsetEMaskType);
ViStatus _VI_FUNC agn934xni_ConfigureSEMOffset(ViSession vi, ViInt32 CharacteristicType, ViReal64 OffsetAValue, 
                  ViReal64 OffsetBValue, ViReal64 OffsetCValue, ViReal64 OffsetDValue, 
                  ViReal64 OffsetEValue);
ViStatus _VI_FUNC agn934xni_ConfigureAutoSEMOffset (ViSession vi,
                                                    ViInt32 CharacteristicType,
                                                    ViBoolean AutoOffsetA,
                                                    ViBoolean AutoOffsetB,
                                                    ViBoolean AutoOffsetC,
                                                    ViBoolean AutoOffsetD,
                                                    ViBoolean AutoOffsetE);
ViStatus _VI_FUNC agn934xni_ReadSEMYMarker(ViSession vi, ViReal64* YMarker);

/*- Power Meter Group Functions ----------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_ConfigurePowerMeterTrigger(ViSession vi, ViInt32 TriggerType, ViInt32 TriggerSource, 
                  ViBoolean AutoTriggerLevel, ViReal64 TriggerLevel, ViInt32 TriggerSlope);
ViStatus _VI_FUNC agn934xni_ConfigurePowerMeterTriggerTime(ViSession vi, ViReal64 TriggerDelayTime, ViReal64 TriggerHoldoffTime, 
                  ViReal64 TriggerHysteresisValue);
ViStatus _VI_FUNC agn934xni_ConfigurePowerMeterLimit(ViSession vi, ViBoolean EnableLimit, ViReal64 UpperLimit, 
                  ViReal64 LowerLimit, ViBoolean EnableLimitBeep);
ViStatus _VI_FUNC agn934xni_ConfigurePowerMeterPeakTrace(ViSession vi, ViReal64 TraceXStartTime, ViReal64 TraceXScaleTime, 
                  ViReal64 TraceYMaxValue, ViReal64 TraceYScaleValue);
ViStatus _VI_FUNC agn934xni_ConfigurePowerMeterPeakGate(ViSession vi, ViReal64 GateStartTime, ViReal64 GateLengthTime);
ViStatus _VI_FUNC agn934xni_ConfigurePowerMeterAdvanced(ViSession vi, ViReal64 MeasurementIntervalTime, ViInt32 VideoBandwidthType, 
                  ViBoolean AutoVideoAverageCount, ViInt32 VideoAverageCount);
ViStatus _VI_FUNC agn934xni_ConfigurePowerMeterAverage(ViSession vi, ViBoolean EnableAverage, ViBoolean AutoAverageCount, 
                  ViInt32 AverageCountNumber, ViBoolean EnableAverageStepDetect);
ViStatus _VI_FUNC agn934xni_ConfigurePowerMeter(ViSession vi, ViBoolean AutoPowerRange, ViInt32 PowerRange, 
                  ViReal64 CenterFrequency, ViBoolean EnableReferencePower, ViReal64 ReferencePowerValue, 
                  ViBoolean EnableOffset, ViReal64 OffsetValue);
ViStatus _VI_FUNC agn934xni_ConfigurePowerMeterSweepState(ViSession vi, ViInt32 SweepState);
ViStatus _VI_FUNC agn934xni_ConfigurePowerSensorZeroingType(ViSession vi, ViInt32 ZeroingType);
ViStatus _VI_FUNC agn934xni_ReadLimitTestResult(ViSession vi, ViInt32* LimitFailureCount);
ViStatus _VI_FUNC agn934xni_StartPowerSensorZeroing(ViSession vi);

/*- Demodulation Group Functions ----------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_ConfigureDemodulationTrigger(ViSession vi, ViInt32 TriggerType, ViBoolean EnableTriggerDelay, 
                  ViReal64 TriggerDelay, ViReal64 RFTriggerLevel, ViInt32 TriggerSlope);
ViStatus _VI_FUNC agn934xni_ConfigureDemodulationFilter(ViSession vi, ViInt32 MeasurementFilter, ViInt32 ReferenceFilter, 
                  ViInt32 FilterSymbols, ViReal64 AlphaBbT);
ViStatus _VI_FUNC agn934xni_ConfigureDemodulationDisplay(ViSession vi, ViInt32 Axis, ViBoolean EnableScaleCoupling, 
                  ViReal64 ScalePerDivision, ViReal64 ReferenceValue, ViInt32 ReferencePosition, 
                  ViInt32 ViewType);
ViStatus _VI_FUNC agn934xni_ConfigureDemodulationLimit(ViSession vi, ViBoolean EnableLimit, ViReal64 CarrierPowerUpperLimit, 
                  ViReal64 DepthOrFrequencyDeviationUpperLimit, ViReal64 DepthOrFrequencyDeviationLowerLimit, ViReal64 CarrierFrequencyOffsetUpperLimit);
ViStatus _VI_FUNC agn934xni_ConfigureAMFMMeasurement(ViSession vi, ViBoolean EnableAverage, ViInt32 AverageCount, 
                  ViInt32 DetectorType, ViBoolean EnableDetectorPeakHold, ViBoolean AutoIFBandwidth, 
                  ViReal64 IFBandwidth, ViInt32 EqualLowPassFilter);
ViStatus _VI_FUNC agn934xni_ConfigureASKFSKMeasurement(ViSession vi, ViBoolean EnableAverage, ViInt32 AverageCount, 
                  ViReal64 SymbolRate, ViInt32 MeasurementLength);
ViStatus _VI_FUNC agn934xni_ReadModulationData(ViSession vi, ViInt32 MaxTime, ViReal64* Depth, ViReal64* CarrierPower, 
                  ViReal64* ModulationRate, ViReal64* FrequencyDeviation);
ViStatus _VI_FUNC agn934xni_ConfigureExternalGain(ViSession vi, ViReal64 ExternalGain);
ViStatus _VI_FUNC agn934xni_EnableDemodulationPreamplifier(ViSession vi, ViBoolean EnablePreamplifier);
ViStatus _VI_FUNC agn934xni_ConfigureDemodulationMode(ViSession vi, ViInt32 DemodulationMode);
ViStatus _VI_FUNC agn934xni_ConfigureCarrierFrequency(ViSession vi, ViBoolean AutoCarrierFrequency, ViReal64 CarrierFrequency, 
                  ViReal64 CarrierFrequencyStep);
ViStatus _VI_FUNC agn934xni_ReadAMMeasurementData (ViSession vi, 
                                                   ViInt32 MaxTime,
                                                   ViInt32 ArrayLength,
                                                   ViReal64 CarrierPower[], 
                                                   ViReal64 ModulationRate[], 
                                                   ViReal64 AmDepth[], 
                                                   ViReal64 Sinad[],
                                                   ViReal64 THD[],
                                                   ViReal64 CarrierFreqOffset[]);
ViStatus _VI_FUNC agn934xni_ReadFMMeasurementData (ViSession vi, 
                                                   ViInt32 MaxTime,
                                                   ViInt32 ArrayLength,
                                                   ViReal64 CarrierPower[], 
                                                   ViReal64 ModulationRate[], 
                                                   ViReal64 FrequencyDeviation[], 
                                                   ViReal64 Sinad[],
                                                   ViReal64 THD[],
                                                   ViReal64 CarrierFreqOffset[]);
ViStatus _VI_FUNC agn934xni_ReadASKMeasurementData (ViSession vi, 
                                                    ViInt32 MaxTime,
                                                    ViInt32 ArrayLength,
                                                    ViReal64 CarrierPower[], 
                                                    ViReal64 AskDepth[], 
                                                    ViReal64 AskError[], 
                                                    ViReal64 AskIndex[],
                                                    ViReal64 CarrierFreqOffset[]);
ViStatus _VI_FUNC agn934xni_ReadFSKMeasurementData (ViSession vi, 
                                                    ViInt32 MaxTime,
                                                    ViInt32 ArrayLength,
                                                    ViReal64 CarrierPower[], 
                                                    ViReal64 Deviation[], 
                                                    ViReal64 FskError[], 
                                                    ViReal64 MagError[],
                                                    ViReal64 CarrierFreqOffset[]);
ViStatus _VI_FUNC agn934xni_ReadMeasurementTraceData(ViSession vi, ViInt32 MaxTime, ViReal64 MeasurementTraceResultArray[], ViInt32 ArraySize, 
                  ViInt32* ActualReturnedDataNumber);
ViStatus _VI_FUNC agn934xni_RestartMeasurement(ViSession vi);

/*- Limit Line Group Functions ----------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_ConfigureLimitsMargin(ViSession vi, ViConstString LimitLine, ViBoolean EnableLimitsMargin, 
                  ViReal64 LimitsMarginValue, ViBoolean EnableThreshold, ViReal64 ThresholdValue);
ViStatus _VI_FUNC agn934xni_EnableLimitBeep(ViSession vi, ViBoolean EnableLimitBeep);
ViStatus _VI_FUNC agn934xni_DeleteLimitsData(ViSession vi, ViConstString LimitLine, ViInt32 Operation);
ViStatus _VI_FUNC agn934xni_ConfigureLimitsValues(ViSession vi, ViConstString LimitLine, ViInt32 LimitValueNumber, 
                  ViReal64 XAxisValues[], ViReal64 Amplitudes[], ViBoolean IsConnectedFlags[]);

/*- Sweep Group Functions ----------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_ConfigureGatedSweepView(ViSession vi, ViBoolean EnableGateView, ViReal64 GateViewSweepTime);
ViStatus _VI_FUNC agn934xni_ConfigureGatedSweep(ViSession vi, ViBoolean EnableGatedSweep, ViInt32 GateSource, 
                  ViReal64 GateDelay, ViReal64 GateLength);

    /*- Error Functions ----------------------------------------------------*/
ViStatus _VI_FUNC  agn934xni_error_query (ViSession vi, 
                                          ViInt32 *errorCode,
                                          ViChar errorMessage[]);

ViStatus _VI_FUNC  agn934xni_GetError (ViSession vi,
                                       ViStatus *code, 
                                       ViInt32 bufferSize,
                                       ViChar description[]);
ViStatus _VI_FUNC  agn934xni_ClearError (ViSession vi);

ViStatus _VI_FUNC  agn934xni_error_message (ViSession vi,
                                            ViStatus errorCode,
                                            ViChar errorMessage[256]);
    
    /*- Interchangeability Checking Functions ------------------------------*/
ViStatus _VI_FUNC agn934xni_GetNextInterchangeWarning (ViSession vi, 
                                                       ViInt32 bufferSize, 
                                                       ViChar warnString[]);
ViStatus _VI_FUNC agn934xni_ResetInterchangeCheck (ViSession vi);
ViStatus _VI_FUNC agn934xni_ClearInterchangeWarnings (ViSession vi);

    /*- Utility Functions --------------------------------------------------*/
ViStatus _VI_FUNC agn934xni_InvalidateAllAttributes (ViSession vi);
ViStatus _VI_FUNC  agn934xni_reset (ViSession vi);
ViStatus _VI_FUNC  agn934xni_ResetWithDefaults (ViSession vi);
ViStatus _VI_FUNC  agn934xni_self_test (ViSession vi,
                                        ViInt16 *selfTestResult,
                                        ViChar selfTestMessage[]);
ViStatus _VI_FUNC  agn934xni_revision_query (ViSession vi, 
                                             ViChar instrumentDriverRevision[],
                                             ViChar firmwareRevision[]);
ViStatus _VI_FUNC  agn934xni_Disable (ViSession vi);
ViStatus _VI_FUNC  agn934xni_WriteInstrData (ViSession vi,
                                             ViConstString writeBuffer); 
ViStatus _VI_FUNC  agn934xni_ReadInstrData  (ViSession vi,
                                             ViInt32 numBytes, 
                                             ViChar rdBuf[],
                                             ViInt32 *bytesRead);

    /*- Set, Get, and Check Attribute Functions ----------------------------*/
ViStatus _VI_FUNC  agn934xni_GetAttributeViInt32 (ViSession vi,
                                                  ViConstString channelName,
                                                  ViAttr attribute,
                                                  ViInt32 *value);
ViStatus _VI_FUNC  agn934xni_GetAttributeViReal64 (ViSession vi,
                                                   ViConstString channelName,
                                                   ViAttr attribute,
                                                   ViReal64 *value);
ViStatus _VI_FUNC  agn934xni_GetAttributeViString (ViSession vi,
                                                   ViConstString channelName,
                                                   ViAttr attribute,
                                                   ViInt32 bufSize,
                                                   ViChar value[]); 
ViStatus _VI_FUNC  agn934xni_GetAttributeViSession (ViSession vi,
                                                    ViConstString channelName, 
                                                    ViAttr attribute,
                                                    ViSession *value);
ViStatus _VI_FUNC  agn934xni_GetAttributeViBoolean (ViSession vi,
                                                    ViConstString channelName,
                                                    ViAttr attribute,
                                                    ViBoolean *value);

ViStatus _VI_FUNC  agn934xni_SetAttributeViInt32 (ViSession vi,
                                                  ViConstString channelName,
                                                  ViAttr attribute,
                                                  ViInt32 value);
ViStatus _VI_FUNC  agn934xni_SetAttributeViReal64 (ViSession vi,
                                                   ViConstString channelName,
                                                   ViAttr attribute,
                                                   ViReal64 value);
ViStatus _VI_FUNC  agn934xni_SetAttributeViString (ViSession vi,
                                                   ViConstString channelName,
                                                   ViAttr attribute,
                                                   ViConstString value); 
ViStatus _VI_FUNC  agn934xni_SetAttributeViSession (ViSession vi,
                                                    ViConstString channelName,
                                                    ViAttr attribute,
                                                    ViSession value);
ViStatus _VI_FUNC  agn934xni_SetAttributeViBoolean (ViSession vi,
                                                    ViConstString channelName,
                                                    ViAttr attribute,
                                                    ViBoolean value);

ViStatus _VI_FUNC  agn934xni_CheckAttributeViInt32 (ViSession vi,
                                                    ViConstString channelName,
                                                    ViAttr attribute,
                                                    ViInt32 value);
ViStatus _VI_FUNC  agn934xni_CheckAttributeViReal64 (ViSession vi,
                                                     ViConstString channelName,
                                                     ViAttr attribute,
                                                     ViReal64 value);
ViStatus _VI_FUNC  agn934xni_CheckAttributeViString (ViSession vi,
                                                     ViConstString channelName,
                                                     ViAttr attribute,
                                                     ViConstString value); 
ViStatus _VI_FUNC  agn934xni_CheckAttributeViSession (ViSession vi,
                                                      ViConstString channelName,
                                                      ViAttr attribute,
                                                      ViSession value);
ViStatus _VI_FUNC  agn934xni_CheckAttributeViBoolean (ViSession vi,
                                                      ViConstString channelName,
                                                      ViAttr attribute,
                                                      ViBoolean value);

/****************************************************************************
 *------------------------ Error And Completion Codes ----------------------*
 ****************************************************************************/

#define AGN934XNI_WARN_MEASURE_UNCAL                    IVISPECAN_WARN_MEASURE_UNCAL 
#define AGN934XNI_WARN_OVER_RANGE                       IVISPECAN_WARN_OVER_RANGE

#define AGN934XNI_ERROR_MAX_TIME_EXCEEDED               IVISPECAN_ERROR_MAX_TIME_EXCEEDED
#define AGN934XNI_ERROR_NOT_DELTA_MARKER                IVISPECAN_ERROR_NOT_DELTA_MARKER
#define AGN934XNI_ERROR_MARKER_NOT_ENABLED              IVISPECAN_ERROR_MARKER_NOT_ENABLED

#define AGN934XNI_WARNMSG_MEASURE_UNCAL                 IVISPECAN_WARNMSG_MEASURE_UNCAL
#define AGN934XNI_WARNMSG_OVER_RANGE                    IVISPECAN_WARNMSG_OVER_RANGE

#define AGN934XNI_ERRMSG_MAX_TIME_EXCEEDED              IVISPECAN_ERRMSG_MAX_TIME_EXCEEDED
#define AGN934XNI_ERRMSG_NOT_DELTA_MARKER               IVISPECAN_ERRMSG_NOT_DELTA_MARKER
#define AGN934XNI_ERRMSG_MARKER_NOT_ENABLED             IVISPECAN_ERRMSG_MARKER_NOT_ENABLED

#define AGN934XNI_ERROR_CODES_AND_MSGS \
        {AGN934XNI_ERROR_MAX_TIME_EXCEEDED              AGN934XNI_ERROR_MAX_TIME_EXCEEDED}, \
        {AGN934XNI_WARN_MEASURE_UNCAL                   AGN934XNI_WARNMSG_MEASURE_UNCAL}, \
        {AGN934XNI_WARN_OVER_RANGE                      AGN934XNI_WARNMSG_OVER_RANGE}

                
#define AGN934XNI_ERROR_TRACE_NOT_ENABLED               (IVI_SPECIFIC_ERROR_BASE + 1)

/**************************************************************************** 
 *---------------------------- End Include File ----------------------------* 
 ****************************************************************************/
#if defined(__cplusplus) || defined(__cplusplus__)
}
#endif
#endif /* __AGN934XNI_HEADER */     

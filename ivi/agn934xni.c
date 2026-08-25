/***************************************************************************** 
 *  Copyright 2012-2025, National Instruments Corporation.  All Rights Reserved.  *
 *****************************************************************************/
 
/*****************************************************************************
 *  Agilent N934X Handheld Spectrum Analyzer Instrument Driver                               
 *  LabWindows/CVI Instrument Driver                                     
 *  Original Release: 2012/06/15                                  
 *  By: Chao Wang, National Instruments                              
 *      PH. (86.21)50509800   Fax (86.21)65556244                              
 *                                                                           
 *  Modification History:                                                    
 *                                                                           
 *       15/06/2012- Instrument Driver Created. 
 *       15/06/2012- Porting to 64-bits driver. 
 *
 *       18/07/2013- [CW] Added support for Agilent N9322C
 *                  Added constants:
 *                   AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION
 *                   AGN934XNI_VAL_INSTRUMENT_MODE_REFLECTION_MEASUREMENT
 *                   AGN934XNI_VAL_MEASUREMENT_TYPE_SM
 *                   AGN934XNI_VAL_FREQUENCY_SPAN_MODE_FULL
 *                   AGN934XNI_VAL_FREQUENCY_SPAN_MODE_ZERO
 *                   AGN934XNI_VAL_FREQUENCY_SPAN_MODE_PREVIOUS
 *                   AGN934XNI_VAL_DEMODULATION_MODE_AM
 *                   AGN934XNI_VAL_DEMODULATION_MODE_FM
 *                   AGN934XNI_VAL_DEMODULATION_MODE_ASK
 *                   AGN934XNI_VAL_DEMODULATION_MODE_FSK
 *                   AGN934XNI_VAL_DEMODULATION_MODE_NONE
 *                   AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_POSITIVE_PEAK
 *                   AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_NEGATIVE_PEAK
 *                   AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_AVERAGE_PEAK
 *                   AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_RMS
 *                   AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_AUTO
 *                   AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_OFF
 *                   AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW6
 *                   AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW20
 *                   AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW60
 *                   AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW200
 *                   AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW600
 *                   AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW2000
 *                   AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_LEFT
 *                   AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_CENTER
 *                   AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_RIGHT
 *                   AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_TOP
 *                   AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_CENTER
 *                   AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_BOTTOM
 *                   AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_WAVEFORM
 *                   AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_SYMBOL
 *                   AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_EYE
 *                   AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_ERROR
 *                   AGN934XNI_VAL_DEMODULATION_FILTER_OFF
 *                   AGN934XNI_VAL_DEMODULATION_FILTER_RNYQUIST
 *                   AGN934XNI_VAL_DEMODULATION_FILTER_NYQUIST
 *                   AGN934XNI_VAL_DEMODULATION_FILTER_GAUSSIAN
 *                   AGN934XNI_VAL_DEMODULATION_TRIGGER_TYPE_IMMEDIATE
 *                   AGN934XNI_VAL_DEMODULATION_TRIGGER_TYPE_EXTERNAL
 *                   AGN934XNI_VAL_DEMODULATION_TRIGGER_TYPE_RFTRIGGER
 *                   AGN934XNI_VAL_DEMODULATION_EXTERNAL_TRIGGER_TYPE_POSITIVE
 *                   AGN934XNI_VAL_DEMODULATION_EXTERNAL_TRIGGER_TYPE_NEGATIVE
 *                   AGN934XNI_VAL_DEMODULATION_AXIS_X
 *                   AGN934XNI_VAL_DEMODULATION_AXIS_Y
 *                   AGN934XNI_VAL_LIMIT_VALUE_DELETE_LAST
 *                   AGN934XNI_VAL_LIMIT_VALUE_DELETE_ALL
 *                   AGN934XNI_VAL_ZEROING_TYPE_EXTERNAL
 *                   AGN934XNI_VAL_ZEROING_TYPE_INTERNAL
 *                   AGN934XNI_VAL_POWER_METER_SWEEP_STATE_RUN
 *                   AGN934XNI_VAL_POWER_METER_SWEEP_STATE_PAUSE
 *                   AGN934XNI_VAL_POWER_METER_POWER_RANGE_UPPER
 *                   AGN934XNI_VAL_POWER_METER_POWER_RANGE_LOWER
 *                   AGN934XNI_VAL_POWER_METER_VIDEO_BANDWIDTH_TYPE_HIGH
 *                   AGN934XNI_VAL_POWER_METER_VIDEO_BANDWIDTH_TYPE_MEDIUM
 *                   AGN934XNI_VAL_POWER_METER_VIDEO_BANDWIDTH_TYPE_LOW
 *                   AGN934XNI_VAL_POWER_METER_VIDEO_BANDWIDTH_TYPE_OFF
 *                   AGN934XNI_VAL_POWER_METER_TRIGGER_TYPE_FREERUN
 *                   AGN934XNI_VAL_POWER_METER_TRIGGER_TYPE_CONTINUOUS
 *                   AGN934XNI_VAL_POWER_METER_TRIGGER_TYPE_SINGLE
 *                   AGN934XNI_VAL_POWER_METER_TRIGGER_SOURCE_EXTERNAL
 *                   AGN934XNI_VAL_POWER_METER_TRIGGER_SOURCE_INTERNAL
 *                   AGN934XNI_VAL_POWER_METER_TRIGGER_SLOPE_NEGATIVE
 *                   AGN934XNI_VAL_POWER_METER_TRIGGER_SLOPE_POSITIVE
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_TYPE_REFLECTION_ONE_PORT_INSERTION_LOSS
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_TYPE_REFLECTION
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_TYPE_DISTANCE_TO_FAULT
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_CALIBRATION_TYPE_FULL
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_CALIBRATION_TYPE_SELECTED
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_S1000
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_S2000
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_S2500
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_CUSTOM
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_OFF
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_RECTANGULAR
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_HAMMING
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_3_SAMPLE_BLACKMAN
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_4_SAMPLE_BLACKMAN
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISTANCE_UNIT_METERS
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISTANCE_UNIT_FEET
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_TYPE_DATA
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_TYPE_MEM
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_TYPE_BOTH
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_OFF
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_ADD
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_SUB
 *                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_DIV
 *                   AGN934XNI_VAL_SEM_OFFSET_CHANNEL_CHARACTERISTIC_START_FREQUENCY
 *                   AGN934XNI_VAL_SEM_OFFSET_CHANNEL_CHARACTERISTIC_STOP_FREQUENCY
 *                   AGN934XNI_VAL_SEM_OFFSET_CHANNEL_CHARACTERISTIC_SWEEP_TIME
 *                   AGN934XNI_VAL_SEM_OFFSET_CHANNEL_CHARACTERISTIC_RESOLUTION_BW
 *                   AGN934XNI_VAL_SEM_OFFSET_CHANNEL_CHARACTERISTIC_MEASUREMENT_BW
 *                   AGN934XNI_VAL_SEM_OFFSET_CHANNEL_CHARACTERISTIC_ABS_STARTAMPT
 *                   AGN934XNI_VAL_SEM_OFFSET_CHANNEL_CHARACTERISTIC_ABS_STOPAMPT
 *                   AGN934XNI_VAL_SEM_OFFSET_CHANNEL_CHARACTERISTIC_RELATIVE_STARTAMPT
 *                   AGN934XNI_VAL_SEM_OFFSET_CHANNEL_CHARACTERISTIC_RELATIVE_STOPAMPT
 *                   AGN934XNI_VAL_SEM_OFFSET_MASK_ABSOLUTE
 *                   AGN934XNI_VAL_SEM_OFFSET_MASK_RELATIVE
 *                   AGN934XNI_VAL_SEM_OFFSET_MASK_BOTH
 *                   AGN934XNI_VAL_SEM_OFFSET_MASK_EITHER
 *                   AGN934XNI_VAL_SEM_MEASUREMENT_TYPE_TOTAL_POWER_REFERENCE
 *                   AGN934XNI_VAL_SEM_MEASUREMENT_TYPE_PSD_REFERENCE
 *                   AGN934XNI_VAL_SEM_OFFSET_FAIL_FLAG_LOWER
 *                   AGN934XNI_VAL_SEM_OFFSET_FAIL_FLAG_UPPER
 *                   AGN934XNI_VAL_SEM_OFFSET_DATA_LOWER_POWER
 *                   AGN934XNI_VAL_SEM_OFFSET_DATA_UPPER_POWER
 *                   AGN934XNI_VAL_SEM_OFFSET_DATA_LOWER_PEAK_FREQUENCY
 *                   AGN934XNI_VAL_SEM_OFFSET_DATA_UPPER_PEAK_FREQUENCY
 *                   AGN934XNI_VAL_FREQUENCY_SETTING_MODE_START_STOP
 *                   AGN934XNI_VAL_FREQUENCY_SETTING_MODE_CENTER_SPAN
 *                   AGN934XNI_VAL_GATE_SOURCE_EXTERNAL
 *                   AGN934XNI_VAL_GATE_SOURCE_PERIODIC_TIMER
 *                   AGN934XNI_VAL_GATE_SOURCE_RF_BURST
 
 *                  Changed constants:
 *                   AGN934XNI_VAL_MEASUREMENT_TYPE_SEM (Meaning changed)
 *
 *                  Added attributes:
 *                   AGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH
 *                   AGN934XNI_ATTR_CHP_RRC_FILTER_ENABLE
 *                   AGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE
 *                   AGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE
 *                   AGN934XNI_ATTR_ACPR_RRC_FILTER_ENABLE
 *                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_ENABLE
 *                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME
 *                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_EXTERNAL_TRIGGER_TYPE
 *                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL
 *                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_TYPE
 *                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH
 *                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT
 *                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS
 *                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER
 *                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER
 *                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE
 *                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE
 *                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_COUPLING_ENABLE
 *                   AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_COUPLING_ENABLE
 *                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_REFERENCE_POSITION
 *                   AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_REFERENCE_POSITION
 *                   AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE
 *                   AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE
 *                   AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE
 *                   AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_REFERENCE_VALUE
 *                   AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION
 *                   AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION
 *                   AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION
 *                   AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION
 *                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_COUPLING_ENABLE
 *                   AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_COUPLING_ENABLE
 *                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_POSITION
 *                   AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_POSITION
 *                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE
 *                   AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE
 *                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION
 *                   AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION
 *                   AGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT
 *                   AGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT
 *                   AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT
 *                   AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT
 *                   AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT
 *                   AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT
 *                   AGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT
 *                   AGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT
 *                   AGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT
 *                   AGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT
 *                   AGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT
 *                   AGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT
 *                   AGN934XNI_ATTR_AM_FM_LIMIT_STATE
 *                   AGN934XNI_ATTR_ASK_FSK_LIMIT_STATE
 *                   AGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER
 *                   AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_AUTO
 *                   AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH
 *                   AGN934XNI_ATTR_AM_FM_DETECTOR_PEAK_HOLD_ENABLE
 *                   AGN934XNI_ATTR_AM_FM_DETECTOR_TYPE
 *                   AGN934XNI_ATTR_AM_FM_AVERAGE_ENABLE
 *                   AGN934XNI_ATTR_ASK_FSK_AVERAGE_ENABLE
 *                   AGN934XNI_ATTR_AM_FM_AVERAGE_COUNT
 *                   AGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT
 *                   AGN934XNI_ATTR_EXTERNAL_GAIN
 *                   AGN934XNI_ATTR_PREAMPLIFIER_ENABLE
 *                   AGN934XNI_ATTR_AUTO_CARRIER_FREQUENCY_ENABLE
 *                   AGN934XNI_ATTR_CARRIER_FREQUENCY_STEP
 *                   AGN934XNI_ATTR_CARRIER_FREQUENCY
 *                   AGN934XNI_ATTR_DEMODULATION_MODE
 *                   AGN934XNI_ATTR_SEM_FAIL_LOG_ENABLE
 *                   AGN934XNI_ATTR_SEM_FAIL_HOLD_ENABLE
 *                   AGN934XNI_ATTR_SEM_FAIL_BEEP_ENABLE
 *                   AGN934XNI_ATTR_SEM_MEASUREMENT_TYPE
 *                   AGN934XNI_ATTR_SEM_CENTER_FREQUENCY
 *                   AGN934XNI_ATTR_SEM_CHANNEL_SPAN
 *                   AGN934XNI_ATTR_SEM_AUTO_TOTAL_POWER_REFERENCE_ENABLE
 *                   AGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE
 *                   AGN934XNI_ATTR_SEM_AUTO_RESOLUTION_BANDWIDTH_ENABLE
 *                   AGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH
 *                   AGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH
 *                   AGN934XNI_ATTR_SEM_AVERAGE_ENABLE
 *                   AGN934XNI_ATTR_SEM_AVERAGE_NUMBER
 *                   AGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE
 *                   AGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME
 *                   AGN934XNI_ATTR_POWER_METER_TRIGGER_SLOPE
 *                   AGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME
 *                   AGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL
 *                   AGN934XNI_ATTR_POWER_METER_AUTO_TRIGGER_LEVEL_ENABLE
 *                   AGN934XNI_ATTR_POWER_METER_TRIGGER_SOURCE
 *                   AGN934XNI_ATTR_POWER_METER_TRIGGER_TYPE
 *                   AGN934XNI_ATTR_POWER_METER_LIMIT_BEEP_ENABLE
 *                   AGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE
 *                   AGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE
 *                   AGN934XNI_ATTR_POWER_METER_LIMIT_ENABLE
 *                   AGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME
 *                   AGN934XNI_ATTR_POWER_METER_GATE_START_TIME
 *                   AGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE
 *                   AGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE
 *                   AGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME
 *                   AGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME
 *                   AGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT
 *                   AGN934XNI_ATTR_POWER_METER_AUTO_VIDEO_AVERAGE_COUNT_ENABLE
 *                   AGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE
 *                   AGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME
 *                   AGN934XNI_ATTR_POWER_METER_AVERAGE_STEP_DETECT_ENABLE
 *                   AGN934XNI_ATTR_POWER_METER_AUTO_AVERAGE_COUNT_ENABLE
 *                   AGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER
 *                   AGN934XNI_ATTR_POWER_METER_AVERAGE_ENABLE
 *                   AGN934XNI_ATTR_POWER_METER_OFFSET_VALUE
 *                   AGN934XNI_ATTR_POWER_METER_OFFSET_ENABLE
 *                   AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE
 *                   AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_ENABLE
 *                   AGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY
 *                   AGN934XNI_ATTR_POWER_METER_AUTO_POWER_RANGE_ENABLE
 *                   AGN934XNI_ATTR_POWER_METER_POWER_RANGE
 *                   AGN934XNI_ATTR_POWER_METER_SWEEP_STATE
 *                   AGN934XNI_ATTR_POWER_METER_ZEROING_TYPE
 *                   AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE
 *                   AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_ENABLE
 *                   AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE
 *                   AGN934XNI_ATTR_LIMIT_LINE_MARGIN_ENABLE
 *                   AGN934XNI_ATTR_LIMIT_LINE_BEEP_ENABLE
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_MARKER_CONTINUOUS_VALLEY_ENABLE
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_ENABLE
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_DISPLAY_TYPE
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DTF_FREQUENCY_DOMAIN_ENABLE
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_UNIT
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_STOP
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_START
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_ATTENUATION
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_TYPE
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_IIM_ENABLE
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CALIBRATION_TYPE
 *                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TYPE
 *                   AGN934XNI_ATTR_GATE_SOURCE
 *                   AGN934XNI_ATTR_GATE_LENGTH
 *                   AGN934XNI_ATTR_GATE_DELAY
 *                   AGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME
 *                   AGN934XNI_ATTR_GATE_VIEW_ENABLE
 *                   AGN934XNI_ATTR_GATED_SWEEP_ENABLE
 
 *                  Added functions:
 *                   agn934xni_ConfigureCHPFilter
 *                   agn934xni_ConfigureACPRFilter
 *                   agn934xni_EnableMarkerContinuousValley
 *                   agn934xni_ConfigureReflectionMeasurementTrace
 *                   agn934xni_ConfigureReflectionMeasurementAmplitude
 *                   agn934xni_ConfigureReflectionMeasurementDistance
 *                   agn934xni_ConfigureReflectionMeasurementFrequency
 *                   agn934xni_ConfigureReflectionMeasurementCalibration
 *                   agn934xni_ConfigureReflectionMeasurementDispalyType
 *                   agn934xni_ConfigureReflectionMeasurement
 *                   agn934xni_ReadCurrentLimitsResult
 *                   agn934xni_StartMarkerValleySearch
 *                   agn934xni_StartMarkerPeakSearch
 *                   agn934xni_ReadReferenceMarker
 *                   agn934xni_ReadReflectionMeasurementTraceData
 *                   agn934xni_SaveTraceData
 *                   agn934xni_EnableReflectionMeasurementIIM
 *                   agn934xni_ConfigureReflectionMeasurementCable
 *                   agn934xni_ConfigureSEMAverage
 *                   agn934xni_ConfigureSEMRefChannel
 *                   agn934xni_ReadSEMData
 *                   agn934xni_ReadSEMFailFlag
 *                   agn934xni_ConfigureSEMFailSettings
 *                   agn934xni_ConfigureSEMMeasurementType
 *                   agn934xni_ConfigureSEMOffsetMask
 *                   agn934xni_ConfigureSEMOffset
 *                   agn934xni_ConfigureAutoSEMOffset
 *                   agn934xni_ReadSEMYMarker
 *                   agn934xni_ConfigurePowerMeterTrigger
 *                   agn934xni_ConfigurePowerMeterTriggerTime
 *                   agn934xni_ConfigurePowerMeterLimit
 *                   agn934xni_ConfigurePowerMeterPeakTrace
 *                   agn934xni_ConfigurePowerMeterPeakGate
 *                   agn934xni_ConfigurePowerMeterAdvanced
 *                   agn934xni_ConfigurePowerMeterAverage
 *                   agn934xni_ConfigurePowerMeter
 *                   agn934xni_ConfigurePowerMeterSweepState
 *                   agn934xni_ConfigurePowerSensorZeroingType
 *                   agn934xni_ReadLimitTestResult
 *                   agn934xni_StartPowerSensorZeroing
 *                   agn934xni_ConfigureDemodulationTrigger
 *                   agn934xni_ConfigureDemodulationFilter
 *                   agn934xni_ConfigureDemodulationDisplay
 *                   agn934xni_ConfigureDemodulationLimit
 *                   agn934xni_ConfigureAMFMMeasurement
 *                   agn934xni_ConfigureASKFSKMeasurement
 *                   agn934xni_ReadModulationData
 *                   agn934xni_ConfigureExternalGain
 *                   agn934xni_EnableDemodulationPreamplifier
 *                   agn934xni_ConfigureDemodulationMode
 *                   agn934xni_ConfigureCarrierFrequency
 *                   agn934xni_ReadAMMeasurementData
 *                   agn934xni_ReadFMMeasurementData
 *                   agn934xni_ReadASKMeasurementData
 *                   agn934xni_ReadFSKMeasurementData
 *                   agn934xni_ReadMeasurementTraceData
 *                   agn934xni_RestartMeasurement
 *                   agn934xni_ConfigureLimitsMargin
 *                   agn934xni_EnableLimitBeep
 *                   agn934xni_DeleteLimitsData
 *                   agn934xni_ConfigureLimitsValues
 *                   agn934xni_ConfigureGatedSweepView
 *                   agn934xni_ConfigureGatedSweep
 *
 *       30/01/2014- [ZW] Fixed CAR #359275 and CAR #445905.
 *                   Added constants:
 *                    AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISPLAY_TYPE_RL
 *                    AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISPLAY_TYPE_VSWR
 *                    AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISPLAY_TYPE_LIN
 *                   Added attributes:
 *                    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISPLAY_TYPE
 *
 *      10/06/2026  - Added model support for N9321C, N9323C, N9324C.
 *                  - By: Gowtham R and Anurag Agrahari, NI Bangalore.
 *****************************************************************************/

#include <ansi_c.h>
#include <string.h>
#include <stdio.h>  
#include <formatio.h>
#include "agn934xni.h"

/*****************************************************************************
 *--------------------- Hidden Attribute Declarations -----------------------*
 *****************************************************************************/

#define AGN934XNI_ATTR_OPC_TIMEOUT                          (IVI_SPECIFIC_PRIVATE_ATTR_BASE + 1L)                    /* ViInt32   */
#define AGN934XNI_ATTR_USE_SPECIFIC_SIMULATION              (IVI_INHERENT_ATTR_BASE + 23L)                           /* ViBoolean */
#define AGN934XNI_ATTR_IO_SESSION                           (IVI_INHERENT_ATTR_BASE + 322L)                          /* ViSession */
#define AGN934XNI_ATTR_OPC_CALLBACK                         (IVI_SPECIFIC_PRIVATE_ATTR_BASE + 6L)                    /* ViAddr    */
#define AGN934XNI_ATTR_CHECK_STATUS_CALLBACK                (IVI_SPECIFIC_PRIVATE_ATTR_BASE + 7L)                    /* ViAddr    */
#define AGN934XNI_ATTR_USER_INTERCHANGE_CHECK_CALLBACK      (IVI_SPECIFIC_PRIVATE_ATTR_BASE + 8L)                    /* ViAddr    */
#define AGN934XNI_ATTR_INST_MODEL                           (IVI_SPECIFIC_PRIVATE_ATTR_BASE + 9L)                   /* ViInt32   */


/*****************************************************************************
 *---------------------------- Useful Macros --------------------------------*
 *****************************************************************************/

    /*- Float precision -----------------------------------------------------*/
#define FLOAT_PRECISION                         0.000001        

    /*- I/O buffer size -----------------------------------------------------*/
#define BUFFER_SIZE                             512L        


    /*- 488.2 Event Status Register (ESR) Bits ------------------------------*/
#define IEEE_488_2_ERROR_MASK                   0x3C

    /*- Instrument Model Marcos ---------------------------------------------*/
#define NOT_SUPPORTED                           -1

/*- Defined values for hidden attribute AGN934XNI_ATTR_INST_MODEL -*/
#define AGN934XNI_VAL_MODEL_N9342C               1
#define AGN934XNI_VAL_MODEL_N9343C               2
#define AGN934XNI_VAL_MODEL_N9344C               3
#define AGN934XNI_VAL_MODEL_N9322C               4
#define AGN934XNI_VAL_MODEL_N9321C               5
#define AGN934XNI_VAL_MODEL_N9323C               6
#define AGN934XNI_VAL_MODEL_N9324C               7
    
    /*- List of channels passed to the Ivi_BuildChannelTable function -------*/ 
#define CHANNEL_LIST                            "1"
    /*- Repeated capabilities definition and lists of values passed to the Ivi_BuildRepCapTable function ------*/
#define MARKER_REP_CAP_NAME                    "Marker"
#define MARKER_LIST                            "MARKER1,MARKER2,MARKER3,MARKER4,MARKER5,MARKER6"        
#define DEFAULT_ACTIVE_MARKER                  "MARKER1"

#define TRACE_REP_CAP_NAME                     "Trace"
#define TRACE_LIST                             "TRACE1,TRACE2,TRACE3,TRACE4"        
        
#define LIMITLINE_REP_CAP_NAME                 "LimitLine"
#define LIMITLINE_LIST                         "1,2" 

    /*- Default definition of ID Query Response for simulation --------------*/
#define AGN934XNI_SIMULATION_ID_QUERY                       

/*- Defined for demodulation read functions ---------------------------------*/
#define DEMODULATION_MEAS_VAR_KIND_NUM          6
#define DEMODULATION_MEAS_VAR_STR_MAX_LEN       30
#define DEMODULATION_EXPECTED_RETURNED_VAR_NUM  18         

    /*- Macros for access to enum range table -----------------------------------*/
#define agn934xni_GetCmdFromIntValue(value, table, cmd) \
        Ivi_GetViInt32EntryFromValue (value, table, VI_NULL, VI_NULL,\
                                      VI_NULL, VI_NULL, cmd, VI_NULL)

#define agn934xni_GetCmdFromRealValue(value, table, cmd) \
        Ivi_GetViReal64EntryFromValue (value, table, VI_NULL, VI_NULL,\
                                       VI_NULL, VI_NULL, cmd, VI_NULL)

#define agn934xni_GetValueFromCmd(buffer, table, value) \
        Ivi_GetViInt32EntryFromString (buffer, table, value, VI_NULL,\
        VI_NULL, VI_NULL, VI_NULL)

#define INSTRUMENT_MODE_IS_SA_TG(instrMode)\
        (( instrMode == AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER) || \
        ( instrMode == AGN934XNI_VAL_INSTRUMENT_MODE_TRACKING_GENERATOR))

#define MEASUREMENT_TYPE_MARKER_CRITERIA(instrMode, measType) \
        ((( instrMode == AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER) && \
        ( measType != AGN934XNI_VAL_MEASUREMENT_TYPE_SM )) || \
        ( instrMode == AGN934XNI_VAL_INSTRUMENT_MODE_TRACKING_GENERATOR))

static IviRangeTableEntry attrMarkerDemodulationSpeakerVolumeRangeTableEntries[] =
	{
		{0, 100, 0, "", 0},
		{IVI_RANGE_TABLE_LAST_ENTRY}
	};

static IviRangeTable attrMarkerDemodulationSpeakerVolumeRangeTable =
	{
		IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrMarkerDemodulationSpeakerVolumeRangeTableEntries,
	};

static IviRangeTableEntry attrMarkerDemodulationDelayTimeRangeTableEntries[] =
	{
		{0, 200, 0, "", 0},
		{IVI_RANGE_TABLE_LAST_ENTRY}
	};

static IviRangeTable attrMarkerDemodulationDelayTimeRangeTable =
	{
		IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrMarkerDemodulationDelayTimeRangeTableEntries,
	};

static IviRangeTableEntry attrAverageDurationRangeTableEntries[] =
	{
		{1, 3600, 0, "", 0},
		{IVI_RANGE_TABLE_LAST_ENTRY}
	};

static IviRangeTable attrAverageDurationRangeTable =
	{
		IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrAverageDurationRangeTableEntries,
	};

/*****************************************************************************/
/*= Typedefs for string-value-revision tables.                     ========= */
/*****************************************************************************/
typedef struct {ViInt32       value;        /* Attribute ID */ 
                ViConstString string;       /* Command */
                ViConstString repCommand;   /* Extension for Reapted Command */
} agn934xniStringValueEntry;

typedef agn934xniStringValueEntry agn934xniStringValueTable[];

/*- Macros for the wrapper of empty channel name */
#define VALID_CHANNELNAME(channelName) \
        (VI_NULL == channelName ? "" : channelName)

static agn934xniStringValueTable agn934xniEnum_commands = 
{   /* Attribute ID,        SCPI command          */
    {AGN934XNI_ATTR_TRACE_MATH_TYPE,                                       ":TRAC:MATH:TYPE",                      ""},
    {AGN934XNI_ATTR_AVERAGE_TYPE,                                          ":AVER:TYPE",                           ""},
    {AGN934XNI_ATTR_MEASUREMENT_TYPE,                                      ":INST:MEAS",                           ""},
    {AGN934XNI_ATTR_INSTRUMENT_MODE,                                       ":INST",                                ""},
    {AGN934XNI_ATTR_AMPLITUDE_UNITS,                                       ":UNIT:POW",                            ""},
    {AGN934XNI_ATTR_DETECTOR_TYPE,                                         ":DET:",                                ""},
    {AGN934XNI_ATTR_SWEEP_MODE,                                            ":SWE:MODE",                            ""},
    {AGN934XNI_ATTR_TRACE_TYPE,                                            ":",                                    ":MODE"},
    {AGN934XNI_ATTR_VERTICAL_SCALE,                                        ":DISP:WIND:TRAC:Y:SPAC",               ""},
    {AGN934XNI_ATTR_OBW_METHOD,                                            ":OBW:METH",                            ""},
    {AGN934XNI_ATTR_MARKER_DEMODULATION_FUNCTION,                          ":CALC:MARK:DEM:TYPE",                  ""},
    {AGN934XNI_ATTR_MARKER_X_READOUT,                                      ":CALC:",                               ":X:READ"},
    {AGN934XNI_ATTR_PEAK_SEARCH_TYPE,                                      ":CALC:MARK:PEAK:SEAR:MODE",            ""},
    {AGN934XNI_ATTR_MARKER_FUNCTION,                                       ":CALC:",                               ":FUNC" },    
    {AGN934XNI_ATTR_TRIGGER_SOURCE,                                        ":TRIG:SOUR",                           ""},
    {AGN934XNI_ATTR_EXTERNAL_TRIGGER_SLOPE,                                ":TRIG:EXT:SLOP",                       ""},
    {AGN934XNI_ATTR_MARKER_TYPE,                                           ":CALC:",                               ":MODE"},
    {AGN934XNI_ATTR_LIMIT_LINE_X_VALUE,                                    ":CALC:LLIN:CONT:DOM",                  ""},
    {AGN934XNI_ATTR_LIMIT_LINE_MODE,                                       ":CALC:LLIN:CMOD",                      ""},
    {AGN934XNI_ATTR_LIMIT_LINE_TYPE,                                       ":CALC:LLIN",                           ":TYPE"},
    {AGN934XNI_ATTR_ASK_FSK_DEMODULATION_EXTERNAL_TRIGGER_TYPE,            ":TRIG:DMA:EXT:SLOP",                   ""},
    {AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_TYPE,                     ":TRIG:DMA:SOUR",                       ""},
    {AGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE,                        ":DISP:DMA:VIEW",                       ""},
    {AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_REFERENCE_POSITION,       ":DISP:DMA:VIEW:WIND:TRAC:Y:RPOS",      ""},
    {AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_REFERENCE_POSITION,         ":DISP:AMA:VIEW:WIND:TRAC:Y:RPOS",      ""},
    {AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_POSITION,       ":DISP:DMA:VIEW:WIND:TRAC:X:RPOS",      ""},
    {AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_POSITION,         ":DISP:AMA:VIEW:WIND:TRAC:X:RPOS",      ""},
    {AGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER,                           ":AMA:EQLP",                            ""},
    {AGN934XNI_ATTR_AM_FM_DETECTOR_TYPE,                                   ":AMA:DEM:DET",                         ""},
    {AGN934XNI_ATTR_DEMODULATION_MODE,                                     ":INST:MEAS",                           ""},
    {AGN934XNI_ATTR_SEM_MEASUREMENT_TYPE,                                  ":SEM:TYPE",                            ""},
    {AGN934XNI_ATTR_POWER_METER_TRIGGER_SLOPE,                             ":TRIG:SLOP",                           ""},
    {AGN934XNI_ATTR_POWER_METER_TRIGGER_SOURCE,                            ":TRIG1:SOUR",                          ""},
    {AGN934XNI_ATTR_POWER_METER_TRIGGER_TYPE,                              ":TRIG1:SOUR:ACQN",                     ""},
    {AGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE,                      ":BAND",                                ""},
    {AGN934XNI_ATTR_POWER_METER_POWER_RANGE,                               ":POW:AC:RANG",                         ""},
    {AGN934XNI_ATTR_POWER_METER_SWEEP_STATE,                               ":SWE:STAT",                            ""},
    {AGN934XNI_ATTR_POWER_METER_ZEROING_TYPE,                              ":CAL:ZERO:TYPE",                       ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE,                ":CAT:TRAC:MATH",                       ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_DISPLAY_TYPE,             ":CAT:TRAC:DISP",                       ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_UNIT,                  ":CAT:DIST:UNIT",                       ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW,                         ":CAT:WIND",                            ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_TYPE,                     ":CAT:CABL:TYPE",                       ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CALIBRATION_TYPE,               ":CAT:CAL:TYPE",                        ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TYPE,                           ":CAT",                                 ""},
    {AGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER,                 ":DMA:RAD:STAN:FILT:REF",               ""},
    {AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER,               ":DMA:RAD:STAN:FILT:MEAS",              ""},
    {AGN934XNI_ATTR_GATE_SOURCE,                                           ":SWE:EGAT:SOUR",                       ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISPLAY_TYPE,                   ":CAT:DISP:TYPE",                       ""},
    {VI_NULL,                                                              VI_NULL,                                VI_NULL}
};

static agn934xniStringValueTable agn934xniViBoolean_commands = 
{   /* Attribute ID,        SCPI command          */
    {AGN934XNI_ATTR_HIGH_SENSITIVITY_ENABLE,                               ":POW:HSEN",                            ""},
    {AGN934XNI_ATTR_VBW_RBW_RATIO_AUTO,                                    ":BAND:VID:RAT:AUTO",                   ""},
    {AGN934XNI_ATTR_AVERAGE_DURATION_ENABLE,                               ":AVER:",                               ":DUR:STAT"},
    {AGN934XNI_ATTR_AVERAGE_ENABLE,                                        ":AVER:",                               ""},
    {AGN934XNI_ATTR_ATTENUATION_AUTO,                                      ":POW:ATT:AUTO",                        ""},
    {AGN934XNI_ATTR_RESOLUTION_BANDWIDTH_AUTO,                             ":BWID:AUTO",                            ""},
    {AGN934XNI_ATTR_SWEEP_MODE_CONTINUOUS,                                 ":INIT:CONT",                           ""},
    {AGN934XNI_ATTR_SWEEP_TIME_AUTO,                                       ":SWE:TIME:AUTO",                        ""},
    {AGN934XNI_ATTR_VIDEO_BANDWIDTH_AUTO,                                  ":BAND:VID:AUTO",                       ""},
    {AGN934XNI_ATTR_TG_NORMALIZE_ENABLE,                                   ":CALC:NTD",                            ""},
    {AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_ENABLE,                            ":OUTP",                                ""},
    {AGN934XNI_ATTR_CHP_AUTO_RANGE,                                        ":CHP:MET:RANG:AUTO",                   ""},
    {AGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE,                      ":CALC:",                               ":CPE"},
    {AGN934XNI_ATTR_MARKER_ENABLED,                                        ":CALC:",                               ":STAT"},
    {AGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED,                      ":CALC:",                               ":FCO"},
    {AGN934XNI_ATTR_TRIGGER_DELAY_TIME_ENABLE,                             ":TRIG:DEL:STAT",                       ""},
    {AGN934XNI_ATTR_LIMIT_LINE_ENABLED,                                    ":CALC:LLIN",                           ":STAT"},
    {AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_ENABLE,             ":TRIG:DMA:DEL:STAT",                   ""},
    {AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_COUPLING_ENABLE,          ":DISP:DMA:VIEW:WIND:TRAC:Y:COUP",      ""},
    {AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_COUPLING_ENABLE,            ":DISP:AMA:VIEW:WIND:TRAC:Y:COUP",      ""},
    {AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_COUPLING_ENABLE,          ":DISP:DMA:VIEW:WIND:TRAC:X:COUP",      ""},
    {AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_COUPLING_ENABLE,            ":DISP:AMA:VIEW:WIND:TRAC:X:COUP",      ""},
    {AGN934XNI_ATTR_AM_FM_LIMIT_STATE,                                     ":CALC:AMA:LIM",                        ""},
    {AGN934XNI_ATTR_ASK_FSK_LIMIT_STATE,                                   ":CALC:DMA:LIM",                        ""},
    {AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_AUTO,                               ":AMA:IFBW:AUTO",                       ""},
    {AGN934XNI_ATTR_AM_FM_DETECTOR_PEAK_HOLD_ENABLE,                       ":AMA:DEM:DET:PEAK",                    ""},
    {AGN934XNI_ATTR_AM_FM_AVERAGE_ENABLE,                                  ":AMA:AVER",                            ""},
    {AGN934XNI_ATTR_ASK_FSK_AVERAGE_ENABLE,                                ":DMA:AVER",                            ""},
    {AGN934XNI_ATTR_PREAMPLIFIER_ENABLE,                                   ":POW:GAIN",                            ""},
    {AGN934XNI_ATTR_AUTO_CARRIER_FREQUENCY_ENABLE,                         ":FREQ:CARR:AUTO",                      ""},
    {AGN934XNI_ATTR_SEM_FAIL_LOG_ENABLE,                                   ":SEM:FAIL:LOG",                        ""},
    {AGN934XNI_ATTR_SEM_FAIL_HOLD_ENABLE,                                  ":SEM:FAIL:HOLD",                       ""},
    {AGN934XNI_ATTR_SEM_FAIL_BEEP_ENABLE,                                  ":SEM:FAIL:BEEP",                       ""},
    {AGN934XNI_ATTR_SEM_AUTO_TOTAL_POWER_REFERENCE_ENABLE,                 ":SEM:CARR:AUTO",                       ""},
    {AGN934XNI_ATTR_SEM_AUTO_RESOLUTION_BANDWIDTH_ENABLE,                  ":SEM:BAND:AUTO",                       ""},
    {AGN934XNI_ATTR_SEM_AVERAGE_ENABLE,                                    ":SEM:AVER",                            ""},
    {AGN934XNI_ATTR_POWER_METER_AUTO_TRIGGER_LEVEL_ENABLE,                 ":TRIG:LEV:AUTO",                       ""},
    {AGN934XNI_ATTR_POWER_METER_LIMIT_BEEP_ENABLE,                         ":CALC:LLIN:CONT:BEEP",                 ""},
    {AGN934XNI_ATTR_POWER_METER_LIMIT_ENABLE,                              ":CALC1:LIM:STAT",                      ""},
    {AGN934XNI_ATTR_POWER_METER_AUTO_VIDEO_AVERAGE_COUNT_ENABLE,           ":AVER:VID:COUN:AUTO",                  ""},
    {AGN934XNI_ATTR_POWER_METER_AVERAGE_STEP_DETECT_ENABLE,                ":AVER:SDET",                           ""},
    {AGN934XNI_ATTR_POWER_METER_AUTO_AVERAGE_COUNT_ENABLE,                 ":AVER:COUN:AUTO",                      ""},
    {AGN934XNI_ATTR_POWER_METER_AVERAGE_ENABLE,                            ":AVER",                                ""},
    {AGN934XNI_ATTR_POWER_METER_OFFSET_ENABLE,                             ":CORR:GAIN2:STAT",                     ""},
    {AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_ENABLE,                    ":CORR:CSET1:STAT",                     ""},
    {AGN934XNI_ATTR_POWER_METER_AUTO_POWER_RANGE_ENABLE,                   ":POW:AC:RANG:AUTO",                    ""},
    {AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_ENABLE,                           ":CALC:LLIN",                           ":STHR:STAT"},
    {AGN934XNI_ATTR_LIMIT_LINE_MARGIN_ENABLE,                              ":CALC:LLIN",                           ":MARG:STAT"},
    {AGN934XNI_ATTR_LIMIT_LINE_BEEP_ENABLE,                                ":CALC:LLIN:CONT:BEEP",                 ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_MARKER_CONTINUOUS_VALLEY_ENABLE,":CALC:",                               ":CPE"},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_ENABLE,           ":CAT:AVER",                            ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DTF_FREQUENCY_DOMAIN_ENABLE,    ":CAT:DTF:FVI",                         ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_IIM_ENABLE,                     ":CAT:IIM",                             ""},
    {AGN934XNI_ATTR_ACPR_RRC_FILTER_ENABLE,                                ":ACPR:RRC",                            ""}, 
    {AGN934XNI_ATTR_CHP_RRC_FILTER_ENABLE,                                 ":CHP:RRC",                             ""},
    {AGN934XNI_ATTR_GATE_VIEW_ENABLE,                                      ":SWE:EGAT:VIEW",                       ""},
    {AGN934XNI_ATTR_GATED_SWEEP_ENABLE,                                    ":SWE:EGAT",                            ""},
    {VI_NULL,                                                              VI_NULL,                                VI_NULL}
};

static agn934xniStringValueTable agn934xniViReal64_commands = 
{   /* Attribute ID,        SCPI command          */
    {AGN934XNI_ATTR_VBW_RBW_RATIO,                                         ":BAND:VID:RAT",                        ""},
    {AGN934XNI_ATTR_AVERAGE_DURATION,                                      ":AVER:",                               ":DUR"},
    {AGN934XNI_ATTR_ATTENUATION,                                           ":POW:ATT",                             ""},
    {AGN934XNI_ATTR_INPUT_IMPEDANCE,                                       ":CORR:IMP",                            ""},  
    {AGN934XNI_ATTR_FREQUENCY_START,                                       ":FREQ:STAR",                           ""},
    {AGN934XNI_ATTR_FREQUENCY_STOP,                                        ":FREQ:STOP",                           ""},
    {AGN934XNI_ATTR_FREQUENCY_OFFSET,                                      ":FREQ:OFFS",                           ""},
    {AGN934XNI_ATTR_CENTER_FREQUENCY,                                      ":FREQ:CENT",                           ""},
    {AGN934XNI_ATTR_FREQUENCY_SPAN,                                        ":FREQ:SPAN",                           ""},
    {AGN934XNI_ATTR_REFERENCE_LEVEL,                                       ":DISP:WIND:TRAC:Y:RLEV",               ""},
    {AGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET,                                ":DISP:WIND:TRAC:Y:RLEV:OFFS",          ""},
    {AGN934XNI_ATTR_RESOLUTION_BANDWIDTH,                                  ":BAND",                                ""},
    {AGN934XNI_ATTR_SWEEP_TIME,                                            ":SWE:TIME",                            ""},
    {AGN934XNI_ATTR_VIDEO_BANDWIDTH,                                       ":BAND:VID",                            ""},
    {AGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL,                          ":DISP:WIND:TRAC:Y:NRL",                ""},
    {AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_OFFSET,                            ":SOUR:CORR:OFFS",                      ""},
    {AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_STEP,                              ":SOUR:POW:STEP",                       ""},
    {AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE,                                   ":SOUR:POW",                            ""},
    {AGN934XNI_ATTR_OBW_POWER_LEVEL,                                       ":OBW:XDB",                             ""},
    {AGN934XNI_ATTR_OBW_POWER_PERCENTAGE,                                  ":OBW:PERC",                            ""},
    {AGN934XNI_ATTR_CHP_BOTTOM_RANGE,                                      ":CHP:MET:RANG:BOTT",                   ""},
    {AGN934XNI_ATTR_CHP_TOP_RANGE,                                         ":CHP:MET:RANG:TOP",                    ""},
    {AGN934XNI_ATTR_CHP_CHANNEL_SPAN,                                      ":CHP:FREQ:SPAN",                       ""},
    {AGN934XNI_ATTR_CHP_INTEGRATION_BANDWIDTH,                             ":CHP:BWID:INT",                        ""},
    {AGN934XNI_ATTR_CHP_CENTER_FREQUENCY,                                  ":CHP:FREQ:CENT",                       ""},
    {AGN934XNI_ATTR_ACPR_MAIN_CHANNEL_INTERGRATION_BANDWIDTH,              ":ACPR:BAND:INT",                       ""},
    {AGN934XNI_ATTR_ACPR_CENTER_FREQUENCY,                                 ":ACPR:FREQ:CENT",                      ""},
    {AGN934XNI_ATTR_MARKER_DEMODULATION_DELAY_TIME,                        ":CALC:MARK:DEM:DTIM",                  ""},
    {AGN934XNI_ATTR_MARKER_DEMODULATION_SPEAKER_VOLUME,                    ":CALC:MARK:DEM:SVOL",                  ""},
    {AGN934XNI_ATTR_MARKER_POSITION,                                       ":CALC:",                               ":X"},
    {AGN934XNI_ATTR_MARKER_AMPLITUDE,                                      ":CALC:",                               ":Y"},
    {AGN934XNI_ATTR_PEAK_EXCURSION,                                        ":CALC:MARK:PEAK:EXC",                  ""},
    {AGN934XNI_ATTR_TRIGGER_DELAY_TIME,                                    ":TRIG:DEL",                            ""},
    {AGN934XNI_ATTR_VIDEO_TRIGGER_LEVEL,                                   ":TRIG:VID:LEV",                        ""},
    {AGN934XNI_ATTR_LIMIT_LINE_Y_VALUE,                                    ":CALC:LLIN",                           ":Y"},
    {AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME,               ":TRIG:DMA:DEL",                        ""},
    {AGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL,                 ":TRIG:DMA:LEV:ABS",                    ""},
    {AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT,                 ":DMA:RAD:STAN:ALPH",                   ""},
    {AGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE,                      ":DMA:RAD:STAN:SRAT",                   ""},
    {AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE,              ":DISP:ASK:VIEW:WIND:TRAC:Y:RVAL",      ""},
    {AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE,              ":DISP:FSK:VIEW:WIND:TRAC:Y:RVAL",      ""},
    {AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE,               ":DISP:AM:VIEW:WIND:TRAC:Y:RVAL",       ""},
    {AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_REFERENCE_VALUE,               ":DISP:FM:VIEW:WIND:TRAC:Y:RVAL",       ""},
    {AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION,                     ":DISP:ASK:VIEW:WIND:TRAC:Y:PDIV",      ""},
    {AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION,                     ":DISP:FSK:VIEW:WIND:TRAC:Y:PDIV",      ""},
    {AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION,                      ":DISP:AM:VIEW:WIND:TRAC:Y:PDIV",       ""},
    {AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION,                      ":DISP:FM:VIEW:WIND:TRAC:Y:PDIV",       ""},
    {AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE,            ":DISP:AMA:VIEW:WIND:TRAC:X:RVAL",      ""},
    {AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION,                   ":DISP:AMA:VIEW:WIND:TRAC:X:PDIV",      ""},
    {AGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT,          ":CALC:DMA:LIM:FOFF:UPP",               ""},
    {AGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT,            ":CALC:AMA:LIM:FOFF:UPP",               ""},
    {AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT,                    ":CALC:FM:LIM:FDLL:LOW",                ""},
    {AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT,                   ":CALC:FSK:LIM:FDEV:LOW",               ""},
    {AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT,                    ":CALC:FM:LIM:FDUL:UPP",                ""},
    {AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT,                   ":CALC:FSK:LIM:FDEV:UPP",               ""},
    {AGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT,                                  ":CALC:AM:LIM:MDEP:UPP",                ""},
    {AGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT,                                 ":CALC:ASK:LIM:AMD:UPP",                ""},
    {AGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT,                                  ":CALC:AM:LIM:MDEP:UPP",                ""},
    {AGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT,                                 ":CALC:ASK:LIM:AMD:UPP",                ""},
    {AGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT,                       ":CALC:AMA:LIM:POW:UPP",                ""},
    {AGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT,                     ":CALC:DMA:LIM:POW:UPP",                ""},
    {AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH,                                    ":AMA:IFBW",                            ""},
    {AGN934XNI_ATTR_EXTERNAL_GAIN,                                         ":CORR:OFFS",                           ""},
    {AGN934XNI_ATTR_CARRIER_FREQUENCY_STEP,                                ":FREQ:CARR:STEP",                      ""},
    {AGN934XNI_ATTR_CARRIER_FREQUENCY,                                     ":FREQ:CARR",                           ""},
    {AGN934XNI_ATTR_SEM_CENTER_FREQUENCY,                                  ":SEM:FREQ:CENT",                       ""},
    {AGN934XNI_ATTR_SEM_CHANNEL_SPAN,                                      ":SEM:FREQ:SPAN",                       ""},
    {AGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE,                             ":SEM:CARR",                            ""},
    {AGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH,                              ":SEM:BAND",                            ""},
    {AGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH,                       ":SEM:BAND:INT",                        ""},
    {AGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE,                  ":TRIG:HYST",                           ""},
    {AGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME,                      "TRIG:HOLD",                            ""},
    {AGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME,                        ":TRIG:DEL",                            ""},
    {AGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL,                             ":TRIG:LEV",                            ""},
    {AGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE,                         ":CALC1:LIM:LOW",                       ""},
    {AGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE,                         ":CALC1:LIM:UPP",                       ""},
    {AGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME,                          ":SWE:TIME",                            ""},
    {AGN934XNI_ATTR_POWER_METER_GATE_START_TIME,                           ":SWE:OFFS:TIME",                       ""},
    {AGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE,                       ":SENS:TRAC:Y:SCAL",                    ""},
    {AGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE,                         ":SENS:TRAC:YMAX",                      ""},
    {AGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME,                        ":SENS:TRAC:TIME",                      ""},
    {AGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME,                        ":SENS:TRAC:OFFS:TIME",                 ""},
    {AGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME,                 ":MEAS:INT:TIME",                       ""},
    {AGN934XNI_ATTR_POWER_METER_OFFSET_VALUE,                              ":CORR:GAIN2",                          ""},
    {AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE,                     ":CORR:CSET1",                          ""},
    {AGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY,                          ":FREQ",                                ""},
    {AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE,                            ":CALC:LLIN",                           ":STHR"},
    {AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE,                               ":CALC:LLIN",                           ":MARG"},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION,   ":CAT:SCAL:DIV",                        ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL,":CAT:SCAL:REF",                        ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_STOP,                  ":CAT:DIST:STOP",                       ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_START,                 ":CAT:DIST:STAR",                       ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN,                 ":CAT:FREQ:SPAN",                       ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY,               ":CAT:FREQ:CENT",                       ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY,                 ":CAT:FREQ:STOP",                       ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY,                ":CAT:FREQ:STAR",                       ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR,          ":CAT:CABL:VELF",                       ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_ATTENUATION,              ":CAT:CABL:ATT",                        ""},
    {AGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE,                           ":ACPR:RRC:ALPH",                       ""},
    {AGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH,                              ":CHP:RRC:BW",                          ""},
    {AGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE,                            ":CHP:RRC:ALPH",                        ""},
    {AGN934XNI_ATTR_GATE_LENGTH,                                           ":SWE:EGAT:LENG",                       ""},
    {AGN934XNI_ATTR_GATE_DELAY,                                            ":SWE:EGAT:DEL",                        ""},
    {AGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME,                                  ":SWE:EGAT:TIME",                       ""},
    {VI_NULL,               VI_NULL,         VI_NULL}
};

static agn934xniStringValueTable agn934xniViInt32_commands = 
{   /* Attribute ID,        SCPI command          */
    {AGN934XNI_ATTR_AVERAGE_COUNT,                                         ":AVER:",                               ":COUN"},   
    {AGN934XNI_ATTR_TG_NORMAILIZE_REFERENCE_POSITION,                      ":DISP:WIND:TRAC:Y:NRP",                ""},
    {AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH,               ":DMA:MEAS:LENG",                       ""},
    {AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS,                   ":DMA:RAD:STAN:FILT:SYMB",              ""},
    {AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION,                 ":DISP:DMA:VIEW:WIND:TRAC:X:PDIV",      ""},
    {AGN934XNI_ATTR_AM_FM_AVERAGE_COUNT,                                   ":AMA:AVER:COUN",                       ""},
    {AGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT,                                 ":DMA:AVER:COUN",                       ""},
    {AGN934XNI_ATTR_SEM_AVERAGE_NUMBER,                                    ":SEM:AVER:COUN",                       ""},
    {AGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT,                       ":AVER:VID:COUN",                       ""},
    {AGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER,                      ":AVER:COUN",                           ""},
    {AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER,           ":CAT:AVER:COUN",                       ""},
    {AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE,          ":DISP:DMA:VIEW:WIND:TRAC:X:RVAL",      ""},           
    {VI_NULL,               VI_NULL,         VI_NULL}
};


/* These attribute arrays are for 9322C attributes only */
/* The attributes valid in demodulation mode. */
static ViAttr agn934xniModulationArray[] = 
{
    AGN934XNI_ATTR_PREAMPLIFIER_ENABLE,
    AGN934XNI_ATTR_AUTO_CARRIER_FREQUENCY_ENABLE,
    AGN934XNI_ATTR_CARRIER_FREQUENCY_STEP,
    AGN934XNI_ATTR_CARRIER_FREQUENCY,
    AGN934XNI_ATTR_DEMODULATION_MODE,
    VI_NULL
};

/* The attributes valid in demodulation AM mode. */
static ViAttr agn934xniAMArray[] = 
{
    AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_COUPLING_ENABLE,
    AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_REFERENCE_POSITION,
    AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE,
    AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION,
    AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_COUPLING_ENABLE,
    AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_POSITION,
    AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE,
    AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION,
    AGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT,
    AGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT,
    AGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT,
    AGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT,
    AGN934XNI_ATTR_AM_FM_LIMIT_STATE,
    AGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER,
    AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_AUTO,
    AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH,
    AGN934XNI_ATTR_AM_FM_DETECTOR_PEAK_HOLD_ENABLE,
    AGN934XNI_ATTR_AM_FM_DETECTOR_TYPE,
    AGN934XNI_ATTR_AM_FM_AVERAGE_ENABLE,
    AGN934XNI_ATTR_AM_FM_AVERAGE_COUNT,
    VI_NULL
};

/* The attributes valid in demodulation FM mode. */
static ViAttr agn934xniFMArray[] = 
{
    AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_COUPLING_ENABLE,
    AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_REFERENCE_POSITION,
    AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_COUPLING_ENABLE,
    AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_POSITION,
    AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE,
    AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION,
    AGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT,
    AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT,
    AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT,
    AGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER,
    AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_AUTO,
    AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH,
    AGN934XNI_ATTR_AM_FM_DETECTOR_PEAK_HOLD_ENABLE,
    AGN934XNI_ATTR_AM_FM_DETECTOR_TYPE,
    AGN934XNI_ATTR_AM_FM_AVERAGE_ENABLE,
    AGN934XNI_ATTR_AM_FM_AVERAGE_COUNT,
    AGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT,
    AGN934XNI_ATTR_AM_FM_LIMIT_STATE, 
    VI_NULL
};

/* The attributes valid in demodulation ASK mode.  */
static ViAttr agn934xniASKArray[] = 
{
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_ENABLE,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_EXTERNAL_TRIGGER_TYPE,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_TYPE,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_COUPLING_ENABLE,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_REFERENCE_POSITION,
    AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE,
    AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_COUPLING_ENABLE,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_POSITION,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION,
    AGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT,
    AGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT,
    AGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT,
    AGN934XNI_ATTR_ASK_FSK_AVERAGE_ENABLE,
    AGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT,
    AGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT,
    AGN934XNI_ATTR_ASK_FSK_LIMIT_STATE, 
    VI_NULL
};

/* The attributes valid in demodulation FSK mode.  */
static ViAttr agn934xniFSKArray[] = 
{
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_ENABLE,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_EXTERNAL_TRIGGER_TYPE,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_TYPE,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_COUPLING_ENABLE,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_REFERENCE_POSITION,
    AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE,
    AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_COUPLING_ENABLE,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_POSITION,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE,
    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION,
    AGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT,
    AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT,
    AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT,
    AGN934XNI_ATTR_ASK_FSK_LIMIT_STATE,
    AGN934XNI_ATTR_ASK_FSK_AVERAGE_ENABLE,
    AGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT,
    VI_NULL
};

/* The attributes valid in SEM measurement type.  */
static ViAttr agn934xniSEMArray[] = 
{
    AGN934XNI_ATTR_SEM_FAIL_LOG_ENABLE,
    AGN934XNI_ATTR_SEM_FAIL_HOLD_ENABLE,
    AGN934XNI_ATTR_SEM_FAIL_BEEP_ENABLE,
    AGN934XNI_ATTR_SEM_MEASUREMENT_TYPE,
    AGN934XNI_ATTR_SEM_CENTER_FREQUENCY,
    AGN934XNI_ATTR_SEM_CHANNEL_SPAN,
    AGN934XNI_ATTR_SEM_AUTO_TOTAL_POWER_REFERENCE_ENABLE,
    AGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE,
    AGN934XNI_ATTR_SEM_AUTO_RESOLUTION_BANDWIDTH_ENABLE,
    AGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH,
    AGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH,
    AGN934XNI_ATTR_SEM_AVERAGE_ENABLE,
    AGN934XNI_ATTR_SEM_AVERAGE_NUMBER,
    VI_NULL
};

/* The attributes valid in ACPR measurement type.  */
static ViAttr agn934xniACPRArray[] = 
{
    AGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE,
    AGN934XNI_ATTR_ACPR_RRC_FILTER_ENABLE,
    VI_NULL
};

/* The attributes valid in CHP measurement type.  */
static ViAttr agn934xniCHPArray[] = 
{
    AGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH,
    AGN934XNI_ATTR_CHP_RRC_FILTER_ENABLE,
    AGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE,
    VI_NULL
};

/* The attributes valid in Power Meter mode.    */
static ViAttr agn934xniPowerMeterArray[] = 
{
    AGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE,
    AGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME,
    AGN934XNI_ATTR_POWER_METER_TRIGGER_SLOPE,
    AGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME,
    AGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL,
    AGN934XNI_ATTR_POWER_METER_AUTO_TRIGGER_LEVEL_ENABLE,
    AGN934XNI_ATTR_POWER_METER_TRIGGER_SOURCE,
    AGN934XNI_ATTR_POWER_METER_TRIGGER_TYPE,
    AGN934XNI_ATTR_POWER_METER_LIMIT_BEEP_ENABLE,
    AGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE,
    AGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE,
    AGN934XNI_ATTR_POWER_METER_LIMIT_ENABLE,
    AGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME,
    AGN934XNI_ATTR_POWER_METER_GATE_START_TIME,
    AGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE,
    AGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE,
    AGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME,
    AGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME,
    AGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT,
    AGN934XNI_ATTR_POWER_METER_AUTO_VIDEO_AVERAGE_COUNT_ENABLE,
    AGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE,
    AGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME,
    AGN934XNI_ATTR_POWER_METER_AVERAGE_STEP_DETECT_ENABLE,
    AGN934XNI_ATTR_POWER_METER_AUTO_AVERAGE_COUNT_ENABLE,
    AGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER,
    AGN934XNI_ATTR_POWER_METER_AVERAGE_ENABLE,
    AGN934XNI_ATTR_POWER_METER_OFFSET_VALUE,
    AGN934XNI_ATTR_POWER_METER_OFFSET_ENABLE,
    AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE,
    AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_ENABLE,
    AGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY,
    AGN934XNI_ATTR_POWER_METER_AUTO_POWER_RANGE_ENABLE,
    AGN934XNI_ATTR_POWER_METER_POWER_RANGE,
    AGN934XNI_ATTR_POWER_METER_SWEEP_STATE,
    AGN934XNI_ATTR_POWER_METER_ZEROING_TYPE,
    VI_NULL
};

/* The attributes valid in Reflection Measurement mode.  */
static ViAttr agn934xniReflectionMeasurementArray[] = 
{
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_MARKER_CONTINUOUS_VALLEY_ENABLE,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_ENABLE,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_DISPLAY_TYPE,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DTF_FREQUENCY_DOMAIN_ENABLE,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_UNIT,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_STOP,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_START,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_ATTENUATION,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_TYPE,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_IIM_ENABLE,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CALIBRATION_TYPE,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TYPE,
    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISPLAY_TYPE,
    VI_NULL
};

/* The attributes valid in Spectrum Analyzer mode. */
static ViAttr agn934xniSAArray[] = 
{
    AGN934XNI_ATTR_GATE_SOURCE,
    AGN934XNI_ATTR_GATE_LENGTH,
    AGN934XNI_ATTR_GATE_DELAY,
    AGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME,
    AGN934XNI_ATTR_GATE_VIEW_ENABLE,
    AGN934XNI_ATTR_GATED_SWEEP_ENABLE,
    VI_NULL
};

/* The attributes valid in Tracking Generator mode. */
static ViAttr agn934xniTGArray[] = 
{
    AGN934XNI_ATTR_GATE_SOURCE,
    AGN934XNI_ATTR_GATE_LENGTH,
    AGN934XNI_ATTR_GATE_DELAY,
    AGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME,
    AGN934XNI_ATTR_GATE_VIEW_ENABLE,
    AGN934XNI_ATTR_GATED_SWEEP_ENABLE,
    VI_NULL
};

static ViString agn934xni_SEMOffsetDataType[] = {"", "LOW:POW", "UPP:POW", "LOW:PEAK:FREQ", "UPP:PEAK:FREQ"}; 
static ViString agn934xni_TraceDataType[] = {"", "DATA", "MEM"};  
static ViString agn934xni_SEMFailFlagType[] = {"", "LOW", "UPP"};
static ViString agn934xni_SEMOffsetMaskType[] = {"", "ABS", "REL", "AND", "OR"};
static ViString agn934xni_SEMOffsetCharType[] = {"", "FREQ:STAR", "FREQ:STOP", "SWE", "BAND", "BAND:MEAS", "STAR:ABS", "STOP:ABS", "STAR:RCAR", "STOP:RCAR"};

/*****************************************************************************
 *----------------- Value Definition and Range Tables -----------------------*
 *****************************************************************************/

static IviRangeTableEntry attrAmplitudeUnitsRangeTableEntries[] =
    {
        {AGN934XNI_VAL_AMPLITUDE_UNITS_DBM, 0, 0, "DBM", 0},
        {AGN934XNI_VAL_AMPLITUDE_UNITS_DBMV, 0, 0, "DBMV", 1},
        {AGN934XNI_VAL_AMPLITUDE_UNITS_DBUV, 0, 0, "DBUV", 2},
        {AGN934XNI_VAL_AMPLITUDE_UNITS_VOLT, 0, 0, "V", 3},
        {AGN934XNI_VAL_AMPLITUDE_UNITS_WATT, 0, 0, "W", 4},
        {AGN934XNI_VAL_AMPLITUDE_UNITS_DBMVEMF, 0, 0, "DBMVEMF", 5},
        {AGN934XNI_VAL_AMPLITUDE_UNITS_DBUVEMF, 0, 0, "DBUVEMF", 6},
        {AGN934XNI_VAL_AMPLITUDE_UNITS_VEMF, 0, 0, "VEMF", 7},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrAmplitudeUnitsRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrAmplitudeUnitsRangeTableEntries,
    };

static IviRangeTableEntry attrDetectorTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_DETECTOR_TYPE_AVERAGE, 0, 0, "AVER", 0},
        {AGN934XNI_VAL_DETECTOR_TYPE_MAX_PEAK, 0, 0, "POS", 1},
        {AGN934XNI_VAL_DETECTOR_TYPE_MIN_PEAK, 0, 0, "NEG", 2},
        {AGN934XNI_VAL_DETECTOR_TYPE_SAMPLE, 0, 0, "SAMP", 3},
        {AGN934XNI_VAL_DETECTOR_TYPE_NORMAL, 0, 0, "NORM", 4},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrDetectorTypeRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrDetectorTypeRangeTableEntries,
    };

static IviRangeTableEntry attrTraceTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_TRACE_TYPE_CLEAR_WRITE, 0, 0, "WRIT", 0},
        {AGN934XNI_VAL_TRACE_TYPE_MAX_HOLD, 0, 0, "MAXH", 1},
        {AGN934XNI_VAL_TRACE_TYPE_MIN_HOLD, 0, 0, "MINH", 2},
        {AGN934XNI_VAL_TRACE_TYPE_VIEW, 0, 0, "VIEW", 3},
        {AGN934XNI_VAL_TRACE_TYPE_STORE, 0, 0, "BLAN", 4},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrTraceTypeRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrTraceTypeRangeTableEntries,
    };

static IviRangeTableEntry attrVerticalScaleRangeTableEntries[] =
    {
        {AGN934XNI_VAL_VERTICAL_SCALE_LINEAR, 0, 0, "LIN", 0},
        {AGN934XNI_VAL_VERTICAL_SCALE_LOGARITHMIC, 0, 0, "LOG", 1},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrVerticalScaleRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrVerticalScaleRangeTableEntries,
    };

static IviRangeTableEntry attrTriggerSourceRangeTableEntries[] =
    {
        {AGN934XNI_VAL_TRIGGER_SOURCE_EXTERNAL, 0, 0, "EXT", 0},
        {AGN934XNI_VAL_TRIGGER_SOURCE_IMMEDIATE, 0, 0, "IMM", 1},
        {AGN934XNI_VAL_TRIGGER_SOURCE_VIDEO, 0, 0, "VID", 2},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrTriggerSourceRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrTriggerSourceRangeTableEntries,
    };

static IviRangeTableEntry attrExternalTriggerSlopeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_EXTERNAL_TRIGGER_SLOPE_POSITIVE, 0, 0, "POS", 0},
        {AGN934XNI_VAL_EXTERNAL_TRIGGER_SLOPE_NEGATIVE, 0, 0, "NEG", 1},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrExternalTriggerSlopeRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrExternalTriggerSlopeRangeTableEntries,
    };

static IviRangeTableEntry attrVideoTriggerSlopeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_VIDEO_TRIGGER_SLOPE_POSITIVE, 0, 0, "", 0},
        {AGN934XNI_VAL_VIDEO_TRIGGER_SLOPE_NEGATIVE, 0, 0, "", 1},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrVideoTriggerSlopeRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrVideoTriggerSlopeRangeTableEntries,
    };

static IviRangeTableEntry attrMarkerTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_MARKER_TYPE_NORMAL, 0, 0, "POS", 0},
        {AGN934XNI_VAL_MARKER_TYPE_DELTA, 0, 0, "DELT", 1},
        {AGN934XNI_VAL_MARKER_TYPE_OFF, 0, 0, "OFF", 2},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrMarkerTypeRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrMarkerTypeRangeTableEntries,
    };

static IviRangeTableEntry attrInputImpedanceRangeTableEntries[] =
    {
        {AGN934XNI_VAL_INPUT_IMPEDANCE_50_OHM, 0, 0, "OHM50", 0},
        {AGN934XNI_VAL_INPUT_IMPEDANCE_75_OHM, 0, 0, "OHM75", 1},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrInputImpedanceRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrInputImpedanceRangeTableEntries,
    };

static IviRangeTableEntry attrResolutionBandwidthRangeTableEntries[] =
    {
        {10, 3e6, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrResolutionBandwidthRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrResolutionBandwidthRangeTableEntries,
    };

static IviRangeTableEntry attrVideoBandwidthRangeTableEntries[] =
    {
        {1, 3e6, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrVideoBandwidthRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrVideoBandwidthRangeTableEntries,
    };

static IviRangeTableEntry attrUnitsPerDivisionRangeTableEntries[] =
    {
        {1, 1, 1, "", 0},
        {2, 2, 2, "", 1},
        {3, 5, 5, "", 2},
        {6, 10, 10, "", 3},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrUnitsPerDivisionRangeTable =
    {
        IVI_VAL_COERCED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrUnitsPerDivisionRangeTableEntries,
    };

static IviRangeTableEntry attrLimitLineTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_LIMIT_LINE_UPPER, 0, 0, "UPP", 0},
        {AGN934XNI_VAL_LIMIT_LINE_LOWER, 0, 0, "LOW", 1},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrLimitLineTypeRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrLimitLineTypeRangeTableEntries,
    };

static IviRangeTableEntry attrLimitLineModeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_LIMIT_LINE_FIXED, 0, 0, "FIX", 0},
        {AGN934XNI_VAL_LIMIT_LINE_RELATIVE, 0, 0, "REL", 1},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrLimitLineModeRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrLimitLineModeRangeTableEntries,
    };

static IviRangeTableEntry attrLimitLineXValueRangeTableEntries[] =
    {
        {AGN934XNI_VAL_LIMIT_LINE_FREQUENCY, 0, 0, "FREQ", 0},
        {AGN934XNI_VAL_LIMIT_LINE_TIME, 0, 0, "TIME", 1},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrLimitLineXValueRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrLimitLineXValueRangeTableEntries,
    };

static IviRangeTableEntry attrMarkerPeakSearchRangeTableEntries[] =
    {
        {AGN934XNI_VAL_MARKER_SEARCH_HIGHEST, 0, 0, "", 0},
        {AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK_LEFT, 0, 0, "LEFT", 1},
        {AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK_RIGHT, 0, 0, "RIGH", 2},
        {AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK, 0, 0, "NEXT", 3},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrMarkerPeakSearchRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrMarkerPeakSearchRangeTableEntries,
    };

static IviRangeTableEntry attrMarkerInstrumentSettingRangeTableEntries[] =
    {
        {AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_CENTER, 0, 0, "CENT", 0},
        {AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_START, 0, 0, "STAR", 1},
        {AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_STOP, 0, 0, "STOP", 2},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrMarkerInstrumentSettingRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrMarkerInstrumentSettingRangeTableEntries,
    };

static IviRangeTableEntry attrMarkerFunctionRangeTableEntries[] =
    {
        {AGN934XNI_VAL_MARKER_FUNCTION_FCOUNT, 0, 0, "FCO", 0},
        {AGN934XNI_VAL_MARKER_FUNCTION_NOISE, 0, 0, "NOIS", 1},
        {AGN934XNI_VAL_MARKER_FUNCTION_OFF, 0, 0, "OFF", 2},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrMarkerFunctionRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrMarkerFunctionRangeTableEntries,
    };

static IviRangeTableEntry attrPeakSearchModeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_PEAK_SEARCH_MODE_MAXIMUM, 0, 0, "MAX", 0},
        {AGN934XNI_VAL_PEAK_SEARCH_MODE_MINIMUM, 0, 0, "MIN", 1},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPeakSearchModeRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPeakSearchModeRangeTableEntries,
    };

static IviRangeTableEntry attrMarkerXReadoutRangeTableEntries[] =
    {
        {AGN934XNI_VAL_MARKER_X_READOUT_FREQUENCY, 0, 0, "FREQ", 0},
        {AGN934XNI_VAL_MARKER_X_READOUT_TIME, 0, 0, "TIME", 1},
        {AGN934XNI_VAL_MARKER_X_READOUT_PERIOD, 0, 0, "PER", 2},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrMarkerXReadoutRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrMarkerXReadoutRangeTableEntries,
    };

static IviRangeTableEntry attrMarkerDemodulationFunctionRangeTableEntries[] =
    {
        {AGN934XNI_VAL_MARKER_DEMODULATION_FUNCTION_AM, 0, 0, "AM", 0},
        {AGN934XNI_VAL_MARKER_DEMODULATION_FUNCTION_FM, 0, 0, "FM", 1},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrMarkerDemodulationFunctionRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrMarkerDemodulationFunctionRangeTableEntries,
    };

static IviRangeTableEntry attrInstrumentModeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER,      0, 0, "SA",   0},
        {AGN934XNI_VAL_INSTRUMENT_MODE_TRACKING_GENERATOR,     0, 0, "TGEN", 1},
        {AGN934XNI_VAL_INSTRUMENT_MODE_POWERMETER,             0, 0, "POWM", 2},
        {AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION,           0, 0, "MA",   3},
        {AGN934XNI_VAL_INSTRUMENT_MODE_REFLECTION_MEASUREMENT, 0, 0, "CAT",  4},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrInstrumentModeRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrInstrumentModeRangeTableEntries,
    };

static IviRangeTableEntry attrMeasurementTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_MEASUREMENT_TYPE_OFF,  0, 0, "OFF",  0},
        {AGN934XNI_VAL_MEASUREMENT_TYPE_CHP,  0, 0, "CHP",  1},
        {AGN934XNI_VAL_MEASUREMENT_TYPE_ACPR, 0, 0, "ACPR", 2},
        {AGN934XNI_VAL_MEASUREMENT_TYPE_OBW,  0, 0, "OBW",  3},
        {AGN934XNI_VAL_MEASUREMENT_TYPE_SM,   0, 0, "SPEC", 4},
        {AGN934XNI_VAL_MEASUREMENT_TYPE_SEM,  0, 0, "SEM",  5},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrMeasurementTypeRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrMeasurementTypeRangeTableEntries,
    };

static IviRangeTableEntry attrAcprMainChannelIntergrationBandwidthRangeTableEntries[] =
    {
        {300, 25e6, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrAcprMainChannelIntergrationBandwidthRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrAcprMainChannelIntergrationBandwidthRangeTableEntries,
    };

static IviRangeTableEntry attrAverageCountRangeTableEntries[] =
    {
        {1, 8192, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrAverageCountRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrAverageCountRangeTableEntries,
    };

static IviRangeTableEntry attrAverageTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_AVERAGE_TYPE_LOGPOWER, 0, 0, "LOGP", 0},
        {AGN934XNI_VAL_AVERAGE_TYPE_POWER, 0, 0, "POW", 1},
        {AGN934XNI_VAL_AVERAGE_TYPE_VOLTAGE, 0, 0, "VOLT", 2},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrAverageTypeRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrAverageTypeRangeTableEntries,
    };

static IviRangeTableEntry attrVbwRbwRatioRangeTableEntries[] =
    {
        {0.00001, 3.0e6, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrVbwRbwRatioRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrVbwRbwRatioRangeTableEntries,
    };

static IviRangeTableEntry attrSweepModeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_SWEEP_MODE_NORMAL, 0, 0, "SWE", 0},
        {AGN934XNI_VAL_SWEEP_MODE_FAST, 0, 0, "FFT", 1},
        {AGN934XNI_VAL_SWEEP_MODE_AUTO, 0, 0, "AUTO", 2},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrSweepModeRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrSweepModeRangeTableEntries,
    };

static IviRangeTableEntry attrObwMethodRangeTableEntries[] =
    {
        {AGN934XNI_VAL_OBW_METHOD_PERCENT, 0, 0, "PERC", 0},
        {AGN934XNI_VAL_OBW_METHOD_DBC, 0, 0, "DBC", 1},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrObwMethodRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrObwMethodRangeTableEntries,
    };

static IviRangeTableEntry attrObwPowerPercentageRangeTableEntries[] =
    {
        {10, 99, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrObwPowerPercentageRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrObwPowerPercentageRangeTableEntries,
    };

static IviRangeTableEntry attrObwPowerLevelRangeTableEntries[] =
    {
        {0.1, 100, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrObwPowerLevelRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrObwPowerLevelRangeTableEntries,
    };

static IviRangeTableEntry attrTgNormailizeReferencePositionRangeTableEntries[] =
    {
        {0, 10, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrTgNormailizeReferencePositionRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrTgNormailizeReferencePositionRangeTableEntries,
    };

static IviRangeTableEntry attrTraceMathTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_TRACE_MATH_TYPE_LOG_POWER, 0, 0, "LOGP", 0},
        {AGN934XNI_VAL_TRACE_MATH_TYPE_POWER, 0, 0, "POW", 1},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrTraceMathTypeRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrTraceMathTypeRangeTableEntries,
    };

static IviRangeTableEntry attrReferenceLevelOffsetRangeTableEntries[] =
    {
        {-327.6, 327.6, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrReferenceLevelOffsetRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrReferenceLevelOffsetRangeTableEntries,
    };

static IviRangeTableEntry attrFrequencySpanModeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_FREQUENCY_SPAN_MODE_FULL, 0, 0, "FULL", 0},
        {AGN934XNI_VAL_FREQUENCY_SPAN_MODE_ZERO, 0, 0, "ZERO", 1},
        {AGN934XNI_VAL_FREQUENCY_SPAN_MODE_PREVIOUS, 0, 0, "PREV", 2},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrFrequencySpanModeRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrFrequencySpanModeRangeTableEntries,
    };

static IviRangeTableEntry attrInstModelRangeTableEntries[] =
	{
		{AGN934XNI_VAL_MODEL_N9342C, 0, 0, "", 1},
		{AGN934XNI_VAL_MODEL_N9343C, 0, 0, "", 2},
		{AGN934XNI_VAL_MODEL_N9344C, 0, 0, "", 3},
		{AGN934XNI_VAL_MODEL_N9322C, 0, 0, "", 4},
		{AGN934XNI_VAL_MODEL_N9321C, 0, 0, "", 5},
		{AGN934XNI_VAL_MODEL_N9323C, 0, 0, "", 6},
		{AGN934XNI_VAL_MODEL_N9324C, 0, 0, "", 7},
		{IVI_RANGE_TABLE_LAST_ENTRY}
	};

static IviRangeTable attrInstModelRangeTable =
	{
		IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrInstModelRangeTableEntries,
	};

static IviRangeTableEntry attrDemodulationModeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_DEMODULATION_MODE_AM, 0, 0, "AM", 0},
        {AGN934XNI_VAL_DEMODULATION_MODE_FM, 0, 0, "FM", 1},
        {AGN934XNI_VAL_DEMODULATION_MODE_ASK, 0, 0, "ASK", 2},
        {AGN934XNI_VAL_DEMODULATION_MODE_FSK, 0, 0, "FSK", 3},
        {AGN934XNI_VAL_DEMODULATION_MODE_NONE, 0, 0, "NULL", 4},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrDemodulationModeRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrDemodulationModeRangeTableEntries,
    };

static IviRangeTableEntry attrCarrierFrequencyRangeTableEntries[] =
    {
        {2.5e6, 7e9, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrCarrierFrequencyRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrCarrierFrequencyRangeTableEntries,
    };

static IviRangeTableEntry attrExternalGainRangeTableEntries[] =
    {
        {0, 51, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrExternalGainRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrExternalGainRangeTableEntries,
    };

static IviRangeTableEntry attrDemodulationDetectorTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_POSITIVE_PEAK, 0, 0, "PPK", 0},
        {AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_NEGATIVE_PEAK, 0, 0, "NPK", 0},
        {AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_AVERAGE_PEAK, 0, 0, "PNPK", 0},
        {AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_RMS, 0, 0, "RMS", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrDemodulationDetectorTypeRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrDemodulationDetectorTypeRangeTableEntries,
    };

static IviRangeTableEntry attrEqualLowPassFilterRangeTableEntries[] =
    {
        {AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_AUTO, 0, 0, "AUTO", 0},
        {AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_OFF, 0, 0, "OFF", 0},
        {AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW6, 0, 0, "IFBW6", 0},
        {AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW20, 0, 0, "IFBW20", 0},
        {AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW60, 0, 0, "IFBW60", 0},
        {AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW200, 0, 0, "IFBW200", 0},
        {AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW600, 0, 0, "IFBW600", 0},
        {AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW2000, 0, 0, "IFBW2000", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrEqualLowPassFilterRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrEqualLowPassFilterRangeTableEntries,
    };

static IviRangeTableEntry attrCarrierPowerUpperLimitRangeTableEntries[] =
    {
        {-100, 30, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrCarrierPowerUpperLimitRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrCarrierPowerUpperLimitRangeTableEntries,
    };

static IviRangeTableEntry attrDepthUpperLimitRangeTableEntries[] =
    {
        {0.1, 100, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrDepthUpperLimitRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrDepthUpperLimitRangeTableEntries,
    };

static IviRangeTableEntry attrFrequencyDeviationLimitRangeTableEntries[] =
    {
        {1, 5e5, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrFrequencyDeviationLimitRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrFrequencyDeviationLimitRangeTableEntries,
    };

static IviRangeTableEntry attrDemodulationXScaleReferencePositionRangeTableEntries[] =
    {
        {AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_LEFT, 0, 0, "LEFT", 0},
        {AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_CENTER, 0, 0, "CENT", 0},
        {AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_RIGHT, 0, 0, "RIGH", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrDemodulationXScaleReferencePositionRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrDemodulationXScaleReferencePositionRangeTableEntries,
    };

static IviRangeTableEntry attrDemodulationYScaleReferencePositionRangeTableEntries[] =
    {
        {AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_TOP, 0, 0, "TOP", 0},
        {AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_CENTER, 0, 0, "CENT", 0},
        {AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_BOTTOM, 0, 0, "BOTT", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrDemodulationYScaleReferencePositionRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrDemodulationYScaleReferencePositionRangeTableEntries,
    };

static IviRangeTableEntry attrDemodulationViewTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_WAVEFORM, 0, 0, "WAV", 0},
        {AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_SYMBOL, 0, 0, "SYMB", 0},
        {AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_EYE, 0, 0, "EYE", 0},
        {AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_ERROR, 0, 0, "ERR", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrDemodulationViewTypeRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrDemodulationViewTypeRangeTableEntries,
    };

static IviRangeTableEntry attrDemodulationSymbolRateRangeTableEntries[] =
    {
        {100, 100000, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrDemodulationSymbolRateRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrDemodulationSymbolRateRangeTableEntries,
    };

static IviRangeTableEntry attrDemodulationFilterRangeTableEntries[] =
    {
        {AGN934XNI_VAL_DEMODULATION_FILTER_OFF, 0, 0, "NONE", 0},
        {AGN934XNI_VAL_DEMODULATION_FILTER_RNYQUIST, 0, 0, "RNYQ", 0},
        {AGN934XNI_VAL_DEMODULATION_FILTER_NYQUIST, 0, 0, "NYQ", 0},
        {AGN934XNI_VAL_DEMODULATION_FILTER_GAUSSIAN, 0, 0, "GAUS", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrDemodulationFilterRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrDemodulationFilterRangeTableEntries,
    };

static IviRangeTableEntry attrDemodulationFilterSymbolsRangeTableEntries[] =
    {
        {2, 25, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrDemodulationFilterSymbolsRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrDemodulationFilterSymbolsRangeTableEntries,
    };

static IviRangeTableEntry attrDemodulationFilterAlphaBbtRangeTableEntries[] =
    {
        {0.2, 1, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrDemodulationFilterAlphaBbtRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrDemodulationFilterAlphaBbtRangeTableEntries,
    };

static IviRangeTableEntry attrDemodulationMeasurementLengthRangeTableEntries[] =
    {
        {20, 1100, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrDemodulationMeasurementLengthRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrDemodulationMeasurementLengthRangeTableEntries,
    };

static IviRangeTableEntry attrDemodulationTriggerTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_DEMODULATION_TRIGGER_TYPE_IMMEDIATE, 0, 0, "IMM", 0},
        {AGN934XNI_VAL_DEMODULATION_TRIGGER_TYPE_EXTERNAL, 0, 0, "EXT", 0},
        {AGN934XNI_VAL_DEMODULATION_TRIGGER_TYPE_RFTRIGGER, 0, 0, "RFTR", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrDemodulationTriggerTypeRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrDemodulationTriggerTypeRangeTableEntries,
    };

static IviRangeTableEntry attrDemodulationRfTriggerLevelRangeTableEntries[] =
    {
        {-40, 10, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrDemodulationRfTriggerLevelRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrDemodulationRfTriggerLevelRangeTableEntries,
    };

static IviRangeTableEntry attrDemodulationExternalTriggerTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_DEMODULATION_EXTERNAL_TRIGGER_TYPE_POSITIVE, 0, 0, "POS", 0},
        {AGN934XNI_VAL_DEMODULATION_EXTERNAL_TRIGGER_TYPE_NEGATIVE, 0, 0, "NEG", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrDemodulationExternalTriggerTypeRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrDemodulationExternalTriggerTypeRangeTableEntries,
    };

static IviRangeTableEntry attrDemodulationTriggerDelayTimeRangeTableEntries[] =
    {
        {0, 200, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrDemodulationTriggerDelayTimeRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrDemodulationTriggerDelayTimeRangeTableEntries,
    };

static IviRangeTableEntry attrAmAskDemodulationYScaleReferenceValueRangeTableEntries[] =
    {
        {-50, 50, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrAmAskDemodulationYScaleReferenceValueRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrAmAskDemodulationYScaleReferenceValueRangeTableEntries,
    };

static IviRangeTableEntry attrFmFskDemodulationYScaleReferenceValueRangeTableEntries[] =
    {
        {-1e6, 1e6, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrFmFskDemodulationYScaleReferenceValueRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrFmFskDemodulationYScaleReferenceValueRangeTableEntries,
    };

static IviRangeTableEntry attrAmAskDemodulationYScaleDivisionRangeTableEntries[] =
    {
        {0.1, 100, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrAmAskDemodulationYScaleDivisionRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrAmAskDemodulationYScaleDivisionRangeTableEntries,
    };

static IviRangeTableEntry attrAmFmDemodulationYScaleDivisionRangeTableEntries[] =
    {
        {1, 150000, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrAmFmDemodulationYScaleDivisionRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrAmFmDemodulationYScaleDivisionRangeTableEntries,
    };

static IviRangeTableEntry attrFskDemodulationYScaleDivisionRangeTableEntries[] =
    {
        {1, 150000, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrFskDemodulationYScaleDivisionRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrFskDemodulationYScaleDivisionRangeTableEntries,
    };

static IviRangeTableEntry attrFmDemodulationYScaleDivisionRangeTableEntries[] =
    {
        {1, 100000, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrFmDemodulationYScaleDivisionRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrFmDemodulationYScaleDivisionRangeTableEntries,
    };

static IviRangeTableEntry attrAskFskDemodulationXScaleReferenceValueRangeTableEntries[] =
    {
        {-400, 400, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrAskFskDemodulationXScaleReferenceValueRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrAskFskDemodulationXScaleReferenceValueRangeTableEntries,
    };

static IviRangeTableEntry attrAmFmDemodulationXScaleReferenceValueRangeTableEntries[] =
    {
        {-5, 5, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrAmFmDemodulationXScaleReferenceValueRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrAmFmDemodulationXScaleReferenceValueRangeTableEntries,
    };

static IviRangeTableEntry attrAskFskDemodulationXScaleDivisionRangeTableEntries[] =
    {
        {1, 40, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrAskFskDemodulationXScaleDivisionRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrAskFskDemodulationXScaleDivisionRangeTableEntries,
    };

static IviRangeTableEntry attrAmFmDemodulationXScaleDivisionRangeTableEntries[] =
    {
        {1e-9, 1, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrAmFmDemodulationXScaleDivisionRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrAmFmDemodulationXScaleDivisionRangeTableEntries,
    };

static IviRangeTableEntry attrAskFskCarrierFrequencyOffsetUpperLimitRangeTableEntries[] =
    {
        {-2e6, 2e6, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrAskFskCarrierFrequencyOffsetUpperLimitRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrAskFskCarrierFrequencyOffsetUpperLimitRangeTableEntries,
    };

static IviRangeTableEntry attrAmFmCarrierFrequencyOffsetUpperLimitRangeTableEntries[] =
    {
        {-1e6, 1e6, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrAmFmCarrierFrequencyOffsetUpperLimitRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrAmFmCarrierFrequencyOffsetUpperLimitRangeTableEntries,
    };

static IviRangeTableEntry attrDemodulationAverageCountRangeTableEntries[] =
    {
        {1, 100, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrDemodulationAverageCountRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrDemodulationAverageCountRangeTableEntries,
    };

static IviRangeTableEntry attrLimitLineMarginValueRangeTableEntries[] =
    {
        {-200, 200, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrLimitLineMarginValueRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrLimitLineMarginValueRangeTableEntries,
    };

static IviRangeTableEntry attrLimitLineThresholdValueRangeTableEntries[] =
    {
        {0, 100, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrLimitLineThresholdValueRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrLimitLineThresholdValueRangeTableEntries,
    };

static IviRangeTableEntry attrZeroingTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_ZEROING_TYPE_EXTERNAL, 0, 0, "EXT", 0},
        {AGN934XNI_VAL_ZEROING_TYPE_INTERNAL, 0, 0, "INT", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrZeroingTypeRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrZeroingTypeRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterSweepStateRangeTableEntries[] =
    {
        {AGN934XNI_VAL_POWER_METER_SWEEP_STATE_RUN, 0, 0, "RUN", 0},
        {AGN934XNI_VAL_POWER_METER_SWEEP_STATE_PAUSE, 0, 0, "PAU", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterSweepStateRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterSweepStateRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterPowerRangeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_POWER_METER_POWER_RANGE_UPPER, 0, 0, "UPP", 0},
        {AGN934XNI_VAL_POWER_METER_POWER_RANGE_LOWER, 0, 0, "LOW", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterPowerRangeRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterPowerRangeRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterCenterFrequencyRangeTableEntries[] =
    {
        {1e3, 9e10, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterCenterFrequencyRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterCenterFrequencyRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterReferencePowerValueRangeTableEntries[] =
    {
        {-200, 200, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterReferencePowerValueRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterReferencePowerValueRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterAverageCountNumberRangeTableEntries[] =
    {
        {1, 1024, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterAverageCountNumberRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterAverageCountNumberRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterMeasurementIntervalTimeRangeTableEntries[] =
    {
        {1e-3, 200, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterMeasurementIntervalTimeRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterMeasurementIntervalTimeRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterVideoBandwidthTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_POWER_METER_VIDEO_BANDWIDTH_TYPE_HIGH, 0, 0, "HIGH", 0},
        {AGN934XNI_VAL_POWER_METER_VIDEO_BANDWIDTH_TYPE_MEDIUM, 0, 0, "MED", 0},
        {AGN934XNI_VAL_POWER_METER_VIDEO_BANDWIDTH_TYPE_LOW, 0, 0, "LOW", 0},
        {AGN934XNI_VAL_POWER_METER_VIDEO_BANDWIDTH_TYPE_OFF, 0, 0, "OFF", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterVideoBandwidthTypeRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterVideoBandwidthTypeRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterTraceXStartTimeRangeTableEntries[] =
    {
        {0, 1, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterTraceXStartTimeRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterTraceXStartTimeRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterTraceXScaleTimeRangeTableEntries[] =
    {
        {2e-8, 0.1, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterTraceXScaleTimeRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterTraceXScaleTimeRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterTraceYMaxValueRangeTableEntries[] =
    {
        {-150, 230, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterTraceYMaxValueRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterTraceYMaxValueRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterTraceYScaleValueRangeTableEntries[] =
    {
        {1e-3, 10, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterTraceYScaleValueRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterTraceYScaleValueRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterGateStartTimeRangeTableEntries[] =
    {
        {-1, 1, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterGateStartTimeRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterGateStartTimeRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterGateLengthTimeRangeTableEntries[] =
    {
        {0, 1, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterGateLengthTimeRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterGateLengthTimeRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterLimitUpperValueRangeTableEntries[] =
    {
        {-199.99, 200, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterLimitUpperValueRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterLimitUpperValueRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterLimitLowerValueRangeTableEntries[] =
    {
        {-200, 199.99, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterLimitLowerValueRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterLimitLowerValueRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterTriggerTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_POWER_METER_TRIGGER_TYPE_FREERUN, 0, 0, "FREE", 0},
        {AGN934XNI_VAL_POWER_METER_TRIGGER_TYPE_CONTINUOUS, 0, 0, "CONT", 0},
        {AGN934XNI_VAL_POWER_METER_TRIGGER_TYPE_SINGLE, 0, 0, "SING", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterTriggerTypeRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterTriggerTypeRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterTriggerSourceRangeTableEntries[] =
    {
        {AGN934XNI_VAL_POWER_METER_TRIGGER_SOURCE_EXTERNAL, 0, 0, "EXT", 0},
        {AGN934XNI_VAL_POWER_METER_TRIGGER_SOURCE_INTERNAL, 0, 0, "INT", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterTriggerSourceRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterTriggerSourceRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterTriggerLevelRangeTableEntries[] =
    {
        {-100, 0, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterTriggerLevelRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterTriggerLevelRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterTriggerDelayTimeRangeTableEntries[] =
    {
        {0, 1, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterTriggerDelayTimeRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterTriggerDelayTimeRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterTriggerSlopeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_POWER_METER_TRIGGER_SLOPE_NEGATIVE, 0, 0, "NEG", 0},
        {AGN934XNI_VAL_POWER_METER_TRIGGER_SLOPE_POSITIVE, 0, 0, "POS", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterTriggerSlopeRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterTriggerSlopeRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterTriggerHoldoffTimeRangeTableEntries[] =
    {
        {1e-6, 0.4, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterTriggerHoldoffTimeRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterTriggerHoldoffTimeRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterTriggerHysteresisValueRangeTableEntries[] =
    {
        {0, 3, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterTriggerHysteresisValueRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterTriggerHysteresisValueRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterOffsetValueRangeTableEntries[] =
    {
        {-200, 200, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterOffsetValueRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterOffsetValueRangeTableEntries,
    };

static IviRangeTableEntry attrPowerMeterVideoAverageCountRangeTableEntries[] =
    {
        {1, 256, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrPowerMeterVideoAverageCountRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrPowerMeterVideoAverageCountRangeTableEntries,
    };

static IviRangeTableEntry attrReflectionMeasurementTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_TYPE_REFLECTION_ONE_PORT_INSERTION_LOSS, 0, 0, "OPCL", 0},
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_TYPE_REFLECTION, 0, 0, "REFL", 0},
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_TYPE_DISTANCE_TO_FAULT, 0, 0, "DTF", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrReflectionMeasurementTypeRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrReflectionMeasurementTypeRangeTableEntries,
    };

static IviRangeTableEntry attrReflectionMeasurementCalibrationTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_CALIBRATION_TYPE_FULL, 0, 0, "FULL", 0},
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_CALIBRATION_TYPE_SELECTED, 0, 0, "SEL", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrReflectionMeasurementCalibrationTypeRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrReflectionMeasurementCalibrationTypeRangeTableEntries,
    };

static IviRangeTableEntry attrReflectionMeasurementCableTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_S1000, 0, 0, "S1000", 0},
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_S2000, 0, 0, "S2000", 0},
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_S2500, 0, 0, "S2500", 0},
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_CUSTOM, 0, 0, "CUST", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrReflectionMeasurementCableTypeRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrReflectionMeasurementCableTypeRangeTableEntries,
    };

static IviRangeTableEntry attrReflectionMeasurementCableVelocityFactorRangeTableEntries[] =
    {
        {1, 100, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrReflectionMeasurementCableVelocityFactorRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrReflectionMeasurementCableVelocityFactorRangeTableEntries,
    };

static IviRangeTableEntry attrReflectionMeasurementWindowRangeTableEntries[] =
    {
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_OFF, 0, 0, "NONE", 0},
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_RECTANGULAR, 0, 0, "RECT", 0},
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_HAMMING, 0, 0, "HAMM", 0},
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_3_SAMPLE_BLACKMAN, 0, 0, "S3BL", 0},
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_4_SAMPLE_BLACKMAN, 0, 0, "S4BL", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrReflectionMeasurementWindowRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrReflectionMeasurementWindowRangeTableEntries,
    };

static IviRangeTableEntry attrReflectionMeasurementDisplayTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISPLAY_TYPE_RL, 0, 0, "RL", 0},
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISPLAY_TYPE_VSWR, 0, 0, "VSWR", 0},
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISPLAY_TYPE_LIN, 0, 0, "LIN", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrReflectionMeasurementDisplayTypeRangeTable =
    {
        IVI_VAL_DISCRETE,
        VI_FALSE,
        VI_FALSE,
        VI_NULL,
        attrReflectionMeasurementDisplayTypeRangeTableEntries,
    };

static IviRangeTableEntry attrReflectionMeasurementFrequencyRangeTableEntries[] =
    {
        {5e6, 7e9, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrReflectionMeasurementFrequencyRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrReflectionMeasurementFrequencyRangeTableEntries,
    };

static IviRangeTableEntry attrReflectionMeasurementFrequencySpanRangeTableEntries[] =
    {
        {4.6e7, 6.995e9, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrReflectionMeasurementFrequencySpanRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrReflectionMeasurementFrequencySpanRangeTableEntries,
    };

static IviRangeTableEntry attrReflectionMeasurementDistanceUnitRangeTableEntries[] =
    {
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISTANCE_UNIT_METERS, 0, 0, "MET", 0},
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISTANCE_UNIT_FEET, 0, 0, "FEET", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrReflectionMeasurementDistanceUnitRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrReflectionMeasurementDistanceUnitRangeTableEntries,
    };

static IviRangeTableEntry attrReflectionMeasurementAmplitudeScaleReferenceLevelRangeTableEntries[] =
    {
        {1, 60, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrReflectionMeasurementAmplitudeScaleReferenceLevelRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrReflectionMeasurementAmplitudeScaleReferenceLevelRangeTableEntries,
    };

static IviRangeTableEntry attrReflectionMeasurementTraceDisplayTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_TYPE_DATA, 0, 0, "DATA", 0},
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_TYPE_MEM, 0, 0, "MEM", 0},
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_TYPE_BOTH, 0, 0, "DAM", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrReflectionMeasurementTraceDisplayTypeRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrReflectionMeasurementTraceDisplayTypeRangeTableEntries,
    };

static IviRangeTableEntry attrReflectionMeasurementTraceMathTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_OFF, 0, 0, "OFF", 0},
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_ADD, 0, 0, "ADD", 0},
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_SUB, 0, 0, "SUB", 0},
        {AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_DIV, 0, 0, "DIV", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrReflectionMeasurementTraceMathTypeRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrReflectionMeasurementTraceMathTypeRangeTableEntries,
    };

static IviRangeTableEntry attrReflectionMeasurementTraceAverageNumberRangeTableEntries[] =
    {
        {1, 8192, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrReflectionMeasurementTraceAverageNumberRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrReflectionMeasurementTraceAverageNumberRangeTableEntries,
    };

static IviRangeTableEntry attrReflectionMeasurementAmplitudeScalePerDivisionRangeTableEntries[] =
    {
        {0.1, 10, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrReflectionMeasurementAmplitudeScalePerDivisionRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrReflectionMeasurementAmplitudeScalePerDivisionRangeTableEntries,
    };

static IviRangeTableEntry attrSemAverageNumberRangeTableEntries[] =
    {
        {1, 1000, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrSemAverageNumberRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrSemAverageNumberRangeTableEntries,
    };

static IviRangeTableEntry attrSemChannelIntegrateBandwidthRangeTableEntries[] =
    {
        {100, 5e6, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrSemChannelIntegrateBandwidthRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrSemChannelIntegrateBandwidthRangeTableEntries,
    };

static IviRangeTableEntry attrSemResolutionBandwidthRangeTableEntries[] =
    {
        {10, 3e6, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrSemResolutionBandwidthRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrSemResolutionBandwidthRangeTableEntries,
    };

static IviRangeTableEntry attrSemTotalPowerReferenceRangeTableEntries[] =
    {
        {-200, 200, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrSemTotalPowerReferenceRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrSemTotalPowerReferenceRangeTableEntries,
    };

static IviRangeTableEntry attrSemChannelSpanRangeTableEntries[] =
    {
        {100, 5e7, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrSemChannelSpanRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrSemChannelSpanRangeTableEntries,
    };

static IviRangeTableEntry attrSemCenterFrequencyRangeTableEntries[] =
    {
        {1.25e7, 7.0375e9, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrSemCenterFrequencyRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrSemCenterFrequencyRangeTableEntries,
    };

static IviRangeTableEntry attrSemMeasurementTypeRangeTableEntries[] =
    {
        {AGN934XNI_VAL_SEM_MEASUREMENT_TYPE_TOTAL_POWER_REFERENCE, 0, 0, "TPR", 0},
        {AGN934XNI_VAL_SEM_MEASUREMENT_TYPE_PSD_REFERENCE, 0, 0, "PSDR", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrSemMeasurementTypeRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrSemMeasurementTypeRangeTableEntries,
    };

static IviRangeTableEntry attrAmFmIfBandwidthRangeTableEntries[] =
    {
        {-1e100, 78000-FLOAT_PRECISION, 60000, "", 0},
        {78000, 108000-FLOAT_PRECISION, 96000, "", 0},
        {108000, 180000-FLOAT_PRECISION, 120000, "", 0},
        {180000, 270000-FLOAT_PRECISION, 240000, "", 0},
        {270000, 390000-FLOAT_PRECISION, 300000, "", 0},
        {390000, 540000-FLOAT_PRECISION, 480000, "", 0},
        {540000, 780000-FLOAT_PRECISION, 600000, "", 0},
        {780000, 1080000-FLOAT_PRECISION, 960000, "", 0},
        {1080000, 1e100, 1200000, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrAmFmIfBandwidthRangeTable = 
    {
        IVI_VAL_COERCED,
        VI_TRUE,
        VI_FALSE,
        VI_NULL,
        attrAmFmIfBandwidthRangeTableEntries,
    };

static IviRangeTableEntry attrRrcFilterAlphaValueRangeTableEntries[] =
    {
        {0.01, 1, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrRrcFilterAlphaValueRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrRrcFilterAlphaValueRangeTableEntries,
    };

static IviRangeTableEntry attrChannelPowerRrcFilterBandwidthRangeTableEntries[] =
    {
        {100, 1e8, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrChannelPowerRrcFilterBandwidthRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrChannelPowerRrcFilterBandwidthRangeTableEntries,
    };
static IviRangeTableEntry attrGateViewSweepTimeRangeTableEntries[] =
    {
        {6e-7, 1000, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrGateViewSweepTimeRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrGateViewSweepTimeRangeTableEntries,
    };

static IviRangeTableEntry attrGateDelayRangeTableEntries[] =
    {
        {1.2e-5, 10, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrGateDelayRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrGateDelayRangeTableEntries,
    };

static IviRangeTableEntry attrGateLengthRangeTableEntries[] =
    {
        {8.4e-5, 10, 0, "", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrGateLengthRangeTable = 
    {
        IVI_VAL_RANGED,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrGateLengthRangeTableEntries,
    };

static IviRangeTableEntry attrGateSourceRangeTableEntries[] =
    {
        {AGN934XNI_VAL_GATE_SOURCE_EXTERNAL, 0, 0, "EXT", 0},
        {AGN934XNI_VAL_GATE_SOURCE_PERIODIC_TIMER, 0, 0, "FRAM", 0},
        {AGN934XNI_VAL_GATE_SOURCE_RF_BURST, 0, 0, "RFBU", 0},
        {IVI_RANGE_TABLE_LAST_ENTRY}
    };

static IviRangeTable attrGateSourceRangeTable = 
    {
        IVI_VAL_DISCRETE,
        VI_TRUE,
        VI_TRUE,
        VI_NULL,
        attrGateSourceRangeTableEntries,
    };

/*****************************************************************************
 *-------------- Utility Function Declarations (Non-Exported) ---------------*
 *****************************************************************************/

static ViStatus agn934xni_IviInit (ViRsrc resourceName, ViBoolean IDQuery, 
                                     ViBoolean reset, ViSession vi);
static ViStatus agn934xni_IviClose (ViSession vi);   

static ViStatus agn934xni_InitAttributes (ViSession vi, ViInt32 instModel);
static ViStatus agn934xni_DefaultInstrSetup (ViSession openInstrSession);
static ViStatus agn934xni_CheckStatus (ViSession vi);
static ViStatus agn934xni_WaitForOPC (ViSession vi, ViInt32 maxTime);
static ViStatus agn934xni_GetDriverSetupOption (ViSession vi,
                                               ViConstString optionTag,
                                               ViInt32 optionValueSize,
                                               ViChar optionValue[]);

static ViBoolean agn934xni_OnArrayList(ViAttr attributeId,
                                       ViAttr attrArray[]);
static ViStatus agn934xni_ValidConfigCheck(ViSession vi,
                                           ViAttr attributeId);

    /*- File I/O Utility Functions -*/

static ViStatus agn934xni_GetStringFromTable( agn934xniStringValueTable table, ViInt32 value,
        ViConstString* string );

static ViStatus agn934xni_GetActiveMarker(ViSession       vi,
                                          ViConstString*  pActiveMarker,
                                          ViBoolean       testState);
static ViStatus agn934xni_GetActiveTrace(ViSession       vi,
                                         ViConstString*  pActiveMarker,
                                         ViBoolean       testState);
static ViStatus agn934xni_RecalculateLevelToDBM(ViSession   vi,
                                                ViReal64    level,
                                                ViReal64*   levelDBM);
static ViStatus agn934xni_ParseRealArray(ViSession vi,
                                         ViChar Buffer[], 
                                         ViInt32 ArrayLength, 
                                         ViInt32 *ActualPoints, 
                                         ViReal64 ResultData[]);

/*****************************************************************************
 *----------------- Callback Declarations (Non-Exported) --------------------*
 *****************************************************************************/

    /*- Global Session Callbacks --------------------------------------------*/
    
static ViStatus _VI_FUNC agn934xni_CheckStatusCallback (ViSession vi, ViSession io);

    /*- Attribute callbacks -------------------------------------------------*/


static ViStatus _VI_FUNC agn934xniEnum_ReadCallback (ViSession vi, ViSession io,
                                                     ViConstString channelName,
                                                     ViAttr attributeId,
                                                     ViInt32 *value);
static ViStatus _VI_FUNC agn934xniEnum_WriteCallback (ViSession vi, ViSession io,
                                                      ViConstString channelName,
                                                      ViAttr attributeId,
                                                      ViInt32 value);

static ViStatus _VI_FUNC agn934xniViBoolean_ReadCallback (ViSession vi,
                                                          ViSession io,
                                                          ViConstString channelName,
                                                          ViAttr attributeId,
                                                          ViBoolean *value);
static ViStatus _VI_FUNC agn934xniViBoolean_WriteCallback (ViSession vi,
                                                           ViSession io,
                                                           ViConstString channelName,
                                                           ViAttr attributeId,
                                                           ViBoolean value);

static ViStatus _VI_FUNC agn934xniViString_ReadCallback (
    ViSession           vi,
    ViSession           io,
    ViConstString       channelName,
    ViAttr              attributeId,
    const ViConstString cacheValue);

static ViStatus _VI_FUNC agn934xniViReal64_WriteCallback (ViSession vi,
                                                          ViSession io,
                                                          ViConstString channelName,
                                                          ViAttr attributeId,
                                                          ViReal64 value);
static ViStatus _VI_FUNC agn934xniViReal64_ReadCallback (ViSession vi,
                                                         ViSession io,
                                                         ViConstString channelName,
                                                         ViAttr attributeId,
                                                         ViReal64 *value);
static ViStatus _VI_FUNC agn934xniViInt32_WriteCallback (ViSession vi,
                                                         ViSession io,
                                                         ViConstString channelName,
                                                         ViAttr attributeId,
                                                         ViInt32 value);
static ViStatus _VI_FUNC agn934xniViInt32_ReadCallback (ViSession vi,
                                                        ViSession io,
                                                        ViConstString channelName,
                                                        ViAttr attributeId,
                                                        ViInt32 *value);

static ViStatus _VI_FUNC agn934xniEnumUniform_ReadCallback (ViSession vi,
                                                            ViSession io,
                                                            ViConstString channelName,
                                                            ViAttr attributeId,
                                                            ViInt32 *value);
static ViStatus _VI_FUNC agn934xniEnumUniform_WriteCallback (ViSession vi,
                                                             ViSession io,
                                                             ViConstString channelName,
                                                             ViAttr attributeId,
                                                             ViInt32 value);

static ViStatus _VI_FUNC agn934xniViBooleanUniform_ReadCallback (ViSession vi,
                                                                 ViSession io,
                                                                 ViConstString channelName,
                                                                 ViAttr attributeId,
                                                                 ViBoolean *value);
static ViStatus _VI_FUNC agn934xniViBooleanUniform_WriteCallback (ViSession vi,
                                                                  ViSession io,
                                                                  ViConstString channelName,
                                                                  ViAttr attributeId,
                                                                  ViBoolean value);

static ViStatus _VI_FUNC agn934xniViReal64Uniform_WriteCallback (ViSession vi,
                                                                 ViSession io,
                                                                 ViConstString channelName,
                                                                 ViAttr attributeId,
                                                                 ViReal64 value);
static ViStatus _VI_FUNC agn934xniViReal64Uniform_ReadCallback (ViSession vi,
                                                                ViSession io,
                                                                ViConstString channelName,
                                                                ViAttr attributeId,
                                                                ViReal64 *value);
static ViStatus _VI_FUNC agn934xniViInt32Uniform_WriteCallback (ViSession vi,
                                                                ViSession io,
                                                                ViConstString channelName,
                                                                ViAttr attributeId,
                                                                ViInt32 value);
static ViStatus _VI_FUNC agn934xniViInt32Uniform_ReadCallback (ViSession vi,
                                                               ViSession io,
                                                               ViConstString channelName,
                                                               ViAttr attributeId,
                                                               ViInt32 *value);
static ViStatus _VI_FUNC agn934xniAttrDemodulationMode_ReadCallback (ViSession vi,
                                                                     ViSession io,
                                                                     ViConstString channelName,
                                                                     ViAttr attributeId,
                                                                     ViInt32 *value);
static ViStatus _VI_FUNC agn934xniAttrReflectionMeasurementDistanceStop_CheckCallback (ViSession vi,
                                                                                       ViConstString channelName,
                                                                                       ViAttr attributeId,
                                                                                       ViReal64 value); 
static ViStatus _VI_FUNC agn934xniAttrReflectionMeasurementDistanceStart_CheckCallback (ViSession vi,
                                                                                        ViConstString channelName,
                                                                                        ViAttr attributeId,
                                                                                        ViReal64 value);    
static ViStatus _VI_FUNC agn934xniAttrReflectionMeasurementCableAttenuation_CheckCallback (ViSession vi,
                                                                                           ViConstString channelName,
                                                                                           ViAttr attributeId,
                                                                                           ViReal64 value); 
static ViStatus _VI_FUNC agn934xniAttrDriverRevision_ReadCallback (ViSession vi,
                                                                    ViSession io, 
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId, 
                                                                    const ViConstString cacheValue);
static ViStatus _VI_FUNC agn934xniAttrInstrumentManufacturer_ReadCallback (ViSession vi, 
                                                                            ViSession io,
                                                                            ViConstString channelName, 
                                                                            ViAttr attributeId,
                                                                            const ViConstString cacheValue);
static ViStatus _VI_FUNC agn934xniAttrInstrumentModel_ReadCallback (ViSession vi, 
                                                                     ViSession io,
                                                                     ViConstString channelName, 
                                                                     ViAttr attributeId,
                                                                     const ViConstString cacheValue);

static ViStatus _VI_FUNC agn934xniAttrFirmwareRevision_ReadCallback (ViSession vi, 
                                                                      ViSession io,
                                                                      ViConstString channelName, 
                                                                      ViAttr attributeId,
                                                                      const ViConstString cacheValue);
static ViStatus _VI_FUNC agn934xniAttrIdQueryResponse_ReadCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    const ViConstString cacheValue);


    
static ViStatus _VI_FUNC agn934xniAttrAttenuation_CoerceCallback (ViSession vi,
                                                                  ViConstString channelName,
                                                                  ViAttr attributeId,
                                                                  ViReal64 value,
                                                                  ViReal64 *coercedValue);
static ViStatus _VI_FUNC agn934xniAttrReferenceLevel_CheckCallback (ViSession vi,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 value);

static ViStatus _VI_FUNC agn934xniAttrVideoTriggerLevel_CheckCallback (ViSession vi,
                                                                       ViConstString channelName,
                                                                       ViAttr attributeId,
                                                                       ViReal64 value);
static ViStatus _VI_FUNC agn934xniAttrUnitsPerDivision_ReadCallback (ViSession vi,
                                                                     ViSession io,
                                                                     ViConstString channelName,
                                                                     ViAttr attributeId,
                                                                     ViReal64 *value);      
static ViStatus _VI_FUNC agn934xniAttrUnitsPerDivision_WriteCallback (ViSession vi,
                                                                      ViSession io,
                                                                      ViConstString channelName,
                                                                      ViAttr attributeId,
                                                                      ViReal64 value);
static ViStatus _VI_FUNC agn934xniAttrMarkerType_ReadCallback (ViSession vi,
                                                               ViSession io,
                                                               ViConstString channelName,
                                                               ViAttr attributeId,
                                                               ViInt32 *value);     
static ViStatus _VI_FUNC agn934xniAttrMarkerType_WriteCallback (ViSession vi,
                                                                ViSession io,
                                                                ViConstString channelName,
                                                                ViAttr attributeId,
                                                                ViInt32 value);
static ViStatus _VI_FUNC agn934xniAttrSweepTime_CoerceCallback (ViSession vi,
                                                                ViConstString channelName,
                                                                ViAttr attributeId,
                                                                ViReal64 value,
                                                                ViReal64 *coercedValue);        
static ViStatus _VI_FUNC agn934xniAttrMarkerFunction_ReadCallback (ViSession vi,
                                                                   ViSession io,
                                                                   ViConstString channelName,
                                                                   ViAttr attributeId,
                                                                   ViInt32 *value);     
static ViStatus _VI_FUNC agn934xniAttrMarkerFunction_WriteCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViInt32 value);     
static ViStatus _VI_FUNC agn934xniAttrMarkerFrequencyCounterEnabled_ReadCallback (ViSession vi,
                                                                                  ViSession io,
                                                                                  ViConstString channelName,
                                                                                  ViAttr attributeId,
                                                                                  ViBoolean *value);        
static ViStatus _VI_FUNC agn934xniAttrMarkerFrequencyCounterEnabled_WriteCallback (ViSession vi,
                                                                                   ViSession io,
                                                                                   ViConstString channelName,
                                                                                   ViAttr attributeId,
                                                                                   ViBoolean value);        
static ViStatus _VI_FUNC agn934xniAttrMarkerPosition_ReadCallback (ViSession vi,
                                                                   ViSession io,
                                                                   ViConstString channelName,
                                                                   ViAttr attributeId,
                                                                   ViReal64 *value);        
static ViStatus _VI_FUNC agn934xniAttrMarkerPosition_WriteCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 value);    
static ViStatus _VI_FUNC agn934xniAttrMarkerThreshold_ReadCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 *value);     
static ViStatus _VI_FUNC agn934xniAttrMarkerThreshold_WriteCallback (ViSession vi,
                                                                     ViSession io,
                                                                     ViConstString channelName,
                                                                     ViAttr attributeId,
                                                                     ViReal64 value);  
static ViStatus _VI_FUNC agn934xniAttrMarkerThreshold_ReadCallback (ViSession vi,
                                                                     ViSession io, 
                                                                     ViConstString channelName,
                                                                     ViAttr attributeId, 
                                                                     ViReal64 *value);     
static ViStatus _VI_FUNC agn934xniAttrMarkerThreshold_WriteCallback (ViSession vi,
                                                                      ViSession io, 
                                                                      ViConstString channelName,
                                                                      ViAttr attributeId, 
                                                                      ViReal64 value);      
static ViStatus _VI_FUNC agn934xniAttrMarkerTrace_ReadCallback (ViSession vi,
                                                                ViSession io,
                                                                ViConstString channelName,
                                                                ViAttr attributeId,
                                                                const ViConstString cacheValue);        
static ViStatus _VI_FUNC agn934xniAttrMarkerTrace_WriteCallback (ViSession vi,
                                                                 ViSession io,
                                                                 ViConstString channelName,
                                                                 ViAttr attributeId,
                                                                 ViConstString value);
static ViStatus _VI_FUNC agn934xniAttrMarkerTrace_CheckCallback (ViSession vi,
                                                                 ViConstString channelName,
                                                                 ViAttr attributeId,
                                                                 ViConstString value);

static ViStatus _VI_FUNC agn934xniAttrActiveMarker_CheckCallback (ViSession vi,
                                                                  ViConstString channelName,
                                                                  ViAttr attributeId,
                                                                  ViConstString value);

static ViStatus _VI_FUNC agn934xniAttrActiveTrace_CheckCallback (ViSession vi,
                                                                 ViConstString channelName,
                                                                 ViAttr attributeId,
                                                                 ViConstString value);

static ViStatus _VI_FUNC agn934xniAttrAmplitudeUnits_ReadCallback (ViSession vi,
                                                                   ViSession io,
                                                                   ViConstString channelName,
                                                                   ViAttr attributeId,
                                                                   ViInt32 *value);

static ViStatus _VI_FUNC agn934xniAttrAmplitudeUnits_WriteCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViInt32 value);

static ViStatus _VI_FUNC agn934xniAttrCenterFrequency_ReadCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 *value);

static ViStatus _VI_FUNC agn934xniAttrCenterFrequency_WriteCallback (ViSession vi,
                                                                     ViSession io,
                                                                     ViConstString channelName,
                                                                     ViAttr attributeId,
                                                                     ViReal64 value);

static ViStatus _VI_FUNC agn934xniAttrDetectorType_ReadCallback (ViSession vi,
                                                                 ViSession io,
                                                                 ViConstString channelName,
                                                                 ViAttr attributeId,
                                                                 ViInt32 *value);

static ViStatus _VI_FUNC agn934xniAttrDetectorType_WriteCallback (ViSession vi,
                                                                  ViSession io,
                                                                  ViConstString channelName,
                                                                  ViAttr attributeId,
                                                                  ViInt32 value);

static ViStatus _VI_FUNC agn934xniAttrFrequencyOffset_ReadCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 *value);

static ViStatus _VI_FUNC agn934xniAttrFrequencyOffset_WriteCallback (ViSession vi,
                                                                     ViSession io,
                                                                     ViConstString channelName,
                                                                     ViAttr attributeId,
                                                                     ViReal64 value);

static ViStatus _VI_FUNC agn934xniAttrInputImpedance_ReadCallback (ViSession vi,
                                                                   ViSession io,
                                                                   ViConstString channelName,
                                                                   ViAttr attributeId,
                                                                   ViReal64 *value);    

static ViStatus _VI_FUNC agn934xniAttrInputImpedance_WriteCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 value);

static ViStatus _VI_FUNC agn934xniAttrFrequencySpan_ReadCallback (ViSession vi,
                                                                  ViSession io,
                                                                  ViConstString channelName,
                                                                  ViAttr attributeId,
                                                                  ViReal64 *value);

static ViStatus _VI_FUNC agn934xniAttrFrequencySpan_WriteCallback (ViSession vi,
                                                                   ViSession io,
                                                                   ViConstString channelName,
                                                                   ViAttr attributeId,
                                                                   ViReal64 value);

static ViStatus _VI_FUNC agn934xniAttrFrequencyStart_ReadCallback (ViSession vi,
                                                                   ViSession io,
                                                                   ViConstString channelName,
                                                                   ViAttr attributeId,
                                                                   ViReal64 *value);

static ViStatus _VI_FUNC agn934xniAttrFrequencyStart_WriteCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 value);

static ViStatus _VI_FUNC agn934xniAttrFrequencyStop_ReadCallback (ViSession vi,
                                                                  ViSession io,
                                                                  ViConstString channelName,
                                                                  ViAttr attributeId,
                                                                  ViReal64 *value);

static ViStatus _VI_FUNC agn934xniAttrFrequencyStop_WriteCallback (ViSession vi,
                                                                   ViSession io,
                                                                   ViConstString channelName,
                                                                   ViAttr attributeId,
                                                                   ViReal64 value);

static ViStatus _VI_FUNC agn934xniAttrMarkerAmplitude_ReadCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 *value);

static ViStatus _VI_FUNC agn934xniAttrMarkerContinuousPeakingEnable_ReadCallback (ViSession vi,
                                                                                  ViSession io,
                                                                                  ViConstString channelName,
                                                                                  ViAttr attributeId,
                                                                                  ViBoolean *value);

static ViStatus _VI_FUNC agn934xniAttrMarkerContinuousPeakingEnable_WriteCallback (ViSession vi,
                                                                                   ViSession io,
                                                                                   ViConstString channelName,
                                                                                   ViAttr attributeId,
                                                                                   ViBoolean value);

static ViStatus _VI_FUNC agn934xniAttrMarkerInstrumentSetting_WriteCallback (ViSession vi,
                                                                             ViSession io,
                                                                             ViConstString channelName,
                                                                             ViAttr attributeId,
                                                                             ViInt32 value);

static ViStatus _VI_FUNC agn934xniAttrMarkerPeakSearch_WriteCallback (ViSession vi,
                                                                      ViSession io,
                                                                      ViConstString channelName,
                                                                      ViAttr attributeId,
                                                                      ViInt32 value);

static ViStatus _VI_FUNC agn934xniAttrMeasurementType_ReadCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViInt32 *value);

static ViStatus _VI_FUNC agn934xniAttrMeasurementType_WriteCallback (ViSession vi,
                                                                     ViSession io,
                                                                     ViConstString channelName,
                                                                     ViAttr attributeId,
                                                                     ViInt32 value);

static ViStatus _VI_FUNC agn934xniAttrTraceType_ReadCallback (ViSession vi,
                                                              ViSession io,
                                                              ViConstString channelName,
                                                              ViAttr attributeId,
                                                              ViInt32 *value);

static ViStatus _VI_FUNC agn934xniAttrTraceType_WriteCallback (ViSession vi,
                                                               ViSession io,
                                                               ViConstString channelName,
                                                               ViAttr attributeId,
                                                               ViInt32 value);

static ViStatus _VI_FUNC agn934xniAttrTgNormalizeReferenceLevel_CoerceCallback (ViSession vi,
                                                                                ViConstString channelName,
                                                                                ViAttr attributeId,
                                                                                ViReal64 value,
                                                                                ViReal64 *coercedValue);
static ViStatus _VI_FUNC agn934xniAttrTgOutputAmplitude_CoerceCallback (ViSession vi,
                                                                        ViConstString channelName,
                                                                        ViAttr attributeId,
                                                                        ViReal64 value,
                                                                        ViReal64 *coercedValue);
static ViStatus _VI_FUNC agn934xniAttrChpBottomRange_CheckCallback (ViSession vi,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 value);
static ViStatus _VI_FUNC agn934xniAttrChpTopRange_CheckCallback (ViSession vi,
                                                                 ViConstString channelName,
                                                                 ViAttr attributeId,
                                                                 ViReal64 value);
static ViStatus _VI_FUNC agn934xniAttrChpChannelSpan_CheckCallback (ViSession vi,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 value);

static ViStatus _VI_FUNC agn934xniAttrFrequencySpanMode_WriteCallback (ViSession vi,
                                                                       ViSession io,
                                                                       ViConstString channelName,
                                                                       ViAttr attributeId,
                                                                       ViInt32 value);

static ViStatus _VI_FUNC agn934xniAttrSweepMode_ReadCallback (ViSession vi,
                                                              ViSession io,
                                                              ViConstString channelName,
                                                              ViAttr attributeId,
                                                              ViInt32 *value);

static ViStatus _VI_FUNC agn934xniAttrSweepMode_WriteCallback (ViSession vi,
                                                               ViSession io,
                                                               ViConstString channelName,
                                                               ViAttr attributeId,
                                                               ViInt32 value);

static ViStatus _VI_FUNC agn934xniAttrDemodulationMode_ReadCallback ( ViSession vi,
                                                                      ViSession io,
                                                                      ViConstString channelName,
                                                                      ViAttr attributeId,
                                                                      ViInt32 *value);

static ViStatus _VI_FUNC agn934xniAttrDemodulationMode_WriteCallback (ViSession vi,
                                                                      ViSession io,
                                                                      ViConstString channelName,
                                                                      ViAttr attributeId,
                                                                      ViInt32 value);

static ViStatus _VI_FUNC agn934xniAttrAverageDuration_CheckCallback (ViSession vi,
                                                                     ViConstString channelName,
                                                                     ViAttr attributeId,
                                                                     ViReal64 value);

static ViStatus _VI_FUNC agn934xniAttrMarkerDemodulationDelayTime_CheckCallback (ViSession vi,
                                                                                 ViConstString channelName,
                                                                                 ViAttr attributeId,
                                                                                 ViReal64 value);

static ViStatus _VI_FUNC agn934xniAttrMarkerDemodulationSpeakerVolume_CheckCallback (ViSession vi,
                                                                                     ViConstString channelName,
                                                                                     ViAttr attributeId,
                                                                                     ViReal64 value);

                
/*****************************************************************************
 *------------ User-Callable Functions (Exportable Functions) ---------------*
 *****************************************************************************/
 
/*****************************************************************************
 * Function: agn934xni_init   
 * Purpose:  VXIplug&play required function.  Calls the   
 *           agn934xni_InitWithOptions function.   
 *****************************************************************************/
ViStatus _VI_FUNC agn934xni_init (ViRsrc resourceName, 
                                  ViBoolean IDQuery,
                                  ViBoolean resetDevice, 
                                  ViSession *newVi)
{   
    ViStatus    error = VI_SUCCESS;

    if (newVi == VI_NULL)
    {
        Ivi_SetErrorInfo (VI_NULL, VI_FALSE, IVI_ERROR_INVALID_PARAMETER, 
                          VI_ERROR_PARAMETER4, "Null address for Instrument Handle");
        checkErr( IVI_ERROR_INVALID_PARAMETER);
    }

    checkErr( agn934xni_InitWithOptions (resourceName, IDQuery, resetDevice, 
                                        "", newVi));

Error:  
    return error;
}

/*****************************************************************************
 * Function: agn934xni_InitWithOptions                                       
 * Purpose:  This function creates a new IVI session and calls the 
 *           IviInit function.                                     
 *****************************************************************************/
ViStatus _VI_FUNC agn934xni_InitWithOptions(ViRsrc          resourceName,
                                            ViBoolean       IDQuery,
                                            ViBoolean       resetDevice,
                                            ViConstString   optionString,
                                            ViSession*      newVi)
{   
    ViStatus    error = VI_SUCCESS;
    ViSession   vi = VI_NULL;
    ViChar      newResourceName[IVI_MAX_MESSAGE_BUF_SIZE];
    ViChar      newOptionString[IVI_MAX_MESSAGE_BUF_SIZE];
    ViBoolean   isLogicalName;
    
    if (newVi == VI_NULL)
    {
        Ivi_SetErrorInfo (VI_NULL, VI_FALSE, IVI_ERROR_INVALID_PARAMETER, 
                          VI_ERROR_PARAMETER5, "Null address for Instrument Handle");
        checkErr( IVI_ERROR_INVALID_PARAMETER);
    }

    *newVi = VI_NULL;
    
    checkErr( Ivi_GetInfoFromResourceName( resourceName, (ViString)optionString,
                                           newResourceName,
                                           newOptionString,
                                           &isLogicalName));
    
        /* create a new interchangeable driver */
    checkErr( Ivi_SpecificDriverNew ("agn934xni", newOptionString, &vi));  
    if (!isLogicalName)
    {
        ViInt32 oldFlag = 0;
        
        checkErr (Ivi_GetAttributeFlags (vi, IVI_ATTR_IO_RESOURCE_DESCRIPTOR, &oldFlag));
        checkErr (Ivi_SetAttributeFlags (vi, IVI_ATTR_IO_RESOURCE_DESCRIPTOR, oldFlag & 0xfffb | 0x0010));
        checkErr (Ivi_SetAttributeViString (vi, "", IVI_ATTR_IO_RESOURCE_DESCRIPTOR, 0, newResourceName));
    }
        /* init the driver */
    checkErr( agn934xni_IviInit (newResourceName, IDQuery, resetDevice, vi)); 
    if (isLogicalName)
        checkErr( Ivi_ApplyDefaultSetup (vi));
    *newVi = vi;
    
Error:
    if (error < VI_SUCCESS) 
        Ivi_Dispose (vi);
        
    return error;
}

/*****************************************************************************
 * Function: agn934xni_close                                                           
 * Purpose:  This function closes the instrument.                            
 *
 *           Note:  This function must unlock the session before calling
 *           Ivi_Dispose.
 *****************************************************************************/
ViStatus _VI_FUNC agn934xni_close (ViSession vi)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( agn934xni_IviClose (vi));

Error:    
    Ivi_UnlockSession (vi, VI_NULL);
    Ivi_Dispose (vi);  

    return error;
}

/*****************************************************************************
 * Function: agn934xni_reset                                                         
 * Purpose:  This function resets the instrument.                          
 *****************************************************************************/
ViStatus _VI_FUNC agn934xni_reset (ViSession vi)
{
    ViStatus    error = VI_SUCCESS;

    checkErr( Ivi_LockSession (vi, VI_NULL));

    if (!Ivi_Simulating(vi))                /* call only when locked */
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        viCheckErr( viPrintf (io, "*RST"));
    }
    
    checkErr( agn934xni_DefaultInstrSetup (vi));                                
    
    checkErr( agn934xni_CheckStatus (vi));                                      

Error:
    Ivi_UnlockSession (vi, VI_NULL);
    return error;
}

/*****************************************************************************
 * Function: agn934xni_ResetWithDefaults
 * Purpose:  This function resets the instrument and applies default settings
 *           from the IVI Configuration Store based on the logical name
 *           from which the session was created.
 *****************************************************************************/
ViStatus _VI_FUNC agn934xni_ResetWithDefaults (ViSession vi)
{
    ViStatus error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    checkErr( agn934xni_reset(vi));
    checkErr( Ivi_ApplyDefaultSetup(vi));
    
Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}

/**************************************************************************** 
 *  Function: agn934xni_Disable
 *  Purpose:  This function places the instrument in a quiescent state as 
 *            quickly as possible.
 *
 *            Note:
 *            The instrument doesn't support this function.
 ****************************************************************************/
ViStatus _VI_FUNC agn934xni_Disable (ViSession vi)
{
    ViStatus error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
Error:
    Ivi_UnlockSession (vi, VI_NULL);
    return error;
}

/*****************************************************************************
 * Function: agn934xni_self_test                                                       
 * Purpose:  This function executes the instrument self-test and returns the 
 *           result.                                                         
 *****************************************************************************/
ViStatus _VI_FUNC agn934xni_self_test (ViSession vi, ViInt16 *testResult, 
                                      ViChar testMessage[])
{
    ViStatus    error = VI_SUCCESS;

    checkErr( Ivi_LockSession (vi, VI_NULL));

    if (testResult == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 2, "Null address for Test Result");
    if (testMessage == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "Null address for Test Message");

    if (!Ivi_Simulating(vi))                /* call only when locked */
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
    
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        viCheckErr( viPrintf (io, "*TST?"));
            
        viCheckErr( viScanf (io, "%hd", testResult));
        strcpy (testMessage, ""); 
    }
    else
    {
        /* Simulate Self Test */
        *testResult = 0;
        strcpy (testMessage, "No error.");
    }
    
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}

/*****************************************************************************
 * Function: agn934xni_revision_query                                                  
 * Purpose:  This function returns the driver and instrument revisions.      
 *****************************************************************************/
ViStatus _VI_FUNC agn934xni_revision_query (ViSession vi, ViChar driverRev[], 
                                            ViChar instrRev[])
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));

    if (driverRev == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 2, "Null address for Driver Revision");
    if (instrRev == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "Null address for Instrument Revision");

    checkErr( Ivi_GetAttributeViString (vi, VI_NULL, AGN934XNI_ATTR_SPECIFIC_DRIVER_REVISION, 
                                        0, 256, driverRev));
    checkErr( Ivi_GetAttributeViString (vi, "", AGN934XNI_ATTR_INSTRUMENT_FIRMWARE_REVISION, 
                                        0, 256, instrRev));
    checkErr( agn934xni_CheckStatus (vi));

Error:    
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}

/*****************************************************************************
 * Function: agn934xni_error_query                                                     
 * Purpose:  This function queries the instrument error queue and returns   
 *           the result.                                                     
 *****************************************************************************/
ViStatus _VI_FUNC agn934xni_error_query (ViSession vi, ViInt32 *errCode, 
                                         ViChar errMessage[])
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if (errCode == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 2, "Null address for Error Code");
    if (errMessage == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "Null address for Error Message");

    if (!Ivi_Simulating(vi))                /* call only when locked */
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
    
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        viCheckErr( viPrintf(io, ":SYST:ERR?"));
    
        viCheckErr( viScanf (io, "%ld,\"%256[^\"]", errCode, errMessage));
    
    }
    else
    {
        /* Simulate Error Query */
        *errCode = 0;
        strcpy (errMessage, "No error.");
    }

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}

/*****************************************************************************
 * Function: agn934xni_error_message                                                  
 * Purpose:  This function translates the error codes returned by this       
 *           instrument driver into user-readable strings.  
 *
 *           Note:  The caller can pass VI_NULL for the vi parameter.  This 
 *           is useful if one of the init functions fail.
 *****************************************************************************/
ViStatus _VI_FUNC agn934xni_error_message (ViSession vi, ViStatus errorCode,
                                           ViChar errorMessage[256])
{
    ViStatus    error = VI_SUCCESS;
    
    static      IviStringValueTable errorTable = 
    {
            IVISPECAN_ERROR_CODES_AND_MSGS,
            {VI_NULL,                               VI_NULL}
    };
        
    if (vi)
        Ivi_LockSession(vi, VI_NULL);

        /* all VISA and IVI error codes are handled as well as codes in the table */
    if (errorMessage == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "Null address for Error Message");

    checkErr( Ivi_GetSpecificDriverStatusDesc(vi, errorCode, errorMessage, errorTable));

Error:
    if (vi)
        Ivi_UnlockSession(vi, VI_NULL);
    return error;
}

/*****************************************************************************
 * Function: agn934xni_InvalidateAllAttributes
 * Purpose:  This function invalidates the cached value of all attributes.
 *****************************************************************************/
ViStatus _VI_FUNC agn934xni_InvalidateAllAttributes (ViSession vi)
{
    return Ivi_InvalidateAllAttributes(vi);
}

 
/*****************************************************************************
 * Function: agn934xni_GetError and agn934xni_ClearError Functions                       
 * Purpose:  These functions enable the instrument driver user to  
 *           get or clear the error information the driver associates with the
 *           IVI session.                                                        
 *****************************************************************************/
ViStatus _VI_FUNC agn934xni_GetError (ViSession vi, 
                                      ViStatus *errorCode, 
                                      ViInt32 bufferSize,
                                      ViChar description[])  
{
    ViStatus error = VI_SUCCESS;
    ViStatus primary = VI_SUCCESS,
             secondary = VI_SUCCESS;
    ViChar   elaboration[256] = "";
    ViChar   errorMessage[1024] = "";
    ViChar  *appendPoint = errorMessage;
    ViInt32  actualSize = 0;
    ViBoolean locked = VI_FALSE;

    /* Lock Session */
    if (vi != 0)
    {
        checkErr( Ivi_LockSession(vi, &locked));
    }

    /* Test for nulls and acquire error data */
    if (bufferSize != 0)
    {
        if (errorCode == VI_NULL)
        {
            viCheckParm( IVI_ERROR_INVALID_PARAMETER, 2, "Null address for Error");
        }
        if (description == VI_NULL)
        {
            viCheckParm( IVI_ERROR_INVALID_PARAMETER, 4, "Null address for Description");
        }
        checkErr( Ivi_GetErrorInfo (vi, &primary, &secondary, elaboration));
    }

    else
    {
        checkErr( Ivi_GetAttributeViString(vi, VI_NULL, IVI_ATTR_ERROR_ELABORATION, 0, 256, elaboration));
        checkErr( Ivi_GetAttributeViInt32(vi, VI_NULL, IVI_ATTR_SECONDARY_ERROR, 0, &secondary));
        checkErr( Ivi_GetAttributeViInt32(vi, VI_NULL, IVI_ATTR_PRIMARY_ERROR, 0, &primary));
    }
        
    /* Format data */
    if (primary != VI_SUCCESS)
    {
        ViChar msg[256] = "";
        checkErr( agn934xni_error_message (vi, primary, msg));
        appendPoint += sprintf(appendPoint, "Primary Error: (Hex 0x%08X) %s\n", primary, msg);
    }
    
    if (secondary != VI_SUCCESS)
    {
        ViChar msg[256] = "";
        checkErr( agn934xni_error_message (vi, secondary, msg));
        appendPoint += sprintf(appendPoint, "Secondary Error: (Hex 0x%08X) %s\n", secondary, msg);
    }
    
    if (elaboration[0])
    {
        sprintf(appendPoint, "Elaboration: %s", elaboration);
    }
    
    actualSize = (ViInt32) (strlen(errorMessage) + 1);
    
    /* Prepare return values */
    if (bufferSize == 0)
    {
        error = actualSize;
    }
    else 
    {
        if (bufferSize > 0)
        {
            if (actualSize > bufferSize)
            {
                error = actualSize;
                actualSize = bufferSize;
            }
        }
        memcpy(description, errorMessage, actualSize-1);
        description[actualSize-1] = '\0';
    }
    
    if (errorCode) 
    {
        *errorCode = primary;
    }
    
Error:
    /* Unlock Session */
    Ivi_UnlockSession (vi, &locked);
    return error;
}   

ViStatus _VI_FUNC agn934xni_ClearError (ViSession vi)                                                        
{                                                                                                           
    return Ivi_ClearErrorInfo (vi);                                                                             
}

/*****************************************************************************
 * Function: agn934xni_GetNextCoercionRecord                        
 * Purpose:  This function enables the instrument driver user to obtain
 *           the coercion information associated with the IVI session.                                                              
 *           This function retrieves and clears the oldest instance in which 
 *           the instrument driver coerced a value the instrument driver user
 *           specified to another value.                     
 *****************************************************************************/
ViStatus _VI_FUNC agn934xni_GetNextCoercionRecord (ViSession vi,
                                                  ViInt32 bufferSize,
                                                  ViChar  record[])
{
    return Ivi_GetNextCoercionString (vi, bufferSize, record);
}

/**************************************************************************** 
 *  Function: agn934xni_GetNextInterchangeWarning,
 *            agn934xni_ResetInterchangeCheck, and
 *            agn934xni_ClearInterchangeWarnings
 *  Purpose:  These functions allow the user to retrieve interchangeability
 *            warnings, reset the driver's interchangeability checking 
 *            state, and clear all previously logged interchangeability warnings.
 ****************************************************************************/
ViStatus _VI_FUNC agn934xni_GetNextInterchangeWarning (ViSession vi, 
                                                      ViInt32 bufferSize, 
                                                      ViChar warnString[])
{
    return Ivi_GetNextInterchangeCheckString (vi, bufferSize, warnString);
}

ViStatus _VI_FUNC agn934xni_ResetInterchangeCheck (ViSession vi)
{
    return Ivi_ResetInterchangeCheck (vi);
}

ViStatus _VI_FUNC agn934xni_ClearInterchangeWarnings (ViSession vi)
{
    return Ivi_ClearInterchangeWarnings (vi);
}

/*****************************************************************************
 * Function: agn934xni_LockSession and agn934xni_UnlockSession Functions                        
 * Purpose:  These functions enable the instrument driver user to lock the 
 *           session around a sequence of driver calls during which other
 *           execution threads must not disturb the instrument state.
 *                                                                          
 *           Note:  The callerHasLock parameter must be a local variable 
 *           initialized to VI_FALSE and passed by reference, or you can pass 
 *           VI_NULL.                     
 *****************************************************************************/
ViStatus _VI_FUNC agn934xni_LockSession (ViSession vi, ViBoolean *callerHasLock)  
{                                              
    return Ivi_LockSession(vi,callerHasLock);      
}                                              
ViStatus _VI_FUNC agn934xni_UnlockSession (ViSession vi, ViBoolean *callerHasLock) 
{                                              
    return Ivi_UnlockSession(vi,callerHasLock);    
}
    

/*===========================================================================*
 *= IviSpecAn Tracking Generator Group Functions =============================*
 *===========================================================================*/         
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureNormalize
 * Purpose:   Configures normalize settings. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureNormalize (ViSession vi, 
                                                ViBoolean NormalizeEnable, 
                                                ViReal64 NormalizeReferenceLevel, 
                                                ViInt32 NormalizeReferencePosition)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_TG_NORMALIZE_ENABLE,
                 0, NormalizeEnable), 2, "Normalize Enable");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL,
                 0, NormalizeReferenceLevel), 3, "Normalize Reference Level");
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_TG_NORMAILIZE_REFERENCE_POSITION,
                 0, NormalizeReferencePosition), 4, "Normalize Reference Position");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureTrackingGenerator
 * Purpose:   This function configures the tracking generator, including the 
 *            output power, attenuation, amplitude offset, power sweep and output 
 *            power tracking. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureTrackingGenerator (ViSession vi,
                                                        ViBoolean OutputEnabled,
                                                        ViReal64 OutputPower, 
                                                        ViReal64 OutputPowerStep, 
                                                        ViReal64 OutputPowerOffset)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_ENABLE,
                 0, OutputEnabled), 2, "Output Enabled");
    if(OutputEnabled)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE,
                     0, OutputPower), 3, "Output Power");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_STEP,
                     0, OutputPowerStep), 4, "Output Power Step");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_OFFSET,
                     0, OutputPowerOffset), 5, "Output Power Offset");                              
    }
    
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            

/*===========================================================================*
 *= IviSpecAn OBW Group Functions =============================*
 *===========================================================================*/         
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureOBW
 * Purpose:   This function configures the OBW measurement method, OBW power percentage and the dBc value. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureOBW (ViSession vi, 
                                          ViInt32 OBWMethod, 
                                          ViReal64 OBWPowerPercentage, 
                                          ViReal64 OBWPowerLevel)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     measurementType;
    ViInt32     instrumentMode;

    checkErr( Ivi_LockSession (vi, VI_NULL));

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrumentMode));

    if ((measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_OBW) ||
        (instrumentMode != AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER))
        viCheckErrElab( IVI_ERROR_INVALID_CONFIGURATION, "The measurement type is not OBW");

    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_OBW_METHOD,
                 0, OBWMethod), 2, "OBW Method");
    
    switch (OBWMethod)
    {
        case  AGN934XNI_VAL_OBW_METHOD_PERCENT:
            viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_OBW_POWER_PERCENTAGE,
                         0, OBWPowerPercentage), 3, "OBW Power Percentage");
            break;
        case  AGN934XNI_VAL_OBW_METHOD_DBC:
            viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_OBW_POWER_LEVEL,
                         0, OBWPowerLevel), 4, "OBW Power Level");    
            break;
    }  

    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            

/*===========================================================================*
 *= IviSpecAn CHP Group Functions =============================*
 *===========================================================================*/         
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureCHP
 * Purpose:   This function configures the channel power settings. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureCHP (ViSession vi, 
                                          ViReal64 CenterFrequency, 
                                          ViReal64 IntegrationBandwidth, 
                                          ViReal64 ChannelSpan,
                                          ViBoolean AutoRange,
                                          ViReal64 BottomRange, 
                                          ViReal64 TopRange)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     measurementType;
    ViInt32     instrumentMode;

    checkErr( Ivi_LockSession (vi, VI_NULL));

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrumentMode));

    if ((measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_CHP) ||
        (instrumentMode != AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER))
        viCheckErrElab( IVI_ERROR_INVALID_CONFIGURATION, "The measurement type is not CHP");
    
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_CHP_CENTER_FREQUENCY,
                 0, CenterFrequency), 2, "Center Frequency");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_CHP_INTEGRATION_BANDWIDTH,
                 0, IntegrationBandwidth), 3, "Integration Bandwidth");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_CHP_CHANNEL_SPAN,
                 0, ChannelSpan), 4, "Channel Span");
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_CHP_AUTO_RANGE,
                 0, AutoRange), 5, "Auto Range");
    if(!AutoRange)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_CHP_BOTTOM_RANGE,
                     0, BottomRange), 6, "Bottom Range");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_CHP_TOP_RANGE,
                     0, TopRange), 7, "Top Range");                              
    }
    
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}  

/*******************************************************************************
 * Function:  agn934xni_ConfigureCHPFilter
 * Purpose:   Configures the CHP RRC filter settings. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureCHPFilter (ViSession vi,
                                                ViBoolean EnableCHPFilter,
                                                ViReal64 RRCFilterAlphaValue,
                                                ViReal64 RRCFilterBandwidth)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_CHP_RRC_FILTER_ENABLE,
                 0, EnableCHPFilter), 2, "Enable CHPFilter");
    
    if(EnableCHPFilter)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE,
                     0, RRCFilterAlphaValue), 3, "R RCFilter Alpha Value");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH,
                     0, RRCFilterBandwidth), 4, "R RCFilter Bandwidth");                              
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}

/*===========================================================================*
 *= Custom Sweep Group Functions =============================*
 *===========================================================================*/         
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureGatedSweepView
 * Purpose:   Configures the Gate View State and Gate View Sweep Time. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C, N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureGatedSweepView (ViSession vi,
                                                     ViBoolean EnableGateView,
                                                     ViReal64 GateViewSweepTime)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_GATE_VIEW_ENABLE,
                 0, EnableGateView), 2, "Enable Gate View");
    
    if(EnableGateView)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME,
                     0, GateViewSweepTime), 3, "Gate View Sweep Time");                              
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureGatedSweep
 * Purpose:   Configures the Gated Sweep State, Gate Source, Gate Delay and Gate 
 *            Length for gated sweep. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureGatedSweep (ViSession vi,
                                                 ViBoolean EnableGatedSweep,
                                                 ViInt32 GateSource,
                                                 ViReal64 GateDelay,
                                                 ViReal64 GateLength)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_GATED_SWEEP_ENABLE,
                 0, EnableGatedSweep), 2, "Enable Gated Sweep");
    if(EnableGatedSweep)
    {
        viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_GATE_SOURCE,
                     0, GateSource), 3, "Gate Source");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_GATE_DELAY,
                     0, GateDelay), 4, "Gate Delay");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_GATE_LENGTH,
                     0, GateLength), 5, "Gate Length");                              
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}           

/*===========================================================================*
 *= IviSpecAn IviSpecAnBase Group Functions =============================*
 *===========================================================================*/ 

/*******************************************************************************
 * Function:  agn934xni_ConfigureFrequencySpanMode
 * Purpose:   Sets the frequency span to full scale, zero span or the previous span setting. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureFrequencySpanMode (ViSession vi,  
                                                        ViInt32 FrequencySpanMode)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL)); 
    
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_FREQUENCY_SPAN_MODE,
                 0, FrequencySpanMode), 2, "Frequency Span Mode");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}

/*******************************************************************************
 * Function:  agn934xni_SetActiveTrace
 * Purpose:   This function selects one of the available traces, and makes it the active trace. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_SetActiveTrace (ViSession vi, 
                                            ViConstString ActiveTrace)
{
    return Ivi_SetAttributeViString (vi, VI_NULL, AGN934XNI_ATTR_ACTIVE_TRACE,
                                     IVI_VAL_DIRECT_USER_CALL, ActiveTrace);
}
                
/*******************************************************************************
 * Function:  agn934xni_FetchMeasurementACPR
 * Purpose:   This function returns the ACPR measurement the spectrum analyzer
 *            acquires. The measurement is from a previously initiated acquisition.  
 *            You use the agn934xni_Initiate function to start an acquisition.  
 *            You use the agn934xni_AcquisitionStatus function to determine when 
 *            the acquisition is complete.
 *            
 *            You can call the Read Measurement ACPR function instead of the 
 *            Initiate function. This function starts an acquisition, waits for 
 *            the acquisition to complete, and returns the measurement in one 
 *            function call.
 *            
 *            This function does not check the instrument status. Typically, 
 *            the end-user calls this function only in a sequence of calls to 
 *            other low-level driver functions. The sequence performs one operation. 
 *            The end-user uses the low-level functions to optimize one or more 
 *            aspects of interaction with the instrument. Call the 
 *            agn934xni_error_query function at the conclusion of the sequence to 
 *            check the instrument status. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_FetchMeasurementACPR (ViSession vi, 
                                                  ViReal64* LowACP, 
                                                  ViReal64* LowACPR, 
                                                  ViReal64* UpperACP, 
                                                  ViReal64* UpperACPR, 
                                                  ViReal64* MainChannelPower)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     measurementType;
    ViInt32     instrumentMode;

    checkErr( Ivi_LockSession (vi, VI_NULL));

    if (LowACP == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 2, "Null address for Low ACP");
    if (LowACPR == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "Null address for Low ACPR");
    if (UpperACP == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 4, "Null address for Upper ACP");
    if (UpperACPR == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 5, "Null address for Upper ACPR");
    if (MainChannelPower == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 6, "Null address for Main Channel Power");

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrumentMode));

    if ((instrumentMode != AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER) || 
        (measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_ACPR))
        viCheckErrElab( IVI_ERROR_INVALID_CONFIGURATION, "The measurement type is not ACPR");

    if (!Ivi_Simulating (vi))               /* Call only when locked */
    {
        ViSession   io = Ivi_IOSession (vi); /* Call only when locked */

        viCheckErr( viQueryf (io, ":MEAS:ACPR:LOW:POW?;", "%Lg", LowACP)); 

        viCheckErr( viQueryf (io, ":MEAS:ACPR:LOW?;", "%Lg", LowACPR));

        viCheckErr( viQueryf (io, ":MEAS:ACPR:UPP:POW?;", "%Lg", UpperACP));

        viCheckErr( viQueryf (io, ":MEAS:ACPR:UPP?;", "%Lg", UpperACPR));

        viCheckErr( viQueryf (io, ":MEAS:ACPR:MAIN?;", "%Lg", MainChannelPower));
    }
    else
    {
        *LowACP = 0.0;
        *LowACPR = 0.5;
        *UpperACP = 0.0;
        *UpperACPR = 0.5;
        *MainChannelPower = -50;
    }

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_FetchMeasurementCHP
 * Purpose:   This function returns the CHP measurement the spectrum analyzer acquires. 
 *            The measurement is from a previously initiated acquisition.  You use the 
 *            agn934xni_Initiate function to start an acquisition.  You use the 
 *            agn934xni_AcquisitionStatus function to determine when the acquisition 
 *            is complete.
 *            
 *            You can call the Read Measurement CHP function instead of the Initiate 
 *            function. This function starts an acquisition, waits for the acquisition 
 *            to complete, and returns the measurement in one function call.
 *            
 *            This function does not check the instrument status. Typically, the end-user
 *            calls this function only in a sequence of calls to other low-level driver 
 *            functions. The sequence performs one operation. The end-user uses the 
 *            low-level functions to optimize one or more aspects of interaction with 
 *            the instrument. Call the agn934xni_error_query function at the conclusion
 *            of the sequence to check the instrument status. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_FetchMeasurementCHP (ViSession vi, 
                                                 ViReal64* MainChannelPower, 
                                                 ViReal64* PowerDensity)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     measurementType;
    ViInt32     instrumentMode;

    checkErr( Ivi_LockSession (vi, VI_NULL));

    if (MainChannelPower == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 2, "Null address for Main Channel Power");
    if (PowerDensity == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "Null address for Power Density");
    
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrumentMode));

    if ((instrumentMode != AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER) || 
        (measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_CHP))
        viCheckErrElab( IVI_ERROR_INVALID_CONFIGURATION, "The measurement type is not CHP");

    if (!Ivi_Simulating (vi))               /* Call only when locked */
    {
        ViSession   io = Ivi_IOSession (vi); /* Call only when locked */

        viCheckErr( viQueryf (io, ":MEAS:CHP?;", "%Lg,%Lg", MainChannelPower, PowerDensity)); 
    }
    else
    {
        *PowerDensity = 1.0;
        *MainChannelPower = -50;
    }

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_FetchMeasurementOBW
 * Purpose:   This function returns the OBW measurement the spectrum analyzer acquires. 
 *            The measurement is from a previously initiated acquisition.  You use the 
 *            agn934xni_Initiate function to start an acquisition.  You use the 
 *            agn934xni_AcquisitionStatus function to determine when the acquisition
 *            is complete.
 *            
 *            You can call the Read Measurement BOW function instead of the Initiate 
 *            function. This function starts an acquisition, waits for the acquisition 
 *            to complete, and returns the measurement in one function call.
 *            
 *            This function does not check the instrument status. Typically, the 
 *            end-user calls this function only in a sequence of calls to other 
 *            low-level driver functions. The sequence performs one operation. The 
 *            end-user uses the low-level functions to optimize one or more aspects 
 *            of interaction with the instrument. Call the agn934xni_error_query 
 *            function at the conclusion of the sequence to check the instrument status. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_FetchMeasurementOBW (ViSession vi, 
                                                 ViReal64* OccupiedBandwidth, 
                                                 ViReal64* BandwidthCentroid,  
                                                 ViReal64* XDbBandwidth)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     measurementType;
    ViInt32     instrumentMode;

    checkErr( Ivi_LockSession (vi, VI_NULL));

    if (OccupiedBandwidth == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 2, "Null address for Occupied Bandwidth");
    if (XDbBandwidth == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 2, "Null address for X Db Bandwidth");

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrumentMode));

    if ((instrumentMode != AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER) || 
        (measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_OBW))
        viCheckErrElab( IVI_ERROR_INVALID_CONFIGURATION, "The measurement type is not OBW");

    if (!Ivi_Simulating (vi))               /* Call only when locked */
    {
        ViSession   io = Ivi_IOSession (vi); /* Call only when locked */

        viCheckErr( viQueryf (io, ":MEAS:OBW?;", "%Lg,%Lg", OccupiedBandwidth, BandwidthCentroid)); 

        viCheckErr( viQueryf (io, ":OBW:XDB?;", "%Lg", XDbBandwidth)); 
    }
    else
    {
        *OccupiedBandwidth = 200000.0;
        *BandwidthCentroid = 100000.0;
        *XDbBandwidth = 20.0;
    }

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ReadMeasurementACPR
 * Purpose:   This function initiates a ACPR measurement acquisition based on the 
 *            present instrument configuration.  It then waits for the acquisition 
 *            to complete, and returns the ACPR measurement. 
 *            
 *            Note:
 *            
 *            If the spectrum analyzer did not complete the acquisition within the
 *            time period the user specified with the maxTime parameter, the function
 *            returns Max Time Exceeded error. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ReadMeasurementACPR (ViSession vi, 
                                                 ViInt32 MaxTime, 
                                                 ViReal64* LowACP,
                                                 ViReal64* LowACPR, 
                                                 ViReal64* UpperACP, 
                                                 ViReal64* UpperACPR, 
                                                 ViReal64* MainChannelPower)
{
    ViStatus    error = VI_SUCCESS;

    checkErr( Ivi_LockSession (vi, VI_NULL));

    checkErr( agn934xni_Initiate (vi));
    error = agn934xni_WaitForOPC (vi, MaxTime);  

    if ( error == VI_ERROR_TMO)                   
        viCheckErr( IVISPECAN_ERROR_MAX_TIME_EXCEEDED);                                                        

    checkErr( agn934xni_FetchMeasurementACPR (vi, LowACP, LowACPR, UpperACP, 
              UpperACPR, MainChannelPower));                            

    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ReadMeasurementCHP
 * Purpose:   This function initiates a CHP measurement acquisition based on the 
 *            present instrument configuration.  It then waits for the acquisition
 *            to complete, and returns the CHP measurement. 
 *            
 *            Note:
 *            
 *            If the spectrum analyzer did not complete the acquisition within the
 *            time period the user specified with the maxTime parameter, the function 
 *            returns Max Time Exceeded error. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ReadMeasurementCHP (ViSession vi,
                                                ViInt32 MaxTime, 
                                                ViReal64* MainChannelPower,
                                                ViReal64* PowerDensity)
{
    ViStatus    error = VI_SUCCESS;

    checkErr( Ivi_LockSession (vi, VI_NULL));

    checkErr( agn934xni_Initiate (vi));
    error = agn934xni_WaitForOPC (vi, MaxTime);  

    if ( error == VI_ERROR_TMO)                   
        viCheckErr( IVISPECAN_ERROR_MAX_TIME_EXCEEDED);                                                        

    checkErr( agn934xni_FetchMeasurementCHP (vi, MainChannelPower, PowerDensity));                            

    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ReadMeasurementOBW
 * Purpose:   This function initiates a OBW measurement acquisition based on the 
 *            present instrument configuration.  It then waits for the acquisition
 *            to complete, and returns the OBW measurement. 
 *            
 *            Note:
 *            
 *            If the spectrum analyzer did not complete the acquisition within the 
 *            time period the user specified with the maxTime parameter, the function
*             returns Max Time Exceeded error. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ReadMeasurementOBW (ViSession vi, 
                                                ViInt32 MaxTime, 
                                                ViReal64* OccupiedBandwidth,
                                                ViReal64* BandwidthCentroid, 
                                                ViReal64* XDbBandwidth)
{
    ViStatus    error = VI_SUCCESS;

    checkErr( Ivi_LockSession (vi, VI_NULL));

    checkErr( agn934xni_Initiate (vi));
    error = agn934xni_WaitForOPC (vi, MaxTime);  

    if ( error == VI_ERROR_TMO)                   
        viCheckErr( IVISPECAN_ERROR_MAX_TIME_EXCEEDED);                                                        

    checkErr( agn934xni_FetchMeasurementOBW( vi, OccupiedBandwidth, BandwidthCentroid, XDbBandwidth));

    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureHighSensitivityEnable
 * Purpose:   Enables/Disables the Hi-sensitive function. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureHighSensitivityEnable (ViSession vi, 
                                                            ViBoolean HighSensitiveFunctionEnable)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_HIGH_SENSITIVITY_ENABLE,
                 0, HighSensitiveFunctionEnable), 2, "Invalid value for High Sensitive Function Enable");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureTrace
 * Purpose:   Configures trace settings. If TraceMathFunctionEnable is set to VI_FALSE,
 *            TraceMathType will have no function.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureTrace (ViSession vi, 
                                            ViBoolean TraceMathFunctionEnable, 
                                            ViInt32 TraceMathType)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));     
    
    /* Check boolean parameter range. */
    if(TraceMathFunctionEnable != VI_TRUE && TraceMathFunctionEnable != VI_FALSE)
        viCheckParm(IVI_ERROR_INVALID_PARAMETER, 2, "Trace Math Function Enable");  
    
    if(TraceMathFunctionEnable == VI_TRUE)
    {
        viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_TRACE_MATH_TYPE,
                     0, TraceMathType), 3, "Trace Math Type");   
    }
    else
    {
        if (!Ivi_Simulating(vi)) 
        {
            ViSession   io = Ivi_IOSession(vi);   /* call only when locked */ 
            
            viCheckErr(viPrintf(io, ":TRAC:MATH:OFF;"));        
        }
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureVBWRBWRatio
 * Purpose:   This function configures the ratio of the video bandwidth to the 
 *            resolution bandwidth. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureVBWRBWRatio (ViSession vi, 
                                                  ViBoolean RatioAuto, 
                                                  ViReal64 Ratio)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_VIDEO_BANDWIDTH_AUTO,
                 0, RatioAuto), 2, "Ratio Auto");
    if(!RatioAuto)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_VIDEO_BANDWIDTH,
                     0, Ratio), 3, "Ratio");                              
    }
    
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureAverage
 * Purpose:   Configures average settings. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureAverage (ViSession vi, 
                                              ViBoolean AverageEnable, 
                                              ViInt32 AverageCount,  
                                              ViInt32 AverageType, 
                                              ViBoolean AverageDurationEnable, 
                                              ViReal64 AverageDuration)
{
    ViStatus    error = VI_SUCCESS;
    ViConstString  active_trace;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    checkErr( agn934xni_GetActiveTrace(vi, &active_trace, VI_FALSE)); 
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, active_trace, AGN934XNI_ATTR_AVERAGE_ENABLE,
                 0, AverageEnable), 2, "Average Enable");
    if(AverageEnable)
    {
        viCheckParm( Ivi_SetAttributeViInt32 (vi, active_trace, AGN934XNI_ATTR_AVERAGE_COUNT,
                     0, AverageCount), 3, "Average Count");
        viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_AVERAGE_TYPE,
                     0, AverageType), 4, "Average Type");
        viCheckParm( Ivi_SetAttributeViBoolean (vi, active_trace, AGN934XNI_ATTR_AVERAGE_DURATION_ENABLE,
                     0, AverageDurationEnable), 5, "Average Duration Enable");
        if(AverageDurationEnable)
        {
            viCheckParm( Ivi_SetAttributeViReal64 (vi, active_trace, AGN934XNI_ATTR_AVERAGE_DURATION,
                         0, AverageDuration), 6, "Average Duration"); 
        }
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_RestartTraceAverage
 * Purpose:   Restarts the trace average. This command is only available when average is on.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_RestartTraceAverage (ViSession vi)
{
    ViStatus    error = VI_SUCCESS;
    ViConstString  active_trace; 
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    checkErr( agn934xni_GetActiveTrace(vi, &active_trace, VI_FALSE));
    
    if (!Ivi_Simulating(vi)) 
    {
        ViSession   io = Ivi_IOSession(vi);   /* call only when locked */ 
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));      
        viCheckErr(viPrintf(io, ":AVER:%s:CLE;", active_trace));        
    }                                  
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureMeasurementType
 * Purpose:   This function selects the measurement type.
 *            
 *            Note:
 *            Please set the Instrument Mode to Measurement Type to 
 *            AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER when configuring 
 *            the Measurement Type. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureMeasurementType (ViSession vi, 
                                                      ViInt32 InstrumentMode, 
                                                      ViInt32 MeasurementType)
{
    ViStatus    error = VI_SUCCESS;

    checkErr( Ivi_LockSession (vi, VI_NULL));

    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE,
                 0, InstrumentMode), 2, "Instrument Mode");

    if (InstrumentMode == AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER)
    {
        viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE,
                     0, MeasurementType), 3, "Measurement Type");                              
    }

    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_Abort
 * Purpose:   This function aborts a previously initiated measurement and 
 *            returns the spectrum analyzer to the idle state.
 *
 *            This function does not check the instrument status. Typically, 
 *            the end-user calls this function only in a sequence of calls 
 *            to other low-level driver functions. The sequence performs one 
 *            operation. The end-user uses the low-level functions to 
 *            optimize one or more aspects of interaction with the 
 *            instrument. To check the instrument status, call the 
 *            agn934xni_error_query function at the conclusion of the sequence.
 *
 *            Notes:
 *            This instrument doesn't support this function.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_Abort (ViSession vi)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_AcquisitionStatus
 * Purpose:   This function determines and returns the status of an acquisition. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_AcquisitionStatus (ViSession vi, 
                                               ViInt32* Status)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     instStatus = AGN934XNI_VAL_ACQUISITION_STATUS_UNKNOWN;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if (Status == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 2, "Null Address for Status");

    error = agn934xni_WaitForOPC (vi, 200000);  

    if ( error == VI_SUCCESS)                   
        instStatus = AGN934XNI_VAL_ACQUISITION_STATUS_COMPLETE;
Error:
    *Status = instStatus;
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureAcquisition
 * Purpose:   This function configures the acquisition attributes of the spectrum analyzer. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureAcquisition (ViSession vi, 
                                                  ViBoolean SweepModeContinuous, 
                                                  ViInt32 NumberOfSweeps,
                                                  ViBoolean DetectorTypeAuto, 
                                                  ViInt32 DetectorType, 
                                                  ViInt32 VerticalScale)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     instrMode = 0;
    ViInt32     measurementType = 0;
    ViConstString  active_trace; 
    
        ViSession io = VI_NULL;

        /* Do not lock here.  The caller manages the lock. */

    checkErr( Ivi_GetAttributeViSession (vi, VI_NULL, IVI_ATTR_IO_SESSION, 0, &io));

    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 
              0, &instrMode));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE,
              0, &measurementType));

    if ( INSTRUMENT_MODE_IS_SA_TG(instrMode) )
    {
        viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_SWEEP_MODE_CONTINUOUS,
                     0, SweepModeContinuous), 2, "Sweep Mode Continuous");

        if ( measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_SM )
        {
            if (DetectorTypeAuto == VI_FALSE) 
            {
                checkErr( agn934xni_GetActiveTrace(vi, &active_trace, VI_FALSE));    
                viCheckParm( Ivi_SetAttributeViInt32 (vi, active_trace, AGN934XNI_ATTR_DETECTOR_TYPE,
                             0, DetectorType), 5, "Detector Type");
            }
            
            viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_VERTICAL_SCALE,
                         0, VerticalScale), 6, "Vertical Scale");                              
        }

        checkErr( agn934xni_CheckStatus (vi));
    }

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureFrequencyCenterSpan
 * Purpose:   This function configures the frequency range defining the center 
 *            frequency and the frequency span. If the span corresponds to zero 
 *            Hertz, then the spectrum analyzer operates in time-domain mode. 
 *            Otherwise, the spectrum analyzer operates in frequency-domain mode,
 *            
 *            This function modifies the Frequency Start and Frequency Stop 
 *            attributes as follows:
 *            
 *            Frequency Start = CenterFrequency - Span / 2 
 *            Frequency Stop = CenterFrequency + Span / 2 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureFrequencyCenterSpan (ViSession vi, 
                                                          ViReal64 CenterFrequency,
                                                          ViReal64 Span)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_CENTER_FREQUENCY,
                 0, CenterFrequency), 2, "Center Frequency");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_FREQUENCY_SPAN,
                 0, Span), 3, "Span");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureFrequencyOffset
 * Purpose:   This function configures the Frequency Offset attribute of the 
 *            spectrum analyzer. This function affects the setting of the spectrum 
 *            analyzer's absolute frequencies, such as start, stop, center, and marker.
 *            It does not affect values such as span and delta marker, which are the 
 *            difference of frequencies. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureFrequencyOffset (ViSession vi, 
                                                      ViReal64 FrequencyOffset)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_FREQUENCY_OFFSET,
                 0, FrequencyOffset), 2, "Frequency Offset");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureFrequencyStartStop
 * Purpose:   This function configures the frequency range defining its start 
 *            frequency and its stop frequency. If the start frequency is equal to 
 *            the stop frequency, then the spectrum analyzer operates in time-domain
 *            mode. Otherwise, the spectrum analyzer operates in frequency-domain mode. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureFrequencyStartStop (ViSession vi, 
                                                         ViReal64 StartFrequency, 
                                                         ViReal64 StopFrequency)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     result; 
    
    checkErr( Ivi_LockSession (vi, VI_NULL));

    viCheckErr( Ivi_CompareWithPrecision(0, StartFrequency, StopFrequency, &result)); 

    if ( result < 0 )
    {
       /* set stop first */
       viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_FREQUENCY_STOP,
                    0, StopFrequency), 3, "Stop Frequency");
            
       viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_FREQUENCY_START,
                    0,StartFrequency), 2, "Start Frequency");
    }
    else if ( result == 0 ) /* zero span */
    { 
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_FREQUENCY_SPAN,
                     0, 0.0), 3, "Frequency Span");

        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_CENTER_FREQUENCY,
                     0, StartFrequency), 2, "Frequency Center");
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "The Start Frequency should be less than the Stop Frequency");
    }                            

    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureLevel
 * Purpose:   This function configures the vertical attributes of the spectrum 
 *            analyzer. This corresponds to the Amplitude Units, Input Attenuation,
 *            Input Impedance, Reference Level, and Reference Level Offset attributes. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureLevel (ViSession vi, 
                                            ViInt32 AmplitudeUnits, 
                                            ViReal64 InputImpedance, 
                                            ViReal64 ReferenceLevel,
                                            ViReal64 ReferenceLevelOffset,
                                            ViBoolean AttenuationAuto,
                                            ViReal64 Attenuation)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL)); 
    
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_AMPLITUDE_UNITS,
                 0, AmplitudeUnits), 2, "Amplitude Units");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_INPUT_IMPEDANCE,
                 0, InputImpedance), 3, "Input Impedance");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_REFERENCE_LEVEL,
                 0, ReferenceLevel), 4, "Reference Level");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET,
                 0, ReferenceLevelOffset), 5, "Reference Level Offset");
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_ATTENUATION_AUTO,
                 0, AttenuationAuto), 6, "Attenuation Auto");
    if(!AttenuationAuto)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_ATTENUATION,
                     0, Attenuation), 7, "Attenuation");                              
    }
    
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureSweepCoupling
 * Purpose:   This function configures the coupling and sweeping attributes. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureSweepCoupling (ViSession vi, 
                                                    ViBoolean ResolutionBandwidthAuto,
                                                    ViReal64 ResolutionBandwidth, 
                                                    ViBoolean VideoBandwidthAuto,
                                                    ViReal64 VideoBandwidth, 
                                                    ViBoolean SweepTimeAuto, 
                                                    ViReal64 SweepTime)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_RESOLUTION_BANDWIDTH_AUTO,
                 0, ResolutionBandwidthAuto), 2, "Resolution Bandwidth Auto");
    if(!ResolutionBandwidthAuto)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_RESOLUTION_BANDWIDTH,
                     0, ResolutionBandwidth), 3, "Resolution Bandwidth");
    }
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_VIDEO_BANDWIDTH_AUTO,
                 0, VideoBandwidthAuto), 4, "Video Bandwidth Auto");
    if(!VideoBandwidthAuto)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_VIDEO_BANDWIDTH,
                     0, VideoBandwidth), 5, "Video Bandwidth");
    }
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_SWEEP_TIME_AUTO,
                 0, SweepTimeAuto), 6, "Sweep Time Auto");
    if(!SweepTimeAuto)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_SWEEP_TIME,
                     0, SweepTime), 7, "Sweep Time");                              
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureTraceType
 * Purpose:   This function configures the Trace Type attribute. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureTraceType (ViSession vi, 
                                                ViConstString TraceName, 
                                                ViInt32 TraceType)
{
    ViStatus    error = VI_SUCCESS;
    ViConstString   activeTrace;
    
    checkErr( Ivi_CoerceRepCapName (vi, TRACE_REP_CAP_NAME, TraceName, &TraceName));     
    
    checkErr( Ivi_LockSession (vi, VI_NULL));

    
    viCheckParm( Ivi_SetAttributeViString(vi, VI_NULL, AGN934XNI_ATTR_ACTIVE_TRACE, 
                 0, TraceName), 2, "Trace Name");
    
    checkErr( agn934xni_GetActiveTrace(vi, &activeTrace, VI_FALSE));     
    viCheckParm( Ivi_SetAttributeViInt32 (vi, activeTrace, AGN934XNI_ATTR_TRACE_TYPE,
                 0, TraceType), 3, "Trace Type");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_FetchYTrace
 * Purpose:   This function returns the trace the spectrum analyzer acquires. The 
 *            trace is from a previously initiated acquisition. The user calls the 
 *            Initiate function to start an acquisition. The user calls the Acquisition 
 *            Status function to determine when the acquisition is complete.
 *            The user may call the Read Y Trace function instead of the Initiate function. 
 *            This function starts an acquisition, waits for the acquisition to complete,
 *            and returns the trace in one function call.
 *            
 *            The Amplitude array returns data that represents the amplitude of the signals
 *            obtained by sweeping from the start frequency to the stop frequency 
 *            (in frequency domain, in time domain the amplitude array is ordered from 
 *            beginning of sweep to end). The Amplitude Units attribute determines the units
 *            of the points in the Amplitude array.
 *            
 *            After this function executes, each element in the amplitude array parameter 
 *            is either a amplitude or a value indicating that the spectrum analyzer could 
 *            not sample an amplitude.
 *            This function does not check the instrument status. The user calls the Error 
 *            Query function at the conclusion of the sequence to check the instrument status. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_FetchYTrace (ViSession vi, 
                                         ViConstString TraceName,
                                         ViInt32 ArrayLength,
                                         ViInt32* ActualPoints, 
                                         ViReal64 Amplitude[])
{
    ViStatus        error = VI_SUCCESS;
    ViConstString   traceName;
    ViChar          *buffer = VI_NULL;

    checkErr( Ivi_LockSession (vi, VI_NULL));

    /* Check Parameters, if necessary. */
    
    if (Amplitude == VI_NULL)
    {
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 5, "Null address for amplitude");
    }        
    if (ActualPoints == VI_NULL)
    {
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 4, "Null address for Actual Points");
    }
    if (ArrayLength <= 0)
    {
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "The array length must be greater than zero");
    }

    checkErr( Ivi_CoerceRepCapName (vi, TRACE_REP_CAP_NAME, TraceName, &traceName)); 

    if (!Ivi_Simulating (vi))               /* Call only when locked */
    {
        ViSession   io = Ivi_IOSession (vi); /* Call only when locked */
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));

        checkErr( Ivi_Alloc (vi, 40000, (ViAddr *)(&buffer)));

        viCheckErr( viQueryf(io, ":TRAC? %s", "%s", traceName, buffer));

        checkErr( agn934xni_ParseRealArray(vi, buffer, ArrayLength, ActualPoints, Amplitude));
    }                                                                                          
    else
    {
        #define SIMULATION_LEVEL                    -70.0
 
        ViInt32     number_of_points;
        ViInt32     i;
    
        checkErr( Ivi_GetAttributeViInt32( vi,
                                           traceName,
                                           AGN934XNI_ATTR_TRACE_SIZE,
                                           0, &number_of_points));
    
        number_of_points = (number_of_points > ArrayLength) ? ArrayLength : number_of_points;

        for (i = 0; i < number_of_points; i++)
        {
            ViReal64    peak;

            if ((i > (3 * number_of_points/ 8)) && (i < (5 * number_of_points / 8)))
            {
                peak = 50.0 - 200.0 * pow((i - 3.0 * number_of_points / 8.0)/(2.0 * number_of_points / 8.0) - 0.5, 2.0);
            }
            else 
                peak = ((double)rand())/RAND_MAX;

            Amplitude[i] = SIMULATION_LEVEL + peak + ((double)rand())/RAND_MAX;
        }

        if (ActualPoints) *ActualPoints = i;   
     }

    checkErr( agn934xni_CheckStatus (vi));

Error:
    if (buffer != VI_NULL)
        Ivi_Free(vi, buffer);

    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_GetTraceName
 * Purpose:   This function returns the specific driver defined trace name that 
 *            corresponds to the one-based index that the user specifies. If the 
 *            driver defines a qualified trace name, this property returns the 
 *            qualified name. If the value that the user passes for the Index 
 *            parameter is less than one or greater than the value of the Trace
 *            Count attribute, the function returns an empty string in the Name 
 *            parameter and returns the Invalid Value error. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_GetTraceName (ViSession vi, 
                                          ViInt32 Index, 
                                          ViInt32 NameBufferSize,
                                          ViChar Name[])
{
    ViStatus         error = VI_SUCCESS;
    ViConstString    traceName = VI_NULL;
    ViInt32          actualSize = 0;
    ViInt32          traceCount;

    checkErr( Ivi_LockSession (vi, VI_NULL));

    /* Check Parameters */
    if (NameBufferSize != 0)
    {
        if (Name == VI_NULL)
        {
            viCheckParm( IVI_ERROR_INVALID_PARAMETER, 4, "Null address for Trace Name");
        }
    }
        
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_TRACE_COUNT, 0, &traceCount));
    if ( (Index < 1) || (Index > traceCount) )
    {
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 2, "Trace Index");
    }
    
    /* Get trace name */
    viCheckParm( Ivi_GetNthRepCapName(vi, "Trace",
                                      Index, &traceName), 2, "Index");
    
    actualSize = (ViInt32)strlen(traceName) + 1;
    
    /* Prepare return values */
    if (NameBufferSize == 0)
    {
        error = actualSize;
    }
    else 
    {
        if (NameBufferSize > 0)
        {
            if (actualSize > NameBufferSize)
            {
                error = actualSize;
                actualSize = NameBufferSize;
            }
        }
        memcpy(Name, traceName, actualSize-1);
        Name[actualSize-1] = '\0';
    }
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_Initiate
 * Purpose:   This function initiates an acquisition. After calling this function, 
 *            the spectrum analyzer leaves the idle state.
 *            
 *            This function does not check the instrument status. The user calls 
 *            the Acquisition Status function to determine when the acquisition 
 *            is complete. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_Initiate (ViSession vi)
{
    ViStatus    error = VI_SUCCESS;

    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if (!Ivi_Simulating(vi))                /* Call only when locked */
    {
        ViSession   io = Ivi_IOSession(vi); /* Call only when locked */
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE)); 
        
        viCheckErr( viPrintf (io, ":INIT;"));
    }
    
    /*
        Do not invoke the agn934xni_CheckStatus function here. It
        is invoked by the high-level driver functions when this function is
        used internally. After the user calls this function, the end-
        user can check for errors by calling the agn934xni_error_query
        function
    */

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_QueryTraceSize
 * Purpose:   This function queries the read-only Trace Size attribute. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_QueryTraceSize (ViSession vi, 
                                            ViConstString TraceName, 
                                            ViInt32* TraceSize)
{
    ViStatus    error = VI_SUCCESS;
    ViConstString   activeTrace;
    
    checkErr( Ivi_CoerceRepCapName (vi, TRACE_REP_CAP_NAME, TraceName, &TraceName));     
    
    checkErr( Ivi_LockSession (vi, VI_NULL));

    
    viCheckParm( Ivi_SetAttributeViString(vi, VI_NULL, AGN934XNI_ATTR_ACTIVE_TRACE, 
                 0, TraceName), 2, "Trace Name");
    
    checkErr( agn934xni_GetActiveTrace(vi, &activeTrace, VI_FALSE));    
    viCheckParm( Ivi_GetAttributeViInt32 (vi, activeTrace, AGN934XNI_ATTR_TRACE_SIZE,
                 0, TraceSize), 3, "Trace Size");                              

    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ReadYTrace
 * Purpose:   This function initiates a signal acquisition based on the present 
 *            instrument configuration. It then waits for the acquisition to complete, 
 *            and returns the trace as an array of amplitude values. The amplitude 
 *            array returns data that represent the amplitude of the signals obtained
 *            by sweeping from the start frequency to the stop frequency (in frequency
 *            domain, in time domain the amplitude array is ordered from beginning of 
 *            sweep to end). The Amplitude Units attribute determines the units of the 
 *            points in the amplitude array. This function resets the sweep count.
 *            
 *            If the spectrum analyzer did not complete the acquisition within the time
 *            period the user specified with the MaxTime parameter, the function returns 
 *            the Max Time Exceeded error.
 *            
 *            After this function executes, each element in the amplitude array parameter 
 *            is either a amplitude or a value indicating that the spectrum analyzer could 
 *            not sample an amplitude. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ReadYTrace (ViSession vi, 
                                        ViConstString TraceName,
                                        ViInt32 MaxTimeMilliseconds,
                                        ViInt32 ArrayLength, 
                                        ViInt32* ActualPoints,
                                        ViReal64 Amplitude[])
{
    ViStatus    error = VI_SUCCESS;

    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( agn934xni_Initiate (vi));
    error = agn934xni_WaitForOPC (vi, MaxTimeMilliseconds);  

    if ( error == VI_ERROR_TMO)                   
        viCheckErr( IVISPECAN_ERROR_MAX_TIME_EXCEEDED);                                                        

    checkErr( agn934xni_FetchYTrace (vi, TraceName, ArrayLength, ActualPoints, Amplitude));                            

    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            

/*===========================================================================*
 *= IviSpecAn ACPR Group Functions =============================*
 *===========================================================================*/         
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureACPR
 * Purpose:   This function configures the Adjacent Channel Power measurement. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureACPR (ViSession vi, 
                                           ViReal64 CenterFrequency, 
                                           ViReal64 MainIntergrationBandwidth)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     measurementType;
    ViInt32     instrumentMode;

    checkErr( Ivi_LockSession (vi, VI_NULL));

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrumentMode));

    if ((measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_ACPR) || 
        (instrumentMode != AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER))
        viCheckErrElab( IVI_ERROR_INVALID_CONFIGURATION, "The measurement type is not ACPR");
    
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_ACPR_CENTER_FREQUENCY,
                 0, CenterFrequency), 2, "Center Frequency");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_ACPR_MAIN_CHANNEL_INTERGRATION_BANDWIDTH,
                 0, MainIntergrationBandwidth), 3, "Main Intergration Bandwidth");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
} 

/*******************************************************************************
 * Function:  agn934xni_ConfigureACPRFilter
 * Purpose:   Configures the ACPR RRC filter settings. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C, N9324C models.            
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureACPRFilter (ViSession vi,
                                                 ViBoolean EnableRRCFilter,
                                                 ViReal64 RRCFilterAlphaValue)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_ACPR_RRC_FILTER_ENABLE,
                 0, EnableRRCFilter), 2, "Enable RRCFilter");
    
    if(EnableRRCFilter)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE,
                     0, RRCFilterAlphaValue), 3, "R RCFilter Alpha Value");                              
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}

/*===========================================================================*
 *= IviSpecAn IviSpecAnMultitrace Group Functions =============================*
 *===========================================================================*/         
            
                
/*******************************************************************************
 * Function:  agn934xni_AddTraces
 * Purpose:   This function modifies a trace to be the point by point sum of two 
 *            other traces. Any data in the destination trace is deleted.
 *            
 *            DestinationTrace = Trace1 + Trace2 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_AddTraces (
                  ViSession vi, ViConstString DestinationTrace, ViConstString Trace1, 
                  ViConstString Trace2)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_CoerceRepCapName (vi, TRACE_REP_CAP_NAME, DestinationTrace, &DestinationTrace));  
    checkErr( Ivi_CoerceRepCapName (vi, TRACE_REP_CAP_NAME, Trace1, &Trace1));   
    checkErr( Ivi_CoerceRepCapName (vi, TRACE_REP_CAP_NAME, Trace2, &Trace2));   
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if (!Ivi_Simulating( vi))   
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        viCheckErr( viPrintf (io, ":TRAC:MATH:ADD %s,%s,%s", DestinationTrace, Trace1, Trace2));        
    }   
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_CopyTrace
 * Purpose:   Copies the data array from one trace into another trace. Any data 
 *            in the Destination Trace is deleted. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_CopyTrace (ViSession vi, 
                                       ViConstString DestinationTrace, 
                                       ViConstString SourceTrace)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL)); 
    
    error = IVI_ERROR_FUNCTION_NOT_SUPPORTED;                                    

Error:
    Ivi_UnlockSession(vi, VI_NULL);   
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ExchangeTraces
 * Purpose:   Exchanges the data arrays of two traces.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ExchangeTraces (ViSession vi, 
                                            ViConstString Trace1, 
                                            ViConstString Trace2)
{
    ViStatus    error = VI_SUCCESS;
    checkErr( Ivi_LockSession (vi, VI_NULL));    
    
    error = IVI_ERROR_FUNCTION_NOT_SUPPORTED;                                    

Error:
    Ivi_UnlockSession(vi, VI_NULL);   
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_SubtractTraces
 * Purpose:   This function modifies a trace to be the point by point difference
 *            between two traces. Any data in the destination trace is deleted.
 *            
 *            DestinationTrace = Trace1 - Trace2 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_SubtractTraces ( ViSession vi, 
                                             ViConstString DestinationTrace, 
                                             ViConstString Trace1, 
                                             ViConstString Trace2)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_CoerceRepCapName (vi, TRACE_REP_CAP_NAME, DestinationTrace, &DestinationTrace));  
    checkErr( Ivi_CoerceRepCapName (vi, TRACE_REP_CAP_NAME, Trace1, &Trace1));   
    checkErr( Ivi_CoerceRepCapName (vi, TRACE_REP_CAP_NAME, Trace2, &Trace2));   
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if (!Ivi_Simulating( vi))   
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        viCheckErr( viPrintf (io, ":TRAC:MATH:SUBT %s,%s,%s", DestinationTrace, Trace1, Trace2));        
    }   
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            

/*===========================================================================*
 *= IviSpecAn IviSpecAnMarker Group Functions =============================*
 *===========================================================================*/         
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureDemodulation
 * Purpose:   Configures marker demodulation settings. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureDemodulation (ViSession vi, 
                                                   ViInt32 DemodulationFunction,
                                                   ViReal64 SpeakerVolume, 
                                                   ViReal64 DelayTime)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MARKER_DEMODULATION_FUNCTION,
                 0, DemodulationFunction), 2, "Demodulation Function");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_MARKER_DEMODULATION_SPEAKER_VOLUME,
                 0, SpeakerVolume), 3, "Speaker Volume");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_MARKER_DEMODULATION_DELAY_TIME,
                 0, DelayTime), 4, "Delay Time");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureMarkerPeakSearch
 * Purpose:   Configures peak search settings. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureMarkerPeakSearch (ViSession vi, 
                                                       ViBoolean MarkerContinuousPeakingEnable, 
                                                       ViInt32 PeakSearchMode)
{
    ViStatus    error = VI_SUCCESS;
    ViConstString  activeMarker;  
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));  
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, activeMarker, AGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE,
                 0, MarkerContinuousPeakingEnable), 2, "Marker Continuous Peaking Enable");
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_PEAK_SEARCH_TYPE,
                 0, PeakSearchMode), 3, "Peak Search Mode");
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureMarkerEnabled
 * Purpose:   This function enables the active marker on the specified Trace. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureMarkerEnabled (ViSession vi, 
                                                    ViBoolean MarkerEnabled, 
                                                    ViConstString MarkerTraceName)
{
    ViStatus    error = VI_SUCCESS;
    ViConstString  activeMarker; 
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));  
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, activeMarker, AGN934XNI_ATTR_MARKER_ENABLED,
                 0, MarkerEnabled), 2, "Marker Enabled");
    
    if (MarkerEnabled) 
    {
        viCheckParm( Ivi_SetAttributeViString (vi, activeMarker, AGN934XNI_ATTR_MARKER_TRACE,
                     0, MarkerTraceName), 3, "Marker Trace Name");                              
    }
    
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureMarkerFrequencyCounter
 * Purpose:   This function sets the marker frequency counter resolution and enables
 *            or disables the marker frequency counter. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureMarkerFrequencyCounter (ViSession vi,
                                                             ViBoolean Enabled,
                                                             ViReal64 Resolution)
{
    ViStatus    error = VI_SUCCESS;
    ViConstString  activeMarker;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));     
    viCheckParm( Ivi_SetAttributeViBoolean (vi, activeMarker, AGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED,
                 0, Enabled), 2, "Enabled");
 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureMarkerSearch
 * Purpose:   This function configures the Peak Excursion and Marker Threshold attribute values. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureMarkerSearch (ViSession vi, 
                                                   ViReal64 PeakExcursion, 
                                                   ViReal64 MarkerThreshold)
{
    ViStatus    error = VI_SUCCESS;
    ViConstString  activeMarker; 
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));
    
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_PEAK_EXCURSION,
                 0, PeakExcursion), 2, "Peak Excursion");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, activeMarker, AGN934XNI_ATTR_MARKER_THRESHOLD,
                 0, MarkerThreshold), 3, "Marker Threshold");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureSignalTrackEnabled
 * Purpose:   If set to True , the active marker is enabled. When False, the active 
 *            marker is disabled. 
 *
 *            Note:
 *            This function is not supported.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureSignalTrackEnabled (ViSession vi, 
                                                         ViBoolean SignalTrackEnabled)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL)); 
    
    error = IVI_ERROR_FUNCTION_NOT_SUPPORTED;

Error:
    Ivi_UnlockSession(vi, VI_NULL);   
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_DisableAllMarkers
 * Purpose:   This function disables all markers. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_DisableAllMarkers (ViSession vi)
{
    ViStatus    error = VI_SUCCESS;

    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if (!Ivi_Simulating(vi))                
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */

        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        viCheckErr( viPrintf (io, ":CALC:MARK:AOFF"));
    }
    
    {
        ViChar  marker_list[256] = MARKER_LIST;
        ViChar* marker_name;
    
        marker_name = strtok (marker_list, ",");
        while (marker_name)
        {
            checkErr(Ivi_SetAttributeViBoolean( vi,
                                                marker_name,
                                                AGN934XNI_ATTR_MARKER_ENABLED,
                                                IVI_VAL_SET_CACHE_ONLY | IVI_VAL_DONT_MARK_AS_SET_BY_USER,
                                                VI_FALSE));

            marker_name = strtok (NULL, ",");
        }
    }
    checkErr( Ivi_SetAttributeViString( vi, VI_NULL, AGN934XNI_ATTR_ACTIVE_MARKER,
                                        IVI_VAL_SET_CACHE_ONLY | IVI_VAL_DONT_MARK_AS_SET_BY_USER,
                                        DEFAULT_ACTIVE_MARKER));

    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_GetMarkerName
 * Purpose:   This function returns the specific driver defined marker name that 
 *            corresponds to the one-based index that the user specifies. If the 
 *            driver defines a qualified marker name, this function returns the 
 *            qualified name. If the value that the user passes for the Index 
 *            parameter is less then one or greater than the value of the Marker
 *            Count attribute, the function returns an empty string in the Name 
 *            parameter and returns the Invalid Value error. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_GetMarkerName (ViSession vi, 
                                           ViInt32 Index, 
                                           ViInt32 NameBufferSize, 
                                           ViChar Name[])
{
    ViStatus        error = VI_SUCCESS;
    ViConstString   marker_name;
    ViInt32         length;

    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( Ivi_GetNthRepCapName (vi, MARKER_REP_CAP_NAME,
                                    Index, &marker_name));

    if ( marker_name == NULL )
        viCheckParm( IVI_ERROR_INVALID_VALUE, 2, "index");

    if (NameBufferSize > 0 && Name != VI_NULL)
    {
        strncpy(Name, marker_name, NameBufferSize);
    }
    
    length = (marker_name) ? (ViInt32)strlen(marker_name) : 0;
    
    if ((length + 1) > NameBufferSize)
        error = length+1;

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_MarkerSearch
 * Purpose:   This function specifies the type of marker search and performs the 
 *            search. This function returns the Marker Not Enabled error if the 
 *            Marker Enabled attribute is set to False. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_MarkerSearch (ViSession vi,
                                          ViInt32 SearchType)
{
    ViStatus    error = VI_SUCCESS;
    ViConstString  activeMarker; 
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));    
    viCheckParm( Ivi_SetAttributeViInt32 (vi, activeMarker, AGN934XNI_ATTR_MARKER_PEAK_SEARCH,
                 0, SearchType), 2, "Search Type");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_MoveMarker
 * Purpose:   This function specifies the frequency in Hertz or time position in 
 *            seconds of the specified horizontal position. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_MoveMarker (ViSession vi, 
                                        ViReal64 MarkerPosition)
{
    ViStatus    error = VI_SUCCESS;
    ViConstString  activeMarker;  
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE)); 
    
    viCheckParm( Ivi_SetAttributeViReal64 (vi, activeMarker, AGN934XNI_ATTR_MARKER_POSITION,
                 0, MarkerPosition), 2, "Marker Position");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_QueryMarker
 * Purpose:   This function returns the horizontal position and the amplitude level 
 *            of the active marker. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_QueryMarker (ViSession vi, 
                                         ViReal64* MarkerPosition, 
                                         ViReal64* MarkerAmplitude)
{
    ViStatus    error = VI_SUCCESS;
    ViConstString   activeMarker; 
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));
    
    viCheckParm( Ivi_GetAttributeViReal64 (vi, activeMarker, AGN934XNI_ATTR_MARKER_POSITION,
                 0, MarkerPosition), 2, "Marker Position");
    viCheckParm( Ivi_GetAttributeViReal64 (vi, activeMarker, AGN934XNI_ATTR_MARKER_AMPLITUDE,
                 0, MarkerAmplitude), 3, "Marker Amplitude");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_SetActiveMarker
 * Purpose:   This function selects one of the available markers, and makes it the
 *            active marker. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_SetActiveMarker (ViSession vi, 
                                             ViConstString ActiveMarker)
{
    return Ivi_SetAttributeViString (vi, VI_NULL, AGN934XNI_ATTR_ACTIVE_MARKER,
                                     IVI_VAL_DIRECT_USER_CALL, ActiveMarker);
}
                
/*******************************************************************************
 * Function:  agn934xni_SetInstrumentFromMarker
 * Purpose:   This function uses the Marker Position or Marker Amplitude attributes
 *            to configure the spectrum analyzer setting specified by the 
 *            InstrumentSetting parameter.
 *            
 *            This function may set the Frequency Start, Frequency Stop, or Reference
 *            Level attributes.
 *            If the Marker Enabled attribute is set to False, this function returns
 *            the Marker Not Enabled error. If the Marker Type attribute is not Delta
 *            and the InstrumentSetting parameter is Frequency Span, the function
 *            returns the Delta Marker Not Enabled error. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_SetInstrumentFromMarker (ViSession vi, 
                                                     ViInt32 InstrumentSetting)
{
    ViStatus       error = VI_SUCCESS;
    ViConstString  activeMarker;
    ViInt32        instrMode = 0;
    ViInt32        measurementType = 0;

    checkErr( Ivi_LockSession (vi, VI_NULL));

    viCheckErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 
                                         0, &instrMode));
    viCheckErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE,
                                         0, &measurementType));

    if ( MEASUREMENT_TYPE_MARKER_CRITERIA(instrMode, measurementType) )
    {       
        /*
         * Get Active marker and test if the marker is enabled.
         */
        checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));

        viCheckParm( Ivi_SetAttributeViInt32 (vi, activeMarker, AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING,
                     0, InstrumentSetting), 2, "Instrument Setting");                              

        checkErr( agn934xni_CheckStatus (vi));
    }
    else
    {
        viCheckErrElab ( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current instrument mode or measurement type.");
    }

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            

/*===========================================================================*
 *= IviSpecAn IviSpecAnTrigger Group Functions =============================*
 *===========================================================================*/         
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureTriggerDelay
 * Purpose:   Configures the trigger settings on the spectrum analyzer.
 *            
 *            Note:
 *            Trigger subsystem is only valid when the analyzer is in zero span.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureTriggerDelay (ViSession vi, 
                                                   ViBoolean TriggerDelayTimeEnable,
                                                   ViReal64 TriggerDelayTime)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_TRIGGER_DELAY_TIME_ENABLE,
                 0, TriggerDelayTimeEnable), 2, "Trigger Delay Time Enable");
    if(TriggerDelayTimeEnable)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_TRIGGER_DELAY_TIME,
                     0, TriggerDelayTime), 3, "Trigger Delay Time");                              
    }
    
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureTriggerSource
 * Purpose:   This function specifies the trigger source that causes the spectrum 
 *            analyzer to leave the Wait-for-Trigger state. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureTriggerSource (ViSession vi, 
                                                    ViInt32 TriggerSource)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL)); 
    
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_TRIGGER_SOURCE,
                 0, TriggerSource), 2, "Trigger Source");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            

/*===========================================================================*
 *= IviSpecAn IviSpecAnExternalTrigger Group Functions ======================*
 *===========================================================================*/         
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureExternalTrigger
 * Purpose:   This function specifies at which level and slope of the external 
 *            trigger signal, acquisition is triggered. This is applicable when 
 *            the Trigger Source attribute is set to External. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureExternalTrigger (ViSession vi,
                                                      ViReal64 ExternalTriggerLevel,
                                                      ViInt32 ExternalTriggerSlope)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     trigger_source = 0;
    ViReal64    frequency_span = 0;
    ViInt32     result = -1;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));

    checkErr( Ivi_GetAttributeViInt32( vi, VI_NULL, AGN934XNI_ATTR_TRIGGER_SOURCE, 0, &trigger_source));
    checkErr( Ivi_GetAttributeViReal64( vi, VI_NULL, AGN934XNI_ATTR_FREQUENCY_SPAN, 0, &frequency_span));
    viCheckErr( Ivi_CompareWithPrecision(6, frequency_span, 0.0, &result)); 

    if ( result && trigger_source == AGN934XNI_VAL_TRIGGER_SOURCE_EXTERNAL )
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_EXTERNAL_TRIGGER_LEVEL,
                     0, ExternalTriggerLevel), 2, "External Trigger Level");

        viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_EXTERNAL_TRIGGER_SLOPE,
                     0, ExternalTriggerSlope), 3, "External Trigger Slope");                              
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_CONFIGURATION, 
            "The external trigger source must be selected AND configure the analyzer in zero span.");
    }

    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            

/*===========================================================================*
 *= IviSpecAn IviSpecAnVideoTrigger Group Functions =========================*
 *===========================================================================*/         
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureVideoTrigger
 * Purpose:   This function specifies at which level and slope of the video signal, 
 *            acquisition is triggered. This is applicable when the Trigger Source
 *            attribute is set to Video. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureVideoTrigger (ViSession vi, 
                                                   ViReal64 VideoTriggerLevel,
                                                   ViInt32 VideoTriggerSlope)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     trigger_source = 0;
    ViReal64    frequency_span = 0;
    ViInt32     result = VI_FALSE;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));

    checkErr( Ivi_GetAttributeViInt32( vi, VI_NULL, AGN934XNI_ATTR_TRIGGER_SOURCE, 0, &trigger_source));
    checkErr( Ivi_GetAttributeViReal64( vi, VI_NULL, AGN934XNI_ATTR_FREQUENCY_SPAN, 0, &frequency_span));
    viCheckErr( Ivi_CompareWithPrecision(0, frequency_span, 0.0, &result)); 

    if ( result && trigger_source == AGN934XNI_VAL_TRIGGER_SOURCE_VIDEO )
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_VIDEO_TRIGGER_LEVEL,
                     0, VideoTriggerLevel), 2, "Video Trigger Level");
        viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_VIDEO_TRIGGER_SLOPE,
                     0, VideoTriggerSlope), 3, "Video Trigger Slope");                           
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_CONFIGURATION, 
            "The external trigger source must be selected AND configure the analyzer in zero span.");
    }

    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            

/*===========================================================================*
 *= IviSpecAn IviSpecAnMarkerType Group Functions =============================*
 *===========================================================================*/         
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureMarkerType
 * Purpose:   This function selects the type of markers that you want to activate.
 *            
 *            Notes:
 *            The user must call agn934xc_SetActiveMarker function ahead to specify 
 *            the active marker before calling this function. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureMarkerType (ViSession vi, 
                                                 ViInt32 MarkerType, 
                                                 ViInt32 MarkerFunction)
{
    ViStatus    error = VI_SUCCESS;
    ViConstString  activeMarker;  
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE)); 
    
    viCheckParm( Ivi_SetAttributeViInt32 (vi, activeMarker, AGN934XNI_ATTR_MARKER_TYPE,
                 0, MarkerType), 2, "Marker Type");
    viCheckParm( Ivi_SetAttributeViInt32 (vi, activeMarker, AGN934XNI_ATTR_MARKER_FUNCTION,
                 0, MarkerFunction), 3, "Marker Function");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_QueryMarkerType
 * Purpose:   This function returns the type of the active marker. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_QueryMarkerType (ViSession vi,
                                             ViInt32* MarkerType)
{
    ViStatus       error = VI_SUCCESS;
    ViInt32        instrMode = 0;
    ViInt32        measurementType = 0;
    ViConstString   activeMarker;

    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));

    viCheckErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 
                                         0, &instrMode));
    viCheckErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE,
                                         0, &measurementType));

    if ( MEASUREMENT_TYPE_MARKER_CRITERIA(instrMode, measurementType) )
    {       
        viCheckParm( Ivi_GetAttributeViInt32 (vi, activeMarker, AGN934XNI_ATTR_MARKER_TYPE,
                     0, MarkerType), 2, "Marker Type");                              

        checkErr( agn934xni_CheckStatus (vi));
    }
    else
    {
        viCheckErrElab ( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current instrument mode or measurement type.");

    }

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            

/*===========================================================================*
 *= IviSpecAn Limit Line Group Functions =============================*
 *===========================================================================*/         
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureLimitLine
 * Purpose:   This function configures the specified limit line and measurement margin. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureLimitLine (ViSession vi, 
                                                ViConstString LimitLine, 
                                                ViBoolean Enabled, 
                                                ViInt32 Type, 
                                                ViInt32 XValue,
                                                ViReal64 YValue,
                                                ViInt32 LimitMode)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     limitLineIndex; 
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( Ivi_CoerceRepCapName (vi, LIMITLINE_REP_CAP_NAME, LimitLine, &LimitLine)); 
    checkErr( Ivi_GetRepCapIndex (vi, LIMITLINE_REP_CAP_NAME, LimitLine, &limitLineIndex));
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, LimitLine, AGN934XNI_ATTR_LIMIT_LINE_ENABLED,
                 0, Enabled), 3, "Enabled");
    viCheckParm( Ivi_SetAttributeViInt32 (vi, LimitLine, AGN934XNI_ATTR_LIMIT_LINE_TYPE,
                 0, Type), 4, "Type");
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_LIMIT_LINE_X_VALUE,
                 0, XValue), 5, "X Value");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, LimitLine, AGN934XNI_ATTR_LIMIT_LINE_Y_VALUE,
                 0, YValue), 6, "Y Value");
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_LIMIT_LINE_MODE,
                 0, LimitMode), 7, "Limit Mode");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               

/*===========================================================================*
 *= Custom Reflection Measurement Group Functions =============================*
 *===========================================================================*/         

/*******************************************************************************
 * Function:  agn934xni_EnableMarkerContinuousValley
 * Purpose:   Turns on/off marker continuous valley state in reflection measurement. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/
ViStatus _VI_FUNC agn934xni_EnableMarkerContinuousValley (ViSession vi,
                                                          ViBoolean EnableContinuousValley)
{
    ViStatus       error = VI_SUCCESS;
    ViConstString  activeMarker;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, activeMarker, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_MARKER_CONTINUOUS_VALLEY_ENABLE,
                 0, EnableContinuousValley), 2, "Enable Continuous Valley");
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureReflectionMeasurementTrace
 * Purpose:   Configures the Trace Display Type, Trace Math Type, Trace Average 
 *            Number State, Trace Average Number and Trace Data Format for 
 *            reflection measurement. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureReflectionMeasurementTrace (ViSession vi,
                                                                 ViInt32 DisplayType,
                                                                 ViInt32 MathType, 
                                                                 ViBoolean EnableAverageNumber,
                                                                 ViInt32 AverageNumber)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_DISPLAY_TYPE,
                 0, DisplayType), 2, "Display Type");
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE,
                 0, MathType), 3, "Math Type");
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_ENABLE,
                 0, EnableAverageNumber), 4, "Enable Average Number");
    if(EnableAverageNumber)
    {
        viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER,
                     0, AverageNumber), 5, "Average Number");
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureReflectionMeasurementAmplitude
 * Purpose:   Configures the Auto Scale State, Amplitude Scale Reference Level, 
 *            Amplitude Scale Per Division for reflection measurement. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureReflectionMeasurementAmplitude (ViSession vi,
                                                                     ViBoolean AutoScale,
                                                                     ViReal64 ReferenceLevel,
                                                                     ViReal64 ScalePerDivision)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL)); 
    
    if(AutoScale)
    {
        if(!Ivi_Simulating (vi)) 
        {
            ViSession   io = Ivi_IOSession (vi); /* Call only when locked */

            checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));  
        
            viCheckErr( viPrintf(io, "CAT:SCAL:AUTO"));  
        }
    } 
    else
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL,
                     0, ReferenceLevel), 3, "Reference Level");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION,
                     0, ScalePerDivision), 4, "Scale Per Division");                              
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureReflectionMeasurementDistance
 * Purpose:   Configures the Distance Unit, Start Distance Point and Stop Distance
 *            Point for reflection measurement.
 *
 *            Note:
 *            (1) This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            (2) Valid only when Reflection Measurement Type is Distance to Fault 
 *            Measurement. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureReflectionMeasurementDistance (ViSession vi,
                                                                    ViInt32 DistanceUnit,
                                                                    ViReal64 StartDistancePoint,
                                                                    ViReal64 StopDistancePoint)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_UNIT,
                 0, DistanceUnit), 2, "Distance Unit");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_START,
                 0, StartDistancePoint), 3, "Start Distance Point");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_STOP,
                 0, StopDistancePoint), 4, "Stop Distance Point");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureReflectionMeasurementFrequency
 * Purpose:   Configures the Start Frequency, Stop Frequency, Center Frequency 
 *            and Frequency Span for reflection measurement. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureReflectionMeasurementFrequency (ViSession vi,
                                                                     ViInt32 SettingMode,
                                                                     ViReal64 StartFrequency,
                                                                     ViReal64 StopFrequency,
                                                                     ViReal64 CenterFrequency,
                                                                     ViReal64 FrequencySpan)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));

    switch(SettingMode)
    {
    case AGN934XNI_VAL_FREQUENCY_SETTING_MODE_START_STOP:
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY,
                     0, StartFrequency), 3, "Start Frequency");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY,
                     0, StopFrequency), 4, "Stop Frequency");
        break;
    case AGN934XNI_VAL_FREQUENCY_SETTING_MODE_CENTER_SPAN:
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY,
                     0, CenterFrequency), 5, "Center Frequency");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN,
                     0, FrequencySpan), 6, "Frequency Span");                              
        break;
    default:
        break;
    }
    
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureReflectionMeasurementCalibration
 * Purpose:   Configures the Calibration Type for reflection measurement. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureReflectionMeasurementCalibration (ViSession vi,
                                                                       ViInt32 CalibrationType)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CALIBRATION_TYPE,
                 0, CalibrationType), 2, "Calibration Type");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureReflectionMeasurementDispalyType
 * Purpose:   Toggles the reflection measurement display mode between RL, VSWR 
 *            and LIN. The RL stands for Return Loss, and LIN stands for Reflection 
 *            Coefficient. It's only available for Reflection Measurement mode, 
 *            and Distance to Fault measurement mode.
 *
 *            Notes:
 *            (1) This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            (2) Valid only when Reflection Measurement Type is Distance to Fault Measurement. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureReflectionMeasurementDispalyType (ViSession vi,
                                                                       ViInt32 DisplayType,
                                                                       ViBoolean EnableDTFFrequencyDomain)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     reflectionMeasType = 0;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));   
    
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TYPE, 0, &reflectionMeasType));
    
    if(reflectionMeasType != AGN934XNI_VAL_REFLECTION_MEASUREMENT_TYPE_DISTANCE_TO_FAULT)
        viCheckErrElab(IVI_ERROR_INVALID_CONFIGURATION, "Valid only when Reflection Measurement Type is Distance to Fault Measurement.");
    
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISPLAY_TYPE,
                 0, DisplayType), 2, "Display Type");
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DTF_FREQUENCY_DOMAIN_ENABLE,
                 0, EnableDTFFrequencyDomain), 3, "Enable DTFFrequency Domain");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureReflectionMeasurement
 * Purpose:   Configure the Measurement Type and  IIM State for reflection measurement.
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureReflectionMeasurement (ViSession vi,
                                                            ViInt32 MeasurementType,
                                                            ViBoolean EnableIIM)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL)); 
    
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TYPE,
                 0, MeasurementType), 2, "Measurement Type");
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_IIM_ENABLE,
                 0, EnableIIM), 3, "Enable IIM");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ReadCurrentLimitsResult
 * Purpose:   Query the result of limit line or limit in reflection measurement.
 *            
 *            Note:
 *            This function is valid in all models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ReadCurrentLimitsResult (ViSession vi,
                                                     ViConstString LimitLine,
                                                     ViInt32* LimitResult)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( Ivi_CoerceRepCapName (vi, LIMITLINE_REP_CAP_NAME, LimitLine, &LimitLine));
    
    if(LimitResult == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 2, "Null address for Limit Result");  
    
    if (!Ivi_Simulating(vi))
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        viCheckErr( viQueryf (io, ":CALC:LLIN%s:FAIL?", "%d", LimitLine, LimitResult));                                  
    }
    else
    {
        *LimitResult = 0;
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_StartMarkerValleySearch
 * Purpose:   Perform marker valley search once. The maker valley search can find 
 *            the point with the lowest value in the current trace.
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            
 *            Command:
 *            :CALCulate:MARKer[1]|2|3|4|5|6:VALLey 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_StartMarkerValleySearch (ViSession vi)
{
    ViStatus    error = VI_SUCCESS;
    ViConstString  activeMarker;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));
    
    if (!Ivi_Simulating(vi))
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        viCheckErr( viPrintf (io, ":CALC:%s:VALL", activeMarker));                                  
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_StartMarkerPeakSearch
 * Purpose:   Perform marker peak search once.
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            
 *            Command:
 *            :CALCulate:MARKer[1]|2|3|4|5|6:PEAK 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_StartMarkerPeakSearch (ViSession vi)
{
    ViStatus    error = VI_SUCCESS;
    ViConstString  activeMarker;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));
    
    if (!Ivi_Simulating(vi))
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        viCheckErr( viPrintf (io, ":CALC:%s:PEAK", activeMarker));                                  
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ReadReferenceMarker
 * Purpose:   Query current reference marker X/Y axis value. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ReadReferenceMarker (ViSession vi,
                                                 ViReal64* XAxisValue,
                                                 ViReal64* YAxisValue)
{
    ViStatus       error = VI_SUCCESS;
    ViConstString  activeMarker;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));
    
    if(XAxisValue == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 2, "Null address for X Axis Value");
    
    if(YAxisValue == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "Null address for Y Axis Value");
    
    if (!Ivi_Simulating(vi))
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        viCheckErr( viQueryf(io, ":CALC:%s:RX?", "%lf", activeMarker, XAxisValue)); 
        viCheckErr( viQueryf(io, ":CALC:%s:RY?", "%lf", activeMarker, YAxisValue));                               
    }   
    else
    {
        *XAxisValue = 0;
        *YAxisValue = 0;
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               

                
/*******************************************************************************
 * Function:  agn934xni_ReadReflectionMeasurementTraceData
 * Purpose:   Query the current trace data. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ReadReflectionMeasurementTraceData (ViSession vi,
                                                                ViInt32 MaxTime,
                                                                ViInt32 DataType,
                                                                ViReal64 ResultArray[],
                                                                ViInt32 ResultArrayLength,
                                                                ViInt32* ActualNumber)
{
    ViStatus    error = VI_SUCCESS;
    ViChar      *buffer = VI_NULL;

    if(DataType != AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_TYPE_DATA
       && DataType != AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_TYPE_MEM)
         viCheckParm( IVI_ERROR_INVALID_PARAMETER, 2, "Not valid value for Data Type");
    
    if(ResultArray == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "Null address for Result Array");      
    
    if (ResultArrayLength <= 0)
    {
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 4, "The array length must be greater than zero");
    }
    
    if(ActualNumber == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 5, "Null address for Actual Number");
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( agn934xni_Initiate (vi));
    error = agn934xni_WaitForOPC (vi, MaxTime);  
    
    if ( error == VI_ERROR_TMO)                   
        viCheckErr( IVISPECAN_ERROR_MAX_TIME_EXCEEDED);   
    
    if(!Ivi_Simulating (vi))
    {
        ViSession   io = Ivi_IOSession (vi); /* Call only when locked */

        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));  
        
        checkErr( Ivi_Alloc (vi, 20*ResultArrayLength, (ViAddr *)(&buffer)));
        
        viCheckErr( viQueryf(io, ":TRAC? %s", "%s", agn934xni_TraceDataType[DataType], buffer));

        checkErr( agn934xni_ParseRealArray(vi, buffer, ResultArrayLength, ActualNumber, ResultArray));
    }
    else
    {
        ResultArray[0] = 50;
        *ActualNumber = 1;
    }
    
    checkErr( agn934xni_CheckStatus (vi));

Error:
    if (buffer != VI_NULL)
        Ivi_Free(vi, buffer);   
    
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_SaveTraceData
 * Purpose:   Save the current trace data to memory.
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            
 *            Commands:
 *            [:SENSe]:CAT:TRACe:SAVE 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_SaveTraceData (ViSession vi)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if (!Ivi_Simulating(vi))
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        viCheckErr( viPrintf (io, ":CAT:TRAC:SAVE"));                                  
    }                                    
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_EnableReflectionMeasurementIIM
 * Purpose:   Turn on/off the IIM state for reflection measurement.
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_EnableReflectionMeasurementIIM (ViSession vi,
                                                            ViBoolean EnableIIM)
{
    ViStatus    error = VI_SUCCESS;

    checkErr( Ivi_LockSession (vi, VI_NULL));   

    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_IIM_ENABLE,
                 0, EnableIIM), 2, "Enable IIM");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}           
/*******************************************************************************
 * Function:  agn934xni_ConfigureReflectionMeasurementCable
 * Purpose:   Configure the Cable Type, Selected Cable, Cable Attenuation, Cable 
 *            Velocity Factor for reflection measurement.
 *
 *            Notes:
 *            (1) This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            (2) Valid only when Reflection Measurement Type is Distance to Fault Measurement. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureReflectionMeasurementCable (ViSession vi,
                                                                 ViInt32 CableType,
                                                                 ViConstString CableName,
                                                                 ViReal64 CableAttenuation,
                                                                 ViReal64 CableVelocityFactor)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     reflectionMeasType = 0;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));   
    
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TYPE, 0, &reflectionMeasType));
    
    if(reflectionMeasType != AGN934XNI_VAL_REFLECTION_MEASUREMENT_TYPE_DISTANCE_TO_FAULT)
        viCheckErrElab(IVI_ERROR_INVALID_CONFIGURATION, "Valid only when Reflection Measurement Type is Distance to Fault Measurement.");
        
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_TYPE,
                 0, CableType), 2, "Cable Type");
        
    if(CableType != AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_CUSTOM)
    {
        if(!Ivi_Simulating (vi)) 
        {
            ViSession   io = Ivi_IOSession (vi); /* Call only when locked */

            checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));  
        
            viCheckErr( viPrintf(io, ":CAT:CABL:LOAD %s", CableName));  
        }
    }
    else
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_ATTENUATION,
                     0, CableAttenuation), 4, "Cable Attenuation");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR,
                     0, CableVelocityFactor), 5, "Cable Velocity Factor"); 
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            

/*===========================================================================*
 *= Custom SEM Group Functions =============================*
 *===========================================================================*/         

/*******************************************************************************
 * Function:  agn934xni_ConfigureSEMAverage
 * Purpose:   Configures the Average State and Average Number in SEM measurement. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureSEMAverage (ViSession vi,
                                                 ViBoolean AverageEnable,
                                                 ViInt32 AverageNumber)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_SEM_AVERAGE_ENABLE,
                 0, AverageEnable), 2, "Average Enable");
    if(AverageEnable)
    {
        viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_SEM_AVERAGE_NUMBER,
                     0, AverageNumber), 3, "Average Number");                              
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureSEMRefChannel
 * Purpose:   Configure the Channel Integrate Bandwidth, Center Frequency, Channel 
 *            Span, Auto Total Power Reference State, Total Power Reference, Auto 
 *            Resolution Bandwidth State and Resolution Bandwidth for SEM measurement. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureSEMRefChannel (ViSession vi,
                                                    ViReal64 ChannelIntegrateBandwidth,
                                                    ViReal64 CenterFrequency, 
                                                    ViReal64 ChannelSpan,
                                                    ViBoolean AutoTotalPowerReference,
                                                    ViReal64 TotalPowerReference, 
                                                    ViBoolean AutoResolutionBandwidth,
                                                    ViReal64 ResolutionBandwidth)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH,
                 0, ChannelIntegrateBandwidth), 2, "Channel Integrate Bandwidth");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_SEM_CENTER_FREQUENCY,
                 0, CenterFrequency), 3, "Center Frequency");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_SEM_CHANNEL_SPAN,
                 0, ChannelSpan), 4, "Channel Span");
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_SEM_AUTO_TOTAL_POWER_REFERENCE_ENABLE,
                 0, AutoTotalPowerReference), 5, "Auto Total Power Reference");
    if(!AutoTotalPowerReference)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE,
                     0, TotalPowerReference), 6, "Total Power Reference");
    }
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_SEM_AUTO_RESOLUTION_BANDWIDTH_ENABLE,
                 0, AutoResolutionBandwidth), 7, "Auto Resolution Bandwidth");
    if(!AutoResolutionBandwidth)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH,
                     0, ResolutionBandwidth), 8, "Resolution Bandwidth");                              
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}   
                
/*******************************************************************************
 * Function:  agn934xni_ReadSEMData
 * Purpose:   Query the measured power / peak power frequency of each upper offset c
 *            hannel in SEM measurement.
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            
 *            Commands:
 *            [:SENSe]:SEMask:OFFSet:LIST:LOWer:POWer?
 *            [:SENSe]:SEMask:OFFSet:LIST:UPPer:POWer?
 *            [:SENSe]:SEMask:OFFSet:LIST:LOWer:PEAK:FREQuency?
 *            [:SENSe]:SEMask:OFFSet:LIST:Upper:PEAK:FREQuency? 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ReadSEMData (ViSession vi,
                                         ViInt32 MaxTime,
                                         ViInt32 DataType,
                                         ViReal64* OffsetAValue,
                                         ViReal64* OffsetBValue,
                                         ViReal64* OffsetCValue,
                                         ViReal64* OffsetDValue,
                                         ViReal64* OffsetEValue)
{
    ViStatus    error = VI_SUCCESS;

    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if(OffsetAValue == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 2, "Null address for Offset A Value");
    if(OffsetBValue == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "Null address for Offset B Value");
    if(OffsetCValue == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 4, "Null address for Offset C Value");
    if(OffsetDValue == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 5, "Null address for Offset D Value");
    if(OffsetEValue == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 6, "Null address for Offset E Value");
    
    if (!Ivi_Simulating(vi))
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        
        checkErr( agn934xni_Initiate (vi));
        error = agn934xni_WaitForOPC (vi, MaxTime);  

        if ( error == VI_ERROR_TMO)                   
            viCheckErr( IVISPECAN_ERROR_MAX_TIME_EXCEEDED);     
        
        viCheckErr( viQueryf (io, ":SEM:OFFS:LIST:%s?", "%lf,%lf,%lf,%lf,%lf", 
                              agn934xni_SEMOffsetDataType[DataType],
                              OffsetAValue,
                              OffsetBValue,
                              OffsetCValue,
                              OffsetDValue,
                              OffsetEValue));                                  
    }
    else
    {
        OffsetAValue = OffsetBValue = OffsetCValue = OffsetDValue = OffsetEValue = 0;   
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ReadSEMFailFlag
 * Purpose:   Query fail flag of each lower/upper offset channel in SEM measurement.
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models. 
 *            
 *            Commands:
 *            [:SENSe]:SEMask:OFFSet:LIST:LOWer:FAIL?
 *            [:SENSe]:SEMask:OFFSet:LIST:Upper:FAIL? 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ReadSEMFailFlag (ViSession vi,
                                             ViInt32 MaxTime,
                                             ViInt32 FlagType,
                                             ViBoolean* OffsetAResult,
                                             ViBoolean* OffsetBResult,
                                             ViBoolean* OffsetCResult,
                                             ViBoolean* OffsetDResult,
                                             ViBoolean* OffsetEResult)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if(OffsetAResult == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 2, "Null address for Offset A Value");
    if(OffsetBResult == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "Null address for Offset B Value");
    if(OffsetCResult == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 4, "Null address for Offset C Value");
    if(OffsetDResult == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 5, "Null address for Offset D Value");
    if(OffsetEResult == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 6, "Null address for Offset E Value");
    
    if (!Ivi_Simulating(vi))
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        
        checkErr( agn934xni_Initiate (vi));
        error = agn934xni_WaitForOPC (vi, MaxTime);  

        if ( error == VI_ERROR_TMO)                   
            viCheckErr( IVISPECAN_ERROR_MAX_TIME_EXCEEDED);   
        
        viCheckErr( viQueryf (io, ":SEM:OFFS:LIST:%s:FAIL?", "%lf,%lf,%lf,%lf,%lf", 
                              agn934xni_SEMFailFlagType[FlagType],
                              OffsetAResult,
                              OffsetBResult,
                              OffsetCResult,
                              OffsetDResult,
                              OffsetEResult));                                  
    }
    else
    {
        OffsetAResult = OffsetBResult = OffsetCResult = OffsetDResult = OffsetEResult = 0;  
    }
    
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureSEMFailSettings
 * Purpose:   Configures the Fail log/hold/beep status of SEM measurement. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureSEMFailSettings (ViSession vi,
                                                      ViBoolean EnableLog,
                                                      ViBoolean EnableHold,
                                                      ViBoolean EnableBeep)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_SEM_FAIL_LOG_ENABLE,
                 0, EnableLog), 2, "Enable Log");
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_SEM_FAIL_HOLD_ENABLE,
                 0, EnableHold), 3, "Enable Hold");
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_SEM_FAIL_BEEP_ENABLE,
                 0, EnableBeep), 4, "Enable Beep");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureSEMMeasurementType
 * Purpose:   Configures the measurement type in SEM measurement. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureSEMMeasurementType (ViSession vi,
                                                         ViInt32 MeasurementType)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_SEM_MEASUREMENT_TYPE,
                 0, MeasurementType), 2, "Measurement Type");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureSEMOffsetMask
 * Purpose:   Choose the mask type in SEM measurement. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureSEMOffsetMask (ViSession vi,
                                                    ViInt32 OffsetAMaskType,
                                                    ViInt32 OffsetBMaskType,
                                                    ViInt32 OffsetCMaskType,
                                                    ViInt32 OffsetDMaskType,
                                                    ViInt32 OffsetEMaskType)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if (!Ivi_Simulating( vi))   
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        viCheckErr( viPrintf (io, ":SEM:OFFS:LIST:TEST %s,%s,%s,%s,%s", 
                              agn934xni_SEMOffsetMaskType[OffsetAMaskType],
                              agn934xni_SEMOffsetMaskType[OffsetBMaskType],
                              agn934xni_SEMOffsetMaskType[OffsetCMaskType],
                              agn934xni_SEMOffsetMaskType[OffsetDMaskType],
                              agn934xni_SEMOffsetMaskType[OffsetEMaskType]));        
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}

/*******************************************************************************
 * Function:  agn934xni_ConfigureAutoSEMOffset
 * Purpose:   Enables/Disables the auto Sweep Time or Resolution Bandwidth for 
 *            SEM measurement.
 *
 *            Notes:
 *            (1) This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            (2) Valid only when ChannelCharacteristic is Resolution Bandwidth or
 *                Sweep Time.
 *            
 *            Commands:
 *            [:SENSe]:SEMask:OFFSet:LIST:BANDwidth|BWIDth[:RESolution]:AUTO OFF|ON
 *            [:SENSe]:SEMask:OFFSet:LIST:SWEeptime:AUTO OFF|ON
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureAutoSEMOffset (ViSession vi,
                                                    ViInt32 CharacteristicType,
                                                    ViBoolean AutoOffsetA,
                                                    ViBoolean AutoOffsetB,
                                                    ViBoolean AutoOffsetC,
                                                    ViBoolean AutoOffsetD,
                                                    ViBoolean AutoOffsetE)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if (!Ivi_Simulating( vi))   
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        viCheckErr( viPrintf (io, ":SEM:OFFS:LIST:%s:AUTO %s,%s,%s,%s,%s", 
                              agn934xni_SEMOffsetCharType[CharacteristicType],
                              AutoOffsetA ? "ON" : "OFF",
                              AutoOffsetB ? "ON" : "OFF",
                              AutoOffsetC ? "ON" : "OFF",
                              AutoOffsetD ? "ON" : "OFF",
                              AutoOffsetE ? "ON" : "OFF"));   
    }
    
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}   
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureSEMOffset
 * Purpose:   Configures the Start Frequency, Stop Frequency, Sweep Time, Resolution 
 *            Bandwidth, Measurement Bandwidth, Abs StartAmpt, Abs StopAmpt, Relative
 *            StartAmpt, or Relative StopAmpt for SEM measurement.
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            
 *            Commands:
 *            [:SENSe]:SEMask:OFFSet:LIST:FREQuency:STARt <freq>,<freq>,<freq>,<freq>,<freq>
 *            [:SENSe]:SEMask:OFFSet:LIST:FREQuency:STOP <freq>,<freq>,<freq>,<freq>,<freq>
 *            [:SENSe]:SEMask:OFFSet:LIST:SWEeptime <time>,<time>,<time>,<time>,<time>
 *            [:SENSe]:SEMask:OFFSet:LIST:BANDwidth|BWIDth[:RESolution] <real_number>,<real_number>,<real_number>,<real_number>,<real_number>
 *            [:SENSe]:SEMask:OFFSet:LIST:BANDwidth|BWIDth:MEASure <Integer>, <Integer>,<Integer>, <Integer>,<Integer>
 *            [:SENSe]:SEMask:OFFSet:LIST:STARt:ABSolute <ampl>,<ampl>,<ampl>,<ampl>,<ampl>
 *            [:SENSe]:SEMask:OFFSet:LIST:STOP:ABSolute <ampl>,<ampl>,<ampl>,<ampl>,<ampl>
 *            [:SENSe]:SEMask:OFFSet:LIST:STARt:RCARrier <ampl>,<ampl>,<ampl>,<ampl>,<ampl>
 *            [:SENSe]:SEMask:OFFSet:LIST:STOP:RCARrier <ampl>,<ampl>,<ampl>,<ampl>,<ampl> 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureSEMOffset (ViSession vi,
                                                ViInt32 CharacteristicType,
                                                ViReal64 OffsetAValue,
                                                ViReal64 OffsetBValue,
                                                ViReal64 OffsetCValue,
                                                ViReal64 OffsetDValue,
                                                ViReal64 OffsetEValue)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if (!Ivi_Simulating( vi))   
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        viCheckErr( viPrintf (io, ":SEM:OFFS:LIST:%s %lf,%lf,%lf,%lf,%lf", 
                              agn934xni_SEMOffsetCharType[CharacteristicType],
                              OffsetAValue,
                              OffsetBValue,
                              OffsetCValue,
                              OffsetDValue,
                              OffsetEValue));   
    }
    
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ReadSEMYMarker
 * Purpose:   Query the marker readout of Y axis in SEM measurement. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ReadSEMYMarker (ViSession vi,
                                            ViReal64* YMarker)
{
    ViStatus       error = VI_SUCCESS;
    ViConstString  activeMarker;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));  
                                  
    if (!Ivi_Simulating( vi))   
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        viCheckErr( viQueryf (io, ":SEM:%s:Y?", "%lf", activeMarker, YMarker));        
    } 
    
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            

/*===========================================================================*
 *= Custom Power Meter Group Functions =============================*
 *===========================================================================*/         
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigurePowerMeterTrigger
 * Purpose:   Configure the Trigger Type, Trigger Source, Auto Trigger Level State, 
 *            Trigger Level and Trigger Slope Mode for power meter mode. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigurePowerMeterTrigger (ViSession vi,
                                                        ViInt32 TriggerType,
                                                        ViInt32 TriggerSource,
                                                        ViBoolean AutoTriggerLevel,
                                                        ViReal64 TriggerLevel,
                                                        ViInt32 TriggerSlope)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_TRIGGER_TYPE,
                 0, TriggerType), 2, "Trigger Type");
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_TRIGGER_SOURCE,
                 0, TriggerSource), 3, "Trigger Source");
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_AUTO_TRIGGER_LEVEL_ENABLE,
                 0, AutoTriggerLevel), 4, "Auto Trigger Level");
    if(!AutoTriggerLevel && TriggerSource == AGN934XNI_VAL_POWER_METER_TRIGGER_SOURCE_INTERNAL)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL,
                     0, TriggerLevel), 5, "Trigger Level");
    }
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_TRIGGER_SLOPE,
                 0, TriggerSlope), 6, "Trigger Slope");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigurePowerMeterTriggerTime
 * Purpose:   Configure the Trigger Delay Time, Trigger Holdoff Time and  Trigger 
 *            Hysteresis Value for power meter mode. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigurePowerMeterTriggerTime (ViSession vi,
                                                            ViReal64 TriggerDelayTime,
                                                            ViReal64 TriggerHoldoffTime,
                                                            ViReal64 TriggerHysteresisValue)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME,
                 0, TriggerDelayTime), 2, "Trigger Delay Time");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME,
                 0, TriggerHoldoffTime), 3, "Trigger Holdoff Time");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE,
                 0, TriggerHysteresisValue), 4, "Trigger Hysteresis Value");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigurePowerMeterLimit
 * Purpose:   Configure the Limit State, Limit Upper Value, Limit Lower Value 
 *            and Limit Beep State for power meter mode. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigurePowerMeterLimit (ViSession vi,
                                                      ViBoolean EnableLimit,
                                                      ViReal64 UpperLimit,
                                                      ViReal64 LowerLimit,
                                                      ViBoolean EnableLimitBeep)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_LIMIT_ENABLE,
                 0, EnableLimit), 2, "Enable Limit");
    
    if(EnableLimit)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE,
                     0, UpperLimit), 3, "Upper Limit");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE,
                     0, LowerLimit), 4, "Lower Limit");
        viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_LIMIT_BEEP_ENABLE,
                     0, EnableLimitBeep), 5, "Enable Limit Beep"); 
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigurePowerMeterPeakTrace
 * Purpose:   Configure the Trace X Start Time, Trace X Scale Time,  Trace Y Max 
 *            Value and Trace Y Scale Value for power meter mode. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigurePowerMeterPeakTrace (ViSession vi,
                                                          ViReal64 TraceXStartTime,
                                                          ViReal64 TraceXScaleTime,
                                                          ViReal64 TraceYMaxValue,
                                                          ViReal64 TraceYScaleValue)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME,
                 0, TraceXStartTime), 2, "Trace X Start Time");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME,
                 0, TraceXScaleTime), 3, "Trace X Scale Time");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE,
                 0, TraceYMaxValue), 4, "Trace Y Max Value");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE,
                 0, TraceYScaleValue), 5, "Trace Y Scale Value");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigurePowerMeterPeakGate
 * Purpose:   Configure the Gate Start Time and Gate Length Time for power meter mode. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigurePowerMeterPeakGate (ViSession vi,
                                                         ViReal64 GateStartTime,
                                                         ViReal64 GateLengthTime)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_GATE_START_TIME,
                 0, GateStartTime), 2, "Gate Start Time");
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME,
                 0, GateLengthTime), 3, "Gate Length Time");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigurePowerMeterAdvanced
 * Purpose:   Configure the Measurement Interval Time,Video Bandwidth Type,  Video
 *            Average Count Auto State and Video Average Count for power meter mode. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigurePowerMeterAdvanced (ViSession vi,
                                                         ViReal64 MeasurementIntervalTime,
                                                         ViInt32 VideoBandwidthType,
                                                         ViBoolean AutoVideoAverageCount,
                                                         ViInt32 VideoAverageCount)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME,
                 0, MeasurementIntervalTime), 2, "Measurement Interval Time");
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE,
                 0, VideoBandwidthType), 3, "Video Bandwidth Type");
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_AUTO_VIDEO_AVERAGE_COUNT_ENABLE,
                 0, AutoVideoAverageCount), 4, "Auto Video Average Count");
    if(!AutoVideoAverageCount)
    {
        viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT,
                     0, VideoAverageCount), 5, "Video Average Count");                              
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigurePowerMeterAverage
 * Purpose:   Configure the Average State, Average Count Auto State,  Average Count
 *            Number and Average Step Detect State for power meter mode. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigurePowerMeterAverage (ViSession vi,
                                                        ViBoolean EnableAverage,
                                                        ViBoolean AutoAverageCount,
                                                        ViInt32 AverageCountNumber,
                                                        ViBoolean EnableAverageStepDetect)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_AVERAGE_ENABLE,
                 0, EnableAverage), 2, "Enable Average");
    
    if(EnableAverage)
    {
        viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_AUTO_AVERAGE_COUNT_ENABLE,
                     0, AutoAverageCount), 3, "Auto Average Count");
        if(!AutoAverageCount)
        {
            viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER,
                         0, AverageCountNumber), 4, "Average Count Number");
        }
        viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_AVERAGE_STEP_DETECT_ENABLE,
                     0, EnableAverageStepDetect), 5, "Enable Average Step Detect");                              
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigurePowerMeter
 * Purpose:   Configure the Auto Power Range State, Power Range, Center Frequency,
 *            Reference Power State, Reference, Power, Reference Power Value, Offset
 *            State and Offset Value for power meter mode. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigurePowerMeter (ViSession vi,
                                                 ViBoolean AutoPowerRange,
                                                 ViInt32 PowerRange,
                                                 ViReal64 CenterFrequency,
                                                 ViBoolean EnableReferencePower,
                                                 ViReal64 ReferencePowerValue,
                                                 ViBoolean EnableOffset,
                                                 ViReal64 OffsetValue)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_AUTO_POWER_RANGE_ENABLE,
                 0, AutoPowerRange), 2, "Auto Power Range");
    if(!AutoPowerRange)
    {
        viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_POWER_RANGE,
                     0, PowerRange), 3, "Power Range");
    }
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY,
                 0, CenterFrequency), 4, "Center Frequency");
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_ENABLE,
                 0, EnableReferencePower), 5, "Enable Reference Power");
    if(EnableReferencePower)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE,
                     0, ReferencePowerValue), 6, "Reference Power Value");
    }
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_OFFSET_ENABLE,
                 0, EnableOffset), 7, "Enable Offset");
    if(EnableOffset)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_OFFSET_VALUE,
                     0, OffsetValue), 8, "Offset Value");                              
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigurePowerMeterSweepState
 * Purpose:   Configure the Power Meter Sweep State. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigurePowerMeterSweepState (ViSession vi,
                                                           ViInt32 SweepState)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_SWEEP_STATE,
                 0, SweepState), 2, "Sweep State");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigurePowerSensorZeroingType
 * Purpose:   Configure the power sensor zeroing type 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigurePowerSensorZeroingType (ViSession vi,
                                                             ViInt32 ZeroingType)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_POWER_METER_ZEROING_TYPE,
                 0, ZeroingType), 2, "Zeroing Type");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ReadLimitTestResult
 * Purpose:   Query the quantity of limit fail test points. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ReadLimitTestResult (ViSession vi,
                                                 ViInt32* LimitFailureCount)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if(LimitFailureCount == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 4, "Null address for Limit Failure Count");
    
    if (!Ivi_Simulating( vi))   
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        viCheckErr( viQueryf (io, ":CALC:LIM:FCO?", "%d", LimitFailureCount));        
    } 
    else
    {
        *LimitFailureCount = 0;
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_StartPowerSensorZeroing
 * Purpose:   Perform power sensor zeroing operation.
 *            
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            Command:
 *            :CALibration[1]:ZERO:ONCE 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_StartPowerSensorZeroing (ViSession vi)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if (!Ivi_Simulating( vi))   
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        viCheckErr( viPrintf (io, ":CAL:ZERO:ONCE"));        
    }                                  
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            

/*===========================================================================*
 *= Custom Demodulation Group Functions =============================*
 *===========================================================================*/         
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureDemodulationTrigger
 * Purpose:   Configures the Trigger Type,  Trigger Delay State, Trigger Delay Time,
 *            RF Trigger Level and Trigger Slope for ASK/FSK demodulation analysis.
 *
 *            Notes:
 *            (1) This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            (2) Valid only for ASK/FSK mode. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureDemodulationTrigger (ViSession vi,
                                                          ViInt32 TriggerType,
                                                          ViBoolean EnableTriggerDelay,
                                                          ViReal64 TriggerDelay,
                                                          ViReal64 RFTriggerLevel,
                                                          ViInt32 TriggerSlope)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_TYPE,
                 0, TriggerType), 2, "Trigger Type");
    
    switch(TriggerType)
    {
    case  AGN934XNI_VAL_DEMODULATION_TRIGGER_TYPE_IMMEDIATE:
        break;
    case AGN934XNI_VAL_DEMODULATION_TRIGGER_TYPE_EXTERNAL:
        viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_ENABLE,
                     0, EnableTriggerDelay), 3, "Enable Trigger Delay");
        if(EnableTriggerDelay)
        {
            viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME,
                         0, TriggerDelay), 4, "Trigger Delay");
        }
        viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_EXTERNAL_TRIGGER_TYPE,
                     0, TriggerSlope), 6, "Trigger Slope");
        break;
    case AGN934XNI_VAL_DEMODULATION_TRIGGER_TYPE_RFTRIGGER:
        viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_ENABLE,
                     0, EnableTriggerDelay), 3, "Enable Trigger Delay");
        if(EnableTriggerDelay)
        {
            viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME,
                         0, TriggerDelay), 4, "Trigger Delay");
        }
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL,
                     0, RFTriggerLevel), 5, "RF Trigger Level");        
        break;
    default:
        break;      
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureDemodulationFilter
 * Purpose:   Configures the Measurement Filter,  Reference Filter and Filter 
 *            Symbols for ASK/FSK demodulation analysis.
 *
 *            Notes:
 *            (1) This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            (2) Valid only for ASK/FSK mode. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureDemodulationFilter (ViSession vi,
                                                         ViInt32 MeasurementFilter,
                                                         ViInt32 ReferenceFilter,
                                                         ViInt32 FilterSymbols,
                                                         ViReal64 AlphaBbt)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER,
                 0, MeasurementFilter), 2, "Measurement Filter");
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER,
                 0, ReferenceFilter), 3, "Reference Filter");
    if(MeasurementFilter != AGN934XNI_VAL_DEMODULATION_FILTER_OFF
        || ReferenceFilter != AGN934XNI_VAL_DEMODULATION_FILTER_OFF)
    {
        viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS,
                     0, FilterSymbols), 4, "Filter Symbols");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT,
                     0, AlphaBbt), 5, "Alpha/Bbt");                              
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureDemodulationDisplay
 * Purpose:   Configures the Scale per division, Reference Value, Reference Position, 
 *            Scale Coupling State for X or Y axis.
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureDemodulationDisplay (ViSession vi,
                                                          ViInt32 Axis,
                                                          ViBoolean EnableScaleCoupling,
                                                          ViReal64 ScalePerDivision,
                                                          ViReal64 ReferenceValue,
                                                          ViInt32 ReferencePosition,
                                                          ViInt32 ViewType)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     instrMode = 0;
    ViInt32     demodulationMode = 0;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, &demodulationMode));
    
    if(instrMode != AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION)
        checkErr(IVI_ERROR_INVALID_CONFIGURATION);  
    
    switch(Axis)
    {
    case AGN934XNI_VAL_DEMODULATION_AXIS_X:
        switch(demodulationMode)
        {
        case AGN934XNI_VAL_DEMODULATION_MODE_AM:
        case AGN934XNI_VAL_DEMODULATION_MODE_FM:
            viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_COUPLING_ENABLE,
                         0, EnableScaleCoupling), 3, "Enable Scale Coupling");
            if(!EnableScaleCoupling)
            {
                viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION,
                             0, ScalePerDivision), 4, "Scale Per Division");                
            }
            viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE,
                         0, ReferenceValue), 5, "Reference Value"); 
            viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_POSITION,
                         0, ReferencePosition), 6, "Reference Position");
            break;
        case AGN934XNI_VAL_DEMODULATION_MODE_ASK:
        case AGN934XNI_VAL_DEMODULATION_MODE_FSK:
            viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_COUPLING_ENABLE,
                         0, EnableScaleCoupling), 3, "Enable Scale Coupling");
            if(!EnableScaleCoupling)
            {
                viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION,
                             0, (ViInt32)ScalePerDivision), 4, "Scale Per Division");               
            }
            viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE,
                         0, (ViInt32)ReferenceValue), 5, "Reference Value"); 
            viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_POSITION,
                         0, ReferencePosition), 6, "Reference Position");
            break;
        default:
            break;
        }
        break;
    case AGN934XNI_VAL_DEMODULATION_AXIS_Y:
        switch(demodulationMode)
        {
        case AGN934XNI_VAL_DEMODULATION_MODE_AM:
            viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_COUPLING_ENABLE,
                         0, EnableScaleCoupling), 3, "Enable Scale Coupling");
            if(!EnableScaleCoupling)
            {
                viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION,
                             0, ScalePerDivision), 4, "Scale Per Division");                
            }
            viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE,
                         0, ReferenceValue), 5, "Reference Value"); 
            viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_REFERENCE_POSITION,
                         0, ReferencePosition), 6, "Reference Position");
            break;
        case AGN934XNI_VAL_DEMODULATION_MODE_FM:
            viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_COUPLING_ENABLE,
                         0, EnableScaleCoupling), 3, "Enable Scale Coupling");
            if(!EnableScaleCoupling)
            {
                viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION,
                             0, ScalePerDivision), 4, "Scale Per Division");                
            }
            viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_REFERENCE_VALUE,
                         0, ReferenceValue), 5, "Reference Value"); 
            viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_REFERENCE_POSITION,
                         0, ReferencePosition), 6, "Reference Position");
            break;
        case AGN934XNI_VAL_DEMODULATION_MODE_ASK:
            viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_COUPLING_ENABLE,
                         0, EnableScaleCoupling), 3, "Enable Scale Coupling");
            if(!EnableScaleCoupling)
            {
                viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION,
                             0, ScalePerDivision), 4, "Scale Per Division");                
            }
            viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE,
                         0, ReferenceValue), 5, "Reference Value"); 
            viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_REFERENCE_POSITION,
                         0, ReferencePosition), 6, "Reference Position");
            break;
        case AGN934XNI_VAL_DEMODULATION_MODE_FSK:
            viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_COUPLING_ENABLE,
                         0, EnableScaleCoupling), 3, "Enable Scale Coupling");
            if(!EnableScaleCoupling)
            {
                viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION,
                             0, ScalePerDivision), 4, "Scale Per Division");                
            }
            viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE,
                         0, ReferenceValue), 5, "Reference Value"); 
            viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_REFERENCE_POSITION,
                         0, ReferencePosition), 6, "Reference Position");
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }
    
    if(demodulationMode == AGN934XNI_VAL_DEMODULATION_MODE_ASK
        || demodulationMode == AGN934XNI_VAL_DEMODULATION_MODE_FSK)
    {
        viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE,
                     0, ViewType), 7, "View Type");                              
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureDemodulationLimit
 * Purpose:   Configures the Limit State, Carrier Power Upper Limit, Depth Upper/Lower 
 *            Limit, Frequency Deviation Upper/Lower Limit, Carrier Frequency Offset 
 *            Upper Limit for demodulation analysis.
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureDemodulationLimit (ViSession vi,
                                                        ViBoolean EnableLimit,
                                                        ViReal64 CarrierPowerUpperLimit,
                                                        ViReal64 DepthOrFrequencyDeviationUpperLimit,
                                                        ViReal64 DepthOrFrequencyDeviationLowerLimit,
                                                        ViReal64 CarrierFrequencyOffsetUpperLimit)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     instrMode = 0;
    ViInt32     demodulationMode = 0;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, &demodulationMode));
    
    if(instrMode != AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION)
        checkErr(IVI_ERROR_INVALID_CONFIGURATION);
    
    switch(demodulationMode)
    {
    case AGN934XNI_VAL_DEMODULATION_MODE_AM:
        viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_LIMIT_STATE,
                     0, EnableLimit), 2, "Enable Limit");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT,
                     0, CarrierPowerUpperLimit), 3, "Carrier Power Upper Limit");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT,
                     0, DepthOrFrequencyDeviationUpperLimit), 4, "Depth Or Frequency Deviation Upper Limit");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT,
                     0, DepthOrFrequencyDeviationLowerLimit), 5, "Depth Or Frequency Deviation Lower Limit");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT,
                     0, CarrierFrequencyOffsetUpperLimit), 6, "Carrier Frequency Offset Upper Limit"); 
        break;
    case AGN934XNI_VAL_DEMODULATION_MODE_FM:
        viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_LIMIT_STATE,
                     0, EnableLimit), 2, "Enable Limit");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT,
                     0, CarrierPowerUpperLimit), 3, "Carrier Power Upper Limit");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT,
                     0, DepthOrFrequencyDeviationUpperLimit), 4, "Depth Or Frequency Deviation Upper Limit");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT,
                     0, DepthOrFrequencyDeviationLowerLimit), 5, "Depth Or Frequency Deviation Lower Limit");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT,
                     0, CarrierFrequencyOffsetUpperLimit), 6, "Carrier Frequency Offset Upper Limit"); 
        break;
    case AGN934XNI_VAL_DEMODULATION_MODE_ASK:
        viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_LIMIT_STATE,
                     0, EnableLimit), 2, "Enable Limit");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT,
                     0, CarrierPowerUpperLimit), 3, "Carrier Power Upper Limit");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT,
                     0, DepthOrFrequencyDeviationUpperLimit), 4, "Depth Or Frequency Deviation Upper Limit");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT,
                     0, DepthOrFrequencyDeviationLowerLimit), 5, "Depth Or Frequency Deviation Lower Limit");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT,
                     0, CarrierFrequencyOffsetUpperLimit), 6, "Carrier Frequency Offset Upper Limit"); 
        break;
    case AGN934XNI_VAL_DEMODULATION_MODE_FSK:
        viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_LIMIT_STATE,
                     0, EnableLimit), 2, "Enable Limit");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT,
                     0, CarrierPowerUpperLimit), 3, "Carrier Power Upper Limit");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT,
                     0, DepthOrFrequencyDeviationUpperLimit), 4, "Depth Or Frequency Deviation Upper Limit");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT,
                     0, DepthOrFrequencyDeviationLowerLimit), 5, "Depth Or Frequency Deviation Lower Limit");
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT,
                     0, CarrierFrequencyOffsetUpperLimit), 6, "Carrier Frequency Offset Upper Limit"); 
        break;
    default:
        break;
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureAMFMMeasurement
 * Purpose:   Configures the Average State, Average Count Number, Detector Type, 
 *            Detector PeakHold, IF bandwidth auto state, IF Bandwidth, Equal Low 
 *            Pass Filter for AM or FM demodulation.
 *
 *            Notes:
 *            (1) This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            (2) Valid only for AM/FM mode.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureAMFMMeasurement (ViSession vi,
                                                      ViBoolean EnableAverage,
                                                      ViInt32 AverageCount, 
                                                      ViInt32 DetectorType,
                                                      ViBoolean EnableDetectorPeakHold,
                                                      ViBoolean AutoIFBandwidth,
                                                      ViReal64 IFBandwidth,
                                                      ViInt32 EqualLowPassFilter)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_AVERAGE_ENABLE,
                 0, EnableAverage), 2, "Enable Average");
    if(EnableAverage)
    {
        viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_AVERAGE_COUNT,
                     0, AverageCount), 3, "Average Count");
    }
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_DETECTOR_TYPE,
                 0, DetectorType), 4, "Detector Type");
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_DETECTOR_PEAK_HOLD_ENABLE,
                 0, EnableDetectorPeakHold), 5, "Enable Detector Peak Hold");
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_AUTO,
                 0, AutoIFBandwidth), 6, "Auto IF Bandwidth");
    if(!AutoIFBandwidth)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH,
                     0, IFBandwidth), 7, "IF Bandwidth");
    }
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER,
                 0, EqualLowPassFilter), 8, "Equal Low Pass Filter");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureASKFSKMeasurement
 * Purpose:   Configures the Average State, Average Count Number, Symbol Rate, 
 *            Measurement Length for ASK or FSK demodulation.
 *
 *            Notes:
 *            (1) This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            (2) Valid only for ASK/FSK mode. 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureASKFSKMeasurement (ViSession vi,
                                                        ViBoolean EnableAverage,
                                                        ViInt32 AverageCount,
                                                        ViReal64 SymbolRate,
                                                        ViInt32 MeasurementLength)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_AVERAGE_ENABLE,
                 0, EnableAverage), 2, "Enable Average");
    if(EnableAverage)
    {
        viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT,
                     0, AverageCount), 3, "Average Count");
    }
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE,
                 0, SymbolRate), 4, "Symbol Rate");
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH,
                 0, MeasurementLength), 5, "Measurement Length");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ReadModulationData
 * Purpose:   Read Depth, Current Carrier Power, Current Modulation Rate, Frequency
 *            Deviation for AM or FM modulation.
 *
 *            Notes:
 *            (1) This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            (2) Valid only for AM/FM mode.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ReadModulationData (ViSession vi,
                                                ViInt32   MaxTime,
                                                ViReal64* Depth,
                                                ViReal64* CarrierPower, 
                                                ViReal64* ModulationRate,
                                                ViReal64* FrequencyDeviation)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     instrMode = 0;
    ViInt32     demodulationMode = 0;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if(CarrierPower == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "Null address for Carrier Power"); 
    if(ModulationRate == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 4, "Null address for Modulation Rate");
    
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, &demodulationMode));
    
    if(instrMode != AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION)
        checkErr(IVI_ERROR_INVALID_CONFIGURATION);
    
    if (!Ivi_Simulating( vi))   
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */
        
        checkErr( agn934xni_Initiate (vi));
        error = agn934xni_WaitForOPC (vi, MaxTime);  

        if ( error == VI_ERROR_TMO)                   
            viCheckErr( IVISPECAN_ERROR_MAX_TIME_EXCEEDED); 
        
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));

        viCheckErr( viQueryf (io, ":CALC:AMA:POW?", "%lf", CarrierPower));
        viCheckErr( viQueryf (io, ":CALC:AMA:MRAT?", "%lf", ModulationRate));
            
        switch(demodulationMode)
        {
        case AGN934XNI_VAL_DEMODULATION_MODE_AM:
            if(Depth == VI_NULL)
                viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "Null address for Depth"); 
            viCheckErr( viQueryf (io, ":CALC:AM:MDEP?", "%lf", Depth));
            break;
        case AGN934XNI_VAL_DEMODULATION_MODE_FM:
            if(FrequencyDeviation == VI_NULL)
                viCheckParm( IVI_ERROR_INVALID_PARAMETER, 6, "Null address for Frequency Deviation");   
            viCheckErr( viQueryf (io, ":CALC:FM:FDEV?", "%lf", FrequencyDeviation));
            break;
        default:
            break;
        }
    }
    else
    {
        Depth = CarrierPower = ModulationRate = FrequencyDeviation = 0;    
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureExternalGain
 * Purpose:   Sets the external gain. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureExternalGain (ViSession vi,
                                                   ViReal64 ExternalGain)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_EXTERNAL_GAIN,
                 0, ExternalGain), 2, "External Gain");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_EnableDemodulationPreamplifier
 * Purpose:   Turn on/off preamplifier in demodulation mode. 
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_EnableDemodulationPreamplifier (ViSession vi,
                                                            ViBoolean EnablePreamplifier)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_PREAMPLIFIER_ENABLE,
                 0, EnablePreamplifier), 2, "Enable Preamplifier");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureDemodulationMode
 * Purpose:   Switch the 4 modulaes in demodulation mode. This function will first
 *            enable the access demodulation analysis mode.
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureDemodulationMode (ViSession vi, 
                                                       ViInt32 DemodulationMode)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE,
                 0, DemodulationMode), 2, "Demodulation Mode");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureCarrierFrequency
 * Purpose:   Configures the carrier frequency, carrier frequency step and auto 
 *            carrier frequency state of the demodulation analysis.
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureCarrierFrequency (ViSession vi,
                                                       ViBoolean AutoCarrierFrequency,
                                                       ViReal64 CarrierFrequency,
                                                       ViReal64 CarrierFrequencyStep)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_AUTO_CARRIER_FREQUENCY_ENABLE,
                 0, AutoCarrierFrequency), 2, "Auto Carrier Frequency");
    if(!AutoCarrierFrequency)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_CARRIER_FREQUENCY,
                     0, CarrierFrequency), 3, "Carrier Frequency");
    }
    viCheckParm( Ivi_SetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_CARRIER_FREQUENCY_STEP,
                 0, CarrierFrequencyStep), 4, "Carrier Frequency Step");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ReadAMMeasurementData
 * Purpose:   Reads the measurement result from the spectrum analyzer (AM
 *            Demodulation Measurement).
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            
 *            Command:
 *            :CALCulate:DATA? 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ReadAMMeasurementData (ViSession vi, 
                                                   ViInt32 MaxTime,
                                                   ViInt32 ArrayLength,
                                                   ViReal64 CarrierPower[], 
                                                   ViReal64 ModulationRate[], 
                                                   ViReal64 AmDepth[], 
                                                   ViReal64 Sinad[],
                                                   ViReal64 THD[],
                                                   ViReal64 CarrierFreqOffset[])
{
    ViStatus    error = VI_SUCCESS;
    ViChar*     buffer = VI_NULL;
    ViReal64*   MeasurementResultArray = VI_NULL;
    ViInt32     ActualReturnedDataNumber = 0;
    ViReal64*   pArray = VI_NULL;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if (ArrayLength < 3)
    {
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "The array length must be equal to or greater than 3");
    }
    
    if(CarrierPower == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 4, "Null address for Carrier Power"); 
    
    if(ModulationRate == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 5, "Null address for Modulation Rate");   
    
    if(AmDepth == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 6, "Null address for Am Depth");
    
    if(Sinad == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 7, "Null address for Sinad");
    
    if(THD == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 8, "Null address for THD");
    
    if(CarrierFreqOffset == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 9, "Null address for Carrier Freq Offset");
    
    if(!Ivi_Simulating (vi))
    {
        ViSession   io = Ivi_IOSession (vi); /* Call only when locked */
        
        checkErr( agn934xni_Initiate (vi));
        error = agn934xni_WaitForOPC (vi, MaxTime);  

        if ( error == VI_ERROR_TMO)                   
            viCheckErr( IVISPECAN_ERROR_MAX_TIME_EXCEEDED); 

        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));  
        
        checkErr( Ivi_Alloc (vi, ArrayLength*DEMODULATION_MEAS_VAR_KIND_NUM*DEMODULATION_MEAS_VAR_STR_MAX_LEN, (ViAddr *)(&buffer)));
        checkErr( Ivi_Alloc (vi, (ViInt32)(ArrayLength*DEMODULATION_MEAS_VAR_KIND_NUM*sizeof(ViReal64)), (ViAddr *)(&MeasurementResultArray)));
        
        viCheckErr( viQueryf(io, ":CALC:DATA?", "%s", buffer));

        checkErr(agn934xni_ParseRealArray(vi, buffer, ArrayLength*DEMODULATION_MEAS_VAR_KIND_NUM, &ActualReturnedDataNumber, MeasurementResultArray));
        
        if(ActualReturnedDataNumber != DEMODULATION_EXPECTED_RETURNED_VAR_NUM)
            checkErr(IVI_ERROR_INSTRUMENT_STATUS);
        
        pArray = MeasurementResultArray;
        memcpy(CarrierPower, pArray, 3*sizeof(ViReal64));
        pArray += 3;
        memcpy(ModulationRate, pArray, 3*sizeof(ViReal64));
        pArray += 3;
        memcpy(AmDepth, pArray, 3*sizeof(ViReal64));
        pArray += 3;
        memcpy(Sinad, pArray, 3*sizeof(ViReal64));
        pArray += 3;
        memcpy(THD, pArray, 3*sizeof(ViReal64));
        pArray += 3;
        memcpy(CarrierFreqOffset, pArray, 3*sizeof(ViReal64));

    }
    else
    {
        CarrierPower[0] = CarrierPower[1] = CarrierPower[2] = -85;
        ModulationRate[0] = ModulationRate[1] = ModulationRate[2] = 1000;
        AmDepth[0] = AmDepth[1] = AmDepth[2] = 5;
        Sinad[0] = Sinad[1] = Sinad[2] = 0.1;
        THD[0] = THD[1] = THD[2] = -2;
        CarrierFreqOffset[0] = CarrierFreqOffset[1] = CarrierFreqOffset[2] = 0;
    }                                  
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    if (buffer != VI_NULL)
        Ivi_Free(vi, buffer);
    if(MeasurementResultArray != VI_NULL)
        Ivi_Free(vi, MeasurementResultArray);
    
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}

/*******************************************************************************
 * Function:  agn934xni_ReadFMMeasurementData
 * Purpose:   Reads the measurement result from the spectrum analyzer (FM
 *            Demodulation Measurement).
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            
 *            Command:
 *            :CALCulate:DATA? 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ReadFMMeasurementData (ViSession vi, 
                                                   ViInt32 MaxTime,
                                                   ViInt32 ArrayLength,
                                                   ViReal64 CarrierPower[], 
                                                   ViReal64 ModulationRate[], 
                                                   ViReal64 FrequencyDeviation[], 
                                                   ViReal64 Sinad[],
                                                   ViReal64 THD[],
                                                   ViReal64 CarrierFreqOffset[])
{
    ViStatus    error = VI_SUCCESS;
    ViChar*     buffer = VI_NULL;
    ViReal64*   MeasurementResultArray = VI_NULL;
    ViInt32     ActualReturnedDataNumber = 0;
    ViReal64*   pArray = VI_NULL;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if (ArrayLength < 3)
    {
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "The array length must be equal to or greater than 3");
    }
    
    if(CarrierPower == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 4, "Null address for Carrier Power"); 
    
    if(ModulationRate == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 5, "Null address for Modulation Rate");   
    
    if(FrequencyDeviation == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 6, "Null address for Frequency Deviation");
    
    if(Sinad == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 7, "Null address for Sinad");
    
    if(THD == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 8, "Null address for THD");
    
    if(CarrierFreqOffset == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 9, "Null address for Carrier Freq Offset");
    
    if(!Ivi_Simulating (vi))
    {
        ViSession   io = Ivi_IOSession (vi); /* Call only when locked */
        
        checkErr( agn934xni_Initiate (vi));
        error = agn934xni_WaitForOPC (vi, MaxTime);  

        if ( error == VI_ERROR_TMO)                   
            viCheckErr( IVISPECAN_ERROR_MAX_TIME_EXCEEDED); 

        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));  
        
        checkErr( Ivi_Alloc (vi, ArrayLength*DEMODULATION_MEAS_VAR_KIND_NUM*DEMODULATION_MEAS_VAR_STR_MAX_LEN, (ViAddr *)(&buffer)));
        checkErr( Ivi_Alloc (vi, (ViInt32)(ArrayLength*DEMODULATION_MEAS_VAR_KIND_NUM*sizeof(ViReal64)), (ViAddr *)(&MeasurementResultArray)));
        
        viCheckErr( viQueryf(io, ":CALC:DATA?", "%s", buffer));

        checkErr(agn934xni_ParseRealArray(vi, buffer, ArrayLength*DEMODULATION_MEAS_VAR_KIND_NUM, &ActualReturnedDataNumber, MeasurementResultArray));
        
        if(ActualReturnedDataNumber != DEMODULATION_EXPECTED_RETURNED_VAR_NUM)
            checkErr(IVI_ERROR_INSTRUMENT_STATUS);  
        
        pArray = MeasurementResultArray;
        memcpy(CarrierPower, pArray, 3*sizeof(ViReal64));
        pArray += 3;
        memcpy(ModulationRate, pArray, 3*sizeof(ViReal64));
        pArray += 3;
        memcpy(FrequencyDeviation, pArray, 3*sizeof(ViReal64));
        pArray += 3;
        memcpy(Sinad, pArray, 3*sizeof(ViReal64));
        pArray += 3;
        memcpy(THD, pArray, 3*sizeof(ViReal64));
        pArray += 3;
        memcpy(CarrierFreqOffset, pArray, 3*sizeof(ViReal64));
    }
    else
    {
        CarrierPower[0] = CarrierPower[1] = CarrierPower[2] = -85;
        ModulationRate[0] = ModulationRate[1] = ModulationRate[2] = 1000;
        FrequencyDeviation[0] = FrequencyDeviation[1] = FrequencyDeviation[2] = 50000;
        Sinad[0] = Sinad[1] = Sinad[2] = 0.1;
        THD[0] = THD[1] = THD[2] = -2;
        CarrierFreqOffset[0] = CarrierFreqOffset[1] = CarrierFreqOffset[2] = 0;
    }                                  
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    if (buffer != VI_NULL)
        Ivi_Free(vi, buffer);
    if(MeasurementResultArray != VI_NULL)
        Ivi_Free(vi, MeasurementResultArray);
    
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}
    
/*******************************************************************************
 * Function:  agn934xni_ReadASKMeasurementData
 * Purpose:   Reads the measurement result from the spectrum analyzer (ASK
 *            Demodulation Measurement).
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            
 *            Command:
 *            :CALCulate:DATA? 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ReadASKMeasurementData (ViSession vi, 
                                                    ViInt32 MaxTime,
                                                    ViInt32 ArrayLength,
                                                    ViReal64 CarrierPower[], 
                                                    ViReal64 AskDepth[], 
                                                    ViReal64 AskError[], 
                                                    ViReal64 AskIndex[],
                                                    ViReal64 CarrierFreqOffset[])
{
    ViStatus    error = VI_SUCCESS;
    ViChar*     buffer = VI_NULL;
    ViReal64*   MeasurementResultArray = VI_NULL;
    ViInt32     ActualReturnedDataNumber = 0;
    ViReal64*   pArray = VI_NULL;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if (ArrayLength < 3)
    {
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "The array length must be equal to or greater than 3");
    }
    
    if(CarrierPower == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 4, "Null address for Carrier Power"); 
    
    if(AskDepth == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 5, "Null address for ASK Depth"); 
    
    if(AskError == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 6, "Null address for ASK Error");
    
    if(AskIndex == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 7, "Null address for ASK Index");

    if(CarrierFreqOffset == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 8, "Null address for Carrier Freq Offset");
    
    if(!Ivi_Simulating (vi))
    {
        ViSession   io = Ivi_IOSession (vi); /* Call only when locked */
        
        checkErr( agn934xni_Initiate (vi));
        error = agn934xni_WaitForOPC (vi, MaxTime);  

        if ( error == VI_ERROR_TMO)                   
            viCheckErr( IVISPECAN_ERROR_MAX_TIME_EXCEEDED); 

        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));  
        
        checkErr( Ivi_Alloc (vi, ArrayLength*DEMODULATION_MEAS_VAR_KIND_NUM*DEMODULATION_MEAS_VAR_STR_MAX_LEN, (ViAddr *)(&buffer)));
        checkErr( Ivi_Alloc (vi, (ViInt32)(ArrayLength*DEMODULATION_MEAS_VAR_KIND_NUM*sizeof(ViReal64)), (ViAddr *)(&MeasurementResultArray)));
        
        viCheckErr( viQueryf(io, ":CALC:DATA?", "%s", buffer));

        checkErr(agn934xni_ParseRealArray(vi, buffer, ArrayLength*DEMODULATION_MEAS_VAR_KIND_NUM, &ActualReturnedDataNumber, MeasurementResultArray));
        
        if(ActualReturnedDataNumber != DEMODULATION_EXPECTED_RETURNED_VAR_NUM)
            checkErr(IVI_ERROR_INSTRUMENT_STATUS);  
        
        pArray = MeasurementResultArray;
        memcpy(CarrierPower, pArray, 3*sizeof(ViReal64));
        pArray += 3;
        memcpy(AskError, pArray, 3*sizeof(ViReal64));
        pArray += 3;
        memcpy(AskDepth, pArray, 3*sizeof(ViReal64));
        pArray += 3;
        memcpy(AskIndex, pArray, 3*sizeof(ViReal64));
        pArray += 3;
        memcpy(CarrierFreqOffset, pArray, 3*sizeof(ViReal64));
    }
    else
    {
        CarrierPower[0] = CarrierPower[1] = CarrierPower[2] = -85;
        AskDepth[0] = AskDepth[1] = AskDepth[2] = 59;
        AskError[0] = AskError[1] = AskError[2] = 66;
        AskIndex[0] = AskIndex[1] = AskIndex[2] = 0;
        CarrierFreqOffset[0] = CarrierFreqOffset[1] = CarrierFreqOffset[2] = 0;
    }                                  
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    if (buffer != VI_NULL)
        Ivi_Free(vi, buffer);
    if(MeasurementResultArray != VI_NULL)
        Ivi_Free(vi, MeasurementResultArray);
    
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}

/*******************************************************************************
 * Function:  agn934xni_ReadFSKMeasurementData
 * Purpose:   Reads the measurement result from the spectrum analyzer (FSK
 *            Demodulation Measurement).
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            
 *            Command:
 *            :CALCulate:DATA? 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ReadFSKMeasurementData (ViSession vi, 
                                                    ViInt32 MaxTime,
                                                    ViInt32 ArrayLength,
                                                    ViReal64 CarrierPower[], 
                                                    ViReal64 Deviation[], 
                                                    ViReal64 FskError[], 
                                                    ViReal64 MagError[],
                                                    ViReal64 CarrierFreqOffset[])
{
    ViStatus    error = VI_SUCCESS;
    ViChar*     buffer = VI_NULL;
    ViReal64*   MeasurementResultArray = VI_NULL;
    ViInt32     ActualReturnedDataNumber = 0;
    ViReal64*   pArray = VI_NULL;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if (ArrayLength < 3)
    {
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "The array length must be equal to or greater than 3");
    }
    
    if(CarrierPower == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 4, "Null address for Carrier Power"); 
    
    if(Deviation == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 5, "Null address for Deviation"); 
    
    if(FskError == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 6, "Null address for FSK Error");
    
    if(MagError == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 7, "Null address for Mag Error");

    if(CarrierFreqOffset == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 8, "Null address for Carrier Freq Offset");
    
    if(!Ivi_Simulating (vi))
    {
        ViSession   io = Ivi_IOSession (vi); /* Call only when locked */
        
        checkErr( agn934xni_Initiate (vi));
        error = agn934xni_WaitForOPC (vi, MaxTime);  

        if ( error == VI_ERROR_TMO)                   
            viCheckErr( IVISPECAN_ERROR_MAX_TIME_EXCEEDED); 

        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));  
        
        checkErr( Ivi_Alloc (vi, ArrayLength*DEMODULATION_MEAS_VAR_KIND_NUM*DEMODULATION_MEAS_VAR_STR_MAX_LEN, (ViAddr *)(&buffer)));
        checkErr( Ivi_Alloc (vi, (ViInt32)(ArrayLength*DEMODULATION_MEAS_VAR_KIND_NUM*sizeof(ViReal64)), (ViAddr *)(&MeasurementResultArray)));
        
        viCheckErr( viQueryf(io, ":CALC:DATA?", "%s", buffer));

        checkErr(agn934xni_ParseRealArray(vi, buffer, ArrayLength*DEMODULATION_MEAS_VAR_KIND_NUM, &ActualReturnedDataNumber, MeasurementResultArray));
        
        if(ActualReturnedDataNumber != DEMODULATION_EXPECTED_RETURNED_VAR_NUM)
            checkErr(IVI_ERROR_INSTRUMENT_STATUS);         
        
        pArray = MeasurementResultArray;
        memcpy(CarrierPower, pArray, 3*sizeof(ViReal64));
        pArray += 3;
        memcpy(Deviation, pArray, 3*sizeof(ViReal64));
        pArray += 3;
        memcpy(FskError, pArray, 3*sizeof(ViReal64));
        pArray += 3;
        memcpy(MagError, pArray, 3*sizeof(ViReal64));
        pArray += 3;
        memcpy(CarrierFreqOffset, pArray, 3*sizeof(ViReal64));
        pArray += 3;
    }
    else
    {
        CarrierPower[0] = CarrierPower[1] = CarrierPower[2] = -85;
        Deviation[0] = Deviation[1] = Deviation[2] = 10000;
        FskError[0] = FskError[1] = FskError[2] = 0.1;
        MagError[0] = MagError[1] = MagError[2] = 0.2;
        CarrierFreqOffset[0] = CarrierFreqOffset[1] = CarrierFreqOffset[2] = 5e4;
    }                                  
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    if (buffer != VI_NULL)
        Ivi_Free(vi, buffer);
    if(MeasurementResultArray != VI_NULL)
        Ivi_Free(vi, MeasurementResultArray);
    
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}
                
/*******************************************************************************
 * Function:  agn934xni_ReadMeasurementTraceData
 * Purpose:   Query ASK/FSK measurement trace data.
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            
 *            Command:
 *            :TRACe[:DATA]? 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ReadMeasurementTraceData (ViSession vi,
                                                      ViInt32 MaxTime,
                                                      ViReal64 MeasurementTraceResultArray[],
                                                      ViInt32 ArraySize,
                                                      ViInt32* ActualReturnedDataNumber)
{
    ViStatus    error = VI_SUCCESS;
    ViChar*     buffer = VI_NULL;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if(MeasurementTraceResultArray == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 2, "Null address for Measurement Trace Result Array");        
    
    if (ArraySize <= 0)
    {
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "The array size must be greater than zero");
    }
    
    if(ActualReturnedDataNumber == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 4, "Null address for Actual Returned Data Number");   
    
    if(!Ivi_Simulating (vi))
    {
        ViSession   io = Ivi_IOSession (vi); /* Call only when locked */
        
        checkErr( agn934xni_Initiate (vi));
        error = agn934xni_WaitForOPC (vi, MaxTime);  

        if ( error == VI_ERROR_TMO)                   
            viCheckErr( IVISPECAN_ERROR_MAX_TIME_EXCEEDED);  

        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));  
        
        checkErr( Ivi_Alloc (vi, 20*ArraySize, (ViAddr *)(&buffer)));
        
        viCheckErr( viQueryf(io, ":TRAC?", "%s", buffer));

        checkErr( agn934xni_ParseRealArray(vi, buffer, ArraySize, ActualReturnedDataNumber, MeasurementTraceResultArray));
    }
    else
    {
        MeasurementTraceResultArray[0] = 0;
        *ActualReturnedDataNumber = 1;
    }                                  
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    if (buffer != VI_NULL)
        Ivi_Free(vi, buffer);
    
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_RestartMeasurement
 * Purpose:   Restart measurement of current demodulation analysis.
 *
 *            Note:
 *            This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            
 *            Command:
 *            [:SENSe]:MEASure:RESTart 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_RestartMeasurement (ViSession vi)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    if(!Ivi_Simulating (vi))
    {
        ViSession   io = Ivi_IOSession (vi); /* Call only when locked */

        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));  

        viCheckErr( viPrintf(io, ":MEAS:REST"));
    }                                  
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
/*===========================================================================*
 *= Custom Limit Line Group Functions =============================*
 *===========================================================================*/         
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureLimitsMargin
 * Purpose:   Configures the Limits Margin State, Limits Margin Value, Threshold 
 *            State, Threshold Value. 
 *
 *            Notes:
 *            (1) This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            (2) Not valid for demodulation mode.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureLimitsMargin (ViSession vi,
                                                   ViConstString LimitLine,
                                                   ViBoolean EnableLimitsMargin, 
                                                   ViReal64 LimitsMarginValue,
                                                   ViBoolean EnableThreshold,
                                                   ViReal64 ThresholdValue)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    checkErr( Ivi_CoerceRepCapName (vi, LIMITLINE_REP_CAP_NAME, LimitLine, &LimitLine)); 
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, LimitLine, AGN934XNI_ATTR_LIMIT_LINE_MARGIN_ENABLE,
                 0, EnableLimitsMargin), 3, "Enable Limits Margin");
    if(EnableLimitsMargin)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, LimitLine, AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE,
                     0, LimitsMarginValue), 4, "Limits Margin Value");
    }
    viCheckParm( Ivi_SetAttributeViBoolean (vi, LimitLine, AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_ENABLE,
                 0, EnableThreshold), 5, "Enable Threshold");
    if(EnableThreshold)
    {
        viCheckParm( Ivi_SetAttributeViReal64 (vi, LimitLine, AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE,
                     0, ThresholdValue), 6, "Threshold Value");                              
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_EnableLimitBeep
 * Purpose:   Turn on/off the limit beep status. 
 *
 *            Notes:
 *            (1) This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            (2) Not valid for demodulation mode.
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_EnableLimitBeep (ViSession vi,
                                             ViBoolean EnableLimitBeep)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
    
    
    viCheckParm( Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_LIMIT_LINE_BEEP_ENABLE,
                 0, EnableLimitBeep), 2, "Enable Limit Beep");                              
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_DeleteLimitsData
 * Purpose:   Delete the limits values.
 *
 *            Notes:
 *            (1) This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            (2) Not valid for demodulation mode.
 *            
 *            Commands:
 *            :CALCulate:LLINe[1]|2:DELete
 *            :CALCulate:LLINe:ALL:DELete 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_DeleteLimitsData (ViSession vi,
                                              ViConstString LimitLine,
                                              ViInt32 Operation)
{
    ViStatus    error = VI_SUCCESS;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
  
    checkErr( Ivi_CoerceRepCapName (vi, LIMITLINE_REP_CAP_NAME, LimitLine, &LimitLine));
    
    if(!Ivi_Simulating (vi)) 
    {
        ViSession   io = Ivi_IOSession (vi); /* Call only when locked */

        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));  
        
        switch(Operation)
        {
        case AGN934XNI_VAL_LIMIT_VALUE_DELETE_LAST:
            viCheckErr( viPrintf(io, ":CALC:LLIN%s:DEL", LimitLine));  
            break;
        case AGN934XNI_VAL_LIMIT_VALUE_DELETE_ALL:
            viCheckErr( viPrintf(io, ":CALC:LLIN:ALL:DEL"));
            break;
        default:
            break;
        }
    }
                 
    checkErr( agn934xni_CheckStatus (vi));

Error:
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}               
            
                
/*******************************************************************************
 * Function:  agn934xni_ConfigureLimitsValues
 * Purpose:   Configure the limits values. A limit value contains 3 elements: X Axis
 *            Values, Amplitude and Is Connected Flag.
 *
 *            Notes:
 *            (1) This function is applicable for N9321C, N9322C, N9323C and N9324C models.
 *            (2) Not valid for demodulation mode.
 *            
 *            Command:
 *            :CALCulate:LLINe[1]|2:DATA <x-axis>,<ampl>,<connected>{,<x-axis>,<ampl>,<connected>} 
*******************************************************************************/            
ViStatus _VI_FUNC agn934xni_ConfigureLimitsValues (ViSession vi,
                                                   ViConstString LimitLine,
                                                   ViInt32 LimitValueNumber,
                                                   ViReal64 XAxisValues[],
                                                   ViReal64 Amplitudes[],
                                                   ViBoolean IsConnectedFlags[])
{
    ViStatus    error = VI_SUCCESS;
    ViChar*     buffer = VI_NULL;
    ViChar*     p2buffer = buffer;
    ViInt32     i = 0;
    
    checkErr( Ivi_LockSession (vi, VI_NULL));
 
    checkErr( Ivi_CoerceRepCapName (vi, LIMITLINE_REP_CAP_NAME, LimitLine, &LimitLine));

    if (LimitValueNumber <= 0)
    {
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "The Limit Value Number must be greater than zero");
    }
    
    if(XAxisValues == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 4, "Null address for X Axis Values");
    
    if(Amplitudes == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 5, "Null address for Amplitudes");
    
    if(IsConnectedFlags == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 6, "Null address for Is Connected Flags");
    
    if(!Ivi_Simulating (vi))
    {
        ViSession   io = Ivi_IOSession (vi); /* Call only when locked */

        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));  
        
        checkErr( Ivi_Alloc (vi, (ViInt32)(sizeof(":CALC:LLIN1:DATA") + DEMODULATION_MEAS_VAR_STR_MAX_LEN*LimitValueNumber), (ViAddr *)(&buffer)));
        
        p2buffer = buffer;
        
        p2buffer += sprintf(p2buffer, ":CALC:LLIN%s:DATA ", LimitLine);
        
        for(i = 0; i < LimitValueNumber; i++)
        {
            p2buffer += sprintf(p2buffer, "%lf,%lf,%d", XAxisValues[i], Amplitudes[i], IsConnectedFlags[i]); 
            if(i != LimitValueNumber - 1)
            {
                p2buffer += sprintf(p2buffer, ",");
            }
        }
        
        viCheckErr( viPrintf(io, "%s", buffer));
    }

    checkErr( agn934xni_CheckStatus (vi));

Error:
    if (buffer != VI_NULL)
        Ivi_Free(vi, buffer);
    
    Ivi_UnlockSession(vi, VI_NULL);
    return error;
}           

        
/*****************************************************************************
 * Function: agn934xni_GetAttribute<type> Functions                                    
 * Purpose:  These functions enable the instrument driver user to get 
 *           attribute values directly.  There are typesafe versions for 
 *           ViInt32, ViReal64, ViString, ViBoolean, and ViSession attributes.                                         
 *****************************************************************************/
ViStatus _VI_FUNC agn934xni_GetAttributeViInt32 (ViSession vi, ViConstString channelName, 
                                                ViAttr attributeId, ViInt32 *value)
{                                                                                                           
    return Ivi_GetAttributeViInt32 (vi, channelName, attributeId, IVI_VAL_DIRECT_USER_CALL, 
                                    value);
}                                                                                                           
ViStatus _VI_FUNC agn934xni_GetAttributeViReal64 (ViSession vi, ViConstString channelName, 
                                                 ViAttr attributeId, ViReal64 *value)
{                                                                                                           
    return Ivi_GetAttributeViReal64 (vi, channelName, attributeId, IVI_VAL_DIRECT_USER_CALL, 
                                     value);
}                                                                                                           
ViStatus _VI_FUNC agn934xni_GetAttributeViString (ViSession vi, ViConstString channelName, 
                                                 ViAttr attributeId, ViInt32 bufSize, 
                                                 ViChar value[]) 
{   
    return Ivi_GetAttributeViString (vi, channelName, attributeId, IVI_VAL_DIRECT_USER_CALL, 
                                     bufSize, value);
}   
ViStatus _VI_FUNC agn934xni_GetAttributeViBoolean (ViSession vi, ViConstString channelName, 
                                                  ViAttr attributeId, ViBoolean *value)
{                                                                                                           
    return Ivi_GetAttributeViBoolean (vi, channelName, attributeId, IVI_VAL_DIRECT_USER_CALL, 
                                      value);
}                                                                                                           
ViStatus _VI_FUNC agn934xni_GetAttributeViSession (ViSession vi, ViConstString channelName, 
                                                  ViAttr attributeId, ViSession *value)
{                                                                                                           
    return Ivi_GetAttributeViSession (vi, channelName, attributeId, IVI_VAL_DIRECT_USER_CALL, 
                                      value);
}                                                                                                           

/*****************************************************************************
 * Function: agn934xni_SetAttribute<type> Functions                                    
 * Purpose:  These functions enable the instrument driver user to set 
 *           attribute values directly.  There are typesafe versions for 
 *           ViInt32, ViReal64, ViString, ViBoolean, and ViSession datatypes.                                         
 *****************************************************************************/
ViStatus _VI_FUNC agn934xni_SetAttributeViInt32 (ViSession vi, ViConstString channelName, 
                                                ViAttr attributeId, ViInt32 value)
{                                                                                                           
    return Ivi_SetAttributeViInt32 (vi, channelName, attributeId, IVI_VAL_DIRECT_USER_CALL, 
                                    value);
}                                                                                                           
ViStatus _VI_FUNC agn934xni_SetAttributeViReal64 (ViSession vi, ViConstString channelName, 
                                                 ViAttr attributeId, ViReal64 value)
{                                                                                                           
    return Ivi_SetAttributeViReal64 (vi, channelName, attributeId, IVI_VAL_DIRECT_USER_CALL, 
                                     value);
}                                                                                                           
ViStatus _VI_FUNC agn934xni_SetAttributeViString (ViSession vi, ViConstString channelName, 
                                                 ViAttr attributeId, ViConstString value) 
{   
    return Ivi_SetAttributeViString (vi, channelName, attributeId, IVI_VAL_DIRECT_USER_CALL, 
                                     value);
}   
ViStatus _VI_FUNC agn934xni_SetAttributeViBoolean (ViSession vi, ViConstString channelName, 
                                                  ViAttr attributeId, ViBoolean value)
{                                                                                                           
    return Ivi_SetAttributeViBoolean (vi, channelName, attributeId, IVI_VAL_DIRECT_USER_CALL, 
                                      value);
}                                                                                                           
ViStatus _VI_FUNC agn934xni_SetAttributeViSession (ViSession vi, ViConstString channelName, 
                                                  ViAttr attributeId, ViSession value)
{                                                                                                           
    return Ivi_SetAttributeViSession (vi, channelName, attributeId, IVI_VAL_DIRECT_USER_CALL, 
                                      value);
}                                                                                                           

/*****************************************************************************
 * Function: agn934xni_CheckAttribute<type> Functions                                  
 * Purpose:  These functions enable the instrument driver user to check  
 *           attribute values directly.  These functions check the value you
 *           specify even if you set the AGN934XNI_ATTR_RANGE_CHECK 
 *           attribute to VI_FALSE.  There are typesafe versions for ViInt32, 
 *           ViReal64, ViString, ViBoolean, and ViSession datatypes.                         
 *****************************************************************************/
ViStatus _VI_FUNC agn934xni_CheckAttributeViInt32 (ViSession vi, ViConstString channelName, 
                                                  ViAttr attributeId, ViInt32 value)
{                                                                                                           
    return Ivi_CheckAttributeViInt32 (vi, channelName, attributeId, IVI_VAL_DIRECT_USER_CALL, 
                                      value);
}
ViStatus _VI_FUNC agn934xni_CheckAttributeViReal64 (ViSession vi, ViConstString channelName, 
                                                   ViAttr attributeId, ViReal64 value)
{                                                                                                           
    return Ivi_CheckAttributeViReal64 (vi, channelName, attributeId, IVI_VAL_DIRECT_USER_CALL, 
                                       value);
}                                                                                                           
ViStatus _VI_FUNC agn934xni_CheckAttributeViString (ViSession vi, ViConstString channelName, 
                                                   ViAttr attributeId, ViConstString value)  
{   
    return Ivi_CheckAttributeViString (vi, channelName, attributeId, IVI_VAL_DIRECT_USER_CALL, 
                                       value);
}   
ViStatus _VI_FUNC agn934xni_CheckAttributeViBoolean (ViSession vi, ViConstString channelName, 
                                                    ViAttr attributeId, ViBoolean value)
{                                                                                                           
    return Ivi_CheckAttributeViBoolean (vi, channelName, attributeId, IVI_VAL_DIRECT_USER_CALL, 
                                        value);
}                                                                                                           
ViStatus _VI_FUNC agn934xni_CheckAttributeViSession (ViSession vi, ViConstString channelName, 
                                                    ViAttr attributeId, ViSession value)
{                                                                                                           
    return Ivi_CheckAttributeViSession (vi, channelName, attributeId, IVI_VAL_DIRECT_USER_CALL, 
                                        value);
}                                                                                                           

/*****************************************************************************
 * Function: WriteInstrData and ReadInstrData Functions                      
 * Purpose:  These functions enable the instrument driver user to  
 *           write and read commands directly to and from the instrument.            
 *                                                                           
 *           Note:  
*            These functions bypass the IVI attribute state caching.  
 *           WriteInstrData invalidates the cached values for all attributes.
 *****************************************************************************/
ViStatus _VI_FUNC agn934xni_WriteInstrData (ViSession vi, ViConstString writeBuffer)   
{   
    return Ivi_WriteInstrData (vi, writeBuffer);    
}   
ViStatus _VI_FUNC agn934xni_ReadInstrData (ViSession vi, ViInt32 numBytes, 
                                          ViChar rdBuf[], ViInt32 *bytesRead)  
{   
    return Ivi_ReadInstrData (vi, numBytes, rdBuf, bytesRead);   
}           
    
/*****************************************************************************
 *-------------------- Utility Functions (Not Exported) ---------------------*
 *****************************************************************************/
 


/*****************************************************************************
 * Function: agn934xni_IviInit                                                       
 * Purpose:  This function is called by agn934xni_InitWithOptions  
 *           or by an IVI class driver.  This function initializes the I/O 
 *           interface, optionally resets the device, optionally performs an
 *           ID query, and sends a default setup to the instrument.   
 * Modification History:
 *           Orginal released by Chao Wang. 15/06/2012
 *           Modified by Chao Wang. 18/07/2013. Fix car 359275. 
 *****************************************************************************/
static ViStatus agn934xni_IviInit (ViRsrc resourceName, ViBoolean IDQuery,
                                    ViBoolean reset, ViSession vi)
{
    ViStatus    error = VI_SUCCESS;
    ViSession   io = VI_NULL;
    ViInt32     instModel = AGN934XNI_VAL_MODEL_N9342C;
    ViChar      modelStr[128] = "";
    
    checkErr( Ivi_BuildChannelTable (vi, CHANNEL_LIST, VI_FALSE, VI_NULL));
    checkErr( Ivi_BuildRepCapTable (vi, MARKER_REP_CAP_NAME, MARKER_LIST));
    
    checkErr( Ivi_BuildRepCapTable (vi, TRACE_REP_CAP_NAME, TRACE_LIST));
    
    checkErr( Ivi_BuildRepCapTable (vi, LIMITLINE_REP_CAP_NAME, LIMITLINE_LIST));
    
    if (!Ivi_Simulating(vi))
    {
        ViSession   rmSession = VI_NULL;

        /* Open instrument session */
        checkErr( Ivi_GetAttributeViSession (vi, VI_NULL, IVI_ATTR_VISA_RM_SESSION, 0,
                                             &rmSession)); 
        viCheckErr( viOpen (rmSession, resourceName, VI_NULL, VI_NULL, &io));
        /* io session owned by driver now */
        checkErr( Ivi_SetAttributeViSession (vi, VI_NULL, IVI_ATTR_IO_SESSION, 0, io));  

        /* Configure VISA Formatted I/O */
        viCheckErr( viSetAttribute (io, VI_ATTR_TMO_VALUE, 5000 ));
        viCheckErr( viSetBuf (io, VI_READ_BUF | VI_WRITE_BUF, 4000));
        viCheckErr( viSetAttribute (io, VI_ATTR_WR_BUF_OPER_MODE, VI_FLUSH_ON_ACCESS));
        viCheckErr( viSetAttribute (io, VI_ATTR_RD_BUF_OPER_MODE, VI_FLUSH_ON_ACCESS));
        
        /*- Identification Query ------------------------------------------------*/
		if (IDQuery)
		{
		    ViChar rdBuffer[BUFFER_SIZE];

		    typedef struct {
		        const ViChar *idnString;
		        ViInt32 model;
		    } ModelLookup;

		    static const ModelLookup modelTable[] = {
		        { "N9342C", AGN934XNI_VAL_MODEL_N9342C },
		        { "N9343C", AGN934XNI_VAL_MODEL_N9343C },
		        { "N9344C", AGN934XNI_VAL_MODEL_N9344C },
		        { "N9322C", AGN934XNI_VAL_MODEL_N9322C },
		        { "N9321C", AGN934XNI_VAL_MODEL_N9321C },
		        { "N9323C", AGN934XNI_VAL_MODEL_N9323C },
		        { "N9324C", AGN934XNI_VAL_MODEL_N9324C },
		    };

		    const ViInt32 modelTableSize = sizeof(modelTable) / sizeof(modelTable[0]);

		    viCheckErr(viQueryf(io, "*IDN?", "%t", rdBuffer));

		    if (strnicmp(rdBuffer, "Agilent Technologies",
		                 strlen("Agilent Technologies")) != 0 &&
		        strnicmp(rdBuffer, "Keysight Technologies",
		                 strlen("Keysight Technologies")) != 0)
		    {
		        viCheckErr(VI_ERROR_FAIL_ID_QUERY);
		    }

		    const ViChar *modelField = strchr(rdBuffer, ',');
		    if (modelField == VI_NULL)
		        viCheckErr(VI_ERROR_FAIL_ID_QUERY);
		    modelField++;

		    ViBoolean found = VI_FALSE;
		    for (int i = 0; i < modelTableSize; ++i)
		    {
		        if (strncmp(modelField, modelTable[i].idnString, strlen(modelTable[i].idnString)) == 0)
		        {
		            instModel = modelTable[i].model;
		            found = VI_TRUE;
		            break;
		        }
		    }

		    if (!found)
		        viCheckErr(VI_ERROR_FAIL_ID_QUERY);
		}
    }
    
    /*- Simulation or IDQuery == VI_FALSE ---------------------------------------*/
    if( (Ivi_Simulating(vi)) || (!IDQuery) )
    {
        checkErr( agn934xni_GetDriverSetupOption (vi, "Model", 128, modelStr));

        if ((strlen(modelStr) != 0))
        {
            if(( strncmp (modelStr, "N9342C", strlen("N9342C")) == 0))
                instModel = AGN934XNI_VAL_MODEL_N9342C; 
            else if(( strncmp (modelStr, "N9343C", strlen("N9343C")) == 0))
                instModel = AGN934XNI_VAL_MODEL_N9343C; 
            else if(( strncmp (modelStr, "N9344C", strlen("N9344C")) == 0))  /*-Modified to fix car 359275-*/
                instModel = AGN934XNI_VAL_MODEL_N9344C;
            else if(( strncmp (modelStr, "N9322C", strlen("N9322C")) == 0))
                instModel = AGN934XNI_VAL_MODEL_N9322C;
			else if(( strncmp (modelStr, "N9321C", strlen("N9321C")) == 0))
				instModel = AGN934XNI_VAL_MODEL_N9321C;
			else if(( strncmp (modelStr, "N9323C", strlen("N9323C")) == 0))
				instModel = AGN934XNI_VAL_MODEL_N9323C;
			else if(( strncmp (modelStr, "N9324C", strlen("N9324C")) == 0))
				instModel = AGN934XNI_VAL_MODEL_N9324C;
            else
                viCheckErrElab( IVI_ERROR_INVALID_VALUE, "The model specified is not valid");
        }
    }

     /* Add attributes */
    checkErr( agn934xni_InitAttributes (vi, instModel));
        
    /*- Reset instrument ----------------------------------------------------*/
    if (reset) 
        checkErr( agn934xni_reset (vi));
    else  /*- Send Default Instrument Setup ---------------------------------*/
        checkErr( agn934xni_DefaultInstrSetup (vi));
    
    checkErr( agn934xni_CheckStatus (vi));

Error:
    if (error < VI_SUCCESS)
    {
        if (!Ivi_Simulating (vi) && io)
            viClose (io);
    }
    return error;
}

/*****************************************************************************
 * Function: agn934xni_IviClose                                                        
 * Purpose:  This function performs all of the drivers clean-up operations   
 *           except for closing the IVI session.  This function is called by 
 *           agn934xni_close or by an IVI class driver. 
 *
 *           Note:  
 *           This function must close the I/O session and set IVI_ATTR_IO_SESSION to 0.
 *****************************************************************************/
static ViStatus agn934xni_IviClose (ViSession vi)
{
    ViStatus error = VI_SUCCESS;
    ViSession io = VI_NULL;

        /* Do not lock here.  The caller manages the lock. */

    checkErr( Ivi_GetAttributeViSession (vi, VI_NULL, IVI_ATTR_IO_SESSION, 0, &io));

Error:
    Ivi_SetAttributeViSession (vi, VI_NULL, IVI_ATTR_IO_SESSION, 0, VI_NULL);
    if(io)                                                      
    {
        viClose (io);
    }
    return error;   
}

/*****************************************************************************
 * Function: agn934xni_CheckStatus                                                 
 * Purpose:  This function checks the status of the instrument to detect 
 *           whether the instrument has encountered an error.  This function  
 *           is called at the end of most exported driver functions.  If the    
 *           instrument reports an error, this function returns      
 *           IVI_ERROR_INSTRUMENT_SPECIFIC.  The user can set the 
 *           agn934xni_ATTR_QUERY_INSTRUMENT_STATUS attribute to VI_FALSE to 
 *           disable this check and increase execution speed.                                   
 *
 *           Note:  Call this function only when the session is locked.
 *****************************************************************************/
static ViStatus agn934xni_CheckStatus (ViSession vi)
{
    ViStatus    error = VI_SUCCESS;

    if (Ivi_QueryInstrStatus (vi) && Ivi_NeedToCheckStatus (vi) && !Ivi_Simulating (vi))
    {
        checkErr( agn934xni_CheckStatusCallback (vi, Ivi_IOSession(vi)));
        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_FALSE));
    }
        
Error:
    return error;
}

/*****************************************************************************
 * Function: agn934xni_WaitForOPC                                                  
 * Purpose:  This function waits for the instrument to complete the      
 *           execution of all pending operations. It can be called from 
 *           other instrument driver functions. 
 *
 *           The maxTime parameter specifies the maximum time to wait for
 *           operation complete in milliseconds.
 *
 *           Note:  Call this function only when the session is locked.
 *****************************************************************************/
static ViStatus agn934xni_WaitForOPC (ViSession vi, ViInt32 maxTime) 
{
    ViStatus    error = VI_SUCCESS;

    if (!Ivi_Simulating(vi))
    {
        ViInt32     oldOPCTimeout; 
        ViInt32     oldVisaTimeout;
        ViBoolean   opcDone = VI_FALSE;   
        ViSession   io = Ivi_IOSession(vi);
        
        viCheckErr( viGetAttribute (io, VI_ATTR_TMO_VALUE, &oldVisaTimeout));
        viCheckErr( viSetAttribute (io, VI_ATTR_TMO_VALUE, maxTime));

        checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_OPC_TIMEOUT, 0, &oldOPCTimeout));
        checkErr( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_OPC_TIMEOUT, 0, maxTime)); 

        viCheckErr( viQueryf (io, "*OPC?", "%hd", &opcDone));
        
        checkErr( Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_OPC_TIMEOUT, 0, oldOPCTimeout));
        viCheckErr( viSetAttribute(io, VI_ATTR_TMO_VALUE, oldVisaTimeout));

        viCheckErr( error);
    }
Error:
    return error;
}

/*****************************************************************************
 * Function: agn934xni_DefaultInstrSetup                                               
 * Purpose:  This function sends a default setup to the instrument.  The    
 *           agn934xni_reset function calls this function.  The 
 *           agn934xni_IviInit function calls this function when the
 *           user passes VI_FALSE for the reset parameter.  This function is 
 *           useful for configuring settings that other instrument driver 
 *           functions require.    
 *
 *           Note:  Call this function only when the session is locked.
 *****************************************************************************/
static ViStatus agn934xni_DefaultInstrSetup (ViSession vi)
{
    ViStatus    error = VI_SUCCESS;
        
    /* Invalidate all attributes */
    checkErr( Ivi_InvalidateAllAttributes (vi));
    
    if (!Ivi_Simulating(vi))
    {
        ViSession   io = Ivi_IOSession(vi); /* call only when locked */

        checkErr( Ivi_SetNeedToCheckStatus (vi, VI_TRUE));
        
        /*
           *CLS     clears the event/status registers                                      
           *ESE 1   sets the standard event status enable register to recognize  
                    operation complete.                                          
           *SRE 32  sets the service request register to enable a service        
                    request on operation complete                                
           */                            
        
        viCheckErr( viPrintf (io, "*CLS;*ESE 1;*SRE 32"));
    }
Error:
    return error;
}

/*****************************************************************************
 *  Function: agn934xni_GetDriverSetupOption
 *  Purpose:  Get the value of a DriverSetup option.  The driver setup string
 *            is part of the option string the user passes to the
 *            agn934xni_InitWithOptions function.  Specifically it is the part
 *            that follows "DriverSetup=".  This function assumes the 
 *            DriverSetup string has the following format:
 *              "OptionTag1 : OptionValue1; OptionTag2 : OptionValue2"
 *            Leading and trailing white space is removed from the option
 *            value and both the option tag and option value may contain
 *            white space.  The option tag is case sensitive.
 *
 *            Example:
 *
 *              "DriverSetup= Model : InstrX ; Special Option:Feature Y "
 *
 *              optionTag "Model"          returns optionValue "InstrX"
 *
 *              optionTag "Special Option" returns optionValue "Feature Y"
 *****************************************************************************/
static ViStatus agn934xni_GetDriverSetupOption (ViSession vi,
                                               ViConstString optionTag,
                                               ViInt32 optionValueSize,
                                               ViChar optionValue[])
{
    ViStatus error = VI_SUCCESS;
    ViChar   setup[BUFFER_SIZE];
    ViChar*  searchOrigin;
    ViChar*  start;
    ViChar*  end;
    ViUInt32 n;

    checkErr( Ivi_LockSession (vi, VI_NULL));

    if ((optionValue != VI_NULL) && (optionValueSize > 0))
        optionValue[0] = 0;

    if ((optionTag != VI_NULL) && (optionValue != VI_NULL) && (optionValueSize > 1))
    {
        checkErr( Ivi_GetAttributeViString (vi, "", AGN934XNI_ATTR_DRIVER_SETUP,
                                            0, BUFFER_SIZE, setup));
        searchOrigin = setup;
        while (searchOrigin != VI_NULL)
        {
            searchOrigin = strstr(searchOrigin, optionTag);
            if (searchOrigin)
            {
                searchOrigin += strlen(optionTag);
                start = searchOrigin;
                while (isspace(*start)) start++;
                if (*start == ':')
                {
                    start++;
                    while (isspace(*start)) start++;
                    if (*start)
                    {
                        end = strchr (start, ';');
                        if (start != end)
                        {
                            end = (end) ? end-1 : &setup[strlen(setup)-1];
                            while (isspace(*end)) end--;
                            n = (ViUInt32) (end - start + 1);
                            if (n > optionValueSize - 1)
                                n = optionValueSize - 1;
                            strncpy(optionValue, start, n);
                            optionValue[n] = 0;
                            break;
                        }
                    }
                }
            }
        }
    }
        
Error:
    Ivi_UnlockSession (vi, VI_NULL);
    return error;
}

/*****************************************************************************
 *  Function: agn934xni_GetStringFromTable
 *  Purpose:  Read the string command from rangetable    
 *****************************************************************************/
static ViStatus agn934xni_GetStringFromTable(
        agn934xniStringValueTable table,
    ViInt32               value,
    ViConstString*        string
)
{
    ViStatus    error = VI_SUCCESS;
    ViBoolean   found = VI_FALSE;
    ViInt32     i;
    
    for( i = 0; table[i].string; i++)
    {
        if ( table[i].value == value )
        {
            *string = table[i].string;
            found = VI_TRUE;
            break;
        }
    }
    
    if ( !found )
        error = IVI_ERROR_INVALID_VALUE;

    return error;
}

/*****************************************************************************
 *  Function: agn934xni_GetRepCommandFromTable
 *  Purpose:  Read the repeated command from range table to connect with the 
 *            string command.
 *****************************************************************************/
static ViStatus agn934xni_GetRepCommandFromTable(
    agn934xniStringValueTable table,
    ViInt32               value,
    ViConstString*        repCommand
)
{
    ViStatus    error = VI_SUCCESS;
    ViBoolean   found = VI_FALSE;
    ViInt32     i;

    for( i = 0; table[i].repCommand; i++)
    {
        if ( table[i].value == value )
        {
            *repCommand = table[i].repCommand;
            found = VI_TRUE;
            break;
        }
    }

    if ( !found )
        error = IVI_ERROR_INVALID_VALUE;

    return error;
}


/*****************************************************************************
 *------------------------ Global Session Callbacks -------------------------*
 *****************************************************************************/

/*****************************************************************************
 * Function: agn934xni_CheckStatusCallback                                               
 * Purpose:  This function queries the instrument to determine if it has 
 *           encountered an error.  If the instrument has encountered an 
 *           error, this function returns the IVI_ERROR_INSTRUMENT_SPECIFIC 
 *           error code.  This function is called by the 
 *           agn934xni_CheckStatus utility function.  The 
 *           Ivi_SetAttribute and Ivi_GetAttribute functions invoke this 
 *           function when the optionFlags parameter includes the
 *           IVI_VAL_DIRECT_USER_CALL flag.
 *           
 *           The user can disable calls to this function by setting the 
 *           AGN934XNI_QUERY_INSTRUMENT_STATUS attribute to VI_FALSE.  The driver can 
 *           disable the check status callback for a particular attribute by 
 *           setting the IVI_VAL_DONT_CHECK_STATUS flag.
 *****************************************************************************/
static ViStatus _VI_FUNC agn934xni_CheckStatusCallback (ViSession vi, ViSession io)
{
    ViStatus    error = VI_SUCCESS;
    
    ViInt16     esr = 0; 
    
    viCheckErr( viQueryf (io, "*ESR?", "%hd", &esr));
    if (esr & IEEE_488_2_ERROR_MASK)
    {
        viCheckErr( IVI_ERROR_INSTR_SPECIFIC);
    }

Error:
    return error;
}

static ViStatus _VI_FUNC agn934xniEnum_WriteCallback (ViSession vi, ViSession io,
                                                      ViConstString channelName,
                                                      ViAttr attributeId,
                                                      ViInt32 value)
{
    ViStatus            error = VI_SUCCESS;
    ViString            command,
                        commandValue;
    ViString            repCommand;                     
    IviRangeTablePtr    table;

    viCheckErr( agn934xni_GetStringFromTable (agn934xniEnum_commands, attributeId, &command)); 
    viCheckErr (agn934xni_GetRepCommandFromTable (agn934xniEnum_commands, attributeId, &repCommand));

    checkErr( Ivi_GetAttrRangeTable (vi, channelName, attributeId, &table));
    viCheckErr( agn934xni_GetCmdFromIntValue(value, table, &commandValue));
    
    if (!Ivi_Simulating (vi))
    {
        viCheckErr( viPrintf (io, "%s%s%s %s", command, VALID_CHANNELNAME (channelName), repCommand, commandValue));
    }
Error:
    return error;
}

/*****************************************************************************
 * Function: agn934xniEnum_ReadCallback                                               
 * Purpose:  This function reads the enum value of the ViInt32 attribute.
 *****************************************************************************/
static ViStatus _VI_FUNC agn934xniEnum_ReadCallback (ViSession vi, ViSession io,
                                                     ViConstString channelName,
                                                     ViAttr attributeId,
                                                     ViInt32 *value)
{
    ViStatus            error = VI_SUCCESS;
    ViString            command;
    ViString            repCommand; 
    IviRangeTablePtr    table;

    viCheckErr( agn934xni_GetStringFromTable (agn934xniEnum_commands, attributeId, &command)); 
    viCheckErr (agn934xni_GetRepCommandFromTable (agn934xniEnum_commands, attributeId, &repCommand));

    checkErr( Ivi_GetAttrRangeTable (vi, channelName, attributeId, &table));

    if (!Ivi_Simulating (vi))
    {
        ViChar  rdBuffer[BUFFER_SIZE];
        ViInt32 rdBufferSize = (ViInt32) sizeof(rdBuffer);

        viCheckErr( viPrintf (io, "%s%s%s?", command, VALID_CHANNELNAME (channelName), repCommand));
        viCheckErr( viScanf(io, "%#s", &rdBufferSize, rdBuffer));
        viCheckErr( agn934xni_GetValueFromCmd(rdBuffer, table, value));
    }
Error:
    return error;
}

/*****************************************************************************
 * Function: agn934xniViBoolean_WriteCallback                                               
 * Purpose:  This function sets the bool value of the ViBoolean attribute.
 *****************************************************************************/
static ViStatus _VI_FUNC agn934xniViBoolean_WriteCallback (ViSession vi,
                                                           ViSession io,
                                                           ViConstString channelName,
                                                           ViAttr attributeId,
                                                           ViBoolean value)
{
    ViStatus        error = VI_SUCCESS;
    ViString        command;
    ViString        repCommand;

    viCheckErr( agn934xni_GetStringFromTable (agn934xniViBoolean_commands, attributeId, &command)); 
    viCheckErr (agn934xni_GetRepCommandFromTable (agn934xniViBoolean_commands, attributeId, &repCommand));
    
    if (!Ivi_Simulating (vi))
        viCheckErr( viPrintf (io, "%s%s%s %s", command, VALID_CHANNELNAME (channelName), repCommand, value ? "ON" : "OFF"));

Error:
    return error;
}

/*****************************************************************************
 * Function: agn934xniViBoolean_ReadCallback                                               
 * Purpose:  This function reads the bool value of the ViBoolean attribute.
 *****************************************************************************/
static ViStatus _VI_FUNC agn934xniViBoolean_ReadCallback (ViSession vi,
                                                          ViSession io,
                                                          ViConstString channelName,
                                                          ViAttr attributeId,
                                                          ViBoolean *value)
{
    ViStatus    error = VI_SUCCESS;
    ViString    command;
    ViString    repCommand; 
    
    viCheckErr( agn934xni_GetStringFromTable (agn934xniViBoolean_commands, attributeId, &command)); 
    viCheckErr (agn934xni_GetRepCommandFromTable (agn934xniViBoolean_commands, attributeId, &repCommand));

    if (!Ivi_Simulating (vi))
        viCheckErr( viQueryf (io, "%s%s%s?", "%hd", command, VALID_CHANNELNAME (channelName), repCommand, value));

Error:
    return error;
}

/*****************************************************************************
 * Function: agn934xniViReal64_WriteCallback                                               
 * Purpose:  This function sets the bool value of the ViReal64 attribute.
 *****************************************************************************/
static ViStatus _VI_FUNC agn934xniViReal64_WriteCallback (ViSession vi,
                                                          ViSession io,
                                                          ViConstString channelName,
                                                          ViAttr attributeId,
                                                          ViReal64 value)
{
    ViStatus    error = VI_SUCCESS;
    ViString    command;
    ViString    repCommand;     

    viCheckErr( agn934xni_GetStringFromTable (agn934xniViReal64_commands, attributeId, &command));
    viCheckErr (agn934xni_GetRepCommandFromTable (agn934xniViReal64_commands, attributeId, &repCommand));   
     
    if (!Ivi_Simulating (vi))
    {
        if(abs(value) < 1.0)
        {
            viCheckErr( viPrintf (io, "%s%s%s %Le", command, VALID_CHANNELNAME (channelName), repCommand, value));
        }
        else
        {
            viCheckErr( viPrintf (io, "%s%s%s %Lf", command, VALID_CHANNELNAME (channelName), repCommand, value));
        }
    }
Error:
    return error;
}

/*****************************************************************************
 * Function: agn934xniViReal64_ReadCallback                                               
 * Purpose:  This function reads the bool value of the ViReal64 attribute.
 *****************************************************************************/
static ViStatus _VI_FUNC agn934xniViReal64_ReadCallback (ViSession vi,
                                                         ViSession io,
                                                         ViConstString channelName,
                                                         ViAttr attributeId,
                                                         ViReal64 *value)
{
    ViStatus    error = VI_SUCCESS;
    ViString    command;
    ViString    repCommand; 
    
    viCheckErr( agn934xni_GetStringFromTable (agn934xniViReal64_commands, attributeId, &command)); 
    viCheckErr (agn934xni_GetRepCommandFromTable (agn934xniViReal64_commands, attributeId, &repCommand));   

    if (!Ivi_Simulating (vi))
        viCheckErr( viQueryf (io, "%s%s%s?", "%Le", command, VALID_CHANNELNAME (channelName), repCommand, value));

Error:
    return error;
}

/*****************************************************************************
 * Function: agn934xniViInt32_WriteCallback                                               
 * Purpose:  This function sets the bool value of the ViInt32 attribute.
 *****************************************************************************/
static ViStatus _VI_FUNC agn934xniViInt32_WriteCallback (ViSession vi,
                                                         ViSession io,
                                                         ViConstString channelName,
                                                         ViAttr attributeId,
                                                         ViInt32 value)
{
    ViStatus    error = VI_SUCCESS;
    ViString    command;
    ViString    repCommand;     

    viCheckErr( agn934xni_GetStringFromTable (agn934xniViInt32_commands, attributeId, &command)); 
    viCheckErr (agn934xni_GetRepCommandFromTable (agn934xniViInt32_commands, attributeId, &repCommand));    

    if (!Ivi_Simulating (vi))
        viCheckErr( viPrintf (io, "%s%s%s %ld", command, VALID_CHANNELNAME (channelName), repCommand, value));

Error:
    return error;
}

/*****************************************************************************
 * Function: agn934xniViInt32_ReadCallback                                               
 * Purpose:  This function reads the bool value of the ViInt32 attribute.
 *****************************************************************************/
static ViStatus _VI_FUNC agn934xniViInt32_ReadCallback (ViSession vi,
                                                        ViSession io,
                                                        ViConstString channelName,
                                                        ViAttr attributeId,
                                                        ViInt32 *value)
{
    ViStatus    error = VI_SUCCESS;
    ViString    command;
    ViString    repCommand; 
    
    viCheckErr( agn934xni_GetStringFromTable (agn934xniViInt32_commands, attributeId, &command)); 
    viCheckErr (agn934xni_GetRepCommandFromTable (agn934xniViInt32_commands, attributeId, &repCommand));    

    if (!Ivi_Simulating (vi))
        viCheckErr( viQueryf (io, "%s%s%s?", "%ld", command, VALID_CHANNELNAME (channelName), repCommand, value));

Error:
    return error;
}

/*- AGN934XNI_ATTR_ID_QUERY_RESPONSE -*/

static ViStatus _VI_FUNC agn934xniAttrIdQueryResponse_ReadCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    const ViConstString cacheValue)
{
    ViStatus    error = VI_SUCCESS;
    ViChar      rdBuffer[BUFFER_SIZE];
    ViUInt32    retCnt;
    
    viCheckErr( viPrintf (io, "*IDN?"));
    viCheckErr( viRead (io, rdBuffer, BUFFER_SIZE-1, &retCnt));
    rdBuffer[retCnt] = 0;

    checkErr( Ivi_SetValInStringCallback (vi, attributeId, rdBuffer));
    
Error:
    return error;
}
    
/*- AGN934XNI_ATTR_SPECIFIC_DRIVER_REVISION -*/

static ViStatus _VI_FUNC agn934xniAttrDriverRevision_ReadCallback (ViSession vi, 
                                                                  ViSession io,
                                                                  ViConstString channelName, 
                                                                  ViAttr attributeId,
                                                                  const ViConstString cacheValue)
{
    ViStatus    error = VI_SUCCESS;
    ViChar      driverRevision[256];
    
    
    sprintf (driverRevision, 
             "Driver: agn934xni %d.%d, Compiler: %s %3.2f, "
             "Components: IVIEngine %.2f, VISA-Spec %.2f",
             AGN934XNI_MAJOR_VERSION, AGN934XNI_MINOR_VERSION, 
             IVI_COMPILER_NAME, IVI_COMPILER_VER_NUM, 
             IVI_ENGINE_MAJOR_VERSION + IVI_ENGINE_MINOR_VERSION/1000.0, 
             Ivi_ConvertVISAVer(VI_SPEC_VERSION));

    checkErr( Ivi_SetValInStringCallback (vi, attributeId, driverRevision));    
Error:
    return error;
}


/*- AGN934XNI_ATTR_INSTRUMENT_FIRMWARE_REVISION -*/

static ViStatus _VI_FUNC agn934xniAttrFirmwareRevision_ReadCallback (ViSession vi, 
                                                                    ViSession io,
                                                                    ViConstString channelName, 
                                                                    ViAttr attributeId,
                                                                    const ViConstString cacheValue)
{
    ViStatus    error = VI_SUCCESS;
    ViChar      idQ[BUFFER_SIZE], rdBuffer[BUFFER_SIZE];
    
    checkErr( Ivi_GetAttributeViString (vi, "", AGN934XNI_ATTR_ID_QUERY_RESPONSE,
                                        0, BUFFER_SIZE, idQ));

    sscanf (idQ, "%*[^,],%*[^,],%*[^,],%256[^\n]", rdBuffer);

    checkErr( Ivi_SetValInStringCallback (vi, attributeId, rdBuffer));
    
Error:
    return error;
}

/*- AGN934XNI_ATTR_INSTRUMENT_MANUFACTURER -*/

static ViStatus _VI_FUNC agn934xniAttrInstrumentManufacturer_ReadCallback (ViSession vi, 
                                                                          ViSession io,
                                                                          ViConstString channelName, 
                                                                          ViAttr attributeId,
                                                                          const ViConstString cacheValue)
{
    ViStatus    error = VI_SUCCESS;
    ViChar      rdBuffer[BUFFER_SIZE];
    ViChar      idQ[BUFFER_SIZE];
    
    checkErr( Ivi_GetAttributeViString (vi, "", AGN934XNI_ATTR_ID_QUERY_RESPONSE,
                                        0, BUFFER_SIZE, idQ));
    sscanf (idQ, "%256[^,]", rdBuffer);

    checkErr( Ivi_SetValInStringCallback (vi, attributeId, rdBuffer));
    
Error:
    return error;
}

    

/*- AGN934XNI_ATTR_INSTRUMENT_MODEL -*/

static ViStatus _VI_FUNC agn934xniAttrInstrumentModel_ReadCallback (ViSession vi, 
                                                                   ViSession io,
                                                                   ViConstString channelName, 
                                                                   ViAttr attributeId,
                                                                   const ViConstString cacheValue)
{
    ViStatus    error = VI_SUCCESS;
    ViChar      rdBuffer[BUFFER_SIZE];
    ViChar      idQ[BUFFER_SIZE];
    
    checkErr( Ivi_GetAttributeViString (vi, "", AGN934XNI_ATTR_ID_QUERY_RESPONSE,
                                        0, BUFFER_SIZE, idQ));
    sscanf (idQ, "%*[^,],%256[^,]", rdBuffer);

    checkErr( Ivi_SetValInStringCallback (vi, attributeId, rdBuffer));
    
Error:
    return error;
}

/* AGN934XNI_ATTR_FREQUENCY_SPAN_MODE */        
static ViStatus _VI_FUNC agn934xniAttrFrequencySpanMode_WriteCallback (ViSession vi,
                                                                       ViSession io,
                                                                       ViConstString channelName,
                                                                       ViAttr attributeId,
                                                                       ViInt32 value)
{
    ViStatus    error = VI_SUCCESS;
                        
    ViString            commandValue;                       
    IviRangeTablePtr    table;
    
    checkErr( Ivi_GetAttrRangeTable (vi, channelName, attributeId, &table));
    viCheckErr( agn934xni_GetCmdFromIntValue(value, table, &commandValue));
    
    viCheckErr (viPrintf (io, ":FREQ:SPAN:%s", commandValue));  

Error:
    return error;
}

/* AGN934XNI_ATTR_ACTIVE_TRACE */          
static ViStatus _VI_FUNC agn934xniAttrActiveTrace_CheckCallback (ViSession vi,
                                                                 ViConstString channelName,
                                                                 ViAttr attributeId,
                                                                 ViConstString value)
{
    return Ivi_CoerceRepCapName(vi, TRACE_REP_CAP_NAME, value, VI_NULL);
}
    
/* AGN934XNI_ATTR_TRACE_MATH_TYPE */
/* use common read callback agn934xniEnum_ReadCallback */                     
        
/* use common write callback agn934xniEnum_WriteCallback */                   
        
/* AGN934XNI_ATTR_HIGH_SENSITIVITY_ENABLE */
/* use common read callback agn934xniViBoolean_ReadCallback */                    
        
/* use common write callback agn934xniViBoolean_WriteCallback */                      
        
/* AGN934XNI_ATTR_VBW_RBW_RATIO_AUTO */
/* use common read callback agn934xniViBoolean_ReadCallback */                    
        
/* use common write callback agn934xniViBoolean_WriteCallback */                      
        
/* AGN934XNI_ATTR_VBW_RBW_RATIO */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
        
/* AGN934XNI_ATTR_AVERAGE_DURATION_ENABLE */
/* use common read callback agn934xniViBoolean_ReadCallback */                    
        
/* use common write callback agn934xniViBoolean_WriteCallback */                      
        
/* AGN934XNI_ATTR_AVERAGE_DURATION */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
        
/* AGN934XNI_ATTR_AVERAGE_TYPE */
/* use common read callback agn934xniEnum_ReadCallback */                     
        
/* use common write callback agn934xniEnum_WriteCallback */                   
        
/* AGN934XNI_ATTR_AVERAGE_ENABLE */
/* use common read callback agn934xniViBoolean_ReadCallback */                    
        
/* use common write callback agn934xniViBoolean_WriteCallback */                      
        
/* AGN934XNI_ATTR_AVERAGE_COUNT */
/* use common read callback agn934xniViInt32_ReadCallback */                      
        
/* use common write callback agn934xniViInt32_WriteCallback */                    
        
/* AGN934XNI_ATTR_MEASUREMENT_TYPE */
static ViStatus _VI_FUNC agn934xniAttrMeasurementType_ReadCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViInt32 *value)
{
    ViStatus error = VI_SUCCESS;
    ViInt32  instMode = -1;

    viCheckErr (Ivi_GetAttributeViInt32( vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instMode));

    if (instMode == AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER)
    {
        checkErr( agn934xniEnum_ReadCallback(vi, io, channelName, attributeId, value));         
    }
    else
    {
        *value = AGN934XNI_VAL_MEASUREMENT_TYPE_OFF;
    }

Error:
    return error; 
}
        
static ViStatus _VI_FUNC agn934xniAttrMeasurementType_WriteCallback (ViSession vi,
                                                                     ViSession io,
                                                                     ViConstString channelName,
                                                                     ViAttr attributeId,
                                                                     ViInt32 value)
{
    ViStatus error = VI_SUCCESS;
    ViInt32  instMode = -1;

    viCheckErr (Ivi_GetAttributeViInt32( vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instMode));

    if (instMode == AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER)
    {
        checkErr( agn934xniEnum_WriteCallback(vi, io, channelName, attributeId, value));         
    }
    else
    {
        viCheckErrElab(IVI_ERROR_INVALID_CONFIGURATION, 
            "Measurement Type is not available in current instrument mode.");
    }

Error:
    return error; 
}                     
        
/* AGN934XNI_ATTR_INSTRUMENT_MODE */
/* use common read callback agn934xniEnum_ReadCallback */                     
        
/* use common write callback agn934xniEnum_WriteCallback */                   
        
/* AGN934XNI_ATTR_AMPLITUDE_UNITS */
static ViStatus _VI_FUNC agn934xniAttrAmplitudeUnits_ReadCallback (ViSession vi,
                                                                   ViSession io,
                                                                   ViConstString channelName,
                                                                   ViAttr attributeId,
                                                                   ViInt32 *value)
{
    ViStatus       error = VI_SUCCESS;
    ViInt32        instrMode = 0;    

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if (INSTRUMENT_MODE_IS_SA_TG(instrMode))
    {   
        checkErr( agn934xniEnum_ReadCallback(vi, io, VI_NULL, AGN934XNI_ATTR_AMPLITUDE_UNITS, value));
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current measurement mode.");
    }

Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniAttrAmplitudeUnits_WriteCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViInt32 value)
{
    ViStatus       error = VI_SUCCESS;
    ViInt32        instrMode = 0;    

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if (INSTRUMENT_MODE_IS_SA_TG(instrMode))
    {   
        checkErr( agn934xniEnum_WriteCallback(vi, io, VI_NULL, AGN934XNI_ATTR_AMPLITUDE_UNITS, value));
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current measurement mode.");
    }

Error:
    return error;
}                 
        
/* AGN934XNI_ATTR_ATTENUATION */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
                  
static ViStatus _VI_FUNC agn934xniAttrAttenuation_CoerceCallback (ViSession vi,
                                                                  ViConstString channelName,
                                                                  ViAttr attributeId,
                                                                  ViReal64 value,
                                                                  ViReal64 *coercedValue)
{
    ViStatus    error = VI_SUCCESS;
                        
    if(value < 0 || value > 50)
        viCheckErr( IVI_ERROR_INVALID_VALUE);
    
     *coercedValue = (int)(value + 0.5);

Error:
    return error;
}

        
/* AGN934XNI_ATTR_ATTENUATION_AUTO */
/* use common read callback agn934xniViBoolean_ReadCallback */                    
        
/* use common write callback agn934xniViBoolean_WriteCallback */                      
        
/* AGN934XNI_ATTR_DETECTOR_TYPE */
static ViStatus _VI_FUNC agn934xniAttrDetectorType_ReadCallback (ViSession vi,
                                                                 ViSession io,
                                                                 ViConstString channelName,
                                                                 ViAttr attributeId,
                                                                 ViInt32 *value)
{
    ViStatus       error = VI_SUCCESS;
    ViConstString  active_trace;
    ViInt32        instrMode = 0;    

    checkErr( agn934xni_GetActiveTrace(vi, &active_trace, VI_FALSE));

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if (INSTRUMENT_MODE_IS_SA_TG(instrMode))
    {   
        checkErr( agn934xniEnum_ReadCallback(vi, io, active_trace, attributeId, value));
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current measurement mode.");
    }

Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniAttrDetectorType_WriteCallback (ViSession vi,
                                                                  ViSession io,
                                                                  ViConstString channelName,
                                                                  ViAttr attributeId,
                                                                  ViInt32 value)
{
    ViStatus       error = VI_SUCCESS;
    ViConstString  active_trace;
    ViInt32        instrMode = 0;    

    checkErr( agn934xni_GetActiveTrace(vi, &active_trace, VI_FALSE));

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if (INSTRUMENT_MODE_IS_SA_TG(instrMode))
    {   
        checkErr( agn934xniEnum_WriteCallback(vi, io, active_trace, attributeId, value));
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current measurement mode.");
    }

Error:
    return error;
}                     
        
/* AGN934XNI_ATTR_FREQUENCY_START */
static ViStatus _VI_FUNC agn934xniAttrFrequencyStart_ReadCallback (ViSession vi,
                                                                   ViSession io,
                                                                   ViConstString channelName,
                                                                   ViAttr attributeId,
                                                                   ViReal64 *value)
{
    ViStatus       error = VI_SUCCESS;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;    

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if (INSTRUMENT_MODE_IS_SA_TG(instrMode) && (measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_SM) )
    {   
        checkErr( agn934xniViReal64_ReadCallback(vi, io, VI_NULL, attributeId, value));
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current measurement mode.");
    }

Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniAttrFrequencyStart_WriteCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 value)
{
    ViStatus       error = VI_SUCCESS;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;    

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if (INSTRUMENT_MODE_IS_SA_TG(instrMode) && (measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_SM) )
    {   
        checkErr( agn934xniViReal64_WriteCallback(vi, io, VI_NULL, attributeId, value));
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current measurement mode.");
    }

Error:
    return error;
}                     
        
/* AGN934XNI_ATTR_FREQUENCY_STOP */
static ViStatus _VI_FUNC agn934xniAttrFrequencyStop_ReadCallback (ViSession vi,
                                                                  ViSession io,
                                                                  ViConstString channelName,
                                                                  ViAttr attributeId,
                                                                  ViReal64 *value)
{
    ViStatus       error = VI_SUCCESS;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;    

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if (INSTRUMENT_MODE_IS_SA_TG(instrMode) && (measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_SM) )
    {   
        checkErr( agn934xniViReal64_ReadCallback(vi, io, VI_NULL, attributeId, value));
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current measurement mode.");
    }

Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniAttrFrequencyStop_WriteCallback (ViSession vi,
                                                                   ViSession io,
                                                                   ViConstString channelName,
                                                                   ViAttr attributeId,
                                                                   ViReal64 value)
{
    ViStatus       error = VI_SUCCESS;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;    

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if (INSTRUMENT_MODE_IS_SA_TG(instrMode) && (measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_SM) )
    {   
        checkErr( agn934xniViReal64_WriteCallback(vi, io, VI_NULL, attributeId, value));
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current measurement mode.");
    }

Error:
    return error;   
}
        
/* AGN934XNI_ATTR_FREQUENCY_OFFSET */
static ViStatus _VI_FUNC agn934xniAttrFrequencyOffset_ReadCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 *value)
{
    ViStatus       error = VI_SUCCESS;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;    

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if (INSTRUMENT_MODE_IS_SA_TG(instrMode) && (measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_SM) )
    {   
        checkErr( agn934xniViReal64_ReadCallback(vi, io, VI_NULL, attributeId, value));
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current measurement mode.");
    }

Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniAttrFrequencyOffset_WriteCallback (ViSession vi,
                                                                     ViSession io,
                                                                     ViConstString channelName,
                                                                     ViAttr attributeId,
                                                                     ViReal64 value)
{
    ViStatus       error = VI_SUCCESS;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;    

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if (INSTRUMENT_MODE_IS_SA_TG(instrMode) && (measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_SM) )
    {   
        checkErr( agn934xniViReal64_WriteCallback(vi, io, VI_NULL, attributeId, value));
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current measurement mode.");
    }

Error:
    return error;
}                 
        
/* AGN934XNI_ATTR_INPUT_IMPEDANCE */
static ViStatus _VI_FUNC agn934xniAttrInputImpedance_ReadCallback (ViSession vi,
                                                                   ViSession io,
                                                                   ViConstString channelName,
                                                                   ViAttr attributeId,
                                                                   ViReal64 *value)
{
    ViStatus            error = VI_SUCCESS;
    ViString            command;
    ViString            repCommand;     

    viCheckErr( agn934xni_GetStringFromTable (agn934xniViReal64_commands, attributeId, &command));
    viCheckErr (agn934xni_GetRepCommandFromTable (agn934xniViReal64_commands, attributeId, &repCommand));
    
    if (!Ivi_Simulating (vi))
        viCheckErr( viQueryf (io, "%s%s%s?", "OHM%Lf", command, VALID_CHANNELNAME (channelName), repCommand, value));
    
Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniAttrInputImpedance_WriteCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 value)
{
    ViStatus            error = VI_SUCCESS;
    ViString            command,
                        commandValue;
    ViString            repCommand;     
    IviRangeTablePtr    table;

    viCheckErr( agn934xni_GetStringFromTable (agn934xniViReal64_commands, attributeId, &command));
    viCheckErr (agn934xni_GetRepCommandFromTable (agn934xniViReal64_commands, attributeId, &repCommand));
    
    checkErr( Ivi_GetAttrRangeTable (vi, channelName, attributeId, &table)); 
    viCheckErr( agn934xni_GetCmdFromRealValue(value, table, &commandValue));
     
    if (!Ivi_Simulating (vi))
    {
        viCheckErr( viPrintf (io, "%s%s%s %s", command, VALID_CHANNELNAME (channelName), repCommand, commandValue));
    }
    
Error:
    return error;
}                  
        
/* AGN934XNI_ATTR_CENTER_FREQUENCY */
static ViStatus _VI_FUNC agn934xniAttrCenterFrequency_ReadCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 *value)
{
    ViStatus       error = VI_SUCCESS;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;    

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if (INSTRUMENT_MODE_IS_SA_TG(instrMode) && (measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_SM) )
    {   
        checkErr( agn934xniViReal64_ReadCallback(vi, io, VI_NULL, attributeId, value));
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current measurement mode.");
    }

Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniAttrCenterFrequency_WriteCallback (ViSession vi,
                                                                     ViSession io,
                                                                     ViConstString channelName,
                                                                     ViAttr attributeId,
                                                                     ViReal64 value)
{
    ViStatus       error = VI_SUCCESS;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;    

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if (INSTRUMENT_MODE_IS_SA_TG(instrMode) && (measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_SM) )
    {   
        checkErr( agn934xniViReal64_WriteCallback(vi, io, VI_NULL, attributeId, value));
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current measurement mode.");
    }

Error:
    return error;
}                 
        
/* AGN934XNI_ATTR_FREQUENCY_SPAN */
static ViStatus _VI_FUNC agn934xniAttrFrequencySpan_ReadCallback (ViSession vi,
                                                                  ViSession io,
                                                                  ViConstString channelName,
                                                                  ViAttr attributeId,
                                                                  ViReal64 *value)
{
    ViStatus       error = VI_SUCCESS;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;    

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if (INSTRUMENT_MODE_IS_SA_TG(instrMode) && (measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_SM) )
    {   
        checkErr( agn934xniViReal64_ReadCallback(vi, io, VI_NULL, attributeId, value));
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current measurement mode.");
    }

Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniAttrFrequencySpan_WriteCallback (ViSession vi,
                                                                   ViSession io,
                                                                   ViConstString channelName,
                                                                   ViAttr attributeId,
                                                                   ViReal64 value)
{
    ViStatus       error = VI_SUCCESS;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;    

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if (INSTRUMENT_MODE_IS_SA_TG(instrMode) && (measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_SM) )
    {   
        checkErr( agn934xniViReal64_WriteCallback(vi, io, VI_NULL, attributeId, value));
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current measurement mode.");
    }

Error:
    return error;
}                 
        
/* AGN934XNI_ATTR_REFERENCE_LEVEL */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */ 

static ViStatus _VI_FUNC agn934xniAttrReferenceLevel_CheckCallback (ViSession vi,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 value)
{
    ViStatus    error = VI_SUCCESS;
    ViReal64    refLevelMinDbm = -100;
    ViReal64    refLevelMaxDbm = 30;
    ViReal64    newValue = 0;
    
    checkErr( agn934xni_RecalculateLevelToDBM(vi, value, &newValue));

    if (newValue < refLevelMinDbm || newValue > refLevelMaxDbm )
    {
        viCheckErrElab(IVI_ERROR_INVALID_VALUE, "Invalid value for Reference Level");   
    }
    
Error:
    return error;
}

        
/* AGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
                  

/* AGN934XNI_ATTR_VIDEO_TRIGGER_LEVEL */ 
static ViStatus _VI_FUNC agn934xniAttrVideoTriggerLevel_CheckCallback (ViSession vi,
                                                                       ViConstString channelName,
                                                                       ViAttr attributeId,
                                                                       ViReal64 value)
{
    ViStatus    error = VI_SUCCESS;
    ViReal64    trigger_level_dBm  = value;
    ViReal64    reference_level,
                scale_per_division = 10.0;
    
    checkErr( Ivi_GetAttributeViReal64(vi, VI_NULL, AGN934XNI_ATTR_REFERENCE_LEVEL, 0, &reference_level));
    checkErr( Ivi_GetAttributeViReal64(vi, VI_NULL, AGN934XNI_ATTR_UNITS_PER_DIVISION, 0, &scale_per_division));
    
    checkErr( agn934xni_RecalculateLevelToDBM( vi, value, &trigger_level_dBm));
    checkErr( agn934xni_RecalculateLevelToDBM( vi, reference_level, &reference_level));
    
    if ((value < (reference_level - 10.0 * scale_per_division)) || (value > reference_level))
        viCheckErr(IVI_ERROR_INVALID_VALUE);
Error:
    return error;
}

/* AGN934XNI_ATTR_RESOLUTION_BANDWIDTH */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
        
/* AGN934XNI_ATTR_RESOLUTION_BANDWIDTH_AUTO */
/* use common read callback agn934xniViBoolean_ReadCallback */                    
        
/* use common write callback agn934xniViBoolean_WriteCallback */                      
        
/* AGN934XNI_ATTR_SWEEP_TIME */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
                  
static ViStatus _VI_FUNC agn934xniAttrSweepTime_CoerceCallback (ViSession vi,
                                                                ViConstString channelName,
                                                                ViAttr attributeId,
                                                                ViReal64 value,
                                                                ViReal64 *coercedValue)
{
    ViStatus    error = VI_SUCCESS;
                        
    if(value < 0)
        viCheckErr( IVI_ERROR_INVALID_VALUE);
    if(value > 1000)
        *coercedValue = 1000;
    else
        *coercedValue = value;

Error:
    return error;
}

        
/* AGN934XNI_ATTR_SWEEP_MODE */
static ViStatus _VI_FUNC agn934xniAttrSweepMode_ReadCallback (ViSession vi,
                                                              ViSession io,
                                                              ViConstString channelName,
                                                              ViAttr attributeId,
                                                              ViInt32 *value)
{
    ViStatus       error = VI_SUCCESS;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;    

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if ((instrMode == AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER) && (measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_SM) )
    {   
        checkErr( agn934xniEnum_ReadCallback(vi, io, VI_NULL, attributeId, value));
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current measurement mode.");
    }

Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniAttrSweepMode_WriteCallback (ViSession vi,
                                                               ViSession io,
                                                               ViConstString channelName,
                                                               ViAttr attributeId,
                                                               ViInt32 value)
{
    ViStatus       error = VI_SUCCESS;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;    

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if ((instrMode == AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER) && (measurementType != AGN934XNI_VAL_MEASUREMENT_TYPE_SM) ) 
    {   
        checkErr( agn934xniEnum_WriteCallback(vi, io, VI_NULL, attributeId, value));
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current measurement mode.");
    }

Error:
    return error;
}                 
        
/* AGN934XNI_ATTR_SWEEP_TIME_AUTO */
/* use common read callback agn934xniViBoolean_ReadCallback */                    
        
/* use common write callback agn934xniViBoolean_WriteCallback */                      
        
/* AGN934XNI_ATTR_TRACE_TYPE */
static ViStatus _VI_FUNC agn934xniAttrTraceType_ReadCallback (ViSession vi,
                                                              ViSession io,
                                                              ViConstString channelName,
                                                              ViAttr attributeId,
                                                              ViInt32 *value)
{
    ViStatus       error = VI_SUCCESS;
    ViConstString  active_trace;
    ViInt32        instrMode = 0;    

    checkErr( agn934xni_GetActiveTrace(vi, &active_trace, VI_FALSE));

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if (INSTRUMENT_MODE_IS_SA_TG(instrMode))
    {   
        checkErr( agn934xniEnum_ReadCallback(vi, io, active_trace, attributeId, value));
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current measurement mode.");
    }

Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniAttrTraceType_WriteCallback (ViSession vi,
                                                               ViSession io,
                                                               ViConstString channelName,
                                                               ViAttr attributeId,
                                                               ViInt32 value)
{
    ViStatus       error = VI_SUCCESS;
    ViConstString  active_trace;
    ViInt32        instrMode = 0;    

    checkErr( agn934xni_GetActiveTrace(vi, &active_trace, VI_FALSE));

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if (INSTRUMENT_MODE_IS_SA_TG(instrMode))
    {   
        checkErr( agn934xniEnum_WriteCallback(vi, io, active_trace, attributeId, value));
    }
    else
    {
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "This function is not applicable in current measurement mode.");
    }

Error:
    return error;
}                     
        
/* AGN934XNI_ATTR_VERTICAL_SCALE */
/* use common read callback agn934xniEnum_ReadCallback */                     
        
/* use common write callback agn934xniEnum_WriteCallback */                   
        
/* AGN934XNI_ATTR_VIDEO_BANDWIDTH */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
        
/* AGN934XNI_ATTR_VIDEO_BANDWIDTH_AUTO */
/* use common read callback agn934xniViBoolean_ReadCallback */                    
        
/* use common write callback agn934xniViBoolean_WriteCallback */                      
        
/* AGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */ 
static ViStatus _VI_FUNC agn934xniAttrTgNormalizeReferenceLevel_CoerceCallback (ViSession vi,
                                                                                ViConstString channelName,
                                                                                ViAttr attributeId,
                                                                                ViReal64 value,
                                                                                ViReal64 *coercedValue)
{
    ViStatus    error = VI_SUCCESS;
                        
    if(value < -327.6 || value > 327.6)
        viCheckErr( IVI_ERROR_INVALID_VALUE);
    
    if(value < -327)
    {
        *coercedValue = -327;
    }
    else if(value > 327)
    {
        *coercedValue = 327;
    }
    else
    {
        *coercedValue = (value > 0) ? ((int)(value + 0.5)) : -((int)(-value + 0.5));
    }
     
Error:
    return error;
}
        
/* AGN934XNI_ATTR_TG_NORMALIZE_ENABLE */
/* use common read callback agn934xniViBoolean_ReadCallback */                    
        
/* use common write callback agn934xniViBoolean_WriteCallback */                      
        
/* AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_OFFSET */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
        
/* AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_STEP */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
        
/* AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_ENABLE */
/* use common read callback agn934xniViBoolean_ReadCallback */                    
        
/* use common write callback agn934xniViBoolean_WriteCallback */                      
        
/* AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */ 
static ViStatus _VI_FUNC agn934xniAttrTgOutputAmplitude_CoerceCallback (ViSession vi,
                                                                        ViConstString channelName,
                                                                        ViAttr attributeId,
                                                                        ViReal64 value,
                                                                        ViReal64 *coercedValue)
{
    ViStatus    error = VI_SUCCESS;
                        
    if(value < -30 || value > 0)
        viCheckErr( IVI_ERROR_INVALID_VALUE);
    
    *coercedValue = -(int)(-value + 0.5);
         
Error:
    return error;
}
        
/* AGN934XNI_ATTR_OBW_POWER_LEVEL */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
        
/* AGN934XNI_ATTR_OBW_POWER_PERCENTAGE */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
        
/* AGN934XNI_ATTR_OBW_METHOD */
/* use common read callback agn934xniEnum_ReadCallback */                     
        
/* use common write callback agn934xniEnum_WriteCallback */                   
        
/* AGN934XNI_ATTR_CHP_BOTTOM_RANGE */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
static ViStatus _VI_FUNC agn934xniAttrChpBottomRange_CheckCallback (ViSession vi,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 value)
{
    ViStatus    error = VI_SUCCESS;
    ViReal64    topLimit = 0;
    
    checkErr( Ivi_GetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_CHP_TOP_RANGE, 0, &topLimit));     
    
    if(value < -140 || value > topLimit)
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "The Bottom Range is between -140 to Top.");

Error:
    return error;
}       
/* AGN934XNI_ATTR_CHP_TOP_RANGE */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */ 
static ViStatus _VI_FUNC agn934xniAttrChpTopRange_CheckCallback (ViSession vi,
                                                                 ViConstString channelName,
                                                                 ViAttr attributeId,
                                                                 ViReal64 value)
{
    ViStatus    error = VI_SUCCESS;
    ViReal64    bottomLimit = 0;
    
    checkErr( Ivi_GetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_CHP_BOTTOM_RANGE, 0, &bottomLimit));     
    
    if(value < bottomLimit || value > -10)
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "The Top Range is between Bottom to -10.");

Error:
    return error;
}
        
/* AGN934XNI_ATTR_CHP_AUTO_RANGE */
/* use common read callback agn934xniViBoolean_ReadCallback */                    
        
/* use common write callback agn934xniViBoolean_WriteCallback */                      
        
/* AGN934XNI_ATTR_CHP_CHANNEL_SPAN */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */
static ViStatus _VI_FUNC agn934xniAttrChpChannelSpan_CheckCallback (ViSession vi,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 value)
{
    ViStatus    error = VI_SUCCESS;
    ViReal64    min = 1000;
    ViReal64    integrationBandwidth;
    
    checkErr( Ivi_GetAttributeViReal64 (vi, VI_NULL, AGN934XNI_ATTR_CHP_INTEGRATION_BANDWIDTH, 0, &integrationBandwidth));  
    
    if(value < min)
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "The Channel Span should be larger than 1000.");               
    if(value < integrationBandwidth || value > 10*integrationBandwidth)
        viCheckErrElab( IVI_ERROR_INVALID_PARAMETER, 
                        "The Channel Span is between 1 and 10 times the integration bandwidth.");

Error:
    return error;
}
        
/* AGN934XNI_ATTR_CHP_INTEGRATION_BANDWIDTH */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
        
/* AGN934XNI_ATTR_CHP_CENTER_FREQUENCY */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
        
/* AGN934XNI_ATTR_ACPR_MAIN_CHANNEL_INTERGRATION_BANDWIDTH */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
        
/* AGN934XNI_ATTR_ACPR_CENTER_FREQUENCY */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
        
/* AGN934XNI_ATTR_MARKER_DEMODULATION_DELAY_TIME */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
        
/* AGN934XNI_ATTR_MARKER_DEMODULATION_SPEAKER_VOLUME */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
        
/* AGN934XNI_ATTR_MARKER_DEMODULATION_FUNCTION */
/* use common read callback agn934xniEnum_ReadCallback */                     
        
/* use common write callback agn934xniEnum_WriteCallback */                   
        
/* AGN934XNI_ATTR_MARKER_X_READOUT */
/* use common read callback agn934xniEnum_ReadCallback */                     
        
/* use common write callback agn934xniEnum_WriteCallback */                   
        
/* AGN934XNI_ATTR_PEAK_SEARCH_TYPE */
/* use common read callback agn934xniEnum_ReadCallback */                     
        
/* use common write callback agn934xniEnum_WriteCallback */                   
        
/* AGN934XNI_ATTR_MARKER_FUNCTION */        
static ViStatus _VI_FUNC agn934xniAttrMarkerFunction_ReadCallback (ViSession vi,
                                                                   ViSession io,
                                                                   ViConstString channelName,
                                                                   ViAttr attributeId,
                                                                   ViInt32 *value)
{
    ViStatus       error = VI_SUCCESS;
    ViConstString  activeMarker;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;


    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if ( INSTRUMENT_MODE_IS_SA_TG(instrMode) )
    {
        checkErr( agn934xniEnum_ReadCallback(vi, io, activeMarker, AGN934XNI_ATTR_MARKER_FUNCTION, value));
    }

Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniAttrMarkerFunction_WriteCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViInt32 value)
{
    ViStatus       error = VI_SUCCESS;
    ViConstString  activeMarker;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;


    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if ( INSTRUMENT_MODE_IS_SA_TG(instrMode) )
    {
        checkErr( agn934xniEnum_WriteCallback(vi, io, activeMarker, AGN934XNI_ATTR_MARKER_FUNCTION, value));
    }

Error:
    return error;
}

/* AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING */
static ViStatus _VI_FUNC agn934xniAttrMarkerInstrumentSetting_WriteCallback (ViSession vi,
                                                                             ViSession io,
                                                                             ViConstString channelName,
                                                                             ViAttr attributeId,
                                                                             ViInt32 value)
{
    ViStatus       error = VI_SUCCESS;
    ViConstString  activeMarker;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;
    
    ViString            commandValue;                       
    IviRangeTablePtr    table;    
    
    checkErr( Ivi_GetAttrRangeTable (vi, channelName, attributeId, &table));
    viCheckErr( agn934xni_GetCmdFromIntValue(value, table, &commandValue));

    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if ( INSTRUMENT_MODE_IS_SA_TG(instrMode) )
    {
        viCheckErr (viPrintf (io, ":CALC:%s:%s", activeMarker, commandValue));  
    }

Error:
    return error;
}                     
        
/* AGN934XNI_ATTR_MARKER_PEAK_SEARCH */
static ViStatus _VI_FUNC agn934xniAttrMarkerPeakSearch_WriteCallback (ViSession vi,
                                                                      ViSession io,
                                                                      ViConstString channelName,
                                                                      ViAttr attributeId,
                                                                      ViInt32 value)
{
    ViStatus       error = VI_SUCCESS;
    ViConstString  activeMarker;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;   
    
    ViString            commandValue;                       
    IviRangeTablePtr    table;    
    
    checkErr( Ivi_GetAttrRangeTable (vi, channelName, attributeId, &table));
    viCheckErr( agn934xni_GetCmdFromIntValue(value, table, &commandValue));

    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if ( INSTRUMENT_MODE_IS_SA_TG(instrMode) )
    {
        if(value == AGN934XNI_VAL_MARKER_SEARCH_HIGHEST)
        {
            viCheckErr (viPrintf (io, ":CALC:%s:MAX", activeMarker)); 
        }
        else
        {
            viCheckErr (viPrintf (io, ":CALC:%s:MAX:%s", activeMarker, commandValue));          
        }
    }

Error:
    return error;
}                 
        
/* AGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE */
static ViStatus _VI_FUNC agn934xniAttrMarkerContinuousPeakingEnable_ReadCallback (ViSession vi,
                                                                                  ViSession io,
                                                                                  ViConstString channelName,
                                                                                  ViAttr attributeId,
                                                                                  ViBoolean *value)
{
    ViStatus       error = VI_SUCCESS;
    ViConstString  activeMarker;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;


    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if ( INSTRUMENT_MODE_IS_SA_TG(instrMode) )
    {
        checkErr( agn934xniViBoolean_ReadCallback(vi, io, activeMarker, AGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE, value));
    }

Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniAttrMarkerContinuousPeakingEnable_WriteCallback (ViSession vi,
                                                                                   ViSession io,
                                                                                   ViConstString channelName,
                                                                                   ViAttr attributeId,
                                                                                   ViBoolean value)
{
    ViStatus       error = VI_SUCCESS;
    ViConstString  activeMarker;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;


    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    if ( INSTRUMENT_MODE_IS_SA_TG(instrMode) )
    {
        checkErr( agn934xniViBoolean_WriteCallback(vi, io, activeMarker, AGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE, value));
    }

Error:
    return error;
}
                      
        
/* AGN934XNI_ATTR_MARKER_POSITION */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */
/* AGN934XNI_ATTR_ACTIVE_MARKER */          
static ViStatus _VI_FUNC agn934xniAttrActiveMarker_CheckCallback (ViSession vi,
                                                                  ViConstString channelName,
                                                                  ViAttr attributeId,
                                                                  ViConstString value)
{
    return Ivi_CoerceRepCapName(vi, MARKER_REP_CAP_NAME, value, VI_NULL);   
}

        
/* AGN934XNI_ATTR_MARKER_AMPLITUDE */
static ViStatus _VI_FUNC agn934xniAttrMarkerAmplitude_ReadCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 *value)
{
    ViStatus       error = VI_SUCCESS;
    ViConstString  activeMarker;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;
    
    viCheckErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 
                0, &instrMode));
    viCheckErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE,
                0, &measurementType));

    if ( INSTRUMENT_MODE_IS_SA_TG(instrMode) )
    {
        viCheckErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));
        viCheckErr (viQueryf (io, ":CALC:%s:Y?", "%Lg", activeMarker, value));         
    }
    else
    {
        viCheckErrElab(IVI_ERROR_INVALID_CONFIGURATION, 
                       "This function is not applicable in current instrument mode.");
    }   
    
Error:
    return error;
}                     
        
/* AGN934XNI_ATTR_MARKER_ENABLED */
/* use common read callback agn934xniViBoolean_ReadCallback */                    
        
/* use common write callback agn934xniViBoolean_WriteCallback */                      
        
/* AGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED */       
static ViStatus _VI_FUNC agn934xniAttrMarkerFrequencyCounterEnabled_ReadCallback (ViSession vi,
                                                                                  ViSession io,
                                                                                  ViConstString channelName,
                                                                                  ViAttr attributeId,
                                                                                  ViBoolean *value)
{
    ViStatus        error = VI_SUCCESS;
    ViConstString   activeMarker;
    ViInt32         instrMode = 0;
    ViInt32         measurementType = 0;

    viCheckErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 
                                         0, &instrMode));
    viCheckErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE,
                                         0, &measurementType));

    if ( MEASUREMENT_TYPE_MARKER_CRITERIA(instrMode, measurementType) )
    {   
        checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_TRUE));
        checkErr( agn934xniViBoolean_ReadCallback(vi, io, activeMarker, attributeId, value));
    }

Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniAttrMarkerFrequencyCounterEnabled_WriteCallback (ViSession vi,
                                                                                   ViSession io,
                                                                                   ViConstString channelName,
                                                                                   ViAttr attributeId,
                                                                                   ViBoolean value)
{
    ViStatus        error = VI_SUCCESS;
    ViConstString   activeMarker;
    ViInt32         instrMode = 0;
    ViInt32         measurementType = 0;

    checkErr( Ivi_LockSession (vi, VI_NULL));

    viCheckErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 
                                         0, &instrMode));
    viCheckErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE,
                                         0, &measurementType));

    if ( MEASUREMENT_TYPE_MARKER_CRITERIA(instrMode, measurementType) )
    {       
        checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));
        checkErr( agn934xniViBoolean_WriteCallback(vi, io, activeMarker, attributeId, value));
    }
    
Error:
    return error;
}

/* AGN934XNI_ATTR_MARKER_POSITION */        
static ViStatus _VI_FUNC agn934xniAttrMarkerPosition_ReadCallback (ViSession vi,
                                                                   ViSession io,
                                                                   ViConstString channelName,
                                                                   ViAttr attributeId,
                                                                   ViReal64 *value)
{
    ViStatus        error = VI_SUCCESS;
    ViConstString   activeMarker;
    
    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));
    checkErr( agn934xniViReal64_ReadCallback(vi, io, activeMarker, AGN934XNI_ATTR_MARKER_POSITION, value));

Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniAttrMarkerPosition_WriteCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 value)
{
    ViStatus        error = VI_SUCCESS;
    ViConstString   activeMarker;
    
    checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));
    checkErr( agn934xniViReal64_WriteCallback(vi, io, activeMarker, AGN934XNI_ATTR_MARKER_POSITION, value));

Error:
    return error; 
}

/* AGN934XNI_ATTR_MARKER_THRESHOLD */       
static ViStatus _VI_FUNC agn934xniAttrMarkerThreshold_ReadCallback (ViSession vi,
                                                                    ViSession io,
                                                                    ViConstString channelName,
                                                                    ViAttr attributeId,
                                                                    ViReal64 *value)
{
    ViStatus    error = VI_SUCCESS;

    viCheckErr (viQueryf (io, ":CALC:MARK:PEAK:THR?", "%lf", value));

Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniAttrMarkerThreshold_WriteCallback (ViSession vi,
                                                                     ViSession io,
                                                                     ViConstString channelName,
                                                                     ViAttr attributeId,
                                                                     ViReal64 value)
{
    ViStatus    error = VI_SUCCESS;
                        
    viCheckErr (viPrintf (io, ":CALC:MARK:PEAK:THR %lf", value));

Error:
    return error;
}

/* AGN934XNI_ATTR_MARKER_TRACE */       
static ViStatus _VI_FUNC agn934xniAttrMarkerTrace_ReadCallback (ViSession vi,
                                                                ViSession io,
                                                                ViConstString channelName,
                                                                ViAttr attributeId,
                                                                const ViConstString cacheValue)                                                                  
{
    ViStatus        error = VI_SUCCESS;
    ViConstString   activeMarker;
    ViChar          specific_trace[BUFFER_SIZE] = "";
    ViInt32         trace_number = 1;
    ViInt32         instrMode = 0;
    ViInt32         measurementType = 0;

    viCheckErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 
                                         0, &instrMode));
    viCheckErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE,
                                         0, &measurementType));

    if ( MEASUREMENT_TYPE_MARKER_CRITERIA(instrMode, measurementType) )
    {       
        checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE)); 
        if (!Ivi_Simulating (vi)) 
        {
            viCheckErr (viQueryf (io, ":CALC:%s:TRAC?", "%d", activeMarker, &trace_number)); 
        }
        sprintf(specific_trace, "TRACE%ld", trace_number);

        checkErr( Ivi_SetValInStringCallback(vi, attributeId, specific_trace));
    }
    
Error:
    return error;
}

/* AGN934XNI_ATTR_MARKER_TRACE */       
static ViStatus _VI_FUNC agn934xniAttrMarkerTrace_WriteCallback (ViSession vi,
                                                                 ViSession io,
                                                                 ViConstString channelName,
                                                                 ViAttr attributeId,
                                                                 ViConstString value) 
                                                                 
{
    ViStatus        error = VI_SUCCESS;
    ViConstString   activeMarker,
                    specific_trace;
    ViBoolean       is_enabled;    
    ViInt32         instrMode = 0;
    ViInt32         measurementType = 0;
    ViInt32         traceIndex = 0;


    viCheckErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 
                                         0, &instrMode));
    viCheckErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE,
                                         0, &measurementType));

    if ( MEASUREMENT_TYPE_MARKER_CRITERIA(instrMode, measurementType) )
    {       
        checkErr( Ivi_CoerceRepCapName(vi, TRACE_REP_CAP_NAME, value, &specific_trace));
        checkErr( Ivi_GetRepCapIndex (vi, TRACE_REP_CAP_NAME, specific_trace, &traceIndex)); 

        checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE)); 
        checkErr( Ivi_GetAttributeViBoolean(vi, activeMarker, AGN934XNI_ATTR_MARKER_ENABLED, 0, &is_enabled));

        if (!Ivi_Simulating (vi)) 
        {
            viCheckErr (viPrintf (io, ":CALC:%s:TRACE %d", activeMarker, traceIndex)); 
        }
        if (!is_enabled)
        {
            checkErr( Ivi_SetAttributeViBoolean (vi, activeMarker,
                                                 AGN934XNI_ATTR_MARKER_ENABLED,
                                                 0,
                                                 VI_TRUE));
        }
    }

Error:
    return error;
}

/* AGN934XNI_ATTR_MARKER_TRACE */
static ViStatus _VI_FUNC agn934xniAttrMarkerTrace_CheckCallback (ViSession vi,
                                                                 ViConstString channelName,
                                                                 ViAttr attributeId,
                                                                 ViConstString value)
{
    return Ivi_CoerceRepCapName(vi, TRACE_REP_CAP_NAME, value, VI_NULL);
}

        
/* AGN934XNI_ATTR_PEAK_EXCURSION */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
        
/* AGN934XNI_ATTR_TRIGGER_DELAY_TIME_ENABLE */
/* use common read callback agn934xniViBoolean_ReadCallback */                    
        
/* use common write callback agn934xniViBoolean_WriteCallback */                      
        
/* AGN934XNI_ATTR_TRIGGER_DELAY_TIME */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
        
/* AGN934XNI_ATTR_TRIGGER_SOURCE */
/* use common read callback agn934xniEnum_ReadCallback */                     
        
/* use common write callback agn934xniEnum_WriteCallback */                   
        
/* AGN934XNI_ATTR_EXTERNAL_TRIGGER_SLOPE */
/* use common read callback agn934xniEnum_ReadCallback */                     
        
/* use common write callback agn934xniEnum_WriteCallback */                   
        
/* AGN934XNI_ATTR_VIDEO_TRIGGER_LEVEL */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
                  

/* AGN934XNI_ATTR_UNITS_PER_DIVISION */     
static ViStatus _VI_FUNC agn934xniAttrUnitsPerDivision_ReadCallback (ViSession vi,
                                                                     ViSession io,
                                                                     ViConstString channelName,
                                                                     ViAttr attributeId,
                                                                     ViReal64 *value)
{
    ViStatus    error = VI_SUCCESS;
    
    if (!Ivi_Simulating (vi)) 
    {
        viCheckErr (viQueryf (io, ":DISP:WIND:TRAC:Y:PDIV?", "DIV%lf", value)); 
    }
                        
Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniAttrUnitsPerDivision_WriteCallback (ViSession vi,
                                                                      ViSession io,
                                                                      ViConstString channelName,
                                                                      ViAttr attributeId,
                                                                      ViReal64 value)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     int_value = 0;
    
    if (!Ivi_Simulating (vi)) 
    {
        int_value = (ViInt32) value;
        viCheckErr (viPrintf (io, ":DISP:WIND:TRAC:Y:PDIV DIV%d", int_value)); 
    }

Error:
    return error;
}


/* AGN934XNI_ATTR_MARKER_TYPE */
static ViStatus _VI_FUNC agn934xniAttrMarkerType_ReadCallback (ViSession vi,
                                                               ViSession io,
                                                               ViConstString channelName,
                                                               ViAttr attributeId,
                                                               ViInt32 *value)
{
    ViStatus        error = VI_SUCCESS;
    ViConstString   activeMarker;
    ViInt32         instrMode = 0;
    ViInt32         measurementType = 0;

    viCheckErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 
                                         0, &instrMode));
    viCheckErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE,
                                         0, &measurementType));

    if ( MEASUREMENT_TYPE_MARKER_CRITERIA(instrMode, measurementType) )
    {   
        checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));
        viCheckErr(agn934xniEnum_ReadCallback(vi, io, activeMarker, AGN934XNI_ATTR_MARKER_TYPE, value));
    }

Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniAttrMarkerType_WriteCallback (ViSession vi,
                                                                ViSession io,
                                                                ViConstString channelName,
                                                                ViAttr attributeId,
                                                                ViInt32 value)
{
    ViStatus        error = VI_SUCCESS;
    ViConstString   activeMarker;
    ViInt32         instrMode = 0;
    ViInt32         measurementType = 0;

    viCheckErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 
                                         0, &instrMode));
    viCheckErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE,
                                         0, &measurementType));

    if ( MEASUREMENT_TYPE_MARKER_CRITERIA(instrMode, measurementType) )
    {   
        checkErr( agn934xni_GetActiveMarker(vi, &activeMarker, VI_FALSE));
        viCheckErr(agn934xniEnum_WriteCallback(vi, io, activeMarker, AGN934XNI_ATTR_MARKER_TYPE, value));
    }

Error:
    return error;
}
                      
        
/* AGN934XNI_ATTR_LIMIT_LINE_X_VALUE */
/* use common read callback agn934xniEnum_ReadCallback */                     
        
/* use common write callback agn934xniEnum_WriteCallback */                   
        
/* AGN934XNI_ATTR_LIMIT_LINE_Y_VALUE */
/* use common read callback agn934xniViReal64_ReadCallback */                     
        
/* use common write callback agn934xniViReal64_WriteCallback */                   
        
/* AGN934XNI_ATTR_LIMIT_LINE_MODE */
/* use common read callback agn934xniEnum_ReadCallback */                     
        
/* use common write callback agn934xniEnum_WriteCallback */                   
        
/* AGN934XNI_ATTR_LIMIT_LINE_ENABLED */
/* use common read callback agn934xniViBoolean_ReadCallback */                    
        
/* use common write callback agn934xniViBoolean_WriteCallback */                      
        
/* AGN934XNI_ATTR_LIMIT_LINE_TYPE */
/* use common read callback agn934xniEnum_ReadCallback */                     
        
/* use common write callback agn934xniEnum_WriteCallback */ 


static ViBoolean agn934xni_OnArrayList(ViAttr attributeId,
                                       ViAttr attrArray[])
{
    ViBoolean onListFlag = VI_FALSE;
    int i = 0;
    
    for(i = 0; ;i++)
    {
        if(attrArray[i] == VI_NULL)
            break;
        
        if(attributeId == attrArray[i])
        {
            onListFlag = VI_TRUE;
            break;
        }
    }
    
    return onListFlag;
}

static ViStatus agn934xni_ValidConfigCheck(ViSession vi,
                                           ViAttr attributeId)
{
    ViStatus       error = VI_SUCCESS;
    ViInt32        measurementType = 0;
    ViInt32        instrMode = 0;
    ViInt32        demodulationMode = 0;

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));

    switch(instrMode)
    {
    case AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER:
        checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, &measurementType));
        if(agn934xni_OnArrayList(attributeId, agn934xniSAArray))
            break;
        switch(measurementType)
        {
        case AGN934XNI_VAL_MEASUREMENT_TYPE_SEM:
            if(!agn934xni_OnArrayList(attributeId, agn934xniSEMArray))
            {
                checkErr(IVI_ERROR_INVALID_CONFIGURATION);
            }
            break;
        case AGN934XNI_VAL_MEASUREMENT_TYPE_ACPR:
            if(!agn934xni_OnArrayList(attributeId, agn934xniACPRArray))
            {
                checkErr(IVI_ERROR_INVALID_CONFIGURATION);
            }
            break;
        case AGN934XNI_VAL_MEASUREMENT_TYPE_CHP:
            if(!agn934xni_OnArrayList(attributeId, agn934xniCHPArray))
            {
                checkErr(IVI_ERROR_INVALID_CONFIGURATION);
            }
            break;
        default:
            if(!agn934xni_OnArrayList(attributeId, agn934xniSAArray))
            {
                 checkErr(IVI_ERROR_INVALID_CONFIGURATION); 
            }
            break;
        }
        break;
    case AGN934XNI_VAL_INSTRUMENT_MODE_TRACKING_GENERATOR:
        if(!agn934xni_OnArrayList(attributeId, agn934xniTGArray))
        {
            checkErr(IVI_ERROR_INVALID_CONFIGURATION);
        }
        break;
    case AGN934XNI_VAL_INSTRUMENT_MODE_POWERMETER:
        if(!agn934xni_OnArrayList(attributeId, agn934xniPowerMeterArray))
        {
            checkErr(IVI_ERROR_INVALID_CONFIGURATION);
        }
        break;
    case AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION:
        checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, &demodulationMode));
        if(agn934xni_OnArrayList(attributeId, agn934xniModulationArray))
            break;
        switch(demodulationMode)
        {
        case AGN934XNI_VAL_DEMODULATION_MODE_AM:
            if(!agn934xni_OnArrayList(attributeId, agn934xniAMArray))
            {
                checkErr(IVI_ERROR_INVALID_CONFIGURATION);
            }
            break;
        case AGN934XNI_VAL_DEMODULATION_MODE_FM:
            if(!agn934xni_OnArrayList(attributeId, agn934xniFMArray))
            {
                checkErr(IVI_ERROR_INVALID_CONFIGURATION);
            }
            break;
        case AGN934XNI_VAL_DEMODULATION_MODE_ASK:
            if(!agn934xni_OnArrayList(attributeId, agn934xniASKArray))
            {
                checkErr(IVI_ERROR_INVALID_CONFIGURATION);
            }
            break;
        case AGN934XNI_VAL_DEMODULATION_MODE_FSK:
            if(!agn934xni_OnArrayList(attributeId, agn934xniFSKArray))
            {
                checkErr(IVI_ERROR_INVALID_CONFIGURATION);
            }
            break;
        default:
            if(!agn934xni_OnArrayList(attributeId, agn934xniModulationArray))
            {
                checkErr(IVI_ERROR_INVALID_CONFIGURATION);
            }
            break;
        }
        
        break;
    case AGN934XNI_VAL_INSTRUMENT_MODE_REFLECTION_MEASUREMENT:
        if(!agn934xni_OnArrayList(attributeId, agn934xniReflectionMeasurementArray))
        {
            checkErr(IVI_ERROR_INVALID_CONFIGURATION);
        }
        break;
    default:
        break;
    }

Error:
    return error;
}

static ViStatus _VI_FUNC agn934xniEnumUniform_ReadCallback (ViSession vi,
                                                            ViSession io,
                                                            ViConstString channelName,
                                                            ViAttr attributeId,
                                                            ViInt32 *value)
{
    ViStatus    error = VI_SUCCESS;
                        
    checkErr(agn934xni_ValidConfigCheck(vi, attributeId));
    
    checkErr(agn934xniEnum_ReadCallback(vi, io, channelName, attributeId, value));

Error:
    return error;
}

static ViStatus _VI_FUNC agn934xniEnumUniform_WriteCallback (ViSession vi,
                                                             ViSession io,
                                                             ViConstString channelName,
                                                             ViAttr attributeId,
                                                             ViInt32 value)
{
    ViStatus    error = VI_SUCCESS;
                        
    checkErr(agn934xni_ValidConfigCheck(vi, attributeId));
    
    checkErr(agn934xniEnum_WriteCallback(vi, io, channelName, attributeId, value));

Error:
    return error;
}
static ViStatus _VI_FUNC agn934xniViBooleanUniform_ReadCallback (ViSession vi,
                                                                 ViSession io,
                                                                 ViConstString channelName,
                                                                 ViAttr attributeId,
                                                                 ViBoolean *value)
{
    ViStatus    error = VI_SUCCESS;
                        
    checkErr(agn934xni_ValidConfigCheck(vi, attributeId));
    
    checkErr(agn934xniViBoolean_ReadCallback(vi, io, channelName, attributeId, value));

Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniViBooleanUniform_WriteCallback (ViSession vi,
                                                                  ViSession io,
                                                                  ViConstString channelName,
                                                                  ViAttr attributeId,
                                                                  ViBoolean value)
{
    ViStatus    error = VI_SUCCESS;
                        
    checkErr(agn934xni_ValidConfigCheck(vi, attributeId));
    
    checkErr(agn934xniViBoolean_WriteCallback(vi, io, channelName, attributeId, value));

Error:
    return error;
}
static ViStatus _VI_FUNC agn934xniViInt32Uniform_ReadCallback (ViSession vi,
                                                               ViSession io,
                                                               ViConstString channelName,
                                                               ViAttr attributeId,
                                                               ViInt32 *value)
{
    ViStatus    error = VI_SUCCESS;
                        
    checkErr(agn934xni_ValidConfigCheck(vi, attributeId));
    
    checkErr(agn934xniViInt32_ReadCallback(vi, io, channelName, attributeId, value));

Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniViInt32Uniform_WriteCallback (ViSession vi,
                                                                ViSession io,
                                                                ViConstString channelName,
                                                                ViAttr attributeId,
                                                                ViInt32 value)
{
    ViStatus    error = VI_SUCCESS;
                        
    checkErr(agn934xni_ValidConfigCheck(vi, attributeId));
    
    checkErr(agn934xniViInt32_WriteCallback(vi, io, channelName, attributeId, value));

Error:
    return error;
}
static ViStatus _VI_FUNC agn934xniViReal64Uniform_ReadCallback (ViSession vi,
                                                                ViSession io,
                                                                ViConstString channelName,
                                                                ViAttr attributeId,
                                                                ViReal64 *value)
{
    ViStatus    error = VI_SUCCESS;
                        
    checkErr(agn934xni_ValidConfigCheck(vi, attributeId));
    
    checkErr(agn934xniViReal64_ReadCallback(vi, io, channelName, attributeId, value));

Error:
    return error;
}
        
static ViStatus _VI_FUNC agn934xniViReal64Uniform_WriteCallback (ViSession vi,
                                                                 ViSession io,
                                                                 ViConstString channelName,
                                                                 ViAttr attributeId,
                                                                 ViReal64 value)
{
    ViStatus    error = VI_SUCCESS;
                        
    checkErr(agn934xni_ValidConfigCheck(vi, attributeId));
    
    checkErr(agn934xniViReal64_WriteCallback(vi, io, channelName, attributeId, value));
    
Error:
    return error;
}

/* AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_COUPLING_ENABLE */
/* AGN934XNI_ATTR_ASK_FSK_AVERAGE_ENABLE */
/*
static ViStatus _VI_FUNC agn934xniAttrAskFskNumericViBoolean_ReadCallback (ViSession vi,
                                                                           ViSession io, 
                                                                           ViConstString channelName,
                                                                           ViAttr attributeId, 
                                                                           ViBoolean *value)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     instrMode = 0;
    ViInt32     demodulationMode = 0;
    ViString    command;
    ViInt32     status = -1;

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));
    
    if(instrMode != AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION)
        checkErr(IVI_ERROR_INVALID_CONFIGURATION); 
    
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, &demodulationMode));

    if(demodulationMode != AGN934XNI_VAL_DEMODULATION_MODE_ASK && demodulationMode != AGN934XNI_VAL_DEMODULATION_MODE_FSK)
        checkErr(IVI_ERROR_INVALID_CONFIGURATION); 

    viCheckErr( agn934xni_GetStringFromTable (agn934xniViBoolean_commands, attributeId, &command));   
    
    if (!Ivi_Simulating (vi)) 
    {
        viCheckErr (viQueryf (io, "%s?", "%d", command, &status)); 
        
        if(status == 1)
            *value = VI_TRUE;
        else
            *value = VI_FALSE;
    }

Error:
    return error;
}
*/
/* AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_COUPLING_ENABLE */      /*
static ViStatus _VI_FUNC agn934xniAttrAmFmDemodulationXScaleCouplingEnable_ReadCallback (ViSession vi,
                                                                                           ViSession io, 
                                                                                           ViConstString channelName,
                                                                                           ViAttr attributeId, 
                                                                                           ViBoolean *value)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     instrMode = 0;
    ViInt32     demodulationMode = 0;
    ViInt32     status = -1;

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));
    
    if(instrMode != AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION)
    {
        checkErr(IVI_ERROR_INVALID_CONFIGURATION); 
    }
    
    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, &demodulationMode));
    
    if(demodulationMode != AGN934XNI_VAL_DEMODULATION_MODE_AM && demodulationMode != AGN934XNI_VAL_DEMODULATION_MODE_FM)
    {
        checkErr(IVI_ERROR_INVALID_CONFIGURATION); 
    }
    
    if (!Ivi_Simulating (vi)) 
    {
        viCheckErr (viQueryf (io, ":DISP:AMA:VIEW:WIND:TRAC:X:COUP?", "%d", &status)); 
        
        if(status == 1)
            *value = VI_TRUE;
        else
            *value = VI_FALSE;
    }

Error:
    return error;
}   */

/* AGN934XNI_ATTR_DEMODULATION_MODE */
static ViStatus _VI_FUNC agn934xniAttrDemodulationMode_ReadCallback (ViSession vi,
                                                                     ViSession io,
                                                                     ViConstString channelName,
                                                                     ViAttr attributeId,
                                                                     ViInt32 *value)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     instrMode = 0;

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));
    
    if(instrMode != AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION)
    {
        checkErr(IVI_ERROR_INVALID_CONFIGURATION); 
    }
    
    checkErr(agn934xniEnum_ReadCallback(vi, io, channelName, attributeId, value));

Error:
    return error;
}

static ViStatus _VI_FUNC agn934xniAttrDemodulationMode_WriteCallback (ViSession vi,
                                                                      ViSession io,
                                                                      ViConstString channelName,
                                                                      ViAttr attributeId,
                                                                      ViInt32 value)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     instrMode = 0;

    checkErr( Ivi_GetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, &instrMode));
    
    if(instrMode != AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION)
    {
        checkErr(IVI_ERROR_INVALID_CONFIGURATION); 
    } 
                        
    if(value == AGN934XNI_VAL_DEMODULATION_MODE_NONE)
        viCheckErrElab(IVI_ERROR_INVALID_VALUE, "Invalid value for Demodulation Mode");

    checkErr(agn934xniEnum_WriteCallback(vi, io, channelName, attributeId, value));

Error:
    return error;
}

/* AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_STOP */
static ViStatus _VI_FUNC agn934xniAttrReflectionMeasurementDistanceStop_CheckCallback (ViSession vi,
                                                                                       ViConstString channelName,
                                                                                       ViAttr attributeId,
                                                                                       ViReal64 value)
{
    ViStatus    error = VI_SUCCESS;
    ViReal64    startDistance = 0;
    
    checkErr( Ivi_GetAttributeViReal64(vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_START, 0, &startDistance));
    
    if(value < startDistance + 0.1)
        viCheckErrElab(IVI_ERROR_INVALID_VALUE, "Invalid value for Stop Distance");

Error:
    return error;
}

/* AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_START */
static ViStatus _VI_FUNC agn934xniAttrReflectionMeasurementDistanceStart_CheckCallback (ViSession vi,
                                                                                        ViConstString channelName,
                                                                                        ViAttr attributeId,
                                                                                        ViReal64 value)
{
    ViStatus    error = VI_SUCCESS;
    ViReal64    stopDistance = 0;
    
    checkErr( Ivi_GetAttributeViReal64(vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_STOP, 0, &stopDistance));
    
    if(value > stopDistance - 0.1)
        viCheckErrElab(IVI_ERROR_INVALID_VALUE, "Invalid value for Start Distance");

Error:
    return error;
}

/* AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_ATTENUATION */
static ViStatus _VI_FUNC agn934xniAttrReflectionMeasurementCableAttenuation_CheckCallback (ViSession vi,
                                                                                           ViConstString channelName,
                                                                                           ViAttr attributeId,
                                                                                           ViReal64 value)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     units = 0;
    
    checkErr( Ivi_GetAttributeViInt32(vi, VI_NULL, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_UNIT, 0, &units));
    
    switch(units)
    {
    case AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISTANCE_UNIT_METERS:
        if(value < 0 || value > 5)
            viCheckErrElab(IVI_ERROR_INVALID_VALUE, "Invalid value for Reflection Measurement Cable Attenuation");
        break;
    case AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISTANCE_UNIT_FEET:
        if(value < 0 || value > 1.524)
            viCheckErrElab(IVI_ERROR_INVALID_VALUE, "Invalid value for Reflection Measurement Cable Attenuation");
        break;
    default:
        break;
    }
    
Error:
    return error;
}


/*****************************************************************************
 * Function: agn934xni_GetActiveMarker
 * Purpose:  This function returns active marker. 
 *****************************************************************************/
static ViStatus agn934xni_GetActiveMarker(ViSession       vi,
                                          ViConstString*  pActiveMarker,
                                          ViBoolean       testState)
{
    ViStatus    error = VI_SUCCESS;
    ViChar      buffer[BUFFER_SIZE];
    
    checkErr( Ivi_GetAttributeViString(vi, "", AGN934XNI_ATTR_ACTIVE_MARKER, 0, BUFFER_SIZE, buffer));
    checkErr( Ivi_CoerceRepCapName(vi, MARKER_REP_CAP_NAME, buffer, pActiveMarker));
    
    if (testState)
    {
        ViBoolean   marker_state;
        
        checkErr( Ivi_GetAttributeViBoolean(vi, *pActiveMarker, AGN934XNI_ATTR_MARKER_ENABLED, 0 , &marker_state));
    
        if (!marker_state)
            viCheckErr(AGN934XNI_ERROR_MARKER_NOT_ENABLED);
    }

Error:
    return error;
}

/*****************************************************************************
 * Function: agn934xni_GetActiveTrace
 * Purpose:  This function returns active trace. 
 *****************************************************************************/
static ViStatus agn934xni_GetActiveTrace(ViSession       vi,
                                         ViConstString*  pActiveTrace,
                                         ViBoolean       testState)
{
    ViStatus    error = VI_SUCCESS;
    ViChar      buffer[BUFFER_SIZE];
    ViInt32     trace_state = 0;
    
    checkErr( Ivi_GetAttributeViString(vi, "", AGN934XNI_ATTR_ACTIVE_TRACE, 0, BUFFER_SIZE, buffer));
    checkErr( Ivi_CoerceRepCapName(vi, TRACE_REP_CAP_NAME, buffer, pActiveTrace));
    
    if (testState)
    {
        checkErr( Ivi_GetAttributeViInt32(vi, buffer, AGN934XNI_ATTR_TRACE_TYPE, 0 , &trace_state));
    
        if (trace_state == AGN934XNI_VAL_TRACE_TYPE_STORE)
            viCheckErr(AGN934XNI_ERROR_TRACE_NOT_ENABLED);
    }

Error:
    return error;
}

/*****************************************************************************
 * Function: agn934xni_RecalculateLevelToDBM
 * Purpose:  This function is recalculating value in specified units to dBm
 *           value.
 *****************************************************************************/

static ViStatus agn934xni_RecalculateLevelToDBM(ViSession   vi,
                                                ViReal64    level,
                                                ViReal64*   levelDBM)
{
    ViStatus    error        = VI_SUCCESS;
    ViReal64    value_in_dBm = level,
                power        = -1.0;
    ViInt32     units;
    
    checkErr( Ivi_GetAttributeViInt32(vi, VI_NULL, AGN934XNI_ATTR_AMPLITUDE_UNITS, 0, &units));

    switch (units)
    {
        case AGN934XNI_VAL_AMPLITUDE_UNITS_DBMV:
        case AGN934XNI_VAL_AMPLITUDE_UNITS_DBMVEMF:
        {
            ViReal64    voltage = pow(10.0, level/20.0)*1.0e-3;
            power = voltage*voltage;
        }
        break;
        case AGN934XNI_VAL_AMPLITUDE_UNITS_DBUV:
        case AGN934XNI_VAL_AMPLITUDE_UNITS_DBUVEMF:
        {
            ViReal64    voltage = pow(10.0, level/20.0)*1.0e-6;
            power = voltage*voltage;
        }
        break;
        case AGN934XNI_VAL_AMPLITUDE_UNITS_VOLT:
        case AGN934XNI_VAL_AMPLITUDE_UNITS_VEMF:
            power = level * level;
        break;
        case AGN934XNI_VAL_AMPLITUDE_UNITS_WATT:
            if (level > 0.0)
                power = level;
            else
                value_in_dBm = DBL_MAX; /* This is value out of range and will be generate error */
        break;
        case AGN934XNI_VAL_AMPLITUDE_UNITS_DBM:
        default:
            value_in_dBm = level;
        break;
    }

    if (power > 0.0)
        value_in_dBm = 10.0*log10(power/1.0e-3);


Error:
    if (levelDBM) 
        *levelDBM = value_in_dBm;
    return error;
}

/*****************************************************************************
 * Function:    agn934xni_ParseRealArray
 * Purpose:     This function parses string with real values, which are
 *              separated by comma.
 *****************************************************************************/
static ViStatus agn934xni_ParseRealArray(ViSession vi,
                                         ViChar Buffer[], 
                                         ViInt32 ArrayLength, 
                                         ViInt32 *ActualPoints, 
                                         ViReal64 ResultData[])
{
    ViStatus    error = VI_SUCCESS;
    ViChar*     pToken;
    ViInt32     i;

    if (Buffer == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 1, "Null address for Buffer");

    if (ArrayLength <= 0)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 2, "The length of the array must be greater than 0");

    if (ActualPoints == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 3, "Null address for Actual Points");

    if (ResultData == VI_NULL)
        viCheckParm( IVI_ERROR_INVALID_PARAMETER, 4, "Null address for Result Data");

    pToken = strtok(Buffer, ",");
    
    for (i = 0; i < ArrayLength && pToken != VI_NULL; i++)
    {
        ResultData[i] = atof(pToken);

        pToken = strtok(VI_NULL, ",");
    }

    *ActualPoints = i;

    if (*ActualPoints == ArrayLength && pToken != VI_NULL)
        error = *ActualPoints;

Error:
    return error;
}

static ViStatus _VI_FUNC agn934xniAttrAverageDuration_CheckCallback (ViSession vi,
                                                                     ViConstString channelName,
                                                                     ViAttr attributeId,
                                                                     ViReal64 value)
{
	ViStatus	error = VI_SUCCESS;

Error:
	return error;
}

static ViStatus _VI_FUNC agn934xniAttrMarkerDemodulationDelayTime_CheckCallback (ViSession vi,
                                                                                 ViConstString channelName,
                                                                                 ViAttr attributeId,
                                                                                 ViReal64 value)
{
	ViStatus	error = VI_SUCCESS;

Error:
	return error;
}

static ViStatus _VI_FUNC agn934xniAttrMarkerDemodulationSpeakerVolume_CheckCallback (ViSession vi,
                                                                                     ViConstString channelName,
                                                                                     ViAttr attributeId,
                                                                                     ViReal64 value)
{
	ViStatus	error = VI_SUCCESS;

Error:
	return error;
}

/*****************************************************************************
 * Function: agn934xni_InitAttributes                                                  
 * Purpose:  This function adds attributes to the IVI session, initializes   
 *           instrument attributes, and sets attribute invalidation          
 *           dependencies.                                                   
 *****************************************************************************/
static ViStatus agn934xni_InitAttributes (ViSession vi,
                                          ViInt32 instModel)
{
    ViStatus    error = VI_SUCCESS;
    ViInt32     flags = 0;
    
        /*- Initialize instrument attributes --------------------------------*/            

    checkErr( Ivi_SetAttrReadCallbackViString (vi, AGN934XNI_ATTR_SPECIFIC_DRIVER_REVISION,
                                               agn934xniAttrDriverRevision_ReadCallback));
    checkErr( Ivi_SetAttributeViInt32 (vi, "", AGN934XNI_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION,
                                       0, AGN934XNI_CLASS_SPEC_MAJOR_VERSION));
    checkErr( Ivi_SetAttributeViInt32 (vi, "", AGN934XNI_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION,
                                       0, AGN934XNI_CLASS_SPEC_MINOR_VERSION));
    checkErr( Ivi_SetAttributeViString (vi, "", AGN934XNI_ATTR_SUPPORTED_INSTRUMENT_MODELS,
                                        0, AGN934XNI_SUPPORTED_INSTRUMENT_MODELS));


    checkErr( Ivi_GetAttributeFlags (vi, AGN934XNI_ATTR_INSTRUMENT_FIRMWARE_REVISION, &flags));
    checkErr( Ivi_SetAttributeFlags (vi, AGN934XNI_ATTR_INSTRUMENT_FIRMWARE_REVISION, 
                                     flags | IVI_VAL_USE_CALLBACKS_FOR_SIMULATION));
    checkErr( Ivi_SetAttrReadCallbackViString (vi, AGN934XNI_ATTR_INSTRUMENT_FIRMWARE_REVISION,
                                               agn934xniAttrFirmwareRevision_ReadCallback));

    checkErr( Ivi_GetAttributeFlags (vi, AGN934XNI_ATTR_INSTRUMENT_MANUFACTURER, &flags));
    checkErr( Ivi_SetAttributeFlags (vi, AGN934XNI_ATTR_INSTRUMENT_MANUFACTURER, 
                                     flags | IVI_VAL_USE_CALLBACKS_FOR_SIMULATION));
    checkErr( Ivi_SetAttrReadCallbackViString (vi, AGN934XNI_ATTR_INSTRUMENT_MANUFACTURER,
                                               agn934xniAttrInstrumentManufacturer_ReadCallback));


    checkErr( Ivi_GetAttributeFlags (vi, AGN934XNI_ATTR_INSTRUMENT_MODEL, &flags));
    checkErr( Ivi_SetAttributeFlags (vi, AGN934XNI_ATTR_INSTRUMENT_MODEL, 
                                     flags | IVI_VAL_USE_CALLBACKS_FOR_SIMULATION));
    checkErr( Ivi_SetAttrReadCallbackViString (vi, AGN934XNI_ATTR_INSTRUMENT_MODEL,
                                               agn934xniAttrInstrumentModel_ReadCallback));

    checkErr( Ivi_SetAttributeViString (vi, "", AGN934XNI_ATTR_SPECIFIC_DRIVER_VENDOR,
                                        0, AGN934XNI_DRIVER_VENDOR));
    checkErr( Ivi_SetAttributeViString (vi, "", AGN934XNI_ATTR_SPECIFIC_DRIVER_DESCRIPTION,
                                        0, AGN934XNI_DRIVER_DESCRIPTION));
    checkErr( Ivi_SetAttributeViAddr (vi, VI_NULL, IVI_ATTR_CHECK_STATUS_CALLBACK, 0,
                                      agn934xni_CheckStatusCallback));

        
        
    checkErr( Ivi_SetAttributeViString (vi, "", AGN934XNI_ATTR_GROUP_CAPABILITIES, 0,
                                        "IviSpecAnBase,"
                                        "IviSpecAnMultitrace,"
                                        "IviSpecAnMarker,"
                                        "IviSpecAnTrigger,"
                                        "IviSpecAnExternalTrigger,"
                                        "IviSpecAnVideoTrigger,"
                                        "IviSpecAnDisplay,"
                                        "IviSpecAnMarkerType"));
    
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_FREQUENCY_SPAN_MODE,
	                                   "AGN934XNI_ATTR_FREQUENCY_SPAN_MODE",
	                                   AGN934XNI_VAL_FREQUENCY_SPAN_MODE_ZERO,
	                                   IVI_VAL_NOT_USER_READABLE | IVI_VAL_NEVER_CACHE,
	                                   VI_NULL,
	                                   agn934xniAttrFrequencySpanMode_WriteCallback,
	                                   &attrFrequencySpanModeRangeTable));
    
	checkErr (Ivi_AddAttributeViString (vi, AGN934XNI_ATTR_ACTIVE_TRACE,
	                                    "AGN934XNI_ATTR_ACTIVE_TRACE", "TRACE1", 0,
	                                    VI_NULL, VI_NULL));
    checkErr (Ivi_SetAttrCheckCallbackViString (vi, AGN934XNI_ATTR_ACTIVE_TRACE,
                            agn934xniAttrActiveTrace_CheckCallback)); 
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_TRACE_MATH_TYPE,
	                                   "AGN934XNI_ATTR_TRACE_MATH_TYPE",
	                                   AGN934XNI_VAL_TRACE_MATH_TYPE_LOG_POWER, 0,
	                                   agn934xniEnum_ReadCallback,
	                                   agn934xniEnum_WriteCallback,
	                                   &attrTraceMathTypeRangeTable));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_HIGH_SENSITIVITY_ENABLE,
	                                     "AGN934XNI_ATTR_HIGH_SENSITIVITY_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBoolean_ReadCallback,
	                                     agn934xniViBoolean_WriteCallback));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_VBW_RBW_RATIO_AUTO,
	                                     "AGN934XNI_ATTR_VBW_RBW_RATIO_AUTO",
	                                     VI_TRUE, 0, agn934xniViBoolean_ReadCallback,
	                                     agn934xniViBoolean_WriteCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_VBW_RBW_RATIO,
	                                    "AGN934XNI_ATTR_VBW_RBW_RATIO", 1.0,
	                                    IVI_VAL_NEVER_CACHE,
	                                    agn934xniViReal64_ReadCallback,
	                                    agn934xniViReal64_WriteCallback,
	                                    &attrVbwRbwRatioRangeTable, 0));
    checkErr (Ivi_AddRepeatedAttributeViBoolean(vi, TRACE_REP_CAP_NAME, AGN934XNI_ATTR_AVERAGE_DURATION_ENABLE,
                        "AGN934XNI_ATTR_AVERAGE_DURATION_ENABLE", VI_FALSE,
                        0 ,agn934xniViBoolean_ReadCallback,
                        agn934xniViBoolean_WriteCallback));
	checkErr (Ivi_AddRepeatedAttributeViReal64 (vi, TRACE_REP_CAP_NAME,
	                                            AGN934XNI_ATTR_AVERAGE_DURATION,
	                                            "AGN934XNI_ATTR_AVERAGE_DURATION",
	                                            60, IVI_VAL_NEVER_CACHE,
	                                            agn934xniViReal64_ReadCallback,
	                                            agn934xniViReal64_WriteCallback,
	                                            &attrAverageDurationRangeTable, 0));
	checkErr (Ivi_SetAttrCheckCallbackViReal64 (vi, AGN934XNI_ATTR_AVERAGE_DURATION,
	                                            agn934xniAttrAverageDuration_CheckCallback));
    checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_AVERAGE_TYPE,
                                       "AGN934XNI_ATTR_AVERAGE_TYPE",
                                       AGN934XNI_VAL_AVERAGE_TYPE_LOGPOWER, 0,
                                       agn934xniEnum_ReadCallback,
                                       agn934xniEnum_WriteCallback,
                                       &attrAverageTypeRangeTable));
    checkErr (Ivi_AddRepeatedAttributeViBoolean(vi, TRACE_REP_CAP_NAME, AGN934XNI_ATTR_AVERAGE_ENABLE,
                        "AGN934XNI_ATTR_AVERAGE_ENABLE", VI_FALSE,
                        0 ,agn934xniViBoolean_ReadCallback,
                        agn934xniViBoolean_WriteCallback));
    checkErr (Ivi_AddRepeatedAttributeViInt32(vi, TRACE_REP_CAP_NAME, AGN934XNI_ATTR_AVERAGE_COUNT,
                        "AGN934XNI_ATTR_AVERAGE_COUNT", 100,
                        0 ,agn934xniViInt32_ReadCallback,
                        agn934xniViInt32_WriteCallback,
                        &attrAverageCountRangeTable));
    checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_MEASUREMENT_TYPE,
                                       "AGN934XNI_ATTR_MEASUREMENT_TYPE",
                                       AGN934XNI_VAL_MEASUREMENT_TYPE_OFF, 0,
                                       agn934xniAttrMeasurementType_ReadCallback,
                                       agn934xniAttrMeasurementType_WriteCallback,
                                       &attrMeasurementTypeRangeTable));
    checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_INSTRUMENT_MODE,
                                       "AGN934XNI_ATTR_INSTRUMENT_MODE",
                                       AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER,
                                       0, agn934xniEnum_ReadCallback,
                                       agn934xniEnum_WriteCallback,
                                       &attrInstrumentModeRangeTable));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_AMPLITUDE_UNITS,
	                                   "AGN934XNI_ATTR_AMPLITUDE_UNITS",
	                                   AGN934XNI_VAL_AMPLITUDE_UNITS_DBM, 0,
	                                   agn934xniAttrAmplitudeUnits_ReadCallback,
	                                   agn934xniAttrAmplitudeUnits_WriteCallback,
	                                   &attrAmplitudeUnitsRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_ATTENUATION,
	                                    "AGN934XNI_ATTR_ATTENUATION", 20, 0,
	                                    agn934xniViReal64_ReadCallback,
	                                    agn934xniViReal64_WriteCallback, VI_NULL, 0));
    checkErr (Ivi_SetAttrCoerceCallbackViReal64 (vi, AGN934XNI_ATTR_ATTENUATION,
                            agn934xniAttrAttenuation_CoerceCallback));
    checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_ATTENUATION_AUTO,
                                         "AGN934XNI_ATTR_ATTENUATION_AUTO", VI_TRUE,
                                         0, agn934xniViBoolean_ReadCallback,
                                         agn934xniViBoolean_WriteCallback));
    checkErr (Ivi_AddRepeatedAttributeViInt32(vi, TRACE_REP_CAP_NAME, AGN934XNI_ATTR_DETECTOR_TYPE,
                        "AGN934XNI_ATTR_DETECTOR_TYPE", AGN934XNI_VAL_DETECTOR_TYPE_MAX_PEAK,
                        0 , agn934xniAttrDetectorType_ReadCallback,
                        agn934xniAttrDetectorType_WriteCallback,
                        &attrDetectorTypeRangeTable));
    checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_DETECTOR_TYPE_AUTO,
                                         "AGN934XNI_ATTR_DETECTOR_TYPE_AUTO",
                                         VI_NULL, IVI_VAL_NOT_SUPPORTED, VI_NULL,
                                         VI_NULL));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_FREQUENCY_START,
	                                    "AGN934XNI_ATTR_FREQUENCY_START", 5e6, 0,
	                                    agn934xniAttrFrequencyStart_ReadCallback,
	                                    agn934xniAttrFrequencyStart_WriteCallback,
	                                    VI_NULL, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_FREQUENCY_STOP,
	                                    "AGN934XNI_ATTR_FREQUENCY_STOP", 7e9, 0,
	                                    agn934xniAttrFrequencyStop_ReadCallback,
	                                    agn934xniAttrFrequencyStop_WriteCallback,
	                                    VI_NULL, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_FREQUENCY_OFFSET,
	                                    "AGN934XNI_ATTR_FREQUENCY_OFFSET", 0, 0,
	                                    agn934xniAttrFrequencyOffset_ReadCallback,
	                                    agn934xniAttrFrequencyOffset_WriteCallback,
	                                    VI_NULL, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_INPUT_IMPEDANCE,
	                                    "AGN934XNI_ATTR_INPUT_IMPEDANCE",
	                                    AGN934XNI_VAL_INPUT_IMPEDANCE_50_OHM, 0,
	                                    agn934xniAttrInputImpedance_ReadCallback,
	                                    agn934xniAttrInputImpedance_WriteCallback,
	                                    &attrInputImpedanceRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_CENTER_FREQUENCY,
	                                    "AGN934XNI_ATTR_CENTER_FREQUENCY", 3.5e9, 0,
	                                    agn934xniAttrCenterFrequency_ReadCallback,
	                                    agn934xniAttrCenterFrequency_WriteCallback,
	                                    VI_NULL, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_FREQUENCY_SPAN,
	                                    "AGN934XNI_ATTR_FREQUENCY_SPAN", 7.0e9, 0,
	                                    agn934xniAttrFrequencySpan_ReadCallback,
	                                    agn934xniAttrFrequencySpan_WriteCallback,
	                                    VI_NULL, 0));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_NUMBER_OF_SWEEPS,
	                                   "AGN934XNI_ATTR_NUMBER_OF_SWEEPS", VI_NULL,
	                                   IVI_VAL_NOT_SUPPORTED, VI_NULL, VI_NULL,
	                                   VI_NULL));
    checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_REFERENCE_LEVEL,
                                        "AGN934XNI_ATTR_REFERENCE_LEVEL", 0,
                                        IVI_VAL_NEVER_CACHE,
                                        agn934xniViReal64_ReadCallback,
                                        agn934xniViReal64_WriteCallback, VI_NULL, 0));
    checkErr (Ivi_SetAttrCheckCallbackViReal64 (vi, AGN934XNI_ATTR_REFERENCE_LEVEL,
                            agn934xniAttrReferenceLevel_CheckCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET,
	                                    "AGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET", 0,
	                                    IVI_VAL_NEVER_CACHE,
	                                    agn934xniViReal64_ReadCallback,
	                                    agn934xniViReal64_WriteCallback,
	                                    &attrReferenceLevelOffsetRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_RESOLUTION_BANDWIDTH,
	                                    "AGN934XNI_ATTR_RESOLUTION_BANDWIDTH", 3e6,
	                                    IVI_VAL_NEVER_CACHE,
	                                    agn934xniViReal64_ReadCallback,
	                                    agn934xniViReal64_WriteCallback,
	                                    &attrResolutionBandwidthRangeTable, 0));
    checkErr (Ivi_AddAttributeViBoolean (vi,
                                         AGN934XNI_ATTR_RESOLUTION_BANDWIDTH_AUTO,
                                         "AGN934XNI_ATTR_RESOLUTION_BANDWIDTH_AUTO",
                                         VI_TRUE, 0, agn934xniViBoolean_ReadCallback,
                                         agn934xniViBoolean_WriteCallback));
    checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_SWEEP_MODE_CONTINUOUS,
                                         "AGN934XNI_ATTR_SWEEP_MODE_CONTINUOUS",
                                         VI_TRUE, 0, agn934xniViBoolean_ReadCallback,
                                         agn934xniViBoolean_WriteCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_SWEEP_TIME,
	                                    "AGN934XNI_ATTR_SWEEP_TIME", 0.3288692, 0,
	                                    agn934xniViReal64_ReadCallback,
	                                    agn934xniViReal64_WriteCallback, VI_NULL, 0));
    checkErr (Ivi_SetAttrCoerceCallbackViReal64 (vi, AGN934XNI_ATTR_SWEEP_TIME,
                            agn934xniAttrSweepTime_CoerceCallback));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_SWEEP_MODE,
	                                   "AGN934XNI_ATTR_SWEEP_MODE",
	                                   AGN934XNI_VAL_SWEEP_MODE_AUTO, 0,
	                                   agn934xniAttrSweepMode_ReadCallback,
	                                   agn934xniAttrSweepMode_WriteCallback,
	                                   &attrSweepModeRangeTable));
    checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_SWEEP_TIME_AUTO,
                                         "AGN934XNI_ATTR_SWEEP_TIME_AUTO", VI_TRUE,
                                         0, agn934xniViBoolean_ReadCallback,
                                         agn934xniViBoolean_WriteCallback));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_TRACE_COUNT,
	                                   "AGN934XNI_ATTR_TRACE_COUNT", 4,
	                                   IVI_VAL_NOT_USER_WRITABLE, VI_NULL, VI_NULL,
	                                   VI_NULL));
    checkErr (Ivi_AddRepeatedAttributeViInt32(vi, TRACE_REP_CAP_NAME, AGN934XNI_ATTR_TRACE_SIZE,
                        "AGN934XNI_ATTR_TRACE_SIZE", 461,
                        IVI_VAL_NOT_USER_WRITABLE,
                        VI_NULL, VI_NULL, VI_NULL));
    checkErr (Ivi_AddRepeatedAttributeViInt32(vi, TRACE_REP_CAP_NAME, AGN934XNI_ATTR_TRACE_TYPE,
                        "AGN934XNI_ATTR_TRACE_TYPE", AGN934XNI_VAL_TRACE_TYPE_CLEAR_WRITE,
                        0 ,agn934xniAttrTraceType_ReadCallback,
                        agn934xniAttrTraceType_WriteCallback,
                        &attrTraceTypeRangeTable));

	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_VERTICAL_SCALE,
	                                   "AGN934XNI_ATTR_VERTICAL_SCALE",
	                                   AGN934XNI_VAL_VERTICAL_SCALE_LOGARITHMIC, 0,
	                                   agn934xniEnum_ReadCallback,
	                                   agn934xniEnum_WriteCallback,
	                                   &attrVerticalScaleRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_VIDEO_BANDWIDTH,
	                                    "AGN934XNI_ATTR_VIDEO_BANDWIDTH", 3e6,
	                                    IVI_VAL_NEVER_CACHE,
	                                    agn934xniViReal64_ReadCallback,
	                                    agn934xniViReal64_WriteCallback,
	                                    &attrVideoBandwidthRangeTable, 0));
    checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_VIDEO_BANDWIDTH_AUTO,
                                         "AGN934XNI_ATTR_VIDEO_BANDWIDTH_AUTO",
                                         VI_TRUE, 0, agn934xniViBoolean_ReadCallback,
                                         agn934xniViBoolean_WriteCallback));
    checkErr (Ivi_AddAttributeViInt32 (vi,
                                       AGN934XNI_ATTR_TG_NORMAILIZE_REFERENCE_POSITION,
                                       "AGN934XNI_ATTR_TG_NORMAILIZE_REFERENCE_POSITION",
                                       10, 0, agn934xniViInt32_ReadCallback,
                                       agn934xniViInt32_WriteCallback,
                                       &attrTgNormailizeReferencePositionRangeTable));
    checkErr (Ivi_AddAttributeViReal64 (vi,
                                        AGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL,
                                        "AGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL",
                                        0, 0, agn934xniViReal64_ReadCallback,
                                        agn934xniViReal64_WriteCallback, VI_NULL, 0));
    checkErr (Ivi_SetAttrCoerceCallbackViReal64 (vi, AGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL,
                            agn934xniAttrTgNormalizeReferenceLevel_CoerceCallback));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_TG_NORMALIZE_ENABLE,
	                                     "AGN934XNI_ATTR_TG_NORMALIZE_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBoolean_ReadCallback,
	                                     agn934xniViBoolean_WriteCallback));
    checkErr (Ivi_AddAttributeViReal64 (vi,
                                        AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_OFFSET,
                                        "AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_OFFSET",
                                        -20, 0, agn934xniViReal64_ReadCallback,
                                        agn934xniViReal64_WriteCallback, VI_NULL, 0));
    checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_STEP,
                                        "AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_STEP", 2,
                                        0, agn934xniViReal64_ReadCallback,
                                        agn934xniViReal64_WriteCallback, VI_NULL, 0));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_ENABLE,
	                                     "AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBoolean_ReadCallback,
	                                     agn934xniViBoolean_WriteCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE,
	                                    "AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE", -20, 0,
	                                    agn934xniViReal64_ReadCallback,
	                                    agn934xniViReal64_WriteCallback, VI_NULL, 0));
    checkErr (Ivi_SetAttrCoerceCallbackViReal64 (vi, AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE,
                            agn934xniAttrTgOutputAmplitude_CoerceCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_OBW_POWER_LEVEL,
	                                    "AGN934XNI_ATTR_OBW_POWER_LEVEL", 26, 0,
	                                    agn934xniViReal64_ReadCallback,
	                                    agn934xniViReal64_WriteCallback,
	                                    &attrObwPowerLevelRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_OBW_POWER_PERCENTAGE,
	                                    "AGN934XNI_ATTR_OBW_POWER_PERCENTAGE", 99, 0,
	                                    agn934xniViReal64_ReadCallback,
	                                    agn934xniViReal64_WriteCallback,
	                                    &attrObwPowerPercentageRangeTable, 0));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_OBW_METHOD,
	                                   "AGN934XNI_ATTR_OBW_METHOD",
	                                   AGN934XNI_VAL_OBW_METHOD_PERCENT, 0,
	                                   agn934xniEnum_ReadCallback,
	                                   agn934xniEnum_WriteCallback,
	                                   &attrObwMethodRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_CHP_BOTTOM_RANGE,
	                                    "AGN934XNI_ATTR_CHP_BOTTOM_RANGE", -70, 0,
	                                    agn934xniViReal64_ReadCallback,
	                                    agn934xniViReal64_WriteCallback, VI_NULL, 0));
    checkErr (Ivi_SetAttrCheckCallbackViReal64 (vi, AGN934XNI_ATTR_CHP_BOTTOM_RANGE,
                            agn934xniAttrChpBottomRange_CheckCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_CHP_TOP_RANGE,
	                                    "AGN934XNI_ATTR_CHP_TOP_RANGE", -10, 0,
	                                    agn934xniViReal64_ReadCallback,
	                                    agn934xniViReal64_WriteCallback, VI_NULL, 0));
    checkErr (Ivi_SetAttrCheckCallbackViReal64 (vi, AGN934XNI_ATTR_CHP_TOP_RANGE,
                            agn934xniAttrChpTopRange_CheckCallback));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_CHP_AUTO_RANGE,
	                                     "AGN934XNI_ATTR_CHP_AUTO_RANGE", VI_TRUE, 0,
	                                     agn934xniViBoolean_ReadCallback,
	                                     agn934xniViBoolean_WriteCallback));
    checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_CHP_CHANNEL_SPAN,
                                        "AGN934XNI_ATTR_CHP_CHANNEL_SPAN", 3e6, 0,
                                        agn934xniViReal64_ReadCallback,
                                        agn934xniViReal64_WriteCallback, VI_NULL, 0));
    checkErr (Ivi_SetAttrCheckCallbackViReal64 (vi, AGN934XNI_ATTR_CHP_CHANNEL_SPAN,
                            agn934xniAttrChpChannelSpan_CheckCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_CHP_INTEGRATION_BANDWIDTH,
	                                    "AGN934XNI_ATTR_CHP_INTEGRATION_BANDWIDTH",
	                                    2e6, 0, agn934xniViReal64_ReadCallback,
	                                    agn934xniViReal64_WriteCallback, VI_NULL, 0));
    checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_CHP_CENTER_FREQUENCY,
                                        "AGN934XNI_ATTR_CHP_CENTER_FREQUENCY", 3.5e9,
                                        0, agn934xniViReal64_ReadCallback,
                                        agn934xniViReal64_WriteCallback, VI_NULL, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_ACPR_MAIN_CHANNEL_INTERGRATION_BANDWIDTH,
	                                    "AGN934XNI_ATTR_ACPR_MAIN_CHANNEL_INTERGRATION_BANDWIDTH",
	                                    1e6, IVI_VAL_NEVER_CACHE,
	                                    agn934xniViReal64_ReadCallback,
	                                    agn934xniViReal64_WriteCallback,
	                                    &attrAcprMainChannelIntergrationBandwidthRangeTable,
	                                    0));
    checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_ACPR_CENTER_FREQUENCY,
                                        "AGN934XNI_ATTR_ACPR_CENTER_FREQUENCY",
                                        3.5E9, 0, agn934xniViReal64_ReadCallback,
                                        agn934xniViReal64_WriteCallback, VI_NULL, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_MARKER_DEMODULATION_DELAY_TIME,
	                                    "AGN934XNI_ATTR_MARKER_DEMODULATION_DELAY_TIME",
	                                    6, 0, agn934xniViReal64_ReadCallback,
	                                    agn934xniViReal64_WriteCallback,
	                                    &attrMarkerDemodulationDelayTimeRangeTable,
	                                    0));
	checkErr (Ivi_SetAttrCheckCallbackViReal64 (vi,
	                                            AGN934XNI_ATTR_MARKER_DEMODULATION_DELAY_TIME,
	                                            agn934xniAttrMarkerDemodulationDelayTime_CheckCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_MARKER_DEMODULATION_SPEAKER_VOLUME,
	                                    "AGN934XNI_ATTR_MARKER_DEMODULATION_SPEAKER_VOLUME",
	                                    10, 0, agn934xniViReal64_ReadCallback,
	                                    agn934xniViReal64_WriteCallback,
	                                    &attrMarkerDemodulationSpeakerVolumeRangeTable,
	                                    0));
	checkErr (Ivi_SetAttrCheckCallbackViReal64 (vi,
	                                            AGN934XNI_ATTR_MARKER_DEMODULATION_SPEAKER_VOLUME,
	                                            agn934xniAttrMarkerDemodulationSpeakerVolume_CheckCallback));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_MARKER_DEMODULATION_FUNCTION,
	                                   "AGN934XNI_ATTR_MARKER_DEMODULATION_FUNCTION",
	                                   AGN934XNI_VAL_MARKER_DEMODULATION_FUNCTION_AM,
	                                   0, agn934xniEnum_ReadCallback,
	                                   agn934xniEnum_WriteCallback,
	                                   &attrMarkerDemodulationFunctionRangeTable));
    checkErr (Ivi_AddRepeatedAttributeViInt32(vi, MARKER_REP_CAP_NAME, AGN934XNI_ATTR_MARKER_X_READOUT,
                        "AGN934XNI_ATTR_MARKER_X_READOUT", AGN934XNI_VAL_MARKER_X_READOUT_FREQUENCY,
                        0 ,agn934xniEnum_ReadCallback,
                        agn934xniEnum_WriteCallback,
                        &attrMarkerXReadoutRangeTable));

	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_PEAK_SEARCH_TYPE,
	                                   "AGN934XNI_ATTR_PEAK_SEARCH_TYPE",
	                                   AGN934XNI_VAL_PEAK_SEARCH_MODE_MAXIMUM, 0,
	                                   agn934xniEnum_ReadCallback,
	                                   agn934xniEnum_WriteCallback,
	                                   &attrPeakSearchModeRangeTable));
    checkErr (Ivi_AddRepeatedAttributeViInt32(vi, MARKER_REP_CAP_NAME, AGN934XNI_ATTR_MARKER_FUNCTION,
                        "AGN934XNI_ATTR_MARKER_FUNCTION", AGN934XNI_VAL_MARKER_FUNCTION_OFF,
                        0 ,agn934xniAttrMarkerFunction_ReadCallback,
                        agn934xniAttrMarkerFunction_WriteCallback,
                        &attrMarkerFunctionRangeTable));
    checkErr (Ivi_AddRepeatedAttributeViInt32(vi, MARKER_REP_CAP_NAME, AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING,
                        "AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING", AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_CENTER,
                        IVI_VAL_NOT_USER_READABLE|IVI_VAL_NEVER_CACHE,
                        VI_NULL, agn934xniAttrMarkerInstrumentSetting_WriteCallback,
                        &attrMarkerInstrumentSettingRangeTable));
    checkErr (Ivi_AddRepeatedAttributeViInt32(vi, MARKER_REP_CAP_NAME, AGN934XNI_ATTR_MARKER_PEAK_SEARCH,
                        "AGN934XNI_ATTR_MARKER_PEAK_SEARCH", AGN934XNI_VAL_MARKER_SEARCH_HIGHEST,
                        IVI_VAL_NOT_USER_READABLE|IVI_VAL_NEVER_CACHE,
                        VI_NULL, agn934xniAttrMarkerPeakSearch_WriteCallback,
                        &attrMarkerPeakSearchRangeTable));
    checkErr (Ivi_AddRepeatedAttributeViBoolean(vi, MARKER_REP_CAP_NAME, AGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE,
                        "AGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE", VI_FALSE,
                        0 ,agn934xniAttrMarkerContinuousPeakingEnable_ReadCallback,
                        agn934xniAttrMarkerContinuousPeakingEnable_WriteCallback));
	checkErr (Ivi_AddAttributeViString (vi, AGN934XNI_ATTR_ACTIVE_MARKER,
	                                    "AGN934XNI_ATTR_ACTIVE_MARKER", "MARKER1", 0,
	                                    VI_NULL, VI_NULL));
    checkErr (Ivi_SetAttrCheckCallbackViString (vi, AGN934XNI_ATTR_ACTIVE_MARKER,
                            agn934xniAttrActiveMarker_CheckCallback));
    checkErr (Ivi_AddRepeatedAttributeViReal64(vi, MARKER_REP_CAP_NAME, AGN934XNI_ATTR_MARKER_AMPLITUDE,
                        "AGN934XNI_ATTR_MARKER_AMPLITUDE", 0,
                        IVI_VAL_NOT_USER_WRITABLE,
                        agn934xniAttrMarkerAmplitude_ReadCallback,
                        VI_NULL, VI_NULL, 0));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_MARKER_COUNT,
	                                   "AGN934XNI_ATTR_MARKER_COUNT", 4,
	                                   IVI_VAL_NOT_USER_WRITABLE, VI_NULL, VI_NULL,
	                                   VI_NULL));

    checkErr (Ivi_AddRepeatedAttributeViBoolean(vi, MARKER_REP_CAP_NAME, AGN934XNI_ATTR_MARKER_ENABLED,
                        "AGN934XNI_ATTR_MARKER_ENABLED", VI_FALSE,
                        0 ,agn934xniViBoolean_ReadCallback,
                        agn934xniViBoolean_WriteCallback));

    checkErr (Ivi_AddRepeatedAttributeViBoolean(vi, MARKER_REP_CAP_NAME, AGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED,
                        "AGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED", VI_FALSE,
                        0 ,agn934xniAttrMarkerFrequencyCounterEnabled_ReadCallback,
                        agn934xniAttrMarkerFrequencyCounterEnabled_WriteCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_RESOLUTION,
	                                    "AGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_RESOLUTION",
	                                    0, 0, VI_NULL, VI_NULL, VI_NULL, 0));
    checkErr (Ivi_AddRepeatedAttributeViReal64(vi, MARKER_REP_CAP_NAME, AGN934XNI_ATTR_MARKER_POSITION,
                        "AGN934XNI_ATTR_MARKER_POSITION", 3.4985E9,
                        0 ,agn934xniAttrMarkerPosition_ReadCallback,
                        agn934xniAttrMarkerPosition_WriteCallback, VI_NULL, 0));
    checkErr (Ivi_AddRepeatedAttributeViReal64(vi, MARKER_REP_CAP_NAME, AGN934XNI_ATTR_MARKER_THRESHOLD,
                        "AGN934XNI_ATTR_MARKER_THRESHOLD", -140,
                        0 ,agn934xniAttrMarkerThreshold_ReadCallback,
                        agn934xniAttrMarkerThreshold_WriteCallback, VI_NULL, 0));
    checkErr (Ivi_AddRepeatedAttributeViString(vi, MARKER_REP_CAP_NAME, AGN934XNI_ATTR_MARKER_TRACE,
                        "AGN934XNI_ATTR_MARKER_TRACE", AGN934XNI_VAL_TRACE_NAME_TRACE_1,
                        0 ,agn934xniAttrMarkerTrace_ReadCallback,
                        agn934xniAttrMarkerTrace_WriteCallback));

    checkErr (Ivi_SetAttrCheckCallbackViString (vi, AGN934XNI_ATTR_MARKER_TRACE,
                            agn934xniAttrMarkerTrace_CheckCallback));       
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_PEAK_EXCURSION,
	                                    "AGN934XNI_ATTR_PEAK_EXCURSION", 0, 0,
	                                    agn934xniViReal64_ReadCallback,
	                                    agn934xniViReal64_WriteCallback, VI_NULL, 0));
    checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_SIGNAL_TRACK_ENABLED,
                                         "AGN934XNI_ATTR_SIGNAL_TRACK_ENABLED",
                                         VI_NULL, 0, VI_NULL, VI_NULL));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_TRIGGER_DELAY_TIME_ENABLE,
	                                     "AGN934XNI_ATTR_TRIGGER_DELAY_TIME_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBoolean_ReadCallback,
	                                     agn934xniViBoolean_WriteCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_TRIGGER_DELAY_TIME,
	                                    "AGN934XNI_ATTR_TRIGGER_DELAY_TIME", 6e-6, 0,
	                                    agn934xniViReal64_ReadCallback,
	                                    agn934xniViReal64_WriteCallback, VI_NULL, 0));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_TRIGGER_SOURCE,
	                                   "AGN934XNI_ATTR_TRIGGER_SOURCE",
	                                   AGN934XNI_VAL_TRIGGER_SOURCE_IMMEDIATE, 0,
	                                   agn934xniEnum_ReadCallback,
	                                   agn934xniEnum_WriteCallback,
	                                   &attrTriggerSourceRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_EXTERNAL_TRIGGER_LEVEL,
	                                    "AGN934XNI_ATTR_EXTERNAL_TRIGGER_LEVEL", 0,
	                                    0, VI_NULL, VI_NULL, VI_NULL, 0));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_EXTERNAL_TRIGGER_SLOPE,
	                                   "AGN934XNI_ATTR_EXTERNAL_TRIGGER_SLOPE",
	                                   AGN934XNI_VAL_EXTERNAL_TRIGGER_SLOPE_POSITIVE,
	                                   0, agn934xniEnum_ReadCallback,
	                                   agn934xniEnum_WriteCallback,
	                                   &attrExternalTriggerSlopeRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_VIDEO_TRIGGER_LEVEL,
	                                    "AGN934XNI_ATTR_VIDEO_TRIGGER_LEVEL", 0, 0,
	                                    agn934xniViReal64_ReadCallback,
	                                    agn934xniViReal64_WriteCallback, VI_NULL, 0));

    checkErr (Ivi_SetAttrCheckCallbackViReal64 (vi, AGN934XNI_ATTR_VIDEO_TRIGGER_LEVEL,
                            agn934xniAttrVideoTriggerLevel_CheckCallback)); 
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_VIDEO_TRIGGER_SLOPE,
	                                   "AGN934XNI_ATTR_VIDEO_TRIGGER_SLOPE", VI_NULL,
	                                   0, VI_NULL, VI_NULL,
	                                   &attrVideoTriggerSlopeRangeTable));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_NUMBER_OF_DIVISIONS,
	                                   "AGN934XNI_ATTR_NUMBER_OF_DIVISIONS", 10,
	                                   IVI_VAL_NOT_USER_WRITABLE, VI_NULL, VI_NULL,
	                                   VI_NULL));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_UNITS_PER_DIVISION,
	                                    "AGN934XNI_ATTR_UNITS_PER_DIVISION", 10, 0,
	                                    agn934xniAttrUnitsPerDivision_ReadCallback,
	                                    agn934xniAttrUnitsPerDivision_WriteCallback,
	                                    &attrUnitsPerDivisionRangeTable, 0));
    checkErr (Ivi_AddRepeatedAttributeViInt32(vi, MARKER_REP_CAP_NAME, AGN934XNI_ATTR_MARKER_TYPE,
                        "AGN934XNI_ATTR_MARKER_TYPE", AGN934XNI_VAL_MARKER_TYPE_OFF,
                        0 ,agn934xniAttrMarkerType_ReadCallback,
                        agn934xniAttrMarkerType_WriteCallback,
                        &attrMarkerTypeRangeTable));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_LIMIT_LINE_X_VALUE,
	                                   "AGN934XNI_ATTR_LIMIT_LINE_X_VALUE",
	                                   AGN934XNI_VAL_LIMIT_LINE_FREQUENCY, 0,
	                                   agn934xniEnum_ReadCallback,
	                                   agn934xniEnum_WriteCallback,
	                                   &attrLimitLineXValueRangeTable));
    checkErr (Ivi_AddRepeatedAttributeViReal64(vi, LIMITLINE_REP_CAP_NAME, AGN934XNI_ATTR_LIMIT_LINE_Y_VALUE,
                        "AGN934XNI_ATTR_LIMIT_LINE_Y_VALUE", 0,
                        0 ,agn934xniViReal64_ReadCallback,
                        agn934xniViReal64_WriteCallback, VI_NULL, 0));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_LIMIT_LINE_MODE,
	                                   "AGN934XNI_ATTR_LIMIT_LINE_MODE",
	                                   AGN934XNI_VAL_LIMIT_LINE_FIXED, 0,
	                                   agn934xniEnum_ReadCallback,
	                                   agn934xniEnum_WriteCallback,
	                                   &attrLimitLineModeRangeTable));
    checkErr (Ivi_AddRepeatedAttributeViBoolean(vi, LIMITLINE_REP_CAP_NAME, AGN934XNI_ATTR_LIMIT_LINE_ENABLED,
                        "AGN934XNI_ATTR_LIMIT_LINE_ENABLED", VI_FALSE,
                        0 ,agn934xniViBoolean_ReadCallback,
                        agn934xniViBoolean_WriteCallback));
    checkErr (Ivi_AddRepeatedAttributeViInt32(vi, LIMITLINE_REP_CAP_NAME, AGN934XNI_ATTR_LIMIT_LINE_TYPE,
                        "AGN934XNI_ATTR_LIMIT_LINE_TYPE", AGN934XNI_VAL_LIMIT_LINE_UPPER,
                        0 ,agn934xniEnum_ReadCallback,
                        agn934xniEnum_WriteCallback,
                        &attrLimitLineTypeRangeTable));
    
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_ENABLE,
	                                     "AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME,
	                                    "AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME",
	                                    6e-6, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrDemodulationTriggerDelayTimeRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_EXTERNAL_TRIGGER_TYPE,
	                                   "AGN934XNI_ATTR_ASK_FSK_DEMODULATION_EXTERNAL_TRIGGER_TYPE",
	                                   AGN934XNI_VAL_DEMODULATION_EXTERNAL_TRIGGER_TYPE_POSITIVE,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrDemodulationExternalTriggerTypeRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL,
	                                    "AGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL",
	                                    0, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrDemodulationRfTriggerLevelRangeTable, 0));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_TYPE,
	                                   "AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_TYPE",
	                                   AGN934XNI_VAL_DEMODULATION_TRIGGER_TYPE_IMMEDIATE,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrDemodulationTriggerTypeRangeTable));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH,
	                                   "AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH",
	                                   1100, 0, agn934xniViInt32Uniform_ReadCallback,
	                                   agn934xniViInt32Uniform_WriteCallback,
	                                   &attrDemodulationMeasurementLengthRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT,
	                                    "AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT",
	                                    0.35, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrDemodulationFilterAlphaBbtRangeTable, 0));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS,
	                                   "AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS",
	                                   6, 0, agn934xniViInt32Uniform_ReadCallback,
	                                   agn934xniViInt32Uniform_WriteCallback,
	                                   &attrDemodulationFilterSymbolsRangeTable));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER,
	                                   "AGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER",
	                                   AGN934XNI_VAL_DEMODULATION_FILTER_OFF, 0,
	                                   agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrDemodulationFilterRangeTable));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER,
	                                   "AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER",
	                                   AGN934XNI_VAL_DEMODULATION_FILTER_OFF, 0,
	                                   agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrDemodulationFilterRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE,
	                                    "AGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE",
	                                    1000, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrDemodulationSymbolRateRangeTable, 0));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE,
	                                   "AGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE",
	                                   AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_WAVEFORM,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrDemodulationViewTypeRangeTable));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_COUPLING_ENABLE,
	                                     "AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_COUPLING_ENABLE",
	                                     VI_TRUE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_COUPLING_ENABLE,
	                                     "AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_COUPLING_ENABLE",
	                                     VI_TRUE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_REFERENCE_POSITION,
	                                   "AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_REFERENCE_POSITION",
	                                   AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_CENTER,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrDemodulationYScaleReferencePositionRangeTable));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_REFERENCE_POSITION,
	                                   "AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_REFERENCE_POSITION",
	                                   AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_CENTER,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrDemodulationYScaleReferencePositionRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE,
	                                    "AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE",
	                                    0, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrAmAskDemodulationYScaleReferenceValueRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE,
	                                    "AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE",
	                                    0, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrFmFskDemodulationYScaleReferenceValueRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE,
	                                    "AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE",
	                                    0, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrAmAskDemodulationYScaleReferenceValueRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_REFERENCE_VALUE,
	                                    "AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_REFERENCE_VALUE",
	                                    0, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrFmFskDemodulationYScaleReferenceValueRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION,
	                                    "AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION",
	                                    20, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrAmAskDemodulationYScaleDivisionRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION,
	                                    "AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION",
	                                    20, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrFskDemodulationYScaleDivisionRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION,
	                                    "AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION",
	                                    20, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrAmFmDemodulationYScaleDivisionRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION,
	                                    "AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION",
	                                    20, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrFmDemodulationYScaleDivisionRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_COUPLING_ENABLE,
	                                     "AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_COUPLING_ENABLE",
	                                     VI_TRUE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_COUPLING_ENABLE,
	                                     "AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_COUPLING_ENABLE",
	                                     VI_TRUE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_POSITION,
	                                   "AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_POSITION",
	                                   AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_LEFT,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrDemodulationXScaleReferencePositionRangeTable));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_POSITION,
	                                   "AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_POSITION",
	                                   AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_LEFT,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrDemodulationXScaleReferencePositionRangeTable));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE,
	                                   "AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE",
	                                   0, 0, agn934xniViInt32Uniform_ReadCallback,
	                                   agn934xniViInt32Uniform_WriteCallback,
	                                   &attrAskFskDemodulationXScaleReferenceValueRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE,
	                                    "AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE",
	                                    0, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrAmFmDemodulationXScaleReferenceValueRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION,
	                                   "AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION",
	                                   2, 0, agn934xniViInt32Uniform_ReadCallback,
	                                   agn934xniViInt32Uniform_WriteCallback,
	                                   &attrAskFskDemodulationXScaleDivisionRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION,
	                                    "AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION",
	                                    0, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrAmFmDemodulationXScaleDivisionRangeTable,
	                                    8.6e-4));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT,
	                                    "AGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT",
	                                    10000, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrAskFskCarrierFrequencyOffsetUpperLimitRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT,
	                                    "AGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT",
	                                    10000, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrAmFmCarrierFrequencyOffsetUpperLimitRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT,
	                                    "AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT",
	                                    1000, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrFrequencyDeviationLimitRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT,
	                                    "AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT",
	                                    1000, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrFrequencyDeviationLimitRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT,
	                                    "AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT",
	                                    1000, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrFrequencyDeviationLimitRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT,
	                                    "AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT",
	                                    1000, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrFrequencyDeviationLimitRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT,
	                                    "AGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT", 100,
	                                    0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrDepthUpperLimitRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT,
	                                    "AGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT", 100,
	                                    0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrDepthUpperLimitRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT,
	                                    "AGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT", 100,
	                                    0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrDepthUpperLimitRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT,
	                                    "AGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT", 100,
	                                    0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrDepthUpperLimitRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT,
	                                    "AGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT",
	                                    0, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrCarrierPowerUpperLimitRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT,
	                                    "AGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT",
	                                    0, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrCarrierPowerUpperLimitRangeTable, 0));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_AM_FM_LIMIT_STATE,
	                                     "AGN934XNI_ATTR_AM_FM_LIMIT_STATE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_ASK_FSK_LIMIT_STATE,
	                                     "AGN934XNI_ATTR_ASK_FSK_LIMIT_STATE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER,
	                                   "AGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER",
	                                   AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_AUTO, 0,
	                                   agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrEqualLowPassFilterRangeTable));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_AUTO,
	                                     "AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_AUTO",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH,
	                                    "AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH", 1200000,
	                                    0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrAmFmIfBandwidthRangeTable, 0));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_AM_FM_DETECTOR_PEAK_HOLD_ENABLE,
	                                     "AGN934XNI_ATTR_AM_FM_DETECTOR_PEAK_HOLD_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_AM_FM_DETECTOR_TYPE,
	                                   "AGN934XNI_ATTR_AM_FM_DETECTOR_TYPE",
	                                   AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_POSITIVE_PEAK,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrDemodulationDetectorTypeRangeTable));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_AM_FM_AVERAGE_ENABLE,
	                                     "AGN934XNI_ATTR_AM_FM_AVERAGE_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));

	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_ASK_FSK_AVERAGE_ENABLE,
	                                     "AGN934XNI_ATTR_ASK_FSK_AVERAGE_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_AM_FM_AVERAGE_COUNT,
	                                   "AGN934XNI_ATTR_AM_FM_AVERAGE_COUNT", 10, 0,
	                                   agn934xniViInt32Uniform_ReadCallback,
	                                   agn934xniViInt32Uniform_WriteCallback,
	                                   &attrDemodulationAverageCountRangeTable));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT,
	                                   "AGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT", 10, 0,
	                                   agn934xniViInt32Uniform_ReadCallback,
	                                   agn934xniViInt32Uniform_WriteCallback,
	                                   &attrDemodulationAverageCountRangeTable));
    checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_EXTERNAL_GAIN,
                                        "AGN934XNI_ATTR_EXTERNAL_GAIN", 0, 0,
                                        agn934xniViReal64_ReadCallback,
                                        agn934xniViReal64_WriteCallback,
                                        &attrExternalGainRangeTable, 0));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_PREAMPLIFIER_ENABLE,
	                                     "AGN934XNI_ATTR_PREAMPLIFIER_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_AUTO_CARRIER_FREQUENCY_ENABLE,
	                                     "AGN934XNI_ATTR_AUTO_CARRIER_FREQUENCY_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
    checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_CARRIER_FREQUENCY_STEP,
                                        "AGN934XNI_ATTR_CARRIER_FREQUENCY_STEP", 1e8,
                                        0, agn934xniViReal64Uniform_ReadCallback,
                                        agn934xniViReal64Uniform_WriteCallback,
                                        VI_NULL, 0));
    checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_CARRIER_FREQUENCY,
                                        "AGN934XNI_ATTR_CARRIER_FREQUENCY", 3.5e9, 0,
                                        agn934xniViReal64Uniform_ReadCallback,
                                        agn934xniViReal64Uniform_WriteCallback,
                                        &attrCarrierFrequencyRangeTable, 0));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_DEMODULATION_MODE,
	                                   "AGN934XNI_ATTR_DEMODULATION_MODE",
	                                   AGN934XNI_VAL_DEMODULATION_MODE_AM, 0,
	                                   agn934xniAttrDemodulationMode_ReadCallback,
	                                   agn934xniAttrDemodulationMode_WriteCallback,
	                                   &attrDemodulationModeRangeTable));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_SEM_FAIL_LOG_ENABLE,
	                                     "AGN934XNI_ATTR_SEM_FAIL_LOG_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_SEM_FAIL_HOLD_ENABLE,
	                                     "AGN934XNI_ATTR_SEM_FAIL_HOLD_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_SEM_FAIL_BEEP_ENABLE,
	                                     "AGN934XNI_ATTR_SEM_FAIL_BEEP_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_SEM_MEASUREMENT_TYPE,
	                                   "AGN934XNI_ATTR_SEM_MEASUREMENT_TYPE",
	                                   AGN934XNI_VAL_SEM_MEASUREMENT_TYPE_TOTAL_POWER_REFERENCE,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrSemMeasurementTypeRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_SEM_CENTER_FREQUENCY,
	                                    "AGN934XNI_ATTR_SEM_CENTER_FREQUENCY", 1.5e9,
	                                    0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrSemCenterFrequencyRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_SEM_CHANNEL_SPAN,
	                                    "AGN934XNI_ATTR_SEM_CHANNEL_SPAN", 5e6, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrSemChannelSpanRangeTable, 0));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_SEM_AUTO_TOTAL_POWER_REFERENCE_ENABLE,
	                                     "AGN934XNI_ATTR_SEM_AUTO_TOTAL_POWER_REFERENCE_ENABLE",
	                                     VI_TRUE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE,
	                                    "AGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE",
	                                    -53.68, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrSemTotalPowerReferenceRangeTable, 0));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_SEM_AUTO_RESOLUTION_BANDWIDTH_ENABLE,
	                                     "AGN934XNI_ATTR_SEM_AUTO_RESOLUTION_BANDWIDTH_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH,
	                                    "AGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH",
	                                    3e4, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrSemResolutionBandwidthRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH,
	                                    "AGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH",
	                                    3.84e6, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrSemChannelIntegrateBandwidthRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_SEM_AVERAGE_ENABLE,
	                                     "AGN934XNI_ATTR_SEM_AVERAGE_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_SEM_AVERAGE_NUMBER,
	                                   "AGN934XNI_ATTR_SEM_AVERAGE_NUMBER", 10, 0,
	                                   agn934xniViInt32Uniform_ReadCallback,
	                                   agn934xniViInt32Uniform_WriteCallback,
	                                   &attrSemAverageNumberRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE,
	                                    "AGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE",
	                                    0, IVI_VAL_NEVER_CACHE,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrPowerMeterTriggerHysteresisValueRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME,
	                                    "AGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME",
	                                    1e-6, IVI_VAL_NEVER_CACHE,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrPowerMeterTriggerHoldoffTimeRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_POWER_METER_TRIGGER_SLOPE,
	                                   "AGN934XNI_ATTR_POWER_METER_TRIGGER_SLOPE",
	                                   AGN934XNI_VAL_POWER_METER_TRIGGER_SLOPE_POSITIVE,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrPowerMeterTriggerSlopeRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME,
	                                    "AGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME",
	                                    0, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrPowerMeterTriggerDelayTimeRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL,
	                                    "AGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL",
	                                    0, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrPowerMeterTriggerLevelRangeTable, 0));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_POWER_METER_AUTO_TRIGGER_LEVEL_ENABLE,
	                                     "AGN934XNI_ATTR_POWER_METER_AUTO_TRIGGER_LEVEL_ENABLE",
	                                     VI_TRUE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_POWER_METER_TRIGGER_SOURCE,
	                                   "AGN934XNI_ATTR_POWER_METER_TRIGGER_SOURCE",
	                                   AGN934XNI_VAL_POWER_METER_TRIGGER_SOURCE_INTERNAL,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrPowerMeterTriggerSourceRangeTable));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_POWER_METER_TRIGGER_TYPE,
	                                   "AGN934XNI_ATTR_POWER_METER_TRIGGER_TYPE",
	                                   AGN934XNI_VAL_POWER_METER_TRIGGER_TYPE_FREERUN,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrPowerMeterTriggerTypeRangeTable));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_POWER_METER_LIMIT_BEEP_ENABLE,
	                                     "AGN934XNI_ATTR_POWER_METER_LIMIT_BEEP_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE,
	                                    "AGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE",
	                                    -60, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrPowerMeterLimitLowerValueRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE,
	                                    "AGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE",
	                                    10, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrPowerMeterLimitUpperValueRangeTable, 0));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_POWER_METER_LIMIT_ENABLE,
	                                     "AGN934XNI_ATTR_POWER_METER_LIMIT_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME,
	                                    "AGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME",
	                                    1e-4, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrPowerMeterGateLengthTimeRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_POWER_METER_GATE_START_TIME,
	                                    "AGN934XNI_ATTR_POWER_METER_GATE_START_TIME",
	                                    0, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrPowerMeterGateStartTimeRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE,
	                                    "AGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE",
	                                    10, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrPowerMeterTraceYScaleValueRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE,
	                                    "AGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE",
	                                    230, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrPowerMeterTraceYMaxValueRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME,
	                                    "AGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME",
	                                    1e-5, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrPowerMeterTraceXScaleTimeRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME,
	                                    "AGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME",
	                                    0, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrPowerMeterTraceXStartTimeRangeTable, 0));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT,
	                                   "AGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT",
	                                   4, 0, agn934xniViInt32Uniform_ReadCallback,
	                                   agn934xniViInt32Uniform_WriteCallback,
	                                   &attrPowerMeterVideoAverageCountRangeTable));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_POWER_METER_AUTO_VIDEO_AVERAGE_COUNT_ENABLE,
	                                     "AGN934XNI_ATTR_POWER_METER_AUTO_VIDEO_AVERAGE_COUNT_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE,
	                                   "AGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE",
	                                   AGN934XNI_VAL_POWER_METER_VIDEO_BANDWIDTH_TYPE_OFF,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrPowerMeterVideoBandwidthTypeRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME,
	                                    "AGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME",
	                                    0.1, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrPowerMeterMeasurementIntervalTimeRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_POWER_METER_AVERAGE_STEP_DETECT_ENABLE,
	                                     "AGN934XNI_ATTR_POWER_METER_AVERAGE_STEP_DETECT_ENABLE",
	                                     VI_TRUE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_POWER_METER_AUTO_AVERAGE_COUNT_ENABLE,
	                                     "AGN934XNI_ATTR_POWER_METER_AUTO_AVERAGE_COUNT_ENABLE",
	                                     VI_TRUE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER,
	                                   "AGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER",
	                                   1024, 0, agn934xniViInt32Uniform_ReadCallback,
	                                   agn934xniViInt32Uniform_WriteCallback,
	                                   &attrPowerMeterAverageCountNumberRangeTable));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_POWER_METER_AVERAGE_ENABLE,
	                                     "AGN934XNI_ATTR_POWER_METER_AVERAGE_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_POWER_METER_OFFSET_VALUE,
	                                    "AGN934XNI_ATTR_POWER_METER_OFFSET_VALUE", 0,
	                                    0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrPowerMeterOffsetValueRangeTable, 0));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_POWER_METER_OFFSET_ENABLE,
	                                     "AGN934XNI_ATTR_POWER_METER_OFFSET_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE,
	                                    "AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE",
	                                    0, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrPowerMeterReferencePowerValueRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_ENABLE,
	                                     "AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY,
	                                    "AGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY",
	                                    5e7, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrPowerMeterCenterFrequencyRangeTable, 0));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_POWER_METER_AUTO_POWER_RANGE_ENABLE,
	                                     "AGN934XNI_ATTR_POWER_METER_AUTO_POWER_RANGE_ENABLE",
	                                     VI_TRUE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_POWER_METER_POWER_RANGE,
	                                   "AGN934XNI_ATTR_POWER_METER_POWER_RANGE",
	                                   AGN934XNI_VAL_POWER_METER_POWER_RANGE_LOWER,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrPowerMeterPowerRangeRangeTable));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_POWER_METER_SWEEP_STATE,
	                                   "AGN934XNI_ATTR_POWER_METER_SWEEP_STATE",
	                                   AGN934XNI_VAL_POWER_METER_SWEEP_STATE_RUN, 0,
	                                   agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrPowerMeterSweepStateRangeTable));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_POWER_METER_ZEROING_TYPE,
	                                   "AGN934XNI_ATTR_POWER_METER_ZEROING_TYPE",
	                                   AGN934XNI_VAL_ZEROING_TYPE_INTERNAL, 0,
	                                   agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrZeroingTypeRangeTable));
    checkErr (Ivi_AddRepeatedAttributeViReal64(vi, LIMITLINE_REP_CAP_NAME, AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE,
                        "AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE", 80,
                        0 ,agn934xniViReal64_ReadCallback,
                        agn934xniViReal64_WriteCallback,
                        &attrLimitLineThresholdValueRangeTable, 0));
    checkErr (Ivi_AddRepeatedAttributeViBoolean(vi, LIMITLINE_REP_CAP_NAME, AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_ENABLE,
                        "AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_ENABLE", VI_FALSE,
                        0 ,agn934xniViBoolean_ReadCallback,
                        agn934xniViBoolean_WriteCallback));
    checkErr (Ivi_AddRepeatedAttributeViReal64(vi, LIMITLINE_REP_CAP_NAME, AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE,
                        "AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE", 0,
                        0 ,agn934xniViReal64_ReadCallback,
                        agn934xniViReal64_WriteCallback,
                        &attrLimitLineMarginValueRangeTable, 0));
    checkErr (Ivi_AddRepeatedAttributeViBoolean(vi, LIMITLINE_REP_CAP_NAME, AGN934XNI_ATTR_LIMIT_LINE_MARGIN_ENABLE,
                        "AGN934XNI_ATTR_LIMIT_LINE_MARGIN_ENABLE", VI_FALSE,
                        0 ,agn934xniViBoolean_ReadCallback,
                        agn934xniViBoolean_WriteCallback));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_LIMIT_LINE_BEEP_ENABLE,
	                                     "AGN934XNI_ATTR_LIMIT_LINE_BEEP_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBoolean_ReadCallback,
	                                     agn934xniViBoolean_WriteCallback));
    checkErr (Ivi_AddRepeatedAttributeViBoolean(vi, MARKER_REP_CAP_NAME, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_MARKER_CONTINUOUS_VALLEY_ENABLE,
                        "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_MARKER_CONTINUOUS_VALLEY_ENABLE", VI_FALSE,
                        0 ,agn934xniViBooleanUniform_ReadCallback,
                        agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_ENABLE,
	                                     "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_ENABLE",
	                                     VI_TRUE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER,
	                                   "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER",
	                                   1, 0, agn934xniViInt32Uniform_ReadCallback,
	                                   agn934xniViInt32Uniform_WriteCallback,
	                                   &attrReflectionMeasurementTraceAverageNumberRangeTable));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE,
	                                   "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE",
	                                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_OFF,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrReflectionMeasurementTraceMathTypeRangeTable));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_DISPLAY_TYPE,
	                                   "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_DISPLAY_TYPE",
	                                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_TYPE_DATA,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrReflectionMeasurementTraceDisplayTypeRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION,
	                                    "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION",
	                                    0.1, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrReflectionMeasurementAmplitudeScalePerDivisionRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL,
	                                    "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL",
	                                    1.05, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrReflectionMeasurementAmplitudeScaleReferenceLevelRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DTF_FREQUENCY_DOMAIN_ENABLE,
	                                     "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DTF_FREQUENCY_DOMAIN_ENABLE",
	                                     VI_TRUE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_UNIT,
	                                   "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_UNIT",
	                                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISTANCE_UNIT_METERS,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrReflectionMeasurementDistanceUnitRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_STOP,
	                                    "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_STOP",
	                                    9.89, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    VI_NULL, 0));
    checkErr (Ivi_SetAttrCheckCallbackViReal64 (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_STOP,
                            agn934xniAttrReflectionMeasurementDistanceStop_CheckCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_START,
	                                    "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_START",
	                                    0.82, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    VI_NULL, 0));
    checkErr (Ivi_SetAttrCheckCallbackViReal64 (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_START,
                            agn934xniAttrReflectionMeasurementDistanceStart_CheckCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN,
	                                    "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN",
	                                    9.95e8, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrReflectionMeasurementFrequencySpanRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY,
	                                    "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY",
	                                    5.025e8, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrReflectionMeasurementFrequencyRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY,
	                                    "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY",
	                                    1e9, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrReflectionMeasurementFrequencyRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY,
	                                    "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY",
	                                    5e6, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrReflectionMeasurementFrequencyRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW,
	                                   "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW",
	                                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_OFF,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrReflectionMeasurementWindowRangeTable));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISPLAY_TYPE,
	                                   "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISPLAY_TYPE",
	                                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISPLAY_TYPE_RL,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrReflectionMeasurementDisplayTypeRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR,
	                                    "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR",
	                                    100, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrReflectionMeasurementCableVelocityFactorRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_ATTENUATION,
	                                    "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_ATTENUATION",
	                                    0, 0, agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    VI_NULL, 0));
    checkErr (Ivi_SetAttrCheckCallbackViReal64 (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_ATTENUATION,
                            agn934xniAttrReflectionMeasurementCableAttenuation_CheckCallback));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_TYPE,
	                                   "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_TYPE",
	                                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_CUSTOM,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrReflectionMeasurementCableTypeRangeTable));
	checkErr (Ivi_AddAttributeViBoolean (vi,
	                                     AGN934XNI_ATTR_REFLECTION_MEASUREMENT_IIM_ENABLE,
	                                     "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_IIM_ENABLE",
	                                     VI_TRUE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CALIBRATION_TYPE,
	                                   "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CALIBRATION_TYPE",
	                                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_CALIBRATION_TYPE_SELECTED,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrReflectionMeasurementCalibrationTypeRangeTable));
	checkErr (Ivi_AddAttributeViInt32 (vi,
	                                   AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TYPE,
	                                   "AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TYPE",
	                                   AGN934XNI_VAL_REFLECTION_MEASUREMENT_TYPE_DISTANCE_TO_FAULT,
	                                   0, agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrReflectionMeasurementTypeRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE,
	                                    "AGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE",
	                                    0.22, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrRrcFilterAlphaValueRangeTable, 0));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_ACPR_RRC_FILTER_ENABLE,
	                                     "AGN934XNI_ATTR_ACPR_RRC_FILTER_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH,
	                                    "AGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH",
	                                    2e6, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrChannelPowerRrcFilterBandwidthRangeTable,
	                                    0));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_CHP_RRC_FILTER_ENABLE,
	                                     "AGN934XNI_ATTR_CHP_RRC_FILTER_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViReal64 (vi,
	                                    AGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE,
	                                    "AGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE",
	                                    0.22, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrRrcFilterAlphaValueRangeTable, 0));
	checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_GATE_SOURCE,
	                                   "AGN934XNI_ATTR_GATE_SOURCE",
	                                   AGN934XNI_VAL_GATE_SOURCE_EXTERNAL,
	                                   IVI_VAL_ALWAYS_CACHE,
	                                   agn934xniEnumUniform_ReadCallback,
	                                   agn934xniEnumUniform_WriteCallback,
	                                   &attrGateSourceRangeTable));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_GATE_LENGTH,
	                                    "AGN934XNI_ATTR_GATE_LENGTH", 8.4e-5, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrGateLengthRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_GATE_DELAY,
	                                    "AGN934XNI_ATTR_GATE_DELAY", 1.2e-5, 0,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrGateDelayRangeTable, 0));
	checkErr (Ivi_AddAttributeViReal64 (vi, AGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME,
	                                    "AGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME", 1e-3,
	                                    IVI_VAL_NEVER_CACHE,
	                                    agn934xniViReal64Uniform_ReadCallback,
	                                    agn934xniViReal64Uniform_WriteCallback,
	                                    &attrGateViewSweepTimeRangeTable, 0));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_GATE_VIEW_ENABLE,
	                                     "AGN934XNI_ATTR_GATE_VIEW_ENABLE", VI_FALSE,
	                                     0, agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));
	checkErr (Ivi_AddAttributeViBoolean (vi, AGN934XNI_ATTR_GATED_SWEEP_ENABLE,
	                                     "AGN934XNI_ATTR_GATED_SWEEP_ENABLE",
	                                     VI_FALSE, 0,
	                                     agn934xniViBooleanUniform_ReadCallback,
	                                     agn934xniViBooleanUniform_WriteCallback));

        
        /*- End of Instrument Specific Attributes -------------------------------*/
    
    checkErr( Ivi_AddAttributeViString (vi, AGN934XNI_ATTR_ID_QUERY_RESPONSE,
                                        "AGN934XNI_ATTR_ID_QUERY_RESPONSE", 
                                        "",
                                        IVI_VAL_NOT_USER_WRITABLE,
                                        agn934xniAttrIdQueryResponse_ReadCallback,
                                        VI_NULL));
                                               
    checkErr( Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_OPC_TIMEOUT,
                                       "AGN934XNI_ATTR_OPC_TIMEOUT",
                                       5000, IVI_VAL_HIDDEN | IVI_VAL_DONT_CHECK_STATUS,
                                       VI_NULL, VI_NULL, VI_NULL)); 
    checkErr( Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_OPC_CALLBACK,
                                       "AGN934XNI_ATTR_OPC_CALLBACK",
                                       VI_NULL,
                                       IVI_VAL_HIDDEN | IVI_VAL_DONT_CHECK_STATUS,
                                       VI_NULL, VI_NULL, VI_NULL));
    checkErr( Ivi_AddAttributeViInt32 (vi,
                                       AGN934XNI_ATTR_CHECK_STATUS_CALLBACK,
                                       "AGN934XNI_ATTR_CHECK_STATUS_CALLBACK",
                                       VI_NULL,
                                       IVI_VAL_HIDDEN | IVI_VAL_DONT_CHECK_STATUS,
                                       VI_NULL, VI_NULL, VI_NULL));
    checkErr( Ivi_AddAttributeViInt32 (vi,
                                       AGN934XNI_ATTR_USER_INTERCHANGE_CHECK_CALLBACK,
                                       "AGN934XNI_ATTR_USER_INTERCHANGE_CHECK_CALLBACK",
                                       VI_NULL,
                                       IVI_VAL_HIDDEN | IVI_VAL_DONT_CHECK_STATUS,
                                       VI_NULL, VI_NULL, VI_NULL)); 
    checkErr (Ivi_AddAttributeViInt32 (vi, AGN934XNI_ATTR_INST_MODEL,
                                       "AGN934XNI_ATTR_INST_MODEL", instModel,
                                       IVI_VAL_HIDDEN, VI_NULL, VI_NULL,
                                       &attrInstModelRangeTable));
        
            /*- Setup attribute invalidations -----------------------------------*/
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_INSTRUMENT_MODE,
                                            AGN934XNI_ATTR_MEASUREMENT_TYPE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET,
                                            AGN934XNI_ATTR_REFERENCE_LEVEL, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_ATTENUATION_AUTO,
                                            AGN934XNI_ATTR_ATTENUATION, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_DETECTOR_TYPE_AUTO,
                                            AGN934XNI_ATTR_DETECTOR_TYPE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_FREQUENCY_START,
                                            AGN934XNI_ATTR_CENTER_FREQUENCY, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_FREQUENCY_START,
                                            AGN934XNI_ATTR_FREQUENCY_SPAN, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_FREQUENCY_STOP,
                                            AGN934XNI_ATTR_CENTER_FREQUENCY, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_FREQUENCY_STOP,
                                            AGN934XNI_ATTR_FREQUENCY_SPAN, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_CENTER_FREQUENCY,
                                            AGN934XNI_ATTR_FREQUENCY_START, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_CENTER_FREQUENCY,
                                            AGN934XNI_ATTR_FREQUENCY_STOP, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_FREQUENCY_SPAN,
                                            AGN934XNI_ATTR_FREQUENCY_START, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_FREQUENCY_SPAN,
                                            AGN934XNI_ATTR_FREQUENCY_STOP, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_RESOLUTION_BANDWIDTH_AUTO,
                                            AGN934XNI_ATTR_RESOLUTION_BANDWIDTH, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_SWEEP_TIME_AUTO,
                                            AGN934XNI_ATTR_SWEEP_TIME, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_VERTICAL_SCALE,
                                            AGN934XNI_ATTR_AMPLITUDE_UNITS, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_VIDEO_BANDWIDTH_AUTO,
                                            AGN934XNI_ATTR_VIDEO_BANDWIDTH, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_VBW_RBW_RATIO,
                                            AGN934XNI_ATTR_RESOLUTION_BANDWIDTH, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_VBW_RBW_RATIO,
                                            AGN934XNI_ATTR_VIDEO_BANDWIDTH, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_VBW_RBW_RATIO_AUTO,
                                            AGN934XNI_ATTR_RESOLUTION_BANDWIDTH, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_VBW_RBW_RATIO_AUTO,
                                            AGN934XNI_ATTR_VBW_RBW_RATIO, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_VBW_RBW_RATIO_AUTO,
                                            AGN934XNI_ATTR_VIDEO_BANDWIDTH, VI_TRUE)); 
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_ENABLE,
                                            AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_ENABLE,
                                            AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_STEP, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_ENABLE,
                                            AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_OFFSET, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_MARKER_AMPLITUDE,
                                            AGN934XNI_ATTR_ACTIVE_MARKER, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_MARKER_ENABLED,
                                            AGN934XNI_ATTR_ACTIVE_MARKER, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_MARKER_ENABLED,
                                            AGN934XNI_ATTR_MARKER_AMPLITUDE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_MARKER_ENABLED,
                                            AGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_MARKER_ENABLED,
                                            AGN934XNI_ATTR_MARKER_FUNCTION, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_MARKER_ENABLED,
                                            AGN934XNI_ATTR_MARKER_POSITION, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_MARKER_ENABLED,
                                            AGN934XNI_ATTR_MARKER_TRACE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_MARKER_ENABLED,
                                            AGN934XNI_ATTR_MARKER_TYPE, VI_TRUE));
    
    /* AGN934XNI_ATTR_ACTIVE_MARKER */
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_ACTIVE_MARKER,
                                            AGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_ACTIVE_MARKER,
                                            AGN934XNI_ATTR_MARKER_POSITION, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_ACTIVE_MARKER,
                                            AGN934XNI_ATTR_MARKER_TRACE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_ACTIVE_MARKER,
                                            AGN934XNI_ATTR_SIGNAL_TRACK_ENABLED, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_ACTIVE_MARKER,
                                            AGN934XNI_ATTR_MARKER_TYPE, VI_TRUE));
    /* AGN934XNI_ATTR_ACTIVE_TRACE */   
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_ACTIVE_TRACE, 
                                            AGN934XNI_ATTR_DETECTOR_TYPE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_ACTIVE_TRACE, 
                                            AGN934XNI_ATTR_TRACE_TYPE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_ACTIVE_TRACE, 
                                            AGN934XNI_ATTR_AVERAGE_ENABLE, VI_TRUE));
    
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_AUTO_CARRIER_FREQUENCY_ENABLE,
                                            AGN934XNI_ATTR_CARRIER_FREQUENCY, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_CARRIER_FREQUENCY,
                                            AGN934XNI_ATTR_AUTO_CARRIER_FREQUENCY_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_SEM_CHANNEL_SPAN,
                                            AGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_SEM_AUTO_TOTAL_POWER_REFERENCE_ENABLE,
                                            AGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE,
                                            AGN934XNI_ATTR_SEM_AUTO_TOTAL_POWER_REFERENCE_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_SEM_AUTO_RESOLUTION_BANDWIDTH_ENABLE,
                                            AGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH,
                                            AGN934XNI_ATTR_SEM_AUTO_RESOLUTION_BANDWIDTH_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH,
                                            AGN934XNI_ATTR_SEM_CHANNEL_SPAN, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_SEM_AVERAGE_ENABLE,
                                            AGN934XNI_ATTR_SEM_AVERAGE_NUMBER, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL,
                                            AGN934XNI_ATTR_POWER_METER_AUTO_TRIGGER_LEVEL_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_POWER_METER_AUTO_TRIGGER_LEVEL_ENABLE,
                                            AGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_POWER_METER_LIMIT_BEEP_ENABLE,
                                            AGN934XNI_ATTR_POWER_METER_LIMIT_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE,
                                            AGN934XNI_ATTR_POWER_METER_LIMIT_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE,
                                            AGN934XNI_ATTR_POWER_METER_LIMIT_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT,
                                            AGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_POWER_METER_AUTO_VIDEO_AVERAGE_COUNT_ENABLE,
                                            AGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_POWER_METER_AVERAGE_STEP_DETECT_ENABLE,
                                            AGN934XNI_ATTR_POWER_METER_AVERAGE_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_POWER_METER_AUTO_AVERAGE_COUNT_ENABLE,
                                            AGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_POWER_METER_AUTO_AVERAGE_COUNT_ENABLE,
                                            AGN934XNI_ATTR_POWER_METER_AVERAGE_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER,
                                            AGN934XNI_ATTR_POWER_METER_AUTO_AVERAGE_COUNT_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER,
                                            AGN934XNI_ATTR_POWER_METER_AVERAGE_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE,
                                            AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_ENABLE,
                                            AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE,
                                            AGN934XNI_ATTR_LIMIT_LINE_MARGIN_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_LIMIT_LINE_MARGIN_ENABLE,
                                            AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_STOP,
                                            AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_START, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_START,
                                            AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_STOP, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN,
                                            AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN,
                                            AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN,
                                            AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY,
                                            AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY,
                                            AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY,
                                            AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY,
                                            AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY,
                                            AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY,
                                            AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY,
                                            AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY,
                                            AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY,
                                            AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_ENABLE,
                                            AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER,
                                            AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_POWER_METER_AUTO_POWER_RANGE_ENABLE,
                                            AGN934XNI_ATTR_POWER_METER_POWER_RANGE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_POWER_METER_POWER_RANGE,
                                            AGN934XNI_ATTR_POWER_METER_AUTO_POWER_RANGE_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE,
                                            AGN934XNI_ATTR_ACPR_RRC_FILTER_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_ACPR_RRC_FILTER_ENABLE,
                                            AGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH,
                                            AGN934XNI_ATTR_CHP_RRC_FILTER_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_CHP_RRC_FILTER_ENABLE,
                                            AGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_CHP_RRC_FILTER_ENABLE,
                                            AGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE,
                                            AGN934XNI_ATTR_CHP_RRC_FILTER_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_GATE_SOURCE,
                                            AGN934XNI_ATTR_GATED_SWEEP_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_GATE_LENGTH,
                                            AGN934XNI_ATTR_GATED_SWEEP_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_GATE_DELAY,
                                            AGN934XNI_ATTR_GATED_SWEEP_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME,
                                            AGN934XNI_ATTR_GATE_VIEW_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME,
                                            AGN934XNI_ATTR_GATED_SWEEP_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_GATE_VIEW_ENABLE,
                                            AGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_GATE_VIEW_ENABLE,
                                            AGN934XNI_ATTR_GATED_SWEEP_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_GATED_SWEEP_ENABLE,
                                            AGN934XNI_ATTR_GATE_DELAY, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_GATED_SWEEP_ENABLE,
                                            AGN934XNI_ATTR_GATE_LENGTH, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_GATED_SWEEP_ENABLE,
                                            AGN934XNI_ATTR_GATE_SOURCE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_GATED_SWEEP_ENABLE,
                                            AGN934XNI_ATTR_GATE_VIEW_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_GATED_SWEEP_ENABLE,
                                            AGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_COUPLING_ENABLE,
                                            AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION,
                                            AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_COUPLING_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION,
                                            AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_COUPLING_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_COUPLING_ENABLE,
                                            AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_COUPLING_ENABLE,
                                            AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_COUPLING_ENABLE,
                                            AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION,
                                            AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_COUPLING_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION,
                                            AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_COUPLING_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_COUPLING_ENABLE,
                                            AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_COUPLING_ENABLE,
                                            AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION,
                                            AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_COUPLING_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION,
                                            AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_COUPLING_ENABLE, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH,
                                            AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_AUTO, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_AUTO,
                                            AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_UNIT,
                                            AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_START, VI_TRUE));
    checkErr (Ivi_AddAttributeInvalidation (vi, AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_UNIT,
                                            AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_STOP, VI_TRUE));
    
Error:
    return error;
}

/*****************************************************************************
 *------------------- End Instrument Driver Source Code ---------------------*
 *****************************************************************************/

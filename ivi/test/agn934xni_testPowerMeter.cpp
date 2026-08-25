#include  "agn934xni_testPowerMeter.h"
#include "agn934xni.h"
#include "string.h"
#include "math.h"
#include <windows.h>

extern ViSession vi;	
extern void testClose();
extern ViRsrc instrName;

/****************************************************************************
 *------------------------------- Global Variable --------------------------*
 ****************************************************************************/

ViStatus testPowerMeterInit()
{
	ViStatus error = VI_SUCCESS;

	checkErr(agn934xni_init (instrName,VI_TRUE,VI_FALSE,&vi));	
//	checkErr (viSetAttribute (vi, VI_ATTR_TMO_VALUE, 5000));
	
Error:
	return error;
}

void DriverPowerMeterFunctionalityTest::setUp()
{
	testPowerMeterInit();
}

void DriverPowerMeterFunctionalityTest::tearDown()
{
    testClose();
    Sleep(50);
}

/****************************************************************************
 *------------------------------ Test Templates ----------------------------*
 ****************************************************************************/
	

	
/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;
//	ViStatus status = VI_NULL;
	
//	status = Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER);
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_ASK));

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME ;
	ViReal64 defaultValue = 6e-6 ;	
	ViReal64 returnValue;
	ViInt32        demodulationMode = 0;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_ENABLE, 0, VI_TRUE));

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME ;
	ViReal64 CloseminimumValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME ;
	ViReal64 ClosemaximumValue = 200 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME ;
	 
	ViReal64 randomValue = 94.96 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME;
	ViReal64 ViolationValue = -1 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_DELAY_TIME;
	ViReal64 ViolationValue = 201 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_EXTERNAL_TRIGGER_TYPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_EXTERNAL_TRIGGER_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_DEMODULATION_EXTERNAL_TRIGGER_TYPE_POSITIVE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_EXTERNAL_TRIGGER_TYPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_EXTERNAL_TRIGGER_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_EXTERNAL_TRIGGER_TYPE_POSITIVE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_EXTERNAL_TRIGGER_TYPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_EXTERNAL_TRIGGER_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_EXTERNAL_TRIGGER_TYPE_NEGATIVE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL ;
	ViReal64 CloseminimumValue = -40 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL ;
	ViReal64 ClosemaximumValue = 10 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL ;
	 
	ViReal64 randomValue = -3.46 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL;
	ViReal64 ViolationValue = -41 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_RF_TRIGGER_LEVEL;
	ViReal64 ViolationValue = 11 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_TYPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_DEMODULATION_TRIGGER_TYPE_IMMEDIATE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_TYPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_TRIGGER_TYPE_IMMEDIATE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_TYPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_TRIGGER_TYPE_EXTERNAL ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_TYPE_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_TRIGGER_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_TRIGGER_TYPE_RFTRIGGER ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH ;
	ViInt32 defaultValue = 1100 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH ;
	ViInt32 CloseminimumValue = 20 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( CloseminimumValue == returnValue );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH ;
	ViInt32 ClosemaximumValue = 1100 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( ClosemaximumValue == returnValue );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH ;
	 
	ViInt32 randomValue = 679 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( randomValue == returnValue );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH;
	ViInt32 ViolationValue = 19 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_LENGTH;
	ViInt32 ViolationValue = 1101 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT ;
	ViReal64 defaultValue = 0.35 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT ;
	ViReal64 CloseminimumValue = 0.2 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT ;
	ViReal64 ClosemaximumValue = 1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT ;
	 
	ViReal64 randomValue = 0.37 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT;
	ViReal64 ViolationValue = -0.8 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_ALPHA_BBT;
	ViReal64 ViolationValue = 2 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS ;
	ViInt32 defaultValue = 6 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS ;
	ViInt32 CloseminimumValue = 2 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( CloseminimumValue == returnValue );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS ;
	ViInt32 ClosemaximumValue = 25 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( ClosemaximumValue == returnValue );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS ;
	 
	ViInt32 randomValue = 19 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( randomValue == returnValue );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS;
	ViInt32 ViolationValue = 1 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_FILTER_SYMBOLS;
	ViInt32 ViolationValue = 26 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER ;
	ViInt32 defaultValue = AGN934XNI_VAL_DEMODULATION_FILTER_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_FILTER_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_FILTER_RNYQUIST ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_FILTER_NYQUIST ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER_DiscreteValue_ReadWrite_NullChannel_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_REFERENCE_FILTER ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_FILTER_GAUSSIAN ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER ;
	ViInt32 defaultValue = AGN934XNI_VAL_DEMODULATION_FILTER_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_FILTER_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_FILTER_RNYQUIST ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_FILTER_NYQUIST ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER_DiscreteValue_ReadWrite_NullChannel_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_MEASUREMENT_FILTER ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_FILTER_GAUSSIAN ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE ;
	ViReal64 defaultValue = 1000 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE ;
	ViReal64 CloseminimumValue = 100 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE ;
	ViReal64 ClosemaximumValue = 100000 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE ;
	 
	ViReal64 randomValue = 95726.01 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE;
	ViReal64 ViolationValue = 99 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_SYMBOL_RATE;
	ViReal64 ViolationValue = 100001 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_WAVEFORM ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_WAVEFORM ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_SYMBOL ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_EYE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE_DiscreteValue_ReadWrite_NullChannel_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_VIEW_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_VIEW_TYPE_ERROR ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_COUPLING_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_COUPLING_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_COUPLING_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_COUPLING_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_AM));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_REFERENCE_POSITION_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_REFERENCE_POSITION ;
	ViInt32 defaultValue = AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_CENTER ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_ASK));

    Sleep(100);
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	Sleep(200);
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	Sleep(200);
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_REFERENCE_POSITION_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_REFERENCE_POSITION ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_TOP ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_ASK));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_REFERENCE_POSITION_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_REFERENCE_POSITION ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_CENTER ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_REFERENCE_POSITION_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_Y_SCALE_REFERENCE_POSITION ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_BOTTOM ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_REFERENCE_POSITION_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_REFERENCE_POSITION ;
	ViInt32 defaultValue = AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_CENTER ;	
	ViInt32 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_AM));

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_REFERENCE_POSITION_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_REFERENCE_POSITION ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_TOP ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_REFERENCE_POSITION_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_REFERENCE_POSITION ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_CENTER ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_REFERENCE_POSITION_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_Y_SCALE_REFERENCE_POSITION ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_Y_SCALE_REFERENCE_POSITION_BOTTOM ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_ASK));

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE ;
	ViReal64 CloseminimumValue = -50 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE ;
	ViReal64 ClosemaximumValue = 50 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE ;
	 
	ViReal64 randomValue = 125.39 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE;
	ViReal64 ViolationValue = -151 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_REFERENCE_VALUE;
	ViReal64 ViolationValue = 151 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE ;
	ViReal64 CloseminimumValue = -1e6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE ;
	ViReal64 ClosemaximumValue = 1e6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE ;
	 
	ViReal64 randomValue = 496294.03 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE;
	ViReal64 ViolationValue = -1.000001E6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_REFERENCE_VALUE;
	ViReal64 ViolationValue = 1.000001E6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_AM));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE ;
	ViReal64 CloseminimumValue = -150 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE ;
	ViReal64 ClosemaximumValue = 150 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE ;
	 
	ViReal64 randomValue = 32.33 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE;
	ViReal64 ViolationValue = -151 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_REFERENCE_VALUE;
	ViReal64 ViolationValue = 151 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_REFERENCE_VALUE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_REFERENCE_VALUE ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_REFERENCE_VALUE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_REFERENCE_VALUE ;
	ViReal64 CloseminimumValue = -1e6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_REFERENCE_VALUE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_REFERENCE_VALUE ;
	ViReal64 ClosemaximumValue = 1e6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_REFERENCE_VALUE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_REFERENCE_VALUE ;
	 
	ViReal64 randomValue = -170519.17 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_REFERENCE_VALUE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_REFERENCE_VALUE;
	ViReal64 ViolationValue = -1.000001E6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_REFERENCE_VALUE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_REFERENCE_VALUE;
	ViReal64 ViolationValue = 1.000001E6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION ;
	ViReal64 defaultValue = 20 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION ;
	ViReal64 CloseminimumValue = 0.1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION ;
	ViReal64 ClosemaximumValue = 100 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION ;
	 
	ViReal64 randomValue = 65.45 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION;
	ViReal64 ViolationValue = -0.9 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEMODULATION_Y_SCALE_DIVISION;
	ViReal64 ViolationValue = 101 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION ;
	ViReal64 defaultValue = 20 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION ;
	ViReal64 CloseminimumValue = 1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION ;
	ViReal64 ClosemaximumValue = 150000 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION ;
	 
	ViReal64 randomValue = 13253.10 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION;
	ViReal64 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_DEMODULATION_Y_SCALE_DIVISION;
	ViReal64 ViolationValue = 150001 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION ;
	ViReal64 defaultValue = 20 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION ;
	ViReal64 CloseminimumValue = 1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION ;
	ViReal64 ClosemaximumValue = 150000 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION ;
	 
	ViReal64 randomValue = 113749.73 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION;
	ViReal64 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEMODULATION_Y_SCALE_DIVISION;
	ViReal64 ViolationValue = 150001 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION ;
	ViReal64 defaultValue = 20 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION ;
	ViReal64 CloseminimumValue = 1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION ;
	ViReal64 ClosemaximumValue = 100000 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION ;
	 
	ViReal64 randomValue = 72677.34 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION;
	ViReal64 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_DEMODULATION_Y_SCALE_DIVISION;
	ViReal64 ViolationValue = 100001 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_COUPLING_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_COUPLING_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_ASK));

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_COUPLING_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_COUPLING_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_AM));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_POSITION_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_POSITION ;
	ViInt32 defaultValue = AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_LEFT ;	
	ViInt32 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_ASK));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_POSITION_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_POSITION ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_LEFT ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_POSITION_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_POSITION ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_CENTER ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_POSITION_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_POSITION ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_RIGHT ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_POSITION_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_POSITION ;
	ViInt32 defaultValue = AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_LEFT ;	
	ViInt32 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_AM));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_POSITION_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_POSITION ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_LEFT ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_POSITION_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_POSITION ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_CENTER ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_POSITION_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_POSITION ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_X_SCALE_REFERENCE_POSITION_RIGHT ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE ;
	ViInt32 defaultValue = 0 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_ASK));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_EQUAL( defaultValue, returnValue);
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE ;
	ViInt32 CloseminimumValue = -400 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_EQUAL( CloseminimumValue, returnValue);
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE ;
	ViInt32 ClosemaximumValue = 400 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_EQUAL( ClosemaximumValue, returnValue);	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE ;
	 
	ViInt32 randomValue = -314 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_EQUAL( randomValue, returnValue);	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE;
	ViInt32 ViolationValue = -401 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_REFERENCE_VALUE;
	ViInt32 ViolationValue = 401 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_AM));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, 1 / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE ;
	ViReal64 CloseminimumValue = -5 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE ;
	ViReal64 ClosemaximumValue = 5 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE ;
	 
	ViReal64 randomValue = 2.25 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE;
	ViReal64 ViolationValue = -6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_REFERENCE_VALUE;
	ViReal64 ViolationValue = 6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION ;
	ViInt32 defaultValue = 2 ;	
	ViInt32 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_ASK));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION ;
	ViInt32 CloseminimumValue = 1 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( CloseminimumValue == returnValue );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION ;
	ViInt32 ClosemaximumValue = 40 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( ClosemaximumValue == returnValue );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION ;
	 
	ViInt32 randomValue = 13 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( randomValue == returnValue );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION;
	ViInt32 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_DEMODULATION_X_SCALE_DIVISION;
	ViInt32 ViolationValue = 41 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION ;
	ViReal64 defaultValue = 8.6e-4 ;	
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_AM));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, 1 / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION ;
	ViReal64 CloseminimumValue = 1e-9 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, 1 / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION ;
	ViReal64 ClosemaximumValue = 1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, 1 / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION ;
	 
	ViReal64 randomValue = 0.65 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, 1 / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION;
	ViReal64 ViolationValue = -0.999999999 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DEMODULATION_X_SCALE_DIVISION;
	ViReal64 ViolationValue = 2 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT ;
	ViReal64 defaultValue = 10000 ;	
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_ASK));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT ;
	ViReal64 CloseminimumValue = -1e6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT ;
	ViReal64 ClosemaximumValue = 1e6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT ;
	 
	ViReal64 randomValue = -631860.70 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT;
	ViReal64 ViolationValue = -2.000001E6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT;
	ViReal64 ViolationValue = 2.000001E6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT ;
	ViReal64 defaultValue = 10000 ;	
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_FM));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT ;
	ViReal64 CloseminimumValue = -1e6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT ;
	ViReal64 ClosemaximumValue = 1e6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT ;
	 
	ViReal64 randomValue = -767773.72 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT;
	ViReal64 ViolationValue = -1.000001E6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_CARRIER_FREQUENCY_OFFSET_UPPER_LIMIT;
	ViReal64 ViolationValue = 1.000001E6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT ;
	ViReal64 defaultValue = 1000 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT ;
	ViReal64 CloseminimumValue = 1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT ;
	ViReal64 ClosemaximumValue = 5e5 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT ;
	 
	ViReal64 randomValue = 180864.77 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT;
	ViReal64 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_LOWER_LIMIT;
	ViReal64 ViolationValue = 500001 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT ;
	ViReal64 defaultValue = 1000 ;	
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_FSK));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT ;
	ViReal64 CloseminimumValue = 1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT ;
	ViReal64 ClosemaximumValue = 5e5 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT ;
	 
	ViReal64 randomValue = 152253.32 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT;
	ViReal64 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_LOWER_LIMIT;
	ViReal64 ViolationValue = 500001 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT ;
	ViReal64 defaultValue = 1000 ;	
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_FM));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT ;
	ViReal64 CloseminimumValue = 1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT ;
	ViReal64 ClosemaximumValue = 5e5 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT ;
	 
	ViReal64 randomValue = 448621.33 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT;
	ViReal64 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FM_FREQUENCY_DEVIATION_UPPER_LIMIT;
	ViReal64 ViolationValue = 500001 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT ;
	ViReal64 defaultValue = 1000 ;	
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_FSK));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT ;
	ViReal64 CloseminimumValue = 1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT ;
	ViReal64 ClosemaximumValue = 5e5 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT ;
	 
	ViReal64 randomValue = 481172.38 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT;
	ViReal64 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_FSK_FREQUENCY_DEVIATION_UPPER_LIMIT;
	ViReal64 ViolationValue = 500001 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT ;
	ViReal64 defaultValue = 100 ;	
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_AM));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT ;
	ViReal64 CloseminimumValue = 0.1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT ;
	ViReal64 ClosemaximumValue = 100 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT ;
	 
	ViReal64 randomValue = 9.86 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT;
	ViReal64 ViolationValue = -0.9 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEPTH_UPPER_LIMIT;
	ViReal64 ViolationValue = 101 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT ;
	ViReal64 defaultValue = 100 ;	
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_ASK));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT ;
	ViReal64 CloseminimumValue = 0.1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT ;
	ViReal64 ClosemaximumValue = 100 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT ;
	 
	ViReal64 randomValue = 31.30 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT;
	ViReal64 ViolationValue = -0.9 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEPTH_UPPER_LIMIT;
	ViReal64 ViolationValue = 101 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT ;
	ViReal64 defaultValue = 100 ;	
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_AM));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT ;
	ViReal64 CloseminimumValue = 0.1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT ;
	ViReal64 ClosemaximumValue = 100 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT ;
	 
	ViReal64 randomValue = 87.50 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT;
	ViReal64 ViolationValue = -0.9 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_DEPTH_LOWER_LIMIT;
	ViReal64 ViolationValue = 101 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT ;
	ViReal64 defaultValue = 100 ;	
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_ASK));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT ;
	ViReal64 CloseminimumValue = 0.1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT ;
	ViReal64 ClosemaximumValue = 100 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT ;
	 
	ViReal64 randomValue = 75.53 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT;
	ViReal64 ViolationValue = -0.9 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_DEPTH_LOWER_LIMIT;
	ViReal64 ViolationValue = 101 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_AM));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT ;
	ViReal64 CloseminimumValue = -100 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT ;
	ViReal64 ClosemaximumValue = 30 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT ;
	 
	ViReal64 randomValue = 21.22 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT;
	ViReal64 ViolationValue = -101 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_CARRIER_POWER_UPPER_LIMIT;
	ViReal64 ViolationValue = 31 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_ASK));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT ;
	ViReal64 CloseminimumValue = -100 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT ;
	ViReal64 ClosemaximumValue = 30 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT ;
	 
	ViReal64 randomValue = -66.62 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT;
	ViReal64 ViolationValue = -101 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_CARRIER_POWER_UPPER_LIMIT;
	ViReal64 ViolationValue = 31 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_LIMIT_STATE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_LIMIT_STATE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_AM));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_LIMIT_STATE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_LIMIT_STATE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_ASK));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER ;
	ViInt32 defaultValue = AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_AUTO ;	
	ViInt32 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_AM));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER ;
	ViInt32 discreteValue = AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_AUTO ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER ;
	ViInt32 discreteValue = AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER ;
	ViInt32 discreteValue = AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW6 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER_DiscreteValue_ReadWrite_NullChannel_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER ;
	ViInt32 discreteValue = AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW20 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER_DiscreteValue_ReadWrite_NullChannel_Index5()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER ;
	ViInt32 discreteValue = AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW60 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER_DiscreteValue_ReadWrite_NullChannel_Index6()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER ;
	ViInt32 discreteValue = AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW200 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER_DiscreteValue_ReadWrite_NullChannel_Index7()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER ;
	ViInt32 discreteValue = AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW600 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER_DiscreteValue_ReadWrite_NullChannel_Index8()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_EQUAL_LOW_PASS_FILTER ;
	ViInt32 discreteValue = AGN934XNI_VAL_EQUAL_LOW_PASS_FILTER_IFBW2000 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_AUTO_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_AUTO ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	ViReal64 defaultValue = 1200000 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Coerced Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_Coerced_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	ViReal64 CloseminimumValue = -1e100 ;	
	ViReal64 CoercedValue = 60000 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
					
/****************************************************************************
 * Coerced Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/							
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_Coerced_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	 
	ViReal64 randomValue = -7506335494443877297891735245777802146564002783127779971380430080523022750059273960319440591737847808.00 ;	
	ViReal64 CoercedValue = 60000 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
			
/****************************************************************************
 * Coerced Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_Coerced_CloseminimumValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	ViReal64 CloseminimumValue = 78000 ;	
	ViReal64 CoercedValue = 96000 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
					
/****************************************************************************
 * Coerced Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/							
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_Coerced_RandomValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	 
	ViReal64 randomValue = 101390.71 ;	
	ViReal64 CoercedValue = 96000 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
			
/****************************************************************************
 * Coerced Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_Coerced_CloseminimumValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	ViReal64 CloseminimumValue = 108000 ;	
	ViReal64 CoercedValue = 120000 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
					
/****************************************************************************
 * Coerced Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/							
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_Coerced_RandomValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	 
	ViReal64 randomValue = 170458.28 ;	
	ViReal64 CoercedValue = 120000 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
			
/****************************************************************************
 * Coerced Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_Coerced_CloseminimumValue_ReadWrite_NullChannel_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	ViReal64 CloseminimumValue = 180000 ;	
	ViReal64 CoercedValue = 240000 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
					
/****************************************************************************
 * Coerced Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/							
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_Coerced_RandomValue_ReadWrite_NullChannel_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	 
	ViReal64 randomValue = 234927.57 ;	
	ViReal64 CoercedValue = 240000 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
			
/****************************************************************************
 * Coerced Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_Coerced_CloseminimumValue_ReadWrite_NullChannel_Index5()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	ViReal64 CloseminimumValue = 270000 ;	
	ViReal64 CoercedValue = 300000 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
					
/****************************************************************************
 * Coerced Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/							
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_Coerced_RandomValue_ReadWrite_NullChannel_Index5()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	 
	ViReal64 randomValue = 352156.54 ;	
	ViReal64 CoercedValue = 300000 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
			
/****************************************************************************
 * Coerced Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_Coerced_CloseminimumValue_ReadWrite_NullChannel_Index6()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	ViReal64 CloseminimumValue = 390000 ;	
	ViReal64 CoercedValue = 480000 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
					
/****************************************************************************
 * Coerced Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/							
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_Coerced_RandomValue_ReadWrite_NullChannel_Index6()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	 
	ViReal64 randomValue = 428749.20 ;	
	ViReal64 CoercedValue = 480000 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
			
/****************************************************************************
 * Coerced Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_Coerced_CloseminimumValue_ReadWrite_NullChannel_Index7()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	ViReal64 CloseminimumValue = 540000 ;	
	ViReal64 CoercedValue = 600000 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
					
/****************************************************************************
 * Coerced Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/							
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_Coerced_RandomValue_ReadWrite_NullChannel_Index7()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	 
	ViReal64 randomValue = 716379.57 ;	
	ViReal64 CoercedValue = 600000 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
			
/****************************************************************************
 * Coerced Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_Coerced_CloseminimumValue_ReadWrite_NullChannel_Index8()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	ViReal64 CloseminimumValue = 780000 ;	
	ViReal64 CoercedValue = 960000 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
					
/****************************************************************************
 * Coerced Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/							
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_Coerced_RandomValue_ReadWrite_NullChannel_Index8()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	 
	ViReal64 randomValue = 1002856.28 ;	
	ViReal64 CoercedValue = 960000 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
			
/****************************************************************************
 * Coerced Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_Coerced_CloseminimumValue_ReadWrite_NullChannel_Index9()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	ViReal64 CloseminimumValue = 1080000 ;	
	ViReal64 CoercedValue = 1200000 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
					
/****************************************************************************
 * Coerced Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/							
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_IF_BANDWIDTH_Coerced_RandomValue_ReadWrite_NullChannel_Index9()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_IF_BANDWIDTH ;
	 
	ViReal64 randomValue = 6423629047000942808996750473162839463721458293640918341268250495301573025815069983089023444043431936.00 ;	
	ViReal64 CoercedValue = 1200000 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DETECTOR_PEAK_HOLD_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DETECTOR_PEAK_HOLD_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DETECTOR_TYPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DETECTOR_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_POSITIVE_PEAK ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DETECTOR_TYPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_POSITIVE_PEAK ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DETECTOR_TYPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_NEGATIVE_PEAK ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DETECTOR_TYPE_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_AVERAGE_PEAK ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_DETECTOR_TYPE_DiscreteValue_ReadWrite_NullChannel_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_DETECTOR_TYPE_RMS ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_AVERAGE_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_AVERAGE_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_AVERAGE_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_AVERAGE_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;
	
	ViInt32    oldTimeout = 0;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_ASK));

//	CPPUNIT_ASSERT (VI_SUCCESS == viGetAttribute(vi, VI_ATTR_TMO_VALUE, &oldTimeout));
//	CPPUNIT_ASSERT (VI_SUCCESS == viSetAttribute (vi, VI_ATTR_TMO_VALUE, 5000));

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
//	CPPUNIT_ASSERT (VI_SUCCESS == viSetAttribute (vi, VI_ATTR_TMO_VALUE, oldTimeout));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_AVERAGE_COUNT_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_AVERAGE_COUNT ;
	ViInt32 defaultValue = 10 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_AVERAGE_COUNT_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_AVERAGE_COUNT ;
	ViInt32 CloseminimumValue = 1 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( CloseminimumValue == returnValue );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_AVERAGE_COUNT_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_AVERAGE_COUNT ;
	ViInt32 ClosemaximumValue = 100 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( ClosemaximumValue == returnValue );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_AVERAGE_COUNT_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_AVERAGE_COUNT ;
	 
	ViInt32 randomValue = 60 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( randomValue == returnValue );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_AVERAGE_COUNT_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_AVERAGE_COUNT;
	ViInt32 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AM_FM_AVERAGE_COUNT_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AM_FM_AVERAGE_COUNT;
	ViInt32 ViolationValue = 101 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT ;
	ViInt32 defaultValue = 10 ;	
	ViInt32 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_DEMODULATION));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_DEMODULATION_MODE, 0, AGN934XNI_VAL_DEMODULATION_MODE_ASK));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT ;
	ViInt32 CloseminimumValue = 1 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( CloseminimumValue == returnValue );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT ;
	ViInt32 ClosemaximumValue = 100 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( ClosemaximumValue == returnValue );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT ;
	 
	ViInt32 randomValue = 45 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( randomValue == returnValue );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT;
	ViInt32 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ASK_FSK_AVERAGE_COUNT;
	ViInt32 ViolationValue = 101 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_EXTERNAL_GAIN_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_EXTERNAL_GAIN ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_EXTERNAL_GAIN_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_EXTERNAL_GAIN ;
	ViReal64 CloseminimumValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_EXTERNAL_GAIN_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_EXTERNAL_GAIN ;
	ViReal64 ClosemaximumValue = 51 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_EXTERNAL_GAIN_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_EXTERNAL_GAIN ;
	 
	ViReal64 randomValue = 3.82 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_EXTERNAL_GAIN_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_EXTERNAL_GAIN;
	ViReal64 ViolationValue = -1 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_EXTERNAL_GAIN_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_EXTERNAL_GAIN;
	ViReal64 ViolationValue = 52 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_PREAMPLIFIER_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_PREAMPLIFIER_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_AUTO_CARRIER_FREQUENCY_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AUTO_CARRIER_FREQUENCY_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CARRIER_FREQUENCY_STEP_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_CARRIER_FREQUENCY_STEP ;
	ViReal64 defaultValue = 1e8 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CARRIER_FREQUENCY_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_CARRIER_FREQUENCY ;
	ViReal64 defaultValue = 3.5e9 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CARRIER_FREQUENCY_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CARRIER_FREQUENCY ;
	ViReal64 CloseminimumValue = 2.5e6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CARRIER_FREQUENCY_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CARRIER_FREQUENCY ;
	ViReal64 ClosemaximumValue = 7e9 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CARRIER_FREQUENCY_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CARRIER_FREQUENCY ;
	 
	ViReal64 randomValue = 4111135457.27 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	//CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e3 );	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, randomValue/10e3 );
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CARRIER_FREQUENCY_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CARRIER_FREQUENCY;
	ViReal64 ViolationValue = 2.499999E6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CARRIER_FREQUENCY_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CARRIER_FREQUENCY;
	ViReal64 ViolationValue = 7.000000001E9 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_DEMODULATION_MODE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_DEMODULATION_MODE ;
	ViInt32 defaultValue = AGN934XNI_VAL_DEMODULATION_MODE_AM ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_DEMODULATION_MODE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_DEMODULATION_MODE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_MODE_AM ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_DEMODULATION_MODE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_DEMODULATION_MODE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_MODE_FM ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_DEMODULATION_MODE_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_DEMODULATION_MODE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_MODE_ASK ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_DEMODULATION_MODE_DiscreteValue_ReadWrite_NullChannel_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_DEMODULATION_MODE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_MODE_FSK ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_DEMODULATION_MODE_DiscreteValue_ReadWrite_NullChannel_Index5()
{
	ViAttr attributeId = AGN934XNI_ATTR_DEMODULATION_MODE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DEMODULATION_MODE_NULL ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
			
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_FAIL_LOG_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_SEM_FAIL_LOG_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, AGN934XNI_VAL_MEASUREMENT_TYPE_SEM));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_FAIL_HOLD_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_SEM_FAIL_HOLD_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, AGN934XNI_VAL_MEASUREMENT_TYPE_SEM));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_FAIL_BEEP_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_SEM_FAIL_BEEP_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_MEASUREMENT_TYPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_SEM_MEASUREMENT_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_SEM_MEASUREMENT_TYPE_TOTAL_POWER_REFERENCE ;	
	ViInt32 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, AGN934XNI_VAL_MEASUREMENT_TYPE_SEM));

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_MEASUREMENT_TYPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_MEASUREMENT_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_SEM_MEASUREMENT_TYPE_TOTAL_POWER_REFERENCE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_MEASUREMENT_TYPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_MEASUREMENT_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_SEM_MEASUREMENT_TYPE_PSD_REFERENCE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			


/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_CENTER_FREQUENCY_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_SEM_CENTER_FREQUENCY ;
	ViReal64 defaultValue = 1.5e9 ;	
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, AGN934XNI_VAL_MEASUREMENT_TYPE_SEM));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_CENTER_FREQUENCY_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_CENTER_FREQUENCY ;
	ViReal64 CloseminimumValue = 1.25e7 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_CENTER_FREQUENCY_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_CENTER_FREQUENCY ;
	ViReal64 ClosemaximumValue = 7.0375e9 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_CENTER_FREQUENCY_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_CENTER_FREQUENCY ;
	 
	ViReal64 randomValue = 5300034306.50 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_CENTER_FREQUENCY_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_CENTER_FREQUENCY;
	ViReal64 ViolationValue = 1.2499999E7 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_CENTER_FREQUENCY_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_CENTER_FREQUENCY;
	ViReal64 ViolationValue = 7.037500001E9 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_CHANNEL_SPAN_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_SEM_CHANNEL_SPAN ;
	ViReal64 defaultValue = 1000 ;	
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, AGN934XNI_VAL_MEASUREMENT_TYPE_SEM));


	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_CHANNEL_SPAN_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_CHANNEL_SPAN ;
	ViReal64 CloseminimumValue = 100 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_CHANNEL_SPAN_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_CHANNEL_SPAN ;
	ViReal64 ClosemaximumValue = 5e7 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_CHANNEL_SPAN_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_CHANNEL_SPAN ;
	 
	ViReal64 randomValue = 21943675.09 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_CHANNEL_SPAN_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_CHANNEL_SPAN;
	ViReal64 ViolationValue = 99 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_CHANNEL_SPAN_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_CHANNEL_SPAN;
	ViReal64 ViolationValue = 5.0000001E7 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_AUTO_TOTAL_POWER_REFERENCE_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_SEM_AUTO_TOTAL_POWER_REFERENCE_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE ;
	ViReal64 defaultValue = -52.34 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE ;
	ViReal64 CloseminimumValue = -200 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE ;
	ViReal64 ClosemaximumValue = 200 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE ;
	 
	ViReal64 randomValue = -83.02 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE;
	ViReal64 ViolationValue = -201 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_TOTAL_POWER_REFERENCE;
	ViReal64 ViolationValue = 201 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_AUTO_RESOLUTION_BANDWIDTH_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_SEM_AUTO_RESOLUTION_BANDWIDTH_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH ;
	ViReal64 defaultValue = 3e4 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH ;
	ViReal64 CloseminimumValue = 10 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH ;
	ViReal64 ClosemaximumValue = 3e6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH ;
	 
	ViReal64 randomValue = 1954792.58 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH;
	ViReal64 ViolationValue = 9 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_RESOLUTION_BANDWIDTH;
	ViReal64 ViolationValue = 3.000001E6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH ;
	ViReal64 defaultValue = 3.84e6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH ;
	ViReal64 CloseminimumValue = 100 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH ;
	ViReal64 ClosemaximumValue = 5e6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH ;
	 
	ViReal64 randomValue = 3192689.76 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH;
	ViReal64 ViolationValue = 99 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_CHANNEL_INTEGRATE_BANDWIDTH;
	ViReal64 ViolationValue = 5.000001E6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_AVERAGE_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_SEM_AVERAGE_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_AVERAGE_NUMBER_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_SEM_AVERAGE_NUMBER ;
	ViInt32 defaultValue = 10 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_AVERAGE_NUMBER_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_AVERAGE_NUMBER ;
	ViInt32 CloseminimumValue = 1 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( CloseminimumValue == returnValue );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_AVERAGE_NUMBER_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_AVERAGE_NUMBER ;
	ViInt32 ClosemaximumValue = 1000 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( ClosemaximumValue == returnValue );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_AVERAGE_NUMBER_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_AVERAGE_NUMBER ;
	 
	ViInt32 randomValue = 727 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( randomValue == returnValue );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_AVERAGE_NUMBER_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_AVERAGE_NUMBER;
	ViInt32 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_SEM_AVERAGE_NUMBER_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SEM_AVERAGE_NUMBER;
	ViInt32 ViolationValue = 1001 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_POWERMETER));

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, 1 / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE ;
	ViReal64 CloseminimumValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE ;
	ViReal64 ClosemaximumValue = 3 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE ;
	 
	ViReal64 randomValue = 1.96 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE;
	ViReal64 ViolationValue = -1 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_HYSTERESIS_VALUE;
	ViReal64 ViolationValue = 4 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME ;
	ViReal64 defaultValue = 1e-6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME ;
	ViReal64 CloseminimumValue = 1e-6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME ;
	ViReal64 ClosemaximumValue = 0.4 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME ;
	 
	ViReal64 randomValue = 0.18 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME;
	ViReal64 ViolationValue = -0.999999 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_HOLDOFF_TIME;
	ViReal64 ViolationValue = 1.4 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_SLOPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_SLOPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_POWER_METER_TRIGGER_SLOPE_POSITIVE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_SLOPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_SLOPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_POWER_METER_TRIGGER_SLOPE_NEGATIVE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_SLOPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_SLOPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_POWER_METER_TRIGGER_SLOPE_POSITIVE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME ;
	ViReal64 CloseminimumValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME ;
	ViReal64 ClosemaximumValue = 1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME ;
	 
	ViReal64 randomValue = 0.99 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME;
	ViReal64 ViolationValue = -1 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_DELAY_TIME;
	ViReal64 ViolationValue = 2 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL ;
	ViReal64 CloseminimumValue = -100 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL ;
	ViReal64 ClosemaximumValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL ;
	 
	ViReal64 randomValue = -82.11 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL;
	ViReal64 ViolationValue = -101 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_LEVEL;
	ViReal64 ViolationValue = 1 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_AUTO_TRIGGER_LEVEL_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_AUTO_TRIGGER_LEVEL_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_SOURCE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_SOURCE ;
	ViInt32 defaultValue = AGN934XNI_VAL_POWER_METER_TRIGGER_SOURCE_INTERNAL ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_SOURCE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_SOURCE ;
	ViInt32 discreteValue = AGN934XNI_VAL_POWER_METER_TRIGGER_SOURCE_EXTERNAL ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_SOURCE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_SOURCE ;
	ViInt32 discreteValue = AGN934XNI_VAL_POWER_METER_TRIGGER_SOURCE_INTERNAL ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_TYPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_POWER_METER_TRIGGER_TYPE_FREERUN ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_TYPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_POWER_METER_TRIGGER_TYPE_FREERUN ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_TYPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_POWER_METER_TRIGGER_TYPE_CONTINUOUS ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRIGGER_TYPE_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRIGGER_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_POWER_METER_TRIGGER_TYPE_SINGLE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_LIMIT_BEEP_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_LIMIT_BEEP_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE ;
	ViReal64 defaultValue = -60 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE ;
	ViReal64 CloseminimumValue = -200 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE ;
	ViReal64 ClosemaximumValue = 199.99 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE ;
	 
	ViReal64 randomValue = 116.26 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE;
	ViReal64 ViolationValue = -201 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_LIMIT_LOWER_VALUE;
	ViReal64 ViolationValue = 200.99 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE ;
	ViReal64 defaultValue = 10 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE ;
	ViReal64 CloseminimumValue = -199.99 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE ;
	ViReal64 ClosemaximumValue = 200 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE ;
	 
	ViReal64 randomValue = -28.30 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE;
	ViReal64 ViolationValue = -200.99 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_LIMIT_UPPER_VALUE;
	ViReal64 ViolationValue = 201 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_LIMIT_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_LIMIT_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME ;
	ViReal64 defaultValue = 1e-4 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME ;
	ViReal64 CloseminimumValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME ;
	ViReal64 ClosemaximumValue = 1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME ;
	 
	ViReal64 randomValue = 0.67 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME;
	ViReal64 ViolationValue = -1 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_GATE_LENGTH_TIME;
	ViReal64 ViolationValue = 2 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_GATE_START_TIME_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_GATE_START_TIME ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_GATE_START_TIME_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_GATE_START_TIME ;
	ViReal64 CloseminimumValue = -1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_GATE_START_TIME_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_GATE_START_TIME ;
	ViReal64 ClosemaximumValue = 1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_GATE_START_TIME_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_GATE_START_TIME ;
	 
	ViReal64 randomValue = 0.83 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_GATE_START_TIME_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_GATE_START_TIME;
	ViReal64 ViolationValue = -2 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_GATE_START_TIME_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_GATE_START_TIME;
	ViReal64 ViolationValue = 2 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE ;
	ViReal64 defaultValue = 10 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE ;
	ViReal64 CloseminimumValue = 1e-3 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE ;
	ViReal64 ClosemaximumValue = 10 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE ;
	 
	ViReal64 randomValue = 1.36 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE;
	ViReal64 ViolationValue = -0.999 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_Y_SCALE_VALUE;
	ViReal64 ViolationValue = 11 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE ;
	ViReal64 defaultValue = 230 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE ;
	ViReal64 CloseminimumValue = -150 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE ;
	ViReal64 ClosemaximumValue = 230 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE ;
	 
	ViReal64 randomValue = -145.83 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE;
	ViReal64 ViolationValue = -151 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_Y_MAX_VALUE;
	ViReal64 ViolationValue = 231 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME ;
	ViReal64 defaultValue = 1e-5 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME ;
	ViReal64 CloseminimumValue = 2e-8 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME ;
	ViReal64 ClosemaximumValue = 0.1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME ;
	 
	ViReal64 randomValue = 0.05 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME;
	ViReal64 ViolationValue = -0.99999998 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_X_SCALE_TIME;
	ViReal64 ViolationValue = 1.1 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME ;
	ViReal64 CloseminimumValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME ;
	ViReal64 ClosemaximumValue = 1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME ;
	 
	ViReal64 randomValue = 0.01 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME;
	ViReal64 ViolationValue = -1 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_TRACE_X_START_TIME;
	ViReal64 ViolationValue = 2 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT ;
	ViInt32 defaultValue = 4 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT ;
	ViInt32 CloseminimumValue = 1 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( CloseminimumValue == returnValue );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT ;
	ViInt32 ClosemaximumValue = 256 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( ClosemaximumValue == returnValue );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT ;
	 
	ViInt32 randomValue = 245 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( randomValue == returnValue );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT;
	ViInt32 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_VIDEO_AVERAGE_COUNT;
	ViInt32 ViolationValue = 257 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_AUTO_VIDEO_AVERAGE_COUNT_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_AUTO_VIDEO_AVERAGE_COUNT_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_POWER_METER_VIDEO_BANDWIDTH_TYPE_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_POWER_METER_VIDEO_BANDWIDTH_TYPE_HIGH ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_POWER_METER_VIDEO_BANDWIDTH_TYPE_MEDIUM ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_POWER_METER_VIDEO_BANDWIDTH_TYPE_LOW ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE_DiscreteValue_ReadWrite_NullChannel_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_VIDEO_BANDWIDTH_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_POWER_METER_VIDEO_BANDWIDTH_TYPE_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME ;
	ViReal64 defaultValue = 0.1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME ;
	ViReal64 CloseminimumValue = 1e-3 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME ;
	ViReal64 ClosemaximumValue = 200 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME ;
	 
	ViReal64 randomValue = 5.36 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME;
	ViReal64 ViolationValue = -0.999 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_MEASUREMENT_INTERVAL_TIME;
	ViReal64 ViolationValue = 201 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_AVERAGE_STEP_DETECT_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_AVERAGE_STEP_DETECT_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_AUTO_AVERAGE_COUNT_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_AUTO_AVERAGE_COUNT_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER ;
	ViInt32 defaultValue = 1024 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER ;
	ViInt32 CloseminimumValue = 1 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( CloseminimumValue == returnValue );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER ;
	ViInt32 ClosemaximumValue = 1024 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( ClosemaximumValue == returnValue );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER ;
	 
	ViInt32 randomValue = 587 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( randomValue == returnValue );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER;
	ViInt32 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_AVERAGE_COUNT_NUMBER;
	ViInt32 ViolationValue = 1025 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_AVERAGE_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_AVERAGE_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_OFFSET_VALUE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_OFFSET_VALUE ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_OFFSET_VALUE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_OFFSET_VALUE ;
	ViReal64 CloseminimumValue = -200 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_OFFSET_VALUE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_OFFSET_VALUE ;
	ViReal64 ClosemaximumValue = 200 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_OFFSET_VALUE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_OFFSET_VALUE ;
	 
	ViReal64 randomValue = 187.59 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_OFFSET_VALUE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_OFFSET_VALUE;
	ViReal64 ViolationValue = -201 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_OFFSET_VALUE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_OFFSET_VALUE;
	ViReal64 ViolationValue = 201 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_OFFSET_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_OFFSET_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE ;
	ViReal64 CloseminimumValue = -200 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE ;
	ViReal64 ClosemaximumValue = 200 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE ;
	 
	ViReal64 randomValue = -68.74 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE;
	ViReal64 ViolationValue = -201 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_VALUE;
	ViReal64 ViolationValue = 201 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_REFERENCE_POWER_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY ;
	ViReal64 defaultValue = 5e7 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY ;
	ViReal64 CloseminimumValue = 1e3 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY ;
	ViReal64 ClosemaximumValue = 9e10 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY ;
	 
	ViReal64 randomValue = 40666069147.70 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY;
	ViReal64 ViolationValue = 999 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_CENTER_FREQUENCY;
	ViReal64 ViolationValue = 9.0000000001E10 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_AUTO_POWER_RANGE_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_AUTO_POWER_RANGE_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_POWER_RANGE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_POWER_RANGE ;
	ViInt32 defaultValue = AGN934XNI_VAL_POWER_METER_POWER_RANGE_LOWER ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_POWER_RANGE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_POWER_RANGE ;
	ViInt32 discreteValue = AGN934XNI_VAL_POWER_METER_POWER_RANGE_UPPER ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_POWER_RANGE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_POWER_RANGE ;
	ViInt32 discreteValue = AGN934XNI_VAL_POWER_METER_POWER_RANGE_LOWER ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_SWEEP_STATE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_SWEEP_STATE ;
	ViInt32 defaultValue = AGN934XNI_VAL_POWER_METER_SWEEP_STATE_RUN ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_SWEEP_STATE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_SWEEP_STATE ;
	ViInt32 discreteValue = AGN934XNI_VAL_POWER_METER_SWEEP_STATE_RUN ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_SWEEP_STATE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_SWEEP_STATE ;
	ViInt32 discreteValue = AGN934XNI_VAL_POWER_METER_SWEEP_STATE_PAUSE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_ZEROING_TYPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_ZEROING_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_ZEROING_TYPE_INTERNAL ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_ZEROING_TYPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_ZEROING_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_ZEROING_TYPE_EXTERNAL ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_POWER_METER_ZEROING_TYPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_POWER_METER_ZEROING_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_ZEROING_TYPE_INTERNAL ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE ;
	ViReal64 defaultValue = 80 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "1", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "1", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE_CloseminimumValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE ;
	ViReal64 CloseminimumValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "1", attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "1", attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE_ClosemaximumValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE ;
	ViReal64 ClosemaximumValue = 100 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "1", attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "1", attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE_RandomValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE ;
	 
	ViReal64 randomValue = 9.42 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "1", attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "1", attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE_ViolationMinValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE;
	ViReal64 ViolationValue = -1 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, "1", attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE_ViolationMaxValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE;
	ViReal64 ViolationValue = 101 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, "1", attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE ;
	ViReal64 defaultValue = 80 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "2", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "2", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE_CloseminimumValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE ;
	ViReal64 CloseminimumValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "2", attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "2", attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE_ClosemaximumValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE ;
	ViReal64 ClosemaximumValue = 100 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "2", attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "2", attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE_RandomValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE ;
	 
	ViReal64 randomValue = 88.59 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "2", attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "2", attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE_ViolationMinValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE;
	ViReal64 ViolationValue = -1 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, "2", attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE_ViolationMaxValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_VALUE;
	ViReal64 ViolationValue = 101 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, "2", attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_ENABLE_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "1", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "1", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "1", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "1", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_ENABLE_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_THRESHOLD_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "2", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "2", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "2", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "2", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "1", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "1", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE_CloseminimumValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE ;
	ViReal64 CloseminimumValue = -200 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "1", attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "1", attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE_ClosemaximumValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE ;
	ViReal64 ClosemaximumValue = 200 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "1", attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "1", attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE_RandomValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE ;
	 
	ViReal64 randomValue = 135.92 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "1", attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "1", attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE_ViolationMinValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE;
	ViReal64 ViolationValue = -201 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, "1", attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE_ViolationMaxValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE;
	ViReal64 ViolationValue = 201 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, "1", attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "2", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "2", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE_CloseminimumValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE ;
	ViReal64 CloseminimumValue = -200 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "2", attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "2", attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE_ClosemaximumValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE ;
	ViReal64 ClosemaximumValue = 200 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "2", attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "2", attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE_RandomValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE ;
	 
	ViReal64 randomValue = 100.58 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "2", attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "2", attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE_ViolationMinValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE;
	ViReal64 ViolationValue = -201 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, "2", attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE_ViolationMaxValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_MARGIN_VALUE;
	ViReal64 ViolationValue = 201 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, "2", attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_MARGIN_ENABLE_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_MARGIN_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "1", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "1", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "1", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "1", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_MARGIN_ENABLE_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_MARGIN_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "2", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "2", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "2", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "2", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_BEEP_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_BEEP_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

	
/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_MARKER_CONTINUOUS_VALLEY_ENABLE_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_MARKER_CONTINUOUS_VALLEY_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "1", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "1", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "1", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "1", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_MARKER_CONTINUOUS_VALLEY_ENABLE_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_MARKER_CONTINUOUS_VALLEY_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "2", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "2", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "2", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "2", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER ;
	ViInt32 defaultValue = 1 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER ;
	ViInt32 CloseminimumValue = 1 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( CloseminimumValue == returnValue );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER ;
	ViInt32 ClosemaximumValue = 8192 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( ClosemaximumValue == returnValue );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER ;
	 
	ViInt32 randomValue = 6789 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( randomValue == returnValue );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER;
	ViInt32 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_AVERAGE_NUMBER;
	ViInt32 ViolationValue = 8193 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_ADD ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_SUB ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_DiscreteValue_ReadWrite_NullChannel_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_MATH_TYPE_DIV ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_DISPLAY_TYPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_DISPLAY_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_TYPE_DATA ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_DISPLAY_TYPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_DISPLAY_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_TYPE_DATA ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_DISPLAY_TYPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_DISPLAY_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_TYPE_MEM ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_DISPLAY_TYPE_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TRACE_DISPLAY_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_TRACE_TYPE_BOTH ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION ;
	ViReal64 defaultValue = 0.1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION ;
	ViReal64 CloseminimumValue = 0.1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION ;
	ViReal64 ClosemaximumValue = 10 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION ;
	 
	ViReal64 randomValue = 4.63 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION;
	ViReal64 ViolationValue = -0.9 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_PER_DIVISION;
	ViReal64 ViolationValue = 11 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL ;
	ViReal64 defaultValue = 1.05 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL ;
	ViReal64 CloseminimumValue = 1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL ;
	ViReal64 ClosemaximumValue = 60 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL ;
	 
	ViReal64 randomValue = 35.42 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL;
	ViReal64 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_AMPLITUDE_SCALE_REFERENCE_LEVEL;
	ViReal64 ViolationValue = 61 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_DTF_FREQUENCY_DOMAIN_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DTF_FREQUENCY_DOMAIN_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_UNIT_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_UNIT ;
	ViInt32 defaultValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISTANCE_UNIT_METERS ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_UNIT_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_UNIT ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISTANCE_UNIT_METERS ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_UNIT_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_UNIT ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_DISTANCE_UNIT_FEET ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_STOP_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_STOP ;
	ViReal64 defaultValue = 0.15 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_START_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_DISTANCE_START ;
	ViReal64 defaultValue = 0.12 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN ;
	ViReal64 defaultValue = 9.95e8 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN ;
	ViReal64 CloseminimumValue = 4.6e7 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN ;
	ViReal64 ClosemaximumValue = 6.995e9 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN ;
	 
	ViReal64 randomValue = 1071839532.79 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN;
	ViReal64 ViolationValue = 4.5999999E7 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_FREQUENCY_SPAN;
	ViReal64 ViolationValue = 6.995000001E9 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY ;
	ViReal64 defaultValue = 5.025e8 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY ;
	ViReal64 CloseminimumValue = 5e6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY ;
	ViReal64 ClosemaximumValue = 7e9 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY ;
	 
	ViReal64 randomValue = 79323948.83 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY;
	ViReal64 ViolationValue = 4.999999E6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CENTER_FREQUENCY;
	ViReal64 ViolationValue = 7.000000001E9 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY ;
	ViReal64 defaultValue = 1e9 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY ;
	ViReal64 CloseminimumValue = 5e6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY ;
	ViReal64 ClosemaximumValue = 7e9 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY ;
	 
	ViReal64 randomValue = 3834212396.96 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY;
	ViReal64 ViolationValue = 4.999999E6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_STOP_FREQUENCY;
	ViReal64 ViolationValue = 7.000000001E9 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY ;
	ViReal64 defaultValue = 5e6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY ;
	ViReal64 CloseminimumValue = 5e6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY ;
	ViReal64 ClosemaximumValue = 7e9 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY ;
	 
	ViReal64 randomValue = 1076440323.20 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY;
	ViReal64 ViolationValue = 4.999999E6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_START_FREQUENCY;
	ViReal64 ViolationValue = 7.000000001E9 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW ;
	ViInt32 defaultValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_RECTANGULAR ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_HAMMING ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW_DiscreteValue_ReadWrite_NullChannel_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_3_SAMPLE_BLACKMAN ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW_DiscreteValue_ReadWrite_NullChannel_Index5()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_WINDOW ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_WINDOW_4_SAMPLE_BLACKMAN ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR ;
	ViReal64 defaultValue = 100 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR ;
	ViReal64 CloseminimumValue = 1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR ;
	ViReal64 ClosemaximumValue = 100 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR ;
	 
	ViReal64 randomValue = 99.75 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR;
	ViReal64 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_VELOCITY_FACTOR;
	ViReal64 ViolationValue = 101 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_ATTENUATION_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_ATTENUATION ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_TYPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_CUSTOM ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_TYPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_S1000 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_TYPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_S2000 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_TYPE_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_S2500 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_TYPE_DiscreteValue_ReadWrite_NullChannel_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CABLE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_CABLE_TYPE_CUSTOM ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_IIM_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_IIM_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CALIBRATION_TYPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CALIBRATION_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_CALIBRATION_TYPE_SELECTED ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CALIBRATION_TYPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CALIBRATION_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_CALIBRATION_TYPE_FULL ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_CALIBRATION_TYPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_CALIBRATION_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_CALIBRATION_TYPE_SELECTED ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TYPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_TYPE_DISTANCE_TO_FAULT ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TYPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_TYPE_REFLECTION_ONE_PORT_INSERTION_LOSS ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TYPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_TYPE_REFLECTION ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_REFLECTION_MEASUREMENT_TYPE_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFLECTION_MEASUREMENT_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_REFLECTION_MEASUREMENT_TYPE_DISTANCE_TO_FAULT ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE ;
	ViReal64 defaultValue = 0.22 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE ;
	ViReal64 CloseminimumValue = 0.01 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE ;
	ViReal64 ClosemaximumValue = 1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE ;
	 
	ViReal64 randomValue = 0.40 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE;
	ViReal64 ViolationValue = -0.99 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ACPR_RRC_FILTER_ALPHA_VALUE;
	ViReal64 ViolationValue = 2 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_ACPR_RRC_FILTER_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ACPR_RRC_FILTER_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH ;
	ViReal64 defaultValue = 2e6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH ;
	ViReal64 CloseminimumValue = 100 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH ;
	ViReal64 ClosemaximumValue = 1e8 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH ;
	 
	ViReal64 randomValue = 37884011.29 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH;
	ViReal64 ViolationValue = 99 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_RRC_FILTER_BANDWIDTH;
	ViReal64 ViolationValue = 1.00000001E8 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CHP_RRC_FILTER_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_CHP_RRC_FILTER_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE ;
	ViReal64 defaultValue = 0.22 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE ;
	ViReal64 CloseminimumValue = 0.01 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE ;
	ViReal64 ClosemaximumValue = 1 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE ;
	 
	ViReal64 randomValue = 0.66 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE;
	ViReal64 ViolationValue = -0.99 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_RRC_FILTER_ALPHA_VALUE;
	ViReal64 ViolationValue = 2 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_SOURCE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_GATE_SOURCE ;
	ViInt32 defaultValue = AGN934XNI_VAL_GATE_SOURCE_EXTERNAL ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_SOURCE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_GATE_SOURCE ;
	ViInt32 discreteValue = AGN934XNI_VAL_GATE_SOURCE_EXTERNAL ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_SOURCE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_GATE_SOURCE ;
	ViInt32 discreteValue = AGN934XNI_VAL_GATE_SOURCE_PERIODIC_TIMER ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_SOURCE_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_GATE_SOURCE ;
	ViInt32 discreteValue = AGN934XNI_VAL_GATE_SOURCE_RF_BURST ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_LENGTH_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_GATE_LENGTH ;
	ViReal64 defaultValue = 8.4e-5 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_LENGTH_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_GATE_LENGTH ;
	ViReal64 CloseminimumValue = 8.4e-5 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_LENGTH_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_GATE_LENGTH ;
	ViReal64 ClosemaximumValue = 10 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_LENGTH_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_GATE_LENGTH ;
	 
	ViReal64 randomValue = 8.04 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_LENGTH_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_GATE_LENGTH;
	ViReal64 ViolationValue = -0.999916 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_LENGTH_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_GATE_LENGTH;
	ViReal64 ViolationValue = 11 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_DELAY_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_GATE_DELAY ;
	ViReal64 defaultValue = 1.2e-5 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_DELAY_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_GATE_DELAY ;
	ViReal64 CloseminimumValue = 1.2e-5 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_DELAY_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_GATE_DELAY ;
	ViReal64 ClosemaximumValue = 10 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_DELAY_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_GATE_DELAY ;
	 
	ViReal64 randomValue = 0.59 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_DELAY_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_GATE_DELAY;
	ViReal64 ViolationValue = -0.999988 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_DELAY_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_GATE_DELAY;
	ViReal64 ViolationValue = 11 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME ;
	ViReal64 defaultValue = 1e-3 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME ;
	ViReal64 CloseminimumValue = 6e-7 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CloseminimumValue, returnValue, abs(CloseminimumValue) / 10e7 );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME ;
	ViReal64 ClosemaximumValue = 1000 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( ClosemaximumValue, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME ;
	 
	ViReal64 randomValue = 935.15 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( randomValue, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME;
	ViReal64 ViolationValue = -0.9999994 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_GATE_VIEW_SWEEP_TIME;
	ViReal64 ViolationValue = 1001 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATE_VIEW_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_GATE_VIEW_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverPowerMeterFunctionalityTest::testAGN934XNI_ATTR_GATED_SWEEP_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_GATED_SWEEP_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;	
	ViBoolean falseValue = VI_FALSE ;
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( trueValue == returnValue );	
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, VI_NULL, attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( falseValue == returnValue );		
	
}
			 	
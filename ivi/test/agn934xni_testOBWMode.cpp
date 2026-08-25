#include "string.h"
#include "math.h"
#include "agn934xni_testOBWMode.h"
#define AGN934XNI_ATTR_INSTR_MARKER_TRACE   (IVI_SPECIFIC_PRIVATE_ATTR_BASE + 9L) 

extern ViSession vi;	
extern void testClose();
extern ViRsrc instrName;
/****************************************************************************
 *------------------------------- Global Variable --------------------------*
 ****************************************************************************/

ViStatus testOBWInit()
{
	ViStatus error = VI_SUCCESS;

	checkErr(agn934xni_init (instrName,VI_TRUE,VI_FALSE,&vi));	
	
Error:
	return error;
}

void DriverOBWFunctionalityTest::setUp()
{
	testOBWInit();
}

void DriverOBWFunctionalityTest::tearDown()
{
	testClose();
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_NORMAILIZE_REFERENCE_POSITION_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_TG_NORMAILIZE_REFERENCE_POSITION ;
	ViInt32 defaultValue = 10 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_reset(vi));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_TRACKING_GENERATOR));
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_NORMAILIZE_REFERENCE_POSITION_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TG_NORMAILIZE_REFERENCE_POSITION ;
	ViInt32 CloseminimumValue = 0 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_NORMAILIZE_REFERENCE_POSITION_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TG_NORMAILIZE_REFERENCE_POSITION ;
	ViInt32 ClosemaximumValue = 10 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_NORMAILIZE_REFERENCE_POSITION_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TG_NORMAILIZE_REFERENCE_POSITION ;
	 
	ViInt32 randomValue = 5 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_NORMAILIZE_REFERENCE_POSITION_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TG_NORMAILIZE_REFERENCE_POSITION;
	ViInt32 ViolationValue = -1 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_NORMAILIZE_REFERENCE_POSITION_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TG_NORMAILIZE_REFERENCE_POSITION;
	ViInt32 ViolationValue = 11 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL ;
	ViReal64 CloseminimumValue = -327.6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( -327, returnValue, abs(CloseminimumValue) / 10e7);
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL ;
	ViReal64 ClosemaximumValue = 327.6 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
			
	CPPUNIT_ASSERT_DOUBLES_EQUAL( 327, returnValue, abs(ClosemaximumValue) / 10e7 );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/			
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL ;
	 
	ViReal64 randomValue = -278.90 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( -279, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL;
	ViReal64 ViolationValue = -328.6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TG_NORMALIZE_REFERENCE_LEVEL;
	ViReal64 ViolationValue = 328.6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_NORMALIZE_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_TG_NORMALIZE_ENABLE ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_OFFSET_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_OFFSET ;
	ViReal64 defaultValue = -20 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_STEP_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_STEP ;
	ViReal64 defaultValue = 2 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_ENABLE ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE ;
	ViReal64 defaultValue = -20 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_reset(vi));
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE ;
	ViReal64 CloseminimumValue = -30 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE ;
	 
	ViReal64 randomValue = -25.15 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
		
	CPPUNIT_ASSERT_DOUBLES_EQUAL( -25, returnValue, abs(randomValue) / 10e7 );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE;
	ViReal64 ViolationValue = -31 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TG_OUTPUT_AMPLITUDE;
	ViReal64 ViolationValue = 1 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_OBW_POWER_LEVEL_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_OBW_POWER_LEVEL ;
	ViReal64 defaultValue = 26 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_MEASUREMENT_TYPE, 0, AGN934XNI_VAL_MEASUREMENT_TYPE_OBW));
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_OBW_POWER_LEVEL_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_OBW_POWER_LEVEL ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_OBW_POWER_LEVEL_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_OBW_POWER_LEVEL ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_OBW_POWER_LEVEL_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_OBW_POWER_LEVEL ;
	 
	ViReal64 randomValue = 1.38 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_OBW_POWER_LEVEL_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_OBW_POWER_LEVEL;
	ViReal64 ViolationValue = -0.9 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_OBW_POWER_LEVEL_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_OBW_POWER_LEVEL;
	ViReal64 ViolationValue = 101 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_OBW_POWER_PERCENTAGE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_OBW_POWER_PERCENTAGE ;
	ViReal64 defaultValue = 99 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_OBW_POWER_PERCENTAGE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_OBW_POWER_PERCENTAGE ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_OBW_POWER_PERCENTAGE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_OBW_POWER_PERCENTAGE ;
	ViReal64 ClosemaximumValue = 99 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_OBW_POWER_PERCENTAGE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_OBW_POWER_PERCENTAGE ;
	 
	ViReal64 randomValue = 63.93 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_OBW_POWER_PERCENTAGE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_OBW_POWER_PERCENTAGE;
	ViReal64 ViolationValue = 9 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_OBW_POWER_PERCENTAGE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_OBW_POWER_PERCENTAGE;
	ViReal64 ViolationValue = 100 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_OBW_METHOD_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_OBW_METHOD ;
	ViInt32 defaultValue = AGN934XNI_VAL_OBW_METHOD_PERCENT ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_OBW_METHOD_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_OBW_METHOD ;
	ViInt32 discreteValue = AGN934XNI_VAL_OBW_METHOD_PERCENT ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_OBW_METHOD_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_OBW_METHOD ;
	ViInt32 discreteValue = AGN934XNI_VAL_OBW_METHOD_DBC ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_BOTTOM_RANGE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_CHP_BOTTOM_RANGE ;
	ViReal64 defaultValue = -70 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_BOTTOM_RANGE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_BOTTOM_RANGE ;
	ViReal64 CloseminimumValue = -140 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_BOTTOM_RANGE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_BOTTOM_RANGE ;
	ViReal64 ClosemaximumValue = 3.40e38 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_BOTTOM_RANGE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_BOTTOM_RANGE ;
	 
	ViReal64 randomValue = 220948786652880411082094617163819122688.00 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_BOTTOM_RANGE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_BOTTOM_RANGE;
	ViReal64 ViolationValue = -141 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_BOTTOM_RANGE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_BOTTOM_RANGE;
	ViReal64 ViolationValue = 3.4E38 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_TOP_RANGE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_CHP_TOP_RANGE ;
	ViReal64 defaultValue = -10 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_TOP_RANGE_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_TOP_RANGE ;
	ViReal64 CloseminimumValue = -3.40e38 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_TOP_RANGE_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_TOP_RANGE ;
	ViReal64 ClosemaximumValue = -10 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_TOP_RANGE_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_TOP_RANGE ;
	 
	ViReal64 randomValue = -67168490200984512786823557935525789696.00 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_TOP_RANGE_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_TOP_RANGE;
	ViReal64 ViolationValue = -3.4E38 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_TOP_RANGE_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_TOP_RANGE;
	ViReal64 ViolationValue = -9 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_AUTO_RANGE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_CHP_AUTO_RANGE ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_CHANNEL_SPAN_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_CHP_CHANNEL_SPAN ;
	ViReal64 defaultValue = 3e6 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_CHANNEL_SPAN_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_CHANNEL_SPAN ;
	ViReal64 CloseminimumValue = 1000 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_CHANNEL_SPAN_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_CHANNEL_SPAN ;
	ViReal64 ClosemaximumValue = 3.4e38 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_CHANNEL_SPAN_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_CHANNEL_SPAN ;
	 
	ViReal64 randomValue = 26320171055679896210937299719031881728.00 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_CHANNEL_SPAN_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_CHANNEL_SPAN;
	ViReal64 ViolationValue = 999 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_CHANNEL_SPAN_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_CHP_CHANNEL_SPAN;
	ViReal64 ViolationValue = 3.4E38 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_INTEGRATION_BANDWIDTH_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_CHP_INTEGRATION_BANDWIDTH ;
	ViReal64 defaultValue = 2e6 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_CHP_CENTER_FREQUENCY_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_CHP_CENTER_FREQUENCY ;
	ViReal64 defaultValue = 3.5e9 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_ACPR_MAIN_CHANNEL_INTERGRATION_BANDWIDTH_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ACPR_MAIN_CHANNEL_INTERGRATION_BANDWIDTH ;
	ViReal64 defaultValue = 1e6 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_ACPR_MAIN_CHANNEL_INTERGRATION_BANDWIDTH_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ACPR_MAIN_CHANNEL_INTERGRATION_BANDWIDTH ;
	ViReal64 CloseminimumValue = 300 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_ACPR_MAIN_CHANNEL_INTERGRATION_BANDWIDTH_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ACPR_MAIN_CHANNEL_INTERGRATION_BANDWIDTH ;
	ViReal64 ClosemaximumValue = 25e6 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_ACPR_MAIN_CHANNEL_INTERGRATION_BANDWIDTH_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ACPR_MAIN_CHANNEL_INTERGRATION_BANDWIDTH ;
	 
	ViReal64 randomValue = 11572742.79 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_ACPR_MAIN_CHANNEL_INTERGRATION_BANDWIDTH_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ACPR_MAIN_CHANNEL_INTERGRATION_BANDWIDTH;
	ViReal64 ViolationValue = 299 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_ACPR_MAIN_CHANNEL_INTERGRATION_BANDWIDTH_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_ACPR_MAIN_CHANNEL_INTERGRATION_BANDWIDTH;
	ViReal64 ViolationValue = 2.5000001E7 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_ACPR_CENTER_FREQUENCY_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ACPR_CENTER_FREQUENCY ;
	ViReal64 defaultValue = 3.5E9 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_DEMODULATION_DELAY_TIME_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_DEMODULATION_DELAY_TIME ;
	ViReal64 defaultValue = 6e-6 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_DEMODULATION_SPEAKER_VOLUME_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_DEMODULATION_SPEAKER_VOLUME ;
	ViReal64 defaultValue = 10 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_DEMODULATION_FUNCTION_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_DEMODULATION_FUNCTION ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_DEMODULATION_FUNCTION_AM ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_DEMODULATION_FUNCTION_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_DEMODULATION_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_DEMODULATION_FUNCTION_AM ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_DEMODULATION_FUNCTION_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_DEMODULATION_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_DEMODULATION_FUNCTION_FM ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_X_READOUT_FREQUENCY ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "1", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_DiscreteValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_X_READOUT_FREQUENCY ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "1", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_DiscreteValue_ReadWrite_REP_1_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_X_READOUT_TIME ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "1", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_DiscreteValue_ReadWrite_REP_1_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_X_READOUT_PERIOD ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "1", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_X_READOUT_FREQUENCY ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "2", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_DiscreteValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_X_READOUT_FREQUENCY ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "2", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_DiscreteValue_ReadWrite_REP_2_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_X_READOUT_TIME ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "2", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_DiscreteValue_ReadWrite_REP_2_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_X_READOUT_PERIOD ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "2", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_defaultValue_ReadWrite_REP_3_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_X_READOUT_FREQUENCY ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "3", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "3", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_DiscreteValue_ReadWrite_REP_3_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_X_READOUT_FREQUENCY ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "3", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "3", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_DiscreteValue_ReadWrite_REP_3_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_X_READOUT_TIME ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "3", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "3", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_DiscreteValue_ReadWrite_REP_3_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_X_READOUT_PERIOD ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "3", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "3", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_defaultValue_ReadWrite_REP_4_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_X_READOUT_FREQUENCY ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "4", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "4", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_DiscreteValue_ReadWrite_REP_4_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_X_READOUT_FREQUENCY ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "4", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "4", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_DiscreteValue_ReadWrite_REP_4_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_X_READOUT_TIME ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "4", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "4", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_DiscreteValue_ReadWrite_REP_4_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_X_READOUT_PERIOD ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "4", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "4", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_defaultValue_ReadWrite_REP_5_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_X_READOUT_FREQUENCY ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "5", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "5", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "5", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_DiscreteValue_ReadWrite_REP_5_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_X_READOUT_FREQUENCY ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "5", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "5", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "5", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_DiscreteValue_ReadWrite_REP_5_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_X_READOUT_TIME ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "5", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "5", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "5", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_DiscreteValue_ReadWrite_REP_5_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_X_READOUT_PERIOD ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "5", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "5", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "5", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_defaultValue_ReadWrite_REP_6_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_X_READOUT_FREQUENCY ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "6", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "6", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "6", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_DiscreteValue_ReadWrite_REP_6_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_X_READOUT_FREQUENCY ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "6", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "6", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "6", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_DiscreteValue_ReadWrite_REP_6_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_X_READOUT_TIME ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "6", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "6", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "6", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_X_READOUT_DiscreteValue_ReadWrite_REP_6_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_X_READOUT ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_X_READOUT_PERIOD ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "6", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "6", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "6", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_PEAK_SEARCH_TYPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_PEAK_SEARCH_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_PEAK_SEARCH_MODE_MAXIMUM ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_PEAK_SEARCH_TYPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_PEAK_SEARCH_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_PEAK_SEARCH_MODE_MAXIMUM ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_PEAK_SEARCH_TYPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_PEAK_SEARCH_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_PEAK_SEARCH_MODE_MINIMUM ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_FUNCTION_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "1", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_DiscreteValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_FUNCTION_FCOUNT ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "1", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_DiscreteValue_ReadWrite_REP_1_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_FUNCTION_NOISE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "1", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_DiscreteValue_ReadWrite_REP_1_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_FUNCTION_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "1", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_FUNCTION_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "2", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_DiscreteValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_FUNCTION_FCOUNT ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "2", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_DiscreteValue_ReadWrite_REP_2_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_FUNCTION_NOISE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "2", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_DiscreteValue_ReadWrite_REP_2_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_FUNCTION_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "2", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_defaultValue_ReadWrite_REP_3_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_FUNCTION_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "3", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "3", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_DiscreteValue_ReadWrite_REP_3_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_FUNCTION_FCOUNT ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "3", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "3", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_DiscreteValue_ReadWrite_REP_3_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_FUNCTION_NOISE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "3", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "3", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_DiscreteValue_ReadWrite_REP_3_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_FUNCTION_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "3", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "3", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_defaultValue_ReadWrite_REP_4_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_FUNCTION_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "4", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "4", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_DiscreteValue_ReadWrite_REP_4_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_FUNCTION_FCOUNT ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "4", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "4", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_DiscreteValue_ReadWrite_REP_4_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_FUNCTION_NOISE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "4", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "4", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_DiscreteValue_ReadWrite_REP_4_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_FUNCTION_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "4", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "4", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_defaultValue_ReadWrite_REP_5_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_FUNCTION_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "5", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "5", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "5", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_DiscreteValue_ReadWrite_REP_5_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_FUNCTION_FCOUNT ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "5", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "5", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "5", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_DiscreteValue_ReadWrite_REP_5_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_FUNCTION_NOISE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "5", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "5", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "5", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_DiscreteValue_ReadWrite_REP_5_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_FUNCTION_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "5", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "5", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "5", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_defaultValue_ReadWrite_REP_6_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_FUNCTION_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "6", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "6", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "6", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_DiscreteValue_ReadWrite_REP_6_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_FUNCTION_FCOUNT ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "6", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "6", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "6", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_DiscreteValue_ReadWrite_REP_6_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_FUNCTION_NOISE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "6", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "6", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "6", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FUNCTION_DiscreteValue_ReadWrite_REP_6_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FUNCTION ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_FUNCTION_OFF ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "6", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "6", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "6", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_defaultValue_WriteOnly_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 defaultValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_CENTER ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, defaultValue));	
	
}
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_DiscreteValue_WriteOnly_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_CENTER ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_DiscreteValue_WriteOnly_REP_1_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_START ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_DiscreteValue_WriteOnly_REP_1_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_STOP ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, discreteValue));
}	
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_defaultValue_WriteOnly_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 defaultValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_CENTER ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, defaultValue));	
	
}
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_DiscreteValue_WriteOnly_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_CENTER ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_DiscreteValue_WriteOnly_REP_2_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_START ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_DiscreteValue_WriteOnly_REP_2_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_STOP ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, discreteValue));
}	
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_defaultValue_WriteOnly_REP_3_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 defaultValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_CENTER ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "3", attributeId, 0, defaultValue));	
	
}
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_DiscreteValue_WriteOnly_REP_3_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_CENTER ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "3", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_DiscreteValue_WriteOnly_REP_3_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_START ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "3", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_DiscreteValue_WriteOnly_REP_3_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_STOP ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "3", attributeId, 0, discreteValue));
}	
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_defaultValue_WriteOnly_REP_4_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 defaultValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_CENTER ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "4", attributeId, 0, defaultValue));	
	
}
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_DiscreteValue_WriteOnly_REP_4_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_CENTER ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "4", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_DiscreteValue_WriteOnly_REP_4_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_START ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "4", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_DiscreteValue_WriteOnly_REP_4_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_STOP ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "4", attributeId, 0, discreteValue));
}	
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_defaultValue_WriteOnly_REP_5_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 defaultValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_CENTER ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "5", attributeId, 0, defaultValue));	
	
}
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_DiscreteValue_WriteOnly_REP_5_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_CENTER ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "5", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_DiscreteValue_WriteOnly_REP_5_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_START ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "5", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_DiscreteValue_WriteOnly_REP_5_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_STOP ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "5", attributeId, 0, discreteValue));
}	
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_defaultValue_WriteOnly_REP_6_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 defaultValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_CENTER ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "6", attributeId, 0, defaultValue));	
	
}
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_DiscreteValue_WriteOnly_REP_6_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_CENTER ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "6", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_DiscreteValue_WriteOnly_REP_6_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_START ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "6", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING_DiscreteValue_WriteOnly_REP_6_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_INSTRUMENT_SETTING ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_STOP ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "6", attributeId, 0, discreteValue));
}	
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_defaultValue_WriteOnly_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_SEARCH_HIGHEST ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, defaultValue));	
	
}
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_HIGHEST ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_1_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK_LEFT ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_1_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK_RIGHT ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_1_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, discreteValue));
}	
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_defaultValue_WriteOnly_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_SEARCH_HIGHEST ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, defaultValue));	
	
}
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_HIGHEST ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_2_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK_LEFT ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_2_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK_RIGHT ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_2_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, discreteValue));
}	
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_defaultValue_WriteOnly_REP_3_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_SEARCH_HIGHEST ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "3", attributeId, 0, defaultValue));	
	
}
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_3_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_HIGHEST ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "3", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_3_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK_LEFT ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "3", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_3_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK_RIGHT ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "3", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_3_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "3", attributeId, 0, discreteValue));
}	
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_defaultValue_WriteOnly_REP_4_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_SEARCH_HIGHEST ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "4", attributeId, 0, defaultValue));	
	
}
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_4_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_HIGHEST ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "4", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_4_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK_LEFT ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "4", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_4_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK_RIGHT ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "4", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_4_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "4", attributeId, 0, discreteValue));
}	
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_defaultValue_WriteOnly_REP_5_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_SEARCH_HIGHEST ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "5", attributeId, 0, defaultValue));	
	
}
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_5_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_HIGHEST ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "5", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_5_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK_LEFT ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "5", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_5_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK_RIGHT ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "5", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_5_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "5", attributeId, 0, discreteValue));
}	
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_defaultValue_WriteOnly_REP_6_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_SEARCH_HIGHEST ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "6", attributeId, 0, defaultValue));	
	
}
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_6_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_HIGHEST ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "6", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_6_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK_LEFT ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "6", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_6_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK_RIGHT ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "6", attributeId, 0, discreteValue));
}	
				
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Write Only
 ****************************************************************************/					
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_PEAK_SEARCH_DiscreteValue_WriteOnly_REP_6_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_PEAK_SEARCH ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_SEARCH_NEXT_PEAK ;	

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "6", attributeId, 0, discreteValue));
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE_defaultValue_ReadWrite_REP_3_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "3", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "3", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "3", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "3", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE_defaultValue_ReadWrite_REP_4_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "4", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "4", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "4", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "4", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE_defaultValue_ReadWrite_REP_5_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "5", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "5", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "5", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "5", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "5", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "5", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE_defaultValue_ReadWrite_REP_6_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_CONTINUOUS_PEAKING_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "6", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "6", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "6", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "6", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "6", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "6", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViString
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_ACTIVE_MARKER_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ACTIVE_MARKER ;
	ViString defaultValue = "MARKER1" ;	
	ViInt32 buf_size = 1024;
	ViChar returnValue[1024];

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViString (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViString (vi, VI_NULL, attributeId, 0, buf_size, returnValue));
	
	CPPUNIT_ASSERT( 0 == strncmp(defaultValue, returnValue, buf_size) );			
	
}
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_AMPLITUDE_defaultValue_ReadOnly_REP_1_Index0()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_AMPLITUDE ;
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "1", attributeId, 0, &returnValue));	
}
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_AMPLITUDE_defaultValue_ReadOnly_REP_2_Index0()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_AMPLITUDE ;
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "2", attributeId, 0, &returnValue));	
}
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_AMPLITUDE_defaultValue_ReadOnly_REP_3_Index0()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_AMPLITUDE ;
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "3", attributeId, 0, &returnValue));	
}
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_AMPLITUDE_defaultValue_ReadOnly_REP_4_Index0()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_AMPLITUDE ;
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "4", attributeId, 0, &returnValue));	
}
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_AMPLITUDE_defaultValue_ReadOnly_REP_5_Index0()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_AMPLITUDE ;
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "5", attributeId, 0, &returnValue));	
}
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_AMPLITUDE_defaultValue_ReadOnly_REP_6_Index0()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_AMPLITUDE ;
	ViReal64 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "6", attributeId, 0, &returnValue));	
}
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_COUNT_defaultValue_ReadOnly_NullChannel_Index0()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_COUNT ;
	ViInt32 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_ENABLED_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_ENABLED ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_ENABLED_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_ENABLED ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_ENABLED_defaultValue_ReadWrite_REP_3_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_ENABLED ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "3", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "3", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "3", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "3", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_ENABLED_defaultValue_ReadWrite_REP_4_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_ENABLED ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "4", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "4", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "4", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "4", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_ENABLED_defaultValue_ReadWrite_REP_5_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_ENABLED ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "5", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "5", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "5", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "5", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "5", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "5", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_ENABLED_defaultValue_ReadWrite_REP_6_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_ENABLED ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "6", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "6", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "6", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "6", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "6", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "6", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED_defaultValue_ReadWrite_REP_3_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "3", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "3", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "3", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "3", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED_defaultValue_ReadWrite_REP_4_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "4", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "4", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "4", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "4", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED_defaultValue_ReadWrite_REP_5_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "5", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "5", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "5", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "5", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "5", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "5", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED_defaultValue_ReadWrite_REP_6_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "6", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "6", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "6", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "6", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "6", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "6", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_RESOLUTION_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_FREQUENCY_COUNTER_RESOLUTION ;
	ViReal64 defaultValue = 0 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_POSITION_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_POSITION ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "1", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "1", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_POSITION_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_POSITION ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "2", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "2", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_POSITION_defaultValue_ReadWrite_REP_3_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_POSITION ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "3", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "3", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_POSITION_defaultValue_ReadWrite_REP_4_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_POSITION ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "4", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "4", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_POSITION_defaultValue_ReadWrite_REP_5_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_POSITION ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "5", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "5", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "5", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_POSITION_defaultValue_ReadWrite_REP_6_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_POSITION ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "6", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "6", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "6", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_THRESHOLD_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_THRESHOLD ;
	ViReal64 defaultValue = -140 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "1", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "1", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_THRESHOLD_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_THRESHOLD ;
	ViReal64 defaultValue = -140 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "2", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "2", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_THRESHOLD_defaultValue_ReadWrite_REP_3_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_THRESHOLD ;
	ViReal64 defaultValue = -140 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "3", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "3", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_THRESHOLD_defaultValue_ReadWrite_REP_4_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_THRESHOLD ;
	ViReal64 defaultValue = -140 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "4", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "4", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_THRESHOLD_defaultValue_ReadWrite_REP_5_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_THRESHOLD ;
	ViReal64 defaultValue = -140 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "5", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "5", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "5", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_THRESHOLD_defaultValue_ReadWrite_REP_6_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_THRESHOLD ;
	ViReal64 defaultValue = -140 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "6", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "6", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "6", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViString
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_TRACE_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_TRACE ;
	ViString defaultValue = "" ;	
	ViInt32 buf_size = 1024;
	ViChar returnValue[1024];

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViString (vi, "1", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViString (vi, "1", attributeId, 0, buf_size, returnValue));
	
	CPPUNIT_ASSERT( 0 == strncmp(defaultValue, returnValue, buf_size) );			
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViString
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_TRACE_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_TRACE ;
	ViString defaultValue = "" ;	
	ViInt32 buf_size = 1024;
	ViChar returnValue[1024];

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViString (vi, "2", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViString (vi, "2", attributeId, 0, buf_size, returnValue));
	
	CPPUNIT_ASSERT( 0 == strncmp(defaultValue, returnValue, buf_size) );			
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViString
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_TRACE_defaultValue_ReadWrite_REP_3_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_TRACE ;
	ViString defaultValue = "" ;	
	ViInt32 buf_size = 1024;
	ViChar returnValue[1024];

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViString (vi, "3", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViString (vi, "3", attributeId, 0, buf_size, returnValue));
	
	CPPUNIT_ASSERT( 0 == strncmp(defaultValue, returnValue, buf_size) );			
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViString
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_TRACE_defaultValue_ReadWrite_REP_4_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_TRACE ;
	ViString defaultValue = "" ;	
	ViInt32 buf_size = 1024;
	ViChar returnValue[1024];

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViString (vi, "4", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViString (vi, "4", attributeId, 0, buf_size, returnValue));
	
	CPPUNIT_ASSERT( 0 == strncmp(defaultValue, returnValue, buf_size) );			
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViString
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_TRACE_defaultValue_ReadWrite_REP_5_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_TRACE ;
	ViString defaultValue = "" ;	
	ViInt32 buf_size = 1024;
	ViChar returnValue[1024];

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViString (vi, "5", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "5", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViString (vi, "5", attributeId, 0, buf_size, returnValue));
	
	CPPUNIT_ASSERT( 0 == strncmp(defaultValue, returnValue, buf_size) );			
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViString
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_TRACE_defaultValue_ReadWrite_REP_6_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_TRACE ;
	ViString defaultValue = "" ;	
	ViInt32 buf_size = 1024;
	ViChar returnValue[1024];

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViString (vi, "6", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "6", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViString (vi, "6", attributeId, 0, buf_size, returnValue));
	
	CPPUNIT_ASSERT( 0 == strncmp(defaultValue, returnValue, buf_size) );			
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_PEAK_EXCURSION_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_PEAK_EXCURSION ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TRIGGER_DELAY_TIME_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_TRIGGER_DELAY_TIME_ENABLE ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TRIGGER_DELAY_TIME_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_TRIGGER_DELAY_TIME ;
	ViReal64 defaultValue = 6e-6 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TRIGGER_SOURCE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_TRIGGER_SOURCE ;
	ViInt32 defaultValue = AGN934XNI_VAL_TRIGGER_SOURCE_IMMEDIATE ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TRIGGER_SOURCE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRIGGER_SOURCE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRIGGER_SOURCE_EXTERNAL ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TRIGGER_SOURCE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRIGGER_SOURCE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRIGGER_SOURCE_IMMEDIATE ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_TRIGGER_SOURCE_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRIGGER_SOURCE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRIGGER_SOURCE_VIDEO ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_EXTERNAL_TRIGGER_LEVEL_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_EXTERNAL_TRIGGER_LEVEL ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_EXTERNAL_TRIGGER_SLOPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_EXTERNAL_TRIGGER_SLOPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_EXTERNAL_TRIGGER_SLOPE_POSITIVE ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_EXTERNAL_TRIGGER_SLOPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_EXTERNAL_TRIGGER_SLOPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_EXTERNAL_TRIGGER_SLOPE_POSITIVE ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_EXTERNAL_TRIGGER_SLOPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_EXTERNAL_TRIGGER_SLOPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_EXTERNAL_TRIGGER_SLOPE_NEGATIVE ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_VIDEO_TRIGGER_LEVEL_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_VIDEO_TRIGGER_LEVEL ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_VIDEO_TRIGGER_SLOPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_VIDEO_TRIGGER_SLOPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_VIDEO_TRIGGER_SLOPE_POSITIVE ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_VIDEO_TRIGGER_SLOPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_VIDEO_TRIGGER_SLOPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_VIDEO_TRIGGER_SLOPE_NEGATIVE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read Only
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_NUMBER_OF_DIVISIONS_defaultValue_ReadOnly_NullChannel_Index0()
{
	ViAttr attributeId = AGN934XNI_ATTR_NUMBER_OF_DIVISIONS ;
	ViInt32 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_UNITS_PER_DIVISION_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_UNITS_PER_DIVISION ;
	ViReal64 defaultValue = 10 ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_UNITS_PER_DIVISION_Coerced_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_UNITS_PER_DIVISION ;
	ViReal64 CloseminimumValue = 1 ;	
	ViReal64 CoercedValue = 1 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
				
/****************************************************************************
 * Coerced Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_UNITS_PER_DIVISION_Coerced_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_UNITS_PER_DIVISION ;
	ViReal64 ClosemaximumValue = 1 ;	
	ViReal64 CoercedValue = 1 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
					
/****************************************************************************
 * Coerced Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/							
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_UNITS_PER_DIVISION_Coerced_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_UNITS_PER_DIVISION ;
	 
	ViReal64 randomValue = 1.00 ;	
	ViReal64 CoercedValue = 1 ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_UNITS_PER_DIVISION_Coerced_CloseminimumValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_UNITS_PER_DIVISION ;
	ViReal64 CloseminimumValue = 2 ;	
	ViReal64 CoercedValue = 2 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
				
/****************************************************************************
 * Coerced Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_UNITS_PER_DIVISION_Coerced_ClosemaximumValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_UNITS_PER_DIVISION ;
	ViReal64 ClosemaximumValue = 2 ;	
	ViReal64 CoercedValue = 2 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
					
/****************************************************************************
 * Coerced Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/							
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_UNITS_PER_DIVISION_Coerced_RandomValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_UNITS_PER_DIVISION ;
	 
	ViReal64 randomValue = 2.00 ;	
	ViReal64 CoercedValue = 2 ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_UNITS_PER_DIVISION_Coerced_CloseminimumValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_UNITS_PER_DIVISION ;
	ViReal64 CloseminimumValue = 3 ;	
	ViReal64 CoercedValue = 5 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
				
/****************************************************************************
 * Coerced Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_UNITS_PER_DIVISION_Coerced_ClosemaximumValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_UNITS_PER_DIVISION ;
	ViReal64 ClosemaximumValue = 5 ;	
	ViReal64 CoercedValue = 5 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
					
/****************************************************************************
 * Coerced Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/							
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_UNITS_PER_DIVISION_Coerced_RandomValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_UNITS_PER_DIVISION ;
	 
	ViReal64 randomValue = 3.34 ;	
	ViReal64 CoercedValue = 5 ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_UNITS_PER_DIVISION_Coerced_CloseminimumValue_ReadWrite_NullChannel_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_UNITS_PER_DIVISION ;
	ViReal64 CloseminimumValue = 6 ;	
	ViReal64 CoercedValue = 10 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
				
/****************************************************************************
 * Coerced Close Maximum Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_UNITS_PER_DIVISION_Coerced_ClosemaximumValue_ReadWrite_NullChannel_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_UNITS_PER_DIVISION ;
	ViReal64 ClosemaximumValue = 10 ;	
	ViReal64 CoercedValue = 10 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
					
/****************************************************************************
 * Coerced Random Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/							
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_UNITS_PER_DIVISION_Coerced_RandomValue_ReadWrite_NullChannel_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_UNITS_PER_DIVISION ;
	 
	ViReal64 randomValue = 7.90 ;	
	ViReal64 CoercedValue = 10 ;
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( CoercedValue, returnValue, abs(CoercedValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_TYPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_MARKER_TYPE_OFF ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_TYPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_TYPE_NORMAL ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_TYPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_TYPE_DELTA ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_MARKER_TYPE_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MARKER_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_MARKER_TYPE_OFF ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_X_VALUE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_X_VALUE ;
	ViInt32 defaultValue = AGN934XNI_VAL_LIMIT_LINE_FREQUENCY ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_X_VALUE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_X_VALUE ;
	ViInt32 discreteValue = AGN934XNI_VAL_LIMIT_LINE_FREQUENCY ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_X_VALUE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_X_VALUE ;
	ViInt32 discreteValue = AGN934XNI_VAL_LIMIT_LINE_TIME ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_Y_VALUE_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_Y_VALUE ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "1", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "1", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_Y_VALUE_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_Y_VALUE ;
	ViReal64 defaultValue = 0 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "2", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "2", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, abs(defaultValue) / 10e7 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_MODE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_MODE ;
	ViInt32 defaultValue = AGN934XNI_VAL_LIMIT_LINE_FIXED ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_MODE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_MODE ;
	ViInt32 discreteValue = AGN934XNI_VAL_LIMIT_LINE_FIXED ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_MODE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_MODE ;
	ViInt32 discreteValue = AGN934XNI_VAL_LIMIT_LINE_RELATIVE ;	
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_ENABLED_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_ENABLED ;
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
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_ENABLED_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_ENABLED ;
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
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_TYPE_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_LIMIT_LINE_UPPER ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "1", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_TYPE_DiscreteValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_LIMIT_LINE_UPPER ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "1", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_TYPE_DiscreteValue_ReadWrite_REP_1_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_LIMIT_LINE_LOWER ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "1", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "1", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_TYPE_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_LIMIT_LINE_UPPER ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "2", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_TYPE_DiscreteValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_LIMIT_LINE_UPPER ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "2", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverOBWFunctionalityTest::testAGN934XNI_ATTR_LIMIT_LINE_TYPE_DiscreteValue_ReadWrite_REP_2_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_LIMIT_LINE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_LIMIT_LINE_LOWER ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "2", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "2", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureNormalize(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureNormalize(vi, VI_FALSE, 0, 10));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureTrackingGenerator(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureTrackingGenerator(vi, VI_FALSE, -20, 2, -20));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureOBW(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureOBW(vi, AGN934XNI_VAL_OBW_METHOD_PERCENT, 99, 26));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureCHP(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureCHP(vi, 3.5e9, 2e6, 3e6, VI_TRUE, -70, -10));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_SetActiveTrace(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_SetActiveTrace(vi, "TRACE1"));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_FetchMeasurementACPR(){
	ViReal64 LowACP;
	ViReal64 LowACPR;
	ViReal64 UpperACP;
	ViReal64 UpperACPR;
	ViReal64 MainChannelPower;
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_FetchMeasurementACPR(vi, &LowACP, &LowACPR, &UpperACP, &UpperACPR, &MainChannelPower));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_FetchMeasurementCHP(){
	ViReal64 MainChannelPower;
	ViReal64 PowerDensity;
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_FetchMeasurementCHP(vi, &MainChannelPower, &PowerDensity));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_FetchMeasurementOBW(){
	ViReal64 OccupiedBandwidth;
	ViReal64 BandwidthCentroid;
	ViReal64 XDbBandwidth;
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_FetchMeasurementOBW(vi, &OccupiedBandwidth, &BandwidthCentroid, &XDbBandwidth));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ReadMeasurementACPR(){
	ViReal64 LowACPR;
	ViReal64 UpperACP;
	ViReal64 UpperACPR;
	ViReal64 MainChannelPower;
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ReadMeasurementACPR(vi, 5000, VI_NULL, &LowACPR, &UpperACP, &UpperACPR, &MainChannelPower));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ReadMeasurementCHP(){
	ViReal64 MainChannelPower;
	ViReal64 PowerDensity;
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ReadMeasurementCHP(vi, 5000, &MainChannelPower, &PowerDensity));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ReadMeasurementOBW(){
	ViReal64 OccupiedBandwidth;
	ViReal64 BandwidthCentroid;
	ViReal64 XDbBandwidth;
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ReadMeasurementOBW(vi, 5000, &OccupiedBandwidth, &BandwidthCentroid, &XDbBandwidth));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureHighSensitivityEnable(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureHighSensitivityEnable(vi, VI_FALSE));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureTrace(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureTrace(vi, VI_TRUE, AGN934XNI_VAL_TRACE_MATH_TYPE_LOG_POWER));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureVBWRBWRatio(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureVBWRBWRatio(vi, VI_TRUE, 3e6));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureAverage(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureAverage(vi, VI_FALSE, 100, AGN934XNI_VAL_AVERAGE_TYPE_LOGPOWER, VI_FALSE, 60));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_RestartTraceAverage(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_RestartTraceAverage(vi));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureMeasurementType(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureMeasurementType(vi, AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER, AGN934XNI_VAL_MARKER_TYPE_OFF));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_Abort(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_Abort(vi));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_AcquisitionStatus(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_AcquisitionStatus(vi, VI_NULL));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureAcquisition(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureAcquisition(vi, VI_TRUE, 1, VI_TRUE, AGN934XNI_VAL_DETECTOR_TYPE_MAX_PEAK, AGN934XNI_VAL_VERTICAL_SCALE_LOGARITHMIC));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureFrequencyCenterSpan(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureFrequencyCenterSpan(vi, 3.5e9, 7.0e9));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureFrequencyOffset(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureFrequencyOffset(vi, 0));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureFrequencyStartStop(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureFrequencyStartStop(vi, 0, 7e9));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureLevel(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureLevel(vi, AGN934XNI_VAL_AMPLITUDE_UNITS_DBM, AGN934XNI_VAL_INPUT_IMPEDANCE_50_OHM, 0, 0, VI_TRUE, 20));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureSweepCoupling(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureSweepCoupling(vi, VI_TRUE, 1000, VI_TRUE, 3e6, VI_TRUE, 0.3285392));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureTraceType(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureTraceType(vi, "", AGN934XNI_VAL_TRACE_TYPE_CLEAR_WRITE));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_FetchYTrace(){
	ViInt32 ActualPoints;
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_FetchYTrace(vi, "", 0, &ActualPoints, VI_NULL));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_GetTraceName(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_GetTraceName(vi, 1, 0, VI_NULL));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_Initiate(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_Initiate(vi));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_QueryTraceSize(){
	ViInt32 TraceSize;
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_QueryTraceSize(vi, "", &TraceSize));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ReadYTrace(){
	ViInt32 ActualPoints;
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ReadYTrace(vi, "", 5000, 0, &ActualPoints, VI_NULL));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureACPR(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureACPR(vi, 3.5E9, 1e6));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_AddTraces(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_AddTraces(vi, "", "", ""));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_CopyTrace(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_CopyTrace(vi, "", ""));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ExchangeTraces(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ExchangeTraces(vi, "", ""));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_SubtractTraces(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_SubtractTraces(vi, "", "", ""));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureDemodulation(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureDemodulation(vi, AGN934XNI_VAL_MARKER_DEMODULATION_FUNCTION_AM, 10, 6e-6));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureMarkerPeakSearch(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureMarkerPeakSearch(vi, VI_FALSE, AGN934XNI_VAL_PEAK_SEARCH_MODE_MAXIMUM, AGN934XNI_VAL_MARKER_SEARCH_HIGHEST));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureMarkerEnabled(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureMarkerEnabled(vi, VI_TRUE, ""));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureMarkerFrequencyCounter(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureMarkerFrequencyCounter(vi, VI_TRUE, 0.0));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureMarkerSearch(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureMarkerSearch(vi, 0.0, 0.0));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureSignalTrackEnabled(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureSignalTrackEnabled(vi, VI_TRUE));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_DisableAllMarkers(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_DisableAllMarkers(vi));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_GetMarkerName(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_GetMarkerName(vi, 1, 0, VI_NULL));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_MarkerSearch(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_MarkerSearch(vi, AGN934XNI_VAL_MARKER_SEARCH_HIGHEST));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_MoveMarker(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_MoveMarker(vi, 0));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_QueryMarker(){
	ViReal64 MarkerPosition;
	ViReal64 MarkerAmplitude;
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_QueryMarker(vi, &MarkerPosition, &MarkerAmplitude));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_SetActiveMarker(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_SetActiveMarker(vi, ""));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_SetInstrumentFromMarker(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_SetInstrumentFromMarker(vi, AGN934XNI_VAL_INSTRUMENT_SETTING_FREQUENCY_CENTER));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureTriggerDelay(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureTriggerDelay(vi, VI_FALSE, 6e-6));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureTriggerSource(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureTriggerSource(vi, AGN934XNI_VAL_TRIGGER_SOURCE_IMMEDIATE));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureExternalTrigger(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureExternalTrigger(vi, 0, AGN934XNI_VAL_EXTERNAL_TRIGGER_SLOPE_POSITIVE));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureVideoTrigger(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureVideoTrigger(vi, 0, AGN934XNI_VAL_VIDEO_TRIGGER_SLOPE_POSITIVE));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureMarkerType(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureMarkerType(vi, AGN934XNI_VAL_MARKER_TYPE_OFF, AGN934XNI_VAL_MARKER_FUNCTION_OFF));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_QueryMarkerType(){
	ViInt32 MarkerType;
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_QueryMarkerType(vi, &MarkerType));
}
 	 	
void DriverOBWFunctionalityTest::test_agn934xni_ConfigureLimitLine(){
					
	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_ConfigureLimitLine(vi, "1", VI_FALSE, AGN934XNI_VAL_LIMIT_LINE_UPPER, AGN934XNI_VAL_LIMIT_LINE_FREQUENCY, 0, AGN934XNI_VAL_LIMIT_LINE_FIXED));
}
 	
#include "string.h"
#include "math.h"
#include "agn934xni_testNormalMode.h"

extern ViSession vi;	
extern void testClose();
extern ViRsrc instrName;
/****************************************************************************
 *------------------------------- Global Variable --------------------------*
 ****************************************************************************/

ViStatus testNormalInit()
{
	ViStatus error = VI_SUCCESS;

	checkErr(agn934xni_init (instrName,VI_TRUE,VI_FALSE,&vi));	
	
Error:
	return error;
}

void DriverNormalFunctionalityTest::setUp()
{
	testNormalInit();
}

void DriverNormalFunctionalityTest::tearDown()
{
	testClose();
}

/****************************************************************************
 *------------------------------ Test Templates ----------------------------*
 ****************************************************************************/
	

/****************************************************************************
 * Default Value Test	  												    
 * ViString
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_ACTIVE_TRACE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ACTIVE_TRACE ;
	ViString defaultValue = "TRACE1" ;	
	ViInt32 buf_size = 1024;
	ViChar returnValue[1024];

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViString (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViString (vi, VI_NULL, attributeId, 0, buf_size, returnValue));
	
	CPPUNIT_ASSERT( 0 == strncmp(defaultValue, returnValue, buf_size) );			
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_MATH_TYPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_MATH_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_TRACE_MATH_TYPE_LOG_POWER ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_MATH_TYPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_MATH_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_MATH_TYPE_LOG_POWER ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_MATH_TYPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_MATH_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_MATH_TYPE_POWER ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_HIGH_SENSITIVITY_ENABLE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_HIGH_SENSITIVITY_ENABLE ;
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_VBW_RBW_RATIO_AUTO_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_VBW_RBW_RATIO_AUTO ;
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_VBW_RBW_RATIO_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_VBW_RBW_RATIO ;
	ViReal64 defaultValue = 1.0 ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_VBW_RBW_RATIO_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_VBW_RBW_RATIO ;
	ViReal64 CloseminimumValue = 0.00001 ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_VBW_RBW_RATIO_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_VBW_RBW_RATIO ;
	ViReal64 ClosemaximumValue = 3.0e6 ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_VBW_RBW_RATIO_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_VBW_RBW_RATIO ;
	 
	ViReal64 randomValue = 2907818.48 ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_VBW_RBW_RATIO_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_VBW_RBW_RATIO;
	ViReal64 ViolationValue = -0.99999 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_VBW_RBW_RATIO_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_VBW_RBW_RATIO;
	ViReal64 ViolationValue = 3.000001E6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_DURATION_ENABLE_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_DURATION_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "TRACE1", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "TRACE1", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "TRACE1", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "TRACE1", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_DURATION_ENABLE_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_DURATION_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "TRACE2", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "TRACE2", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "TRACE2", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "TRACE2", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_DURATION_ENABLE_defaultValue_ReadWrite_REP_3_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_DURATION_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "TRACE3", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "TRACE3", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "TRACE3", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "TRACE3", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_DURATION_ENABLE_defaultValue_ReadWrite_REP_4_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_DURATION_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "TRACE4", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "TRACE4", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "TRACE4", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "TRACE4", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_DURATION_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_DURATION ;
	ViReal64 defaultValue = 60 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_reset(vi));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "TRACE1", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "TRACE1", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, 1);
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_DURATION_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_DURATION ;
	ViReal64 defaultValue = 60 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "TRACE2", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "TRACE2", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, 1 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_DURATION_defaultValue_ReadWrite_REP_3_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_DURATION ;
	ViReal64 defaultValue = 60 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "TRACE3", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "TRACE3", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, 1 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_DURATION_defaultValue_ReadWrite_REP_4_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_DURATION ;
	ViReal64 defaultValue = 60 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, "TRACE4", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, "TRACE4", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, 1 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_TYPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_AVERAGE_TYPE_LOGPOWER ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_TYPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_AVERAGE_TYPE_LOGPOWER ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_TYPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_AVERAGE_TYPE_POWER ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_TYPE_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_AVERAGE_TYPE_VOLTAGE ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_ENABLE_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "TRACE1", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "TRACE1", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "TRACE1", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "TRACE1", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_ENABLE_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "TRACE2", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "TRACE2", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "TRACE2", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "TRACE2", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_ENABLE_defaultValue_ReadWrite_REP_3_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "TRACE3", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "TRACE3", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "TRACE3", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "TRACE3", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_ENABLE_defaultValue_ReadWrite_REP_4_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_ENABLE ;
	ViBoolean trueValue = VI_TRUE ;
	ViBoolean falseValue = VI_FALSE ;	
	ViBoolean returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "TRACE4", attributeId, 0, trueValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "TRACE4", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( trueValue == returnValue );
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViBoolean (vi, "TRACE4", attributeId, 0, falseValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViBoolean (vi, "TRACE4", attributeId, 0, &returnValue));

	CPPUNIT_ASSERT( falseValue == returnValue );	
	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT ;
	ViInt32 defaultValue = 100 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE1", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE1", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_CloseminimumValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT ;
	ViInt32 CloseminimumValue = 1 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE1", attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE1", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( CloseminimumValue == returnValue );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_ClosemaximumValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT ;
	ViInt32 ClosemaximumValue = 8192 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE1", attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE1", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( ClosemaximumValue == returnValue );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_RandomValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT ;
	 
	ViInt32 randomValue = 2563 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE1", attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE1", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( randomValue == returnValue );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_ViolationMinValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT;
	ViInt32 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, "TRACE1", attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_ViolationMaxValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT;
	ViInt32 ViolationValue = 8193 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, "TRACE1", attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT ;
	ViInt32 defaultValue = 100 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE2", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE2", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_CloseminimumValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT ;
	ViInt32 CloseminimumValue = 1 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE2", attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE2", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( CloseminimumValue == returnValue );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_ClosemaximumValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT ;
	ViInt32 ClosemaximumValue = 8192 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE2", attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE2", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( ClosemaximumValue == returnValue );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_RandomValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT ;
	 
	ViInt32 randomValue = 5715 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE2", attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE2", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( randomValue == returnValue );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_ViolationMinValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT;
	ViInt32 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, "TRACE2", attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_ViolationMaxValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT;
	ViInt32 ViolationValue = 8193 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, "TRACE2", attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_defaultValue_ReadWrite_REP_3_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT ;
	ViInt32 defaultValue = 100 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE3", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE3", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_CloseminimumValue_ReadWrite_REP_3_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT ;
	ViInt32 CloseminimumValue = 1 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE3", attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE3", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( CloseminimumValue == returnValue );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_ClosemaximumValue_ReadWrite_REP_3_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT ;
	ViInt32 ClosemaximumValue = 8192 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE3", attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE3", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( ClosemaximumValue == returnValue );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_RandomValue_ReadWrite_REP_3_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT ;
	 
	ViInt32 randomValue = 2359 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE3", attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE3", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( randomValue == returnValue );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_ViolationMinValue_ReadWrite_REP_3_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT;
	ViInt32 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, "TRACE3", attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_ViolationMaxValue_ReadWrite_REP_3_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT;
	ViInt32 ViolationValue = 8193 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, "TRACE3", attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_defaultValue_ReadWrite_REP_4_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT ;
	ViInt32 defaultValue = 100 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE4", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE4", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Close Minimum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_CloseminimumValue_ReadWrite_REP_4_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT ;
	ViInt32 CloseminimumValue = 1 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE4", attributeId, 0, CloseminimumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE4", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( CloseminimumValue == returnValue );
}
			
/****************************************************************************
 * Close Maximum Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_ClosemaximumValue_ReadWrite_REP_4_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT ;
	ViInt32 ClosemaximumValue = 8192 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE4", attributeId, 0, ClosemaximumValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE4", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( ClosemaximumValue == returnValue );	
}
			
/****************************************************************************
 * Random Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/			
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_RandomValue_ReadWrite_REP_4_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT ;
	 
	ViInt32 randomValue = 6414 ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE4", attributeId, 0, randomValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE4", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( randomValue == returnValue );	
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/	
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_ViolationMinValue_ReadWrite_REP_4_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT;
	ViInt32 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, "TRACE4", attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViInt32
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AVERAGE_COUNT_ViolationMaxValue_ReadWrite_REP_4_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AVERAGE_COUNT;
	ViInt32 ViolationValue = 8193 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViInt32 (vi, "TRACE4", attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_MEASUREMENT_TYPE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_MEASUREMENT_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_MEASUREMENT_TYPE_CHP ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_reset(vi));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER));
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_MEASUREMENT_TYPE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_MEASUREMENT_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_MEASUREMENT_TYPE_OFF ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_MEASUREMENT_TYPE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_MEASUREMENT_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_MEASUREMENT_TYPE_CHP ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_MEASUREMENT_TYPE_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_MEASUREMENT_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_MEASUREMENT_TYPE_ACPR ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_MEASUREMENT_TYPE_DiscreteValue_ReadWrite_NullChannel_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_MEASUREMENT_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_MEASUREMENT_TYPE_OBW ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_MEASUREMENT_TYPE_DiscreteValue_ReadWrite_NullChannel_Index5()
{
	ViAttr attributeId = AGN934XNI_ATTR_MEASUREMENT_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_MEASUREMENT_TYPE_SEM ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_INSTRUMENT_MODE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_INSTRUMENT_MODE ;
	ViInt32 defaultValue = AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_INSTRUMENT_MODE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_INSTRUMENT_MODE ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_INSTRUMENT_MODE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_INSTRUMENT_MODE ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_MODE_TRACKING_GENERATOR ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_INSTRUMENT_MODE_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_INSTRUMENT_MODE ;
	ViInt32 discreteValue = AGN934XNI_VAL_INSTRUMENT_MODE_POWERMETER ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AMPLITUDE_UNITS_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_AMPLITUDE_UNITS ;
	ViInt32 defaultValue = AGN934XNI_VAL_AMPLITUDE_UNITS_DBM ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER));
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AMPLITUDE_UNITS_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_AMPLITUDE_UNITS ;
	ViInt32 discreteValue = AGN934XNI_VAL_AMPLITUDE_UNITS_DBM ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AMPLITUDE_UNITS_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_AMPLITUDE_UNITS ;
	ViInt32 discreteValue = AGN934XNI_VAL_AMPLITUDE_UNITS_DBMV ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AMPLITUDE_UNITS_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_AMPLITUDE_UNITS ;
	ViInt32 discreteValue = AGN934XNI_VAL_AMPLITUDE_UNITS_DBUV ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AMPLITUDE_UNITS_DiscreteValue_ReadWrite_NullChannel_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_AMPLITUDE_UNITS ;
	ViInt32 discreteValue = AGN934XNI_VAL_AMPLITUDE_UNITS_VOLT ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AMPLITUDE_UNITS_DiscreteValue_ReadWrite_NullChannel_Index5()
{
	ViAttr attributeId = AGN934XNI_ATTR_AMPLITUDE_UNITS ;
	ViInt32 discreteValue = AGN934XNI_VAL_AMPLITUDE_UNITS_WATT ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AMPLITUDE_UNITS_DiscreteValue_ReadWrite_NullChannel_Index6()
{
	ViAttr attributeId = AGN934XNI_ATTR_AMPLITUDE_UNITS ;
	ViInt32 discreteValue = AGN934XNI_VAL_AMPLITUDE_UNITS_DBMVEMF ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AMPLITUDE_UNITS_DiscreteValue_ReadWrite_NullChannel_Index7()
{
	ViAttr attributeId = AGN934XNI_ATTR_AMPLITUDE_UNITS ;
	ViInt32 discreteValue = AGN934XNI_VAL_AMPLITUDE_UNITS_DBUVEMF ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_AMPLITUDE_UNITS_DiscreteValue_ReadWrite_NullChannel_Index8()
{
	ViAttr attributeId = AGN934XNI_ATTR_AMPLITUDE_UNITS ;
	ViInt32 discreteValue = AGN934XNI_VAL_AMPLITUDE_UNITS_VEMF ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_ATTENUATION_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ATTENUATION ;
	ViReal64 defaultValue = 20 ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_ATTENUATION_AUTO_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_ATTENUATION_AUTO ;
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_DETECTOR_TYPE_MAX_PEAK ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE1", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE1", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_AVERAGE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE1", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE1", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_1_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_MAX_PEAK ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE1", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE1", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_1_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_MIN_PEAK ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE1", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE1", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_1_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_SAMPLE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE1", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE1", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_1_Index5()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_NORMAL ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE1", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE1", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_DETECTOR_TYPE_MAX_PEAK ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE2", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE2", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_AVERAGE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE2", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE2", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_2_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_MAX_PEAK ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE2", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE2", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_2_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_MIN_PEAK ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE2", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE2", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_2_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_SAMPLE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE2", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE2", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_2_Index5()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_NORMAL ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE2", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE2", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_defaultValue_ReadWrite_REP_3_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_DETECTOR_TYPE_MAX_PEAK ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE3", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE3", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_3_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_AVERAGE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE3", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE3", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	

/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_3_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_MAX_PEAK ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE3", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE3", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_3_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_MIN_PEAK ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE3", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE3", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_3_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_SAMPLE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE3", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE3", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_3_Index5()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_NORMAL ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE3", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE3", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_defaultValue_ReadWrite_REP_4_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_DETECTOR_TYPE_MAX_PEAK ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE4", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE4", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_4_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_AVERAGE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE4", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE4", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_4_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_MAX_PEAK ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE4", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE4", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_4_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_MIN_PEAK ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE4", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE4", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_4_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_SAMPLE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE4", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE4", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_DETECTOR_TYPE_DiscreteValue_ReadWrite_REP_4_Index5()
{
	ViAttr attributeId = AGN934XNI_ATTR_DETECTOR_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_DETECTOR_TYPE_NORMAL ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE4", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE4", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_FREQUENCY_START_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_FREQUENCY_START ;
	ViReal64 defaultValue = 5e6;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_TRACKING_GENERATOR));
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_FREQUENCY_STOP_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_FREQUENCY_STOP ;
	ViReal64 defaultValue = 7e9 ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_FREQUENCY_OFFSET_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_FREQUENCY_OFFSET ;
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_INPUT_IMPEDANCE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_INPUT_IMPEDANCE ;
	ViInt32 defaultValue = AGN934XNI_VAL_INPUT_IMPEDANCE_50_OHM ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_INPUT_IMPEDANCE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_INPUT_IMPEDANCE ;
	ViInt32 discreteValue = AGN934XNI_VAL_INPUT_IMPEDANCE_50_OHM ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_INPUT_IMPEDANCE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_INPUT_IMPEDANCE ;
	ViInt32 discreteValue = AGN934XNI_VAL_INPUT_IMPEDANCE_75_OHM ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_CENTER_FREQUENCY_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_CENTER_FREQUENCY ;
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_FREQUENCY_SPAN_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_FREQUENCY_SPAN ;
	ViReal64 defaultValue = 7.0e9 ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_REFERENCE_LEVEL_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFERENCE_LEVEL ;
	ViReal64 defaultValue = 0 ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_REFERENCE_LEVEL_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFERENCE_LEVEL ;
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_REFERENCE_LEVEL_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFERENCE_LEVEL ;
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_REFERENCE_LEVEL_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFERENCE_LEVEL ;
	 
	ViReal64 randomValue = -99 ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_REFERENCE_LEVEL_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFERENCE_LEVEL;
	ViReal64 ViolationValue = -150 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_REFERENCE_LEVEL_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFERENCE_LEVEL;
	ViReal64 ViolationValue = 2.5000001E7 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET ;
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET ;
	ViReal64 CloseminimumValue = -327.6 ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET ;
	ViReal64 ClosemaximumValue = 327.6 ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET ;
	 
	ViReal64 randomValue = -214.37 ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET;
	ViReal64 ViolationValue = -328.6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_REFERENCE_LEVEL_OFFSET;
	ViReal64 ViolationValue = 328.6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViReal64
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_RESOLUTION_BANDWIDTH_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_RESOLUTION_BANDWIDTH ;
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_RESOLUTION_BANDWIDTH_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_RESOLUTION_BANDWIDTH ;
	ViReal64 CloseminimumValue = 10 ;	
	ViReal64 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == agn934xni_reset(vi));
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_RESOLUTION_BANDWIDTH_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_RESOLUTION_BANDWIDTH ;
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_RESOLUTION_BANDWIDTH_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_RESOLUTION_BANDWIDTH ;
	 
	ViReal64 randomValue = 2276019.61 ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_RESOLUTION_BANDWIDTH_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_RESOLUTION_BANDWIDTH;
	ViReal64 ViolationValue = 9 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_RESOLUTION_BANDWIDTH_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_RESOLUTION_BANDWIDTH;
	ViReal64 ViolationValue = 3.000001E6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_RESOLUTION_BANDWIDTH_AUTO_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_RESOLUTION_BANDWIDTH_AUTO ;
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_SWEEP_MODE_CONTINUOUS_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_SWEEP_MODE_CONTINUOUS ;
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_SWEEP_TIME_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_SWEEP_TIME ;
	ViReal64 defaultValue = 0.3285392 ;	
	ViReal64 returnValue;

    CPPUNIT_ASSERT(VI_SUCCESS ==agn934xni_reset(vi));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, VI_NULL, attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViReal64 (vi, VI_NULL, attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT_DOUBLES_EQUAL( defaultValue, returnValue, 0.1 );
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_SWEEP_MODE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_SWEEP_MODE ;
	ViInt32 defaultValue = AGN934XNI_VAL_SWEEP_MODE_AUTO ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_SWEEP_MODE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_SWEEP_MODE ;
	ViInt32 discreteValue = AGN934XNI_VAL_SWEEP_MODE_NORMAL ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, VI_NULL, AGN934XNI_ATTR_INSTRUMENT_MODE, 0, AGN934XNI_VAL_INSTRUMENT_MODE_SPECTRUM_ANALYZER));
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_SWEEP_MODE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_SWEEP_MODE ;
	ViInt32 discreteValue = AGN934XNI_VAL_SWEEP_MODE_FAST ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_SWEEP_MODE_DiscreteValue_ReadWrite_NullChannel_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_SWEEP_MODE ;
	ViInt32 discreteValue = AGN934XNI_VAL_SWEEP_MODE_AUTO ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_SWEEP_TIME_AUTO_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_SWEEP_TIME_AUTO ;
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
 * Read Only
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_COUNT_defaultValue_ReadOnly_NullChannel_Index0()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_COUNT ;
	ViInt32 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, VI_NULL, attributeId, 0, &returnValue));	
}
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read Only
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_SIZE_defaultValue_ReadOnly_REP_1_Index0()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_SIZE ;
	ViInt32 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE1", attributeId, 0, &returnValue));	
}
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read Only
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_SIZE_defaultValue_ReadOnly_REP_2_Index0()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_SIZE ;
	ViInt32 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE2", attributeId, 0, &returnValue));	
}
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read Only
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_SIZE_defaultValue_ReadOnly_REP_3_Index0()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_SIZE ;
	ViInt32 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE3", attributeId, 0, &returnValue));	
}
			
		
/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read Only
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_SIZE_defaultValue_ReadOnly_REP_4_Index0()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_SIZE ;
	ViInt32 returnValue;
	
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE4", attributeId, 0, &returnValue));	
}
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_defaultValue_ReadWrite_REP_1_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_TRACE_TYPE_CLEAR_WRITE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE1", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE1", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_1_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_CLEAR_WRITE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE1", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE1", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_1_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_MAX_HOLD ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE1", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE1", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_1_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_MIN_HOLD ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE1", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE1", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_1_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_VIEW ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE1", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE1", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_1_Index5()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_STORE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE1", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE1", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE1", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_defaultValue_ReadWrite_REP_2_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_TRACE_TYPE_CLEAR_WRITE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE2", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE2", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_2_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_CLEAR_WRITE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE2", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE2", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_2_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_MAX_HOLD ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE2", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE2", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_2_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_MIN_HOLD ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE2", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE2", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_2_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_VIEW ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE2", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE2", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_2_Index5()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_STORE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE2", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE2", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE2", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_defaultValue_ReadWrite_REP_3_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_TRACE_TYPE_CLEAR_WRITE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE3", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE3", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_3_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_CLEAR_WRITE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE3", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE3", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_3_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_MAX_HOLD ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE3", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE3", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_3_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_MIN_HOLD ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE3", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE3", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_3_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_VIEW ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE3", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE3", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_3_Index5()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_STORE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE3", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE3", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE3", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_defaultValue_ReadWrite_REP_4_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 defaultValue = AGN934XNI_VAL_TRACE_TYPE_CLEAR_WRITE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE4", attributeId, 0, defaultValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE4", attributeId, 0, &returnValue));
	
	CPPUNIT_ASSERT( defaultValue == returnValue );
}
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_4_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_CLEAR_WRITE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE4", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE4", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_4_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_MAX_HOLD ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE4", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE4", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_4_Index3()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_MIN_HOLD ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE4", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE4", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_4_Index4()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_VIEW ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE4", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE4", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			
/****************************************************************************
 * Discrete Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/				
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_TRACE_TYPE_DiscreteValue_ReadWrite_REP_4_Index5()
{
	ViAttr attributeId = AGN934XNI_ATTR_TRACE_TYPE ;
	ViInt32 discreteValue = AGN934XNI_VAL_TRACE_TYPE_STORE ;	
	ViInt32 returnValue;

	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_SetAttributeViInt32 (vi, "TRACE4", attributeId, 0, discreteValue));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_InvalidateAttribute (vi, "TRACE4", attributeId));
	CPPUNIT_ASSERT(VI_SUCCESS == Ivi_GetAttributeViInt32 (vi, "TRACE4", attributeId, 0, &returnValue));
	CPPUNIT_ASSERT( discreteValue == returnValue );
}	
			

/****************************************************************************
 * Default Value Test	  												    
 * ViInt32
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_VERTICAL_SCALE_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_VERTICAL_SCALE ;
	ViInt32 defaultValue = AGN934XNI_VAL_VERTICAL_SCALE_LOGARITHMIC ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_VERTICAL_SCALE_DiscreteValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_VERTICAL_SCALE ;
	ViInt32 discreteValue = AGN934XNI_VAL_VERTICAL_SCALE_LINEAR ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_VERTICAL_SCALE_DiscreteValue_ReadWrite_NullChannel_Index2()
{
	ViAttr attributeId = AGN934XNI_ATTR_VERTICAL_SCALE ;
	ViInt32 discreteValue = AGN934XNI_VAL_VERTICAL_SCALE_LOGARITHMIC ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_VIDEO_BANDWIDTH_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_VIDEO_BANDWIDTH ;
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_VIDEO_BANDWIDTH_CloseminimumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_VIDEO_BANDWIDTH ;
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_VIDEO_BANDWIDTH_ClosemaximumValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_VIDEO_BANDWIDTH ;
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_VIDEO_BANDWIDTH_RandomValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_VIDEO_BANDWIDTH ;
	 
	ViReal64 randomValue = 2501727.95 ;	
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
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_VIDEO_BANDWIDTH_ViolationMinValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_VIDEO_BANDWIDTH;
	ViReal64 ViolationValue = 0 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}

/****************************************************************************
 * Violation Value Test	  												    
 * ViReal64
 * Read & Write
 * Should Fail! 
 ****************************************************************************/
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_VIDEO_BANDWIDTH_ViolationMaxValue_ReadWrite_NullChannel_Index1()
{
	ViAttr attributeId = AGN934XNI_ATTR_VIDEO_BANDWIDTH;
	ViReal64 ViolationValue = 3.000001E6 ;

	CPPUNIT_ASSERT(VI_SUCCESS != Ivi_SetAttributeViReal64 (vi, VI_NULL, attributeId, 0, ViolationValue));
}
		

/****************************************************************************
 * Default Value Test	  												    
 * ViBoolean
 * Read & Write
 ****************************************************************************/		
void DriverNormalFunctionalityTest::testAGN934XNI_ATTR_VIDEO_BANDWIDTH_AUTO_defaultValue_ReadWrite_NullChannel_Index0()
{
	
	ViAttr attributeId = AGN934XNI_ATTR_VIDEO_BANDWIDTH_AUTO ;
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
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/CompilerOutputter.h>
#include <fstream>

#include "agn934xni_testNormalMode.h"
#include "agn934xni_testTGMode.h"
#include "agn934xni_testOBWMode.h"
#include "agn934xni_testCHPMode.h"
#include "agn934xni_testACPRMode.h"
#include "agn934xni_testMarkerTrigger.h"

#include "agn934xni_testDemodulation.h"
#include "agn934xni_testPowerMeter.h"
#include "agn934xni_testRefMeas.h"


/****************************************************************************
 *------------------------ Global Variable & Function _---------------------*
 ****************************************************************************/
ViSession vi = VI_NULL;		
ViBoolean bInit = VI_TRUE;
ViRsrc instrName = {"agn9322c"};


/* Regist the test suites */

CPPUNIT_TEST_SUITE_REGISTRATION(DriverNormalFunctionalityTest);
CPPUNIT_TEST_SUITE_REGISTRATION(DriverTGFunctionalityTest);
CPPUNIT_TEST_SUITE_REGISTRATION(DriverOBWFunctionalityTest);
CPPUNIT_TEST_SUITE_REGISTRATION(DriverCHPFunctionalityTest);
CPPUNIT_TEST_SUITE_REGISTRATION(DriverACPRFunctionalityTest);
CPPUNIT_TEST_SUITE_REGISTRATION(DriverMarkerTriggerFunctionalityTest);

CPPUNIT_TEST_SUITE_REGISTRATION(DriverDemodulationFunctionalityTest);
CPPUNIT_TEST_SUITE_REGISTRATION(DriverPowerMeterFunctionalityTest);
CPPUNIT_TEST_SUITE_REGISTRATION(DriverRefMeasFunctionalityTest);

int main( int argc, char **argv)
{
	std::ofstream fs("TestResult.txt");
	CppUnit::TextUi::TestRunner runner;
	runner.addTest( CppUnit::TestFactoryRegistry::getRegistry().makeTest());   // Add the top suite to the test runner
	runner.setOutputter( CppUnit::CompilerOutputter::defaultOutputter( &runner.result(), fs ));
	bool wasSucessful = runner.run( "" );

	system("PAUSE");
	return 0;
}

void testClose()
{
	agn934xni_close(vi);
	vi = VI_NULL;
}
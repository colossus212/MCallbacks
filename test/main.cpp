//!
//! @file 			main.cpp
//! @author 		Geoffrey Hunter <gbmhunter@gmail.com> (www.mbedded.ninja)
//! @created		2014-01-14
//! @last-modified 	2014-09-01
//! @brief 			Contains main entry point for unit tests.
//! @details
//!					See README.rst in root dir for more info.

// System libraries
#include <stdio.h>

// User libraries
#include "unittest-cpp/UnitTest++/UnitTest++.h"
#include "unittest-cpp/UnitTest++/TestReporterStdout.h"

int main()
{
	return UnitTest::RunAllTests();
	
	try
    {
        UnitTest::TestReporterStdout reporter;
		UnitTest::TestRunner runner(reporter);
	
	
		return runner.RunTestsIf(
			UnitTest::Test::GetTestList(),
			"ParamTests",
			UnitTest::True(),
			0);
    }
    catch(std::exception const& e)
    {
         printf("%s", e.what());
         // If you are feeling mad (not in main) you could rethrow! 
    }
	
}

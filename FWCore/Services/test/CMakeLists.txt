add_library(FpeTester OBJECT 
  FpeTester.cc
)

target_include_directories(FpeTester PUBLIC /usr/include/boost/python/)
target_include_directories(FpeTester PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FpeTester PUBLIC /usr/include/python2.7/)
target_include_directories(FpeTester PUBLIC /usr/include/root/)
target_include_directories(FpeTester PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FpeTester PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FpeTester PUBLIC /usr/include/boost/)
target_include_directories(FpeTester PUBLIC /usr/include/boost/regex/)

add_library(StuckAnalyzer OBJECT 
  StuckAnalyzer.cc
)

target_include_directories(StuckAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(StuckAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(StuckAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(StuckAnalyzer PUBLIC /usr/include/root/)
target_include_directories(StuckAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(StuckAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(StuckAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(StuckAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(SiteLocalConfigUnitTestClient OBJECT 
  SiteLocalConfigServiceTester.cc
)

target_include_directories(SiteLocalConfigUnitTestClient PUBLIC /usr/include/boost/python/)
target_include_directories(SiteLocalConfigUnitTestClient PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SiteLocalConfigUnitTestClient PUBLIC /usr/include/python2.7/)
target_include_directories(SiteLocalConfigUnitTestClient PUBLIC /usr/include/root/)
target_include_directories(SiteLocalConfigUnitTestClient PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SiteLocalConfigUnitTestClient PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SiteLocalConfigUnitTestClient PUBLIC /usr/include/boost/)
target_include_directories(SiteLocalConfigUnitTestClient PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreServicesDriver OBJECT 
  TestFWCoreServicesDriver.cpp
)

target_include_directories(TestFWCoreServicesDriver PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreServicesDriver PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreServicesDriver PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreServicesDriver PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreServicesDriver PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreServicesDriver PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreServicesDriver PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreServicesDriver PUBLIC /usr/include/boost/regex/)


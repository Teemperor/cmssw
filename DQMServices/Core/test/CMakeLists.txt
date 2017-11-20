add_library(DQMServicesCoreROOTExample OBJECT 
  DQMBackEndInterfaceExample.cc
)

target_include_directories(DQMServicesCoreROOTExample PUBLIC /usr/include/boost/python/)
target_include_directories(DQMServicesCoreROOTExample PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMServicesCoreROOTExample PUBLIC /usr/include/python2.7/)
target_include_directories(DQMServicesCoreROOTExample PUBLIC /usr/include/root/)
target_include_directories(DQMServicesCoreROOTExample PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMServicesCoreROOTExample PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMServicesCoreROOTExample PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMServicesCoreROOTExample PUBLIC /usr/include/boost/)
target_include_directories(DQMServicesCoreROOTExample PUBLIC /usr/include/boost/regex/)

add_library(DQMServicesCoreROOTReadFileExample OBJECT 
  DQMReadFileExample.cc
)

target_include_directories(DQMServicesCoreROOTReadFileExample PUBLIC /usr/include/boost/python/)
target_include_directories(DQMServicesCoreROOTReadFileExample PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMServicesCoreROOTReadFileExample PUBLIC /usr/include/python2.7/)
target_include_directories(DQMServicesCoreROOTReadFileExample PUBLIC /usr/include/root/)
target_include_directories(DQMServicesCoreROOTReadFileExample PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMServicesCoreROOTReadFileExample PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMServicesCoreROOTReadFileExample PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMServicesCoreROOTReadFileExample PUBLIC /usr/include/boost/)
target_include_directories(DQMServicesCoreROOTReadFileExample PUBLIC /usr/include/boost/regex/)

add_library(DQMServicesCoreROOTQTestsExample OBJECT 
  DQMBackEndInterfaceQTestsExample.cc
)

target_include_directories(DQMServicesCoreROOTQTestsExample PUBLIC /usr/include/boost/python/)
target_include_directories(DQMServicesCoreROOTQTestsExample PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMServicesCoreROOTQTestsExample PUBLIC /usr/include/python2.7/)
target_include_directories(DQMServicesCoreROOTQTestsExample PUBLIC /usr/include/root/)
target_include_directories(DQMServicesCoreROOTQTestsExample PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMServicesCoreROOTQTestsExample PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMServicesCoreROOTQTestsExample PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMServicesCoreROOTQTestsExample PUBLIC /usr/include/boost/)
target_include_directories(DQMServicesCoreROOTQTestsExample PUBLIC /usr/include/boost/regex/)

add_library(DQMServicesUIStandaloneExample OBJECT 
  DQMMonitorUIRootStandaloneExample.cc
)

target_include_directories(DQMServicesUIStandaloneExample PUBLIC /usr/include/boost/python/)
target_include_directories(DQMServicesUIStandaloneExample PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMServicesUIStandaloneExample PUBLIC /usr/include/python2.7/)
target_include_directories(DQMServicesUIStandaloneExample PUBLIC /usr/include/root/)
target_include_directories(DQMServicesUIStandaloneExample PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMServicesUIStandaloneExample PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMServicesUIStandaloneExample PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMServicesUIStandaloneExample PUBLIC /usr/include/boost/)
target_include_directories(DQMServicesUIStandaloneExample PUBLIC /usr/include/boost/regex/)

add_library(DQMServicesCoreSourceExample OBJECT 
  DQMSourceExampleConfig.cc
)

target_include_directories(DQMServicesCoreSourceExample PUBLIC /usr/include/boost/python/)
target_include_directories(DQMServicesCoreSourceExample PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMServicesCoreSourceExample PUBLIC /usr/include/python2.7/)
target_include_directories(DQMServicesCoreSourceExample PUBLIC /usr/include/root/)
target_include_directories(DQMServicesCoreSourceExample PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMServicesCoreSourceExample PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMServicesCoreSourceExample PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMServicesCoreSourceExample PUBLIC /usr/include/boost/)
target_include_directories(DQMServicesCoreSourceExample PUBLIC /usr/include/boost/regex/)

add_library(DQMTestMultiThread OBJECT 
  DQMTestMultiThread.cc
)

target_include_directories(DQMTestMultiThread PUBLIC /usr/include/boost/python/)
target_include_directories(DQMTestMultiThread PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMTestMultiThread PUBLIC /usr/include/python2.7/)
target_include_directories(DQMTestMultiThread PUBLIC /usr/include/root/)
target_include_directories(DQMTestMultiThread PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMTestMultiThread PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMTestMultiThread PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMTestMultiThread PUBLIC /usr/include/boost/)
target_include_directories(DQMTestMultiThread PUBLIC /usr/include/boost/regex/)

add_library(DQMQualityTestsExample OBJECT 
  DQMQualityTestsExample.cc
)

target_include_directories(DQMQualityTestsExample PUBLIC /usr/include/boost/python/)
target_include_directories(DQMQualityTestsExample PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMQualityTestsExample PUBLIC /usr/include/python2.7/)
target_include_directories(DQMQualityTestsExample PUBLIC /usr/include/root/)
target_include_directories(DQMQualityTestsExample PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMQualityTestsExample PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMQualityTestsExample PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMQualityTestsExample PUBLIC /usr/include/boost/)
target_include_directories(DQMQualityTestsExample PUBLIC /usr/include/boost/regex/)

add_library(DQMFastMatchTest OBJECT 
  DQMFastMatchTest.cc
)

target_include_directories(DQMFastMatchTest PUBLIC /usr/include/boost/python/)
target_include_directories(DQMFastMatchTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMFastMatchTest PUBLIC /usr/include/python2.7/)
target_include_directories(DQMFastMatchTest PUBLIC /usr/include/root/)
target_include_directories(DQMFastMatchTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMFastMatchTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMFastMatchTest PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMFastMatchTest PUBLIC /usr/include/boost/)
target_include_directories(DQMFastMatchTest PUBLIC /usr/include/boost/regex/)

add_library(DQMTestStandaloneBuildOfDQMStore OBJECT 
  DQMTestStandaloneBuildOfDQMStore.cc
)

target_include_directories(DQMTestStandaloneBuildOfDQMStore PUBLIC /usr/include/boost/python/)
target_include_directories(DQMTestStandaloneBuildOfDQMStore PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMTestStandaloneBuildOfDQMStore PUBLIC /usr/include/python2.7/)
target_include_directories(DQMTestStandaloneBuildOfDQMStore PUBLIC /usr/include/root/)
target_include_directories(DQMTestStandaloneBuildOfDQMStore PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMTestStandaloneBuildOfDQMStore PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMTestStandaloneBuildOfDQMStore PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMTestStandaloneBuildOfDQMStore PUBLIC /usr/include/boost/)
target_include_directories(DQMTestStandaloneBuildOfDQMStore PUBLIC /usr/include/boost/regex/)


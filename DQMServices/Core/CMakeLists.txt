add_subdirectory(bin)
add_subdirectory(test)
add_subdirectory(plugins)
add_library(DQMServicesCore OBJECT 
  src/DQMError.cc
  src/QTest.cc
  src/QReport.cc
  src/ROOTFilePB.pb.cc
  src/MonitorElement.cc
  src/DQMStore.cc
  src/QStatisticalTests.cc
  src/DQMOldReceiver.cc
  src/DQMEDAnalyzer.cc
  src/DQMEDHarvester.cc
  src/DQMService.cc
  src/DQMNet.cc
)

target_include_directories(DQMServicesCore PUBLIC /usr/include/boost/python/)
target_include_directories(DQMServicesCore PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMServicesCore PUBLIC /usr/include/python2.7/)
target_include_directories(DQMServicesCore PUBLIC /usr/include/root/)
target_include_directories(DQMServicesCore PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMServicesCore PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMServicesCore PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMServicesCore PUBLIC /usr/include/boost/)
target_include_directories(DQMServicesCore PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/DQMError.cc
  src/QTest.cc
  src/QReport.cc
  src/ROOTFilePB.pb.cc
  src/MonitorElement.cc
  src/DQMStore.cc
  src/QStatisticalTests.cc
  src/DQMOldReceiver.cc
  src/DQMEDAnalyzer.cc
  src/DQMEDHarvester.cc
  src/DQMService.cc
  src/DQMNet.cc
PROPERTIES COMPILE_FLAGS "-DWITHOUT_CMS_FRAMEWORK=0")


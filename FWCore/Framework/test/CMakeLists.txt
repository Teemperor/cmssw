add_library(FWCoreFrameworkTestDummyForEventSetup OBJECT 
  DummyData.cc
  DummyRecord.cc
  DepRecord.cc
  Dummy2Record.cc
  DepOn2Record.cc
)

target_include_directories(FWCoreFrameworkTestDummyForEventSetup PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreFrameworkTestDummyForEventSetup PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreFrameworkTestDummyForEventSetup PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreFrameworkTestDummyForEventSetup PUBLIC /usr/include/root/)
target_include_directories(FWCoreFrameworkTestDummyForEventSetup PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreFrameworkTestDummyForEventSetup PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreFrameworkTestDummyForEventSetup PUBLIC /usr/include/boost/)
target_include_directories(FWCoreFrameworkTestDummyForEventSetup PUBLIC /usr/include/boost/regex/)

add_library(FWCoreFrameworkTest OBJECT 
  MockEventProcessor.cc
  stubs/TestBeginEndJobAnalyzer.cc
)

target_include_directories(FWCoreFrameworkTest PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreFrameworkTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreFrameworkTest PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreFrameworkTest PUBLIC /usr/include/root/)
target_include_directories(FWCoreFrameworkTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreFrameworkTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreFrameworkTest PUBLIC /usr/include/boost/)
target_include_directories(FWCoreFrameworkTest PUBLIC /usr/include/boost/regex/)

add_library(TestOutputModule OBJECT 
  stubs/TestOutputModule.cc
)

target_include_directories(TestOutputModule PUBLIC /usr/include/boost/python/)
target_include_directories(TestOutputModule PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestOutputModule PUBLIC /usr/include/python2.7/)
target_include_directories(TestOutputModule PUBLIC /usr/include/root/)
target_include_directories(TestOutputModule PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestOutputModule PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestOutputModule PUBLIC /usr/include/boost/)
target_include_directories(TestOutputModule PUBLIC /usr/include/boost/regex/)

add_library(TestFilterModule OBJECT 
  stubs/TestFilterModule.cc
)

target_include_directories(TestFilterModule PUBLIC /usr/include/boost/python/)
target_include_directories(TestFilterModule PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFilterModule PUBLIC /usr/include/python2.7/)
target_include_directories(TestFilterModule PUBLIC /usr/include/root/)
target_include_directories(TestFilterModule PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFilterModule PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFilterModule PUBLIC /usr/include/boost/)
target_include_directories(TestFilterModule PUBLIC /usr/include/boost/regex/)

add_library(TestTBBTasksAnalyzer OBJECT 
  stubs/TestTBBTasksAnalyzer.cc
  stubs/TestNThreadsChecker.cc
)

target_include_directories(TestTBBTasksAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(TestTBBTasksAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestTBBTasksAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(TestTBBTasksAnalyzer PUBLIC /usr/include/root/)
target_include_directories(TestTBBTasksAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestTBBTasksAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestTBBTasksAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(TestTBBTasksAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkTBBTasks OBJECT 
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkTBBTasks PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkTBBTasks PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkTBBTasks PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkTBBTasks PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkTBBTasks PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkTBBTasks PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkTBBTasks PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkTBBTasks PUBLIC /usr/include/boost/regex/)

add_library(TestTriggerNames OBJECT 
  stubs/TestTriggerNames.cc
)

target_include_directories(TestTriggerNames PUBLIC /usr/include/boost/python/)
target_include_directories(TestTriggerNames PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestTriggerNames PUBLIC /usr/include/python2.7/)
target_include_directories(TestTriggerNames PUBLIC /usr/include/root/)
target_include_directories(TestTriggerNames PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestTriggerNames PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestTriggerNames PUBLIC /usr/include/boost/)
target_include_directories(TestTriggerNames PUBLIC /usr/include/boost/regex/)

add_library(TestMergeResults OBJECT 
  stubs/TestMergeResults.cc
)

target_include_directories(TestMergeResults PUBLIC /usr/include/boost/python/)
target_include_directories(TestMergeResults PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestMergeResults PUBLIC /usr/include/python2.7/)
target_include_directories(TestMergeResults PUBLIC /usr/include/root/)
target_include_directories(TestMergeResults PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestMergeResults PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestMergeResults PUBLIC /usr/include/boost/)
target_include_directories(TestMergeResults PUBLIC /usr/include/boost/regex/)

add_library(RunLumiEventAnalyzer OBJECT 
  stubs/RunLumiEventAnalyzer.cc
)

target_include_directories(RunLumiEventAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(RunLumiEventAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RunLumiEventAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(RunLumiEventAnalyzer PUBLIC /usr/include/root/)
target_include_directories(RunLumiEventAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RunLumiEventAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RunLumiEventAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(RunLumiEventAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(TestMod OBJECT 
  stubs/TestMod.cc
)

target_include_directories(TestMod PUBLIC /usr/include/boost/python/)
target_include_directories(TestMod PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestMod PUBLIC /usr/include/python2.7/)
target_include_directories(TestMod PUBLIC /usr/include/root/)
target_include_directories(TestMod PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestMod PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestMod PUBLIC /usr/include/boost/)
target_include_directories(TestMod PUBLIC /usr/include/boost/regex/)

add_library(TestToyModules OBJECT 
  stubs/ToyModules.cc
  stubs/ToyAnalyzers.cc
  stubs/ToyIntProducers.cc
  stubs/ToyDoubleProducers.cc
  stubs/ToySTLProducers.cc
  stubs/ToyRefProducers.cc
  stubs/DeleteEarlyModules.cc
)

target_include_directories(TestToyModules PUBLIC /usr/include/boost/python/)
target_include_directories(TestToyModules PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestToyModules PUBLIC /usr/include/python2.7/)
target_include_directories(TestToyModules PUBLIC /usr/include/root/)
target_include_directories(TestToyModules PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestToyModules PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestToyModules PUBLIC /usr/include/boost/)
target_include_directories(TestToyModules PUBLIC /usr/include/boost/regex/)

add_library(TestGlobalModules OBJECT 
  stubs/TestGlobalProducers.cc
  stubs/TestGlobalAnalyzers.cc
  stubs/TestGlobalFilters.cc
)

target_include_directories(TestGlobalModules PUBLIC /usr/include/boost/python/)
target_include_directories(TestGlobalModules PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestGlobalModules PUBLIC /usr/include/python2.7/)
target_include_directories(TestGlobalModules PUBLIC /usr/include/root/)
target_include_directories(TestGlobalModules PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestGlobalModules PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestGlobalModules PUBLIC /usr/include/boost/)
target_include_directories(TestGlobalModules PUBLIC /usr/include/boost/regex/)

add_library(TestOneModules OBJECT 
  stubs/TestOneProducers.cc
  stubs/TestOneAnalyzers.cc
  stubs/TestOneFilters.cc
)

target_include_directories(TestOneModules PUBLIC /usr/include/boost/python/)
target_include_directories(TestOneModules PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestOneModules PUBLIC /usr/include/python2.7/)
target_include_directories(TestOneModules PUBLIC /usr/include/root/)
target_include_directories(TestOneModules PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestOneModules PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestOneModules PUBLIC /usr/include/boost/)
target_include_directories(TestOneModules PUBLIC /usr/include/boost/regex/)

add_library(TestStreamModules OBJECT 
  stubs/TestStreamProducers.cc
  stubs/TestStreamFilters.cc
  stubs/TestStreamAnalyzers.cc
)

target_include_directories(TestStreamModules PUBLIC /usr/include/boost/python/)
target_include_directories(TestStreamModules PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestStreamModules PUBLIC /usr/include/python2.7/)
target_include_directories(TestStreamModules PUBLIC /usr/include/root/)
target_include_directories(TestStreamModules PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestStreamModules PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestStreamModules PUBLIC /usr/include/boost/)
target_include_directories(TestStreamModules PUBLIC /usr/include/boost/regex/)

add_library(TestSchedulerModule1 OBJECT 
  stubs/TestSchedulerModule1.cc
)

target_include_directories(TestSchedulerModule1 PUBLIC /usr/include/boost/python/)
target_include_directories(TestSchedulerModule1 PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestSchedulerModule1 PUBLIC /usr/include/python2.7/)
target_include_directories(TestSchedulerModule1 PUBLIC /usr/include/root/)
target_include_directories(TestSchedulerModule1 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestSchedulerModule1 PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestSchedulerModule1 PUBLIC /usr/include/boost/)
target_include_directories(TestSchedulerModule1 PUBLIC /usr/include/boost/regex/)

add_library(TestSchedulerModule2 OBJECT 
  stubs/TestSchedulerModule2.cc
)

target_include_directories(TestSchedulerModule2 PUBLIC /usr/include/boost/python/)
target_include_directories(TestSchedulerModule2 PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestSchedulerModule2 PUBLIC /usr/include/python2.7/)
target_include_directories(TestSchedulerModule2 PUBLIC /usr/include/root/)
target_include_directories(TestSchedulerModule2 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestSchedulerModule2 PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestSchedulerModule2 PUBLIC /usr/include/boost/)
target_include_directories(TestSchedulerModule2 PUBLIC /usr/include/boost/regex/)

add_library(TestLoadableDummyFinder OBJECT 
  stubs/LoadableDummyFinder.cc
)

target_include_directories(TestLoadableDummyFinder PUBLIC /usr/include/boost/python/)
target_include_directories(TestLoadableDummyFinder PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestLoadableDummyFinder PUBLIC /usr/include/python2.7/)
target_include_directories(TestLoadableDummyFinder PUBLIC /usr/include/root/)
target_include_directories(TestLoadableDummyFinder PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestLoadableDummyFinder PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestLoadableDummyFinder PUBLIC /usr/include/boost/)
target_include_directories(TestLoadableDummyFinder PUBLIC /usr/include/boost/regex/)

add_library(TestLoadableDummyESSource OBJECT 
  stubs/LoadableDummyESSource.cc
)

target_include_directories(TestLoadableDummyESSource PUBLIC /usr/include/boost/python/)
target_include_directories(TestLoadableDummyESSource PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestLoadableDummyESSource PUBLIC /usr/include/python2.7/)
target_include_directories(TestLoadableDummyESSource PUBLIC /usr/include/root/)
target_include_directories(TestLoadableDummyESSource PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestLoadableDummyESSource PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestLoadableDummyESSource PUBLIC /usr/include/boost/)
target_include_directories(TestLoadableDummyESSource PUBLIC /usr/include/boost/regex/)

add_library(TestLoadableDummyEventSetupRecordRetriever OBJECT 
  stubs/LoadableDummyEventSetupRecordRetriever.cc
)

target_include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC /usr/include/boost/python/)
target_include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC /usr/include/python2.7/)
target_include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC /usr/include/root/)
target_include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC /usr/include/boost/)
target_include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC /usr/include/boost/regex/)

add_library(TestLoadableDummyProvider OBJECT 
  stubs/LoadableDummyProvider.cc
)

target_include_directories(TestLoadableDummyProvider PUBLIC /usr/include/boost/python/)
target_include_directories(TestLoadableDummyProvider PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestLoadableDummyProvider PUBLIC /usr/include/python2.7/)
target_include_directories(TestLoadableDummyProvider PUBLIC /usr/include/root/)
target_include_directories(TestLoadableDummyProvider PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestLoadableDummyProvider PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestLoadableDummyProvider PUBLIC /usr/include/boost/)
target_include_directories(TestLoadableDummyProvider PUBLIC /usr/include/boost/regex/)

add_library(FWCoreFrameworkTestDummyLooper OBJECT 
  stubs/DummyLooper.cc
  stubs/TestModuleChangeLooper.cc
)

target_include_directories(FWCoreFrameworkTestDummyLooper PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreFrameworkTestDummyLooper PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreFrameworkTestDummyLooper PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreFrameworkTestDummyLooper PUBLIC /usr/include/root/)
target_include_directories(FWCoreFrameworkTestDummyLooper PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreFrameworkTestDummyLooper PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreFrameworkTestDummyLooper PUBLIC /usr/include/boost/)
target_include_directories(FWCoreFrameworkTestDummyLooper PUBLIC /usr/include/boost/regex/)

add_library(FWCoreFrameworkTestESDummyDataAnalyzer OBJECT 
  stubs/TestESDummyDataAnalyzer.cc
)

target_include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC /usr/include/root/)
target_include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(FWCoreFrameworkTestPRegisterModules OBJECT 
  stubs/TestPRegisterModule2.cc
  stubs/TestPRegisterModule1.cc
  stubs/TestPRegisterModules.cc
)

target_include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC /usr/include/root/)
target_include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC /usr/include/boost/)
target_include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC /usr/include/boost/regex/)

add_library(FWCoreFrameworkTestBeginEndJobAnalyzer OBJECT 
  stubs/TestBeginEndJobAnalyzerModule.cc
)

target_include_directories(FWCoreFrameworkTestBeginEndJobAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreFrameworkTestBeginEndJobAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreFrameworkTestBeginEndJobAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreFrameworkTestBeginEndJobAnalyzer PUBLIC /usr/include/root/)
target_include_directories(FWCoreFrameworkTestBeginEndJobAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreFrameworkTestBeginEndJobAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreFrameworkTestBeginEndJobAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(FWCoreFrameworkTestBeginEndJobAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(FWCoreFrameworkTestFailuresAnalyzer OBJECT 
  stubs/TestFailuresAnalyzer.cc
)

target_include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC /usr/include/root/)
target_include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(FWCoreFrameworkHistoryAnalyzer OBJECT 
  stubs/HistoryAnalyzer.cc
)

target_include_directories(FWCoreFrameworkHistoryAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreFrameworkHistoryAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreFrameworkHistoryAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreFrameworkHistoryAnalyzer PUBLIC /usr/include/root/)
target_include_directories(FWCoreFrameworkHistoryAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreFrameworkHistoryAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreFrameworkHistoryAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(FWCoreFrameworkHistoryAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFramework OBJECT 
  testRunner.cpp
  maker2_t.cppunit.cc
  maker_t.cppunit.cc
  productregistry.cppunit.cc
  edproducer_productregistry_callback.cc
  event_getrefbeforeput_t.cppunit.cc
  generichandle_t.cppunit.cc
  edconsumerbase_t.cppunit.cc
  global_module_t.cppunit.cc
  one_outputmodule_t.cppunit.cc
  global_outputmodule_t.cppunit.cc
  stream_module_t.cppunit.cc
  throwIfImproperDependencies_t.cppunit.cc
)

target_include_directories(TestFWCoreFramework PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFramework PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFramework PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFramework PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFramework PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFramework PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFramework PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFramework PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkeventsetup OBJECT 
  testRunner.cpp
  callback_t.cppunit.cc
  datakey_t.cppunit.cc
  dependentrecord_t.cppunit.cc
  esproducer_t.cppunit.cc
  esproducts_t.cppunit.cc
  eventsetupplugin_t.cppunit.cc
  eventsetuprecord_t.cppunit.cc
  eventsetup_t.cppunit.cc
  fullchain_t.cppunit.cc
  interval_t.cppunit.cc
  proxyfactoryproducer_t.cppunit.cc
  iovsyncvalue_t.cppunit.cc
  intersectingiovrecordintervalfinder_t.cppunit.cc
  eventsetupscontroller_t.cppunit.cc
)

target_include_directories(TestFWCoreFrameworkeventsetup PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkeventsetup PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkeventsetup PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkeventsetup PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkeventsetup PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkeventsetup PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkeventsetup PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkeventsetup PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkeventprocessor OBJECT 
  testRunner.cpp
  eventprocessor2_t.cppunit.cc
  eventprocessor_t.cppunit.cc
)

target_include_directories(TestFWCoreFrameworkeventprocessor PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkeventprocessor PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkeventprocessor PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkeventprocessor PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkeventprocessor PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkeventprocessor PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkeventprocessor PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkeventprocessor PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkeventprincipal OBJECT 
  testRunner.cpp
  eventprincipal_t.cppunit.cc
  sharedresourcesregistry_t.cppunit.cc
)

target_include_directories(TestFWCoreFrameworkeventprincipal PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkeventprincipal PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkeventprincipal PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkeventprincipal PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkeventprincipal PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkeventprincipal PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkeventprincipal PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkeventprincipal PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkEvent OBJECT 
  Event_t.cpp
)

target_include_directories(TestFWCoreFrameworkEvent PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkEvent PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkEvent PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkEvent PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkEvent PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkEvent PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkEvent PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkEvent PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkView OBJECT 
  View_t.cpp
)

target_include_directories(TestFWCoreFrameworkView PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkView PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkView PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkView PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkView PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkView PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkView PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkView PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkCmsRun OBJECT 
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkCmsRun PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkCmsRun PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkCmsRun PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkCmsRun PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkCmsRun PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkCmsRun PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkCmsRun PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkCmsRun PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkESRefer OBJECT 
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkESRefer PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkESRefer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkESRefer PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkESRefer PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkESRefer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkESRefer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkESRefer PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkESRefer PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkUnscheduled OBJECT 
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkUnscheduled PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkUnscheduled PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkUnscheduled PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkUnscheduled PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkUnscheduled PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkUnscheduled PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkUnscheduled PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkUnscheduled PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkGlobalStreamOne OBJECT 
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkMayConsumesDeadlock OBJECT 
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkReplace OBJECT 
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkReplace PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkReplace PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkReplace PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkReplace PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkReplace PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkReplace PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkReplace PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkReplace PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkESProducerLooper OBJECT 
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkTrigBit OBJECT 
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkTrigBit PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkTrigBit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkTrigBit PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkTrigBit PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkTrigBit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkTrigBit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkTrigBit PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkTrigBit PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkTrigMask OBJECT 
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkTrigMask PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkTrigMask PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkTrigMask PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkTrigMask PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkTrigMask PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkTrigMask PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkTrigMask PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkTrigMask PUBLIC /usr/include/boost/regex/)

add_library(TestXMLSafeException OBJECT 
  TestDriver.cpp
)

target_include_directories(TestXMLSafeException PUBLIC /usr/include/boost/python/)
target_include_directories(TestXMLSafeException PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestXMLSafeException PUBLIC /usr/include/python2.7/)
target_include_directories(TestXMLSafeException PUBLIC /usr/include/root/)
target_include_directories(TestXMLSafeException PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestXMLSafeException PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestXMLSafeException PUBLIC /usr/include/boost/)
target_include_directories(TestXMLSafeException PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkProductSelector OBJECT 
  ProductSelector_t.cpp
)

target_include_directories(TestFWCoreFrameworkProductSelector PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkProductSelector PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkProductSelector PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkProductSelector PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkProductSelector PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkProductSelector PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkProductSelector PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkProductSelector PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkEventSelector OBJECT 
  EventSelector_t.cpp
)

target_include_directories(TestFWCoreFrameworkEventSelector PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkEventSelector PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkEventSelector PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkEventSelector PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkEventSelector PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkEventSelector PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkEventSelector PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkEventSelector PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkEventSelWildcard OBJECT 
  EventSelWildcard_t.cpp
)

target_include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkEventSelExc OBJECT 
  EventSelExc_t.cpp
)

target_include_directories(TestFWCoreFrameworkEventSelExc PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkEventSelExc PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkEventSelExc PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkEventSelExc PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkEventSelExc PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkEventSelExc PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkEventSelExc PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkEventSelExc PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkEventSelOverlap OBJECT 
  EventSelOverlap_t.cpp
)

target_include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkRegistryTemplate OBJECT 
  RegistryTemplate_t.cpp
)

target_include_directories(TestFWCoreFrameworkRegistryTemplate PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkRegistryTemplate PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkRegistryTemplate PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkRegistryTemplate PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkRegistryTemplate PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkRegistryTemplate PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkRegistryTemplate PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkRegistryTemplate PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreOutputModuleUtilities OBJECT 
  OutputModuleUtilities_t.cpp
)

target_include_directories(TestFWCoreOutputModuleUtilities PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreOutputModuleUtilities PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreOutputModuleUtilities PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreOutputModuleUtilities PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreOutputModuleUtilities PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreOutputModuleUtilities PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreOutputModuleUtilities PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreOutputModuleUtilities PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkStatemachine OBJECT 
  statemachine_t.cc
)

target_include_directories(TestFWCoreFrameworkStatemachine PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkStatemachine PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkStatemachine PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkStatemachine PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkStatemachine PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkStatemachine PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkStatemachine PUBLIC /usr/include/boost/program_options/)
target_include_directories(TestFWCoreFrameworkStatemachine PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkStatemachine PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkStatemachineSH OBJECT 
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkStatemachineSH PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkStatemachineSH PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkStatemachineSH PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkStatemachineSH PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkStatemachineSH PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkStatemachineSH PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkStatemachineSH PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkStatemachineSH PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkInputTagFailure OBJECT 
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkDeleteEarly OBJECT 
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkDeleteEarly PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkDeleteEarly PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkDeleteEarly PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkDeleteEarly PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkDeleteEarly PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkDeleteEarly PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkDeleteEarly PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkDeleteEarly PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkEarlyTerminationSignal OBJECT 
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreFrameworkPrintDependencies OBJECT 
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkPrintDependencies PUBLIC /usr/include/boost/python/)
target_include_directories(TestFWCoreFrameworkPrintDependencies PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreFrameworkPrintDependencies PUBLIC /usr/include/python2.7/)
target_include_directories(TestFWCoreFrameworkPrintDependencies PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreFrameworkPrintDependencies PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreFrameworkPrintDependencies PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreFrameworkPrintDependencies PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreFrameworkPrintDependencies PUBLIC /usr/include/boost/regex/)


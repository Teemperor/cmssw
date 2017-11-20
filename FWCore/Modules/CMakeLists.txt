add_library(FWCoreModules OBJECT 
  src/PrintEventSetupDataRetrieval.cc
  src/ModuloEventIDFilter.cc
  src/LogErrorFilter.cc
  src/MulticoreRunLumiEventChecker.cc
  src/Prescaler.cc
  src/AbortOnEventIDAnalyzer.cc
  src/IterateNTimesLooper.cc
  src/EventAuxiliaryHistoryProducer.cc
  src/EmptyESSource.cc
  src/EmptySource.cc
  src/PrintEventSetupContent.cc
  src/LogErrorHarvester.cc
  src/EventContentAnalyzer.cc
  src/ProvenanceCheckerOutputModule.cc
  src/ModuloStreamIDFilter.cc
  src/EventSetupRecordDataGetter.cc
  src/EventIDChecker.cc
  src/EventSetupCacheIdentifierChecker.cc
  src/GetProductCheckerOutputModule.cc
  src/AsciiOutputModule.cc
  src/NavigateEventsLooper.cc
)

target_include_directories(FWCoreModules PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreModules PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreModules PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreModules PUBLIC /usr/include/root/)
target_include_directories(FWCoreModules PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreModules PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreModules PUBLIC /usr/include/boost/)
target_include_directories(FWCoreModules PUBLIC /usr/include/boost/regex/)


add_subdirectory(plugins)
add_library(L1TriggerGlobalTriggerAnalyzer OBJECT 
  src/L1GtPatternLine.cc
  src/L1GtTrigReport.cc
  src/L1RetrieveL1Extra.cc
  src/L1GtBeamModeFilter.cc
  src/L1PhiConversion.cc
  src/L1GtUtilsHelper.cc
  src/L1GtUtils.cc
  src/L1GtTrigReportEntry.cc
  src/L1GetHistLimits.cc
  src/L1GtPatternGenerator.cc
  src/L1GtPatternWriter.cc
  src/L1GtPackUnpackAnalyzer.cc
  src/L1GtDataEmulAnalyzer.cc
  src/L1GtPatternMap.cc
  src/L1GtAnalyzer.cc
)

target_include_directories(L1TriggerGlobalTriggerAnalyzer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(L1TriggerGlobalTriggerAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerGlobalTriggerAnalyzer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(L1TriggerGlobalTriggerAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerGlobalTriggerAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerGlobalTriggerAnalyzer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(L1TriggerGlobalTriggerAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerGlobalTriggerAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerGlobalTriggerAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerGlobalTriggerAnalyzer PUBLIC /usr/include/root/)
target_include_directories(L1TriggerGlobalTriggerAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerGlobalTriggerAnalyzer PUBLIC /usr/include/boost/regex/)


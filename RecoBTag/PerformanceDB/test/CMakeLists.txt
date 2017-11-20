add_library(testRecoBTagTestPerformanceDBPlugins OBJECT 
  DumpBtagTable.cc
  TestBtagPayloads.cc
  TestPerformanceFW_ES.cc
  TestPerformanceFW_ES_TFormula.cc
)

target_include_directories(testRecoBTagTestPerformanceDBPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(testRecoBTagTestPerformanceDBPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testRecoBTagTestPerformanceDBPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testRecoBTagTestPerformanceDBPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(testRecoBTagTestPerformanceDBPlugins PUBLIC /usr/include/root/)
target_include_directories(testRecoBTagTestPerformanceDBPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testRecoBTagTestPerformanceDBPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testRecoBTagTestPerformanceDBPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(testRecoBTagTestPerformanceDBPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testRecoBTagTestPerformanceDBPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testRecoBTagTestPerformanceDBPlugins PUBLIC /usr/include/boost/)
target_include_directories(testRecoBTagTestPerformanceDBPlugins PUBLIC /usr/include/boost/regex/)

add_library(validateRecoBTagPerformanceDBPlugins OBJECT 
  process/src/validateBTagDB.cc
)

target_include_directories(validateRecoBTagPerformanceDBPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(validateRecoBTagPerformanceDBPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(validateRecoBTagPerformanceDBPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(validateRecoBTagPerformanceDBPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(validateRecoBTagPerformanceDBPlugins PUBLIC /usr/include/root/)
target_include_directories(validateRecoBTagPerformanceDBPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(validateRecoBTagPerformanceDBPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(validateRecoBTagPerformanceDBPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(validateRecoBTagPerformanceDBPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(validateRecoBTagPerformanceDBPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(validateRecoBTagPerformanceDBPlugins PUBLIC /usr/include/boost/)
target_include_directories(validateRecoBTagPerformanceDBPlugins PUBLIC /usr/include/boost/regex/)


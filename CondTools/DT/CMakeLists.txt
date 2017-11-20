add_subdirectory(test)
add_subdirectory(plugins)
add_library(CondToolsDT OBJECT 
  src/DTLVStatusHandler.cc
  src/DTPerformanceHandler.cc
  src/DTT0Handler.cc
  src/DTHVAbstractCheck.cc
  src/DTStatusFlagHandler.cc
  src/DTKeyedConfigCache.cc
  src/DTReadOutMappingHandler.cc
  src/DTHVHandler.cc
  src/DTCompactMapWriter.cc
  src/DTKeyedConfigHandler.cc
  src/DTDeadFlagHandler.cc
  src/DTUserKeyedConfigHandler.cc
  src/DTExpandMap.cc
  src/DTPosNeg.cc
  src/DTDBDataHandle.cc
  src/DTHVStatusHandler.cc
  src/DTTPGParametersHandler.cc
  src/DTRangeT0Handler.cc
)

target_include_directories(CondToolsDT PUBLIC /usr/include/python2.7/)
target_include_directories(CondToolsDT PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(CondToolsDT PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondToolsDT PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondToolsDT PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondToolsDT PUBLIC /usr/include/boost/)
target_include_directories(CondToolsDT PUBLIC /usr/include/boost/python/)
target_include_directories(CondToolsDT PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondToolsDT PUBLIC /usr/include/root/)
target_include_directories(CondToolsDT PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondToolsDT PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondToolsDT PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondToolsDT PUBLIC /usr/include/boost/regex/)


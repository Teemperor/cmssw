add_library(CondToolsDTP OBJECT 
  DTReadOutMappingPopConAnalyzer.cc
  DTLVStatusPopConAnalyzer.cc
  DTPerformancePopConAnalyzer.cc
  DTHVCheckByAbsoluteValues.cc
  DTKeyedConfigDBDump.cc
  DTHVStatusPopConAnalyzer.cc
  DTStatusFlagPopConAnalyzer.cc
  DTHVCheckWithHysteresis.cc
  DTUserKeyedConfigPopConAnalyzer.cc
  DTRangeT0PopConAnalyzer.cc
  DTDeadFlagPopConAnalyzer.cc
  DTT0PopConAnalyzer.cc
  DTTPGParametersPopConAnalyzer.cc
  DTKeyedConfigDBInit.cc
  DTKeyedConfigPopConAnalyzer.cc
)

target_include_directories(CondToolsDTP PUBLIC /usr/include/python2.7/)
target_include_directories(CondToolsDTP PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(CondToolsDTP PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondToolsDTP PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondToolsDTP PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondToolsDTP PUBLIC /usr/include/boost/)
target_include_directories(CondToolsDTP PUBLIC /usr/include/boost/python/)
target_include_directories(CondToolsDTP PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondToolsDTP PUBLIC /usr/include/root/)
target_include_directories(CondToolsDTP PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondToolsDTP PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondToolsDTP PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondToolsDTP PUBLIC /usr/include/boost/regex/)


add_library(CondToolsDTTest OBJECT 
  stubs/DTHVDump.cc
  stubs/DTCompactMapDump.cc
  stubs/DTKeyedConfigDump.cc
  stubs/DTFullMapDump.cc
  stubs/DTGeometryDump.cc
  stubs/DTTimeUtility.cc
)

target_include_directories(CondToolsDTTest PUBLIC /usr/include/python2.7/)
target_include_directories(CondToolsDTTest PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(CondToolsDTTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondToolsDTTest PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondToolsDTTest PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondToolsDTTest PUBLIC /usr/include/boost/)
target_include_directories(CondToolsDTTest PUBLIC /usr/include/boost/python/)
target_include_directories(CondToolsDTTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondToolsDTTest PUBLIC /usr/include/root/)
target_include_directories(CondToolsDTTest PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondToolsDTTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondToolsDTTest PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondToolsDTTest PUBLIC /usr/include/boost/regex/)

add_library(CondToolsDTValidate OBJECT 
  validate/DTRangeT0ValidateDBRead.cc
  validate/DTPerformanceValidateHandler.cc
  validate/DTCCBConfigValidateDBWrite.cc
  validate/DTROMapValidateHandler.cc
  validate/DTHVStatusValidateDBRead.cc
  validate/DTDeadFlagValidateDBRead.cc
  validate/DTPerformanceValidateDBWrite.cc
  validate/DTStatusFlagValidateDBRead.cc
  validate/DTLVStatusValidateHandler.cc
  validate/DTHVStatusValidateDBWrite.cc
  validate/DTT0ValidateDBRead.cc
  validate/DTStatusFlagValidateDBWrite.cc
  validate/DTLVStatusValidateDBRead.cc
  validate/DTROMapValidateDBRead.cc
  validate/DTDeadFlagValidateHandler.cc
  validate/DTRangeT0ValidateHandler.cc
  validate/DTT0ValidateHandler.cc
  validate/DTTtrigValidateDBRead.cc
  validate/DTTPGParametersValidateDBWrite.cc
  validate/DTCCBConfigValidateHandler.cc
  validate/DTT0ValidateDBWrite.cc
  validate/DTLVStatusValidateDBWrite.cc
  validate/DTTPGParametersValidateHandler.cc
  validate/DTROMapValidateDBWrite.cc
  validate/DTDeadFlagValidateDBWrite.cc
  validate/DTPerformanceValidateDBRead.cc
  validate/DTRangeT0ValidateDBWrite.cc
  validate/DTCCBConfigValidateDBRead.cc
  validate/DTStatusFlagValidateHandler.cc
  validate/DTTPGParametersValidateDBRead.cc
  validate/DTHVStatusValidateHandler.cc
  validate/DTMtimeValidateDBRead.cc
  validate/DTCompMapValidateDBRead.cc
)

target_include_directories(CondToolsDTValidate PUBLIC /usr/include/python2.7/)
target_include_directories(CondToolsDTValidate PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(CondToolsDTValidate PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondToolsDTValidate PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondToolsDTValidate PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondToolsDTValidate PUBLIC /usr/include/boost/)
target_include_directories(CondToolsDTValidate PUBLIC /usr/include/boost/python/)
target_include_directories(CondToolsDTValidate PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondToolsDTValidate PUBLIC /usr/include/root/)
target_include_directories(CondToolsDTValidate PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondToolsDTValidate PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondToolsDTValidate PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondToolsDTValidate PUBLIC /usr/include/boost/regex/)


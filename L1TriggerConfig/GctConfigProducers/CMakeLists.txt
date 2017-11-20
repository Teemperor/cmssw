add_library(L1TriggerConfigGctConfigProducers OBJECT 
  src/L1GctConfigDump.cc
  src/L1GctChannelMaskOnlineProd.cc
  src/L1GctConfigProducers.cc
  src/L1GctRSObjectKeysOnlineProd.cc
  src/L1GctJetFinderParamsOnlineProd.cc
  src/L1GctTSCObjectKeysOnlineProd.cc
)

target_include_directories(L1TriggerConfigGctConfigProducers PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerConfigGctConfigProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerConfigGctConfigProducers PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerConfigGctConfigProducers PUBLIC /usr/include/root/)
target_include_directories(L1TriggerConfigGctConfigProducers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerConfigGctConfigProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerConfigGctConfigProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerConfigGctConfigProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerConfigGctConfigProducers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerConfigGctConfigProducers PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerConfigGctConfigProducers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerConfigGctConfigProducers PUBLIC /usr/include/boost/regex/)


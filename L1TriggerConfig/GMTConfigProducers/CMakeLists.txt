add_library(L1TriggerConfigGMTConfigProducers OBJECT 
  src/L1MuGMTParametersOnlineProducer.cc
  src/SealModule.cc
  src/L1MuGMTParametersKeysOnlineProd.cc
  src/L1MuGMTParametersProducer.cc
  src/RecordHelper.cc
  src/L1MuGMTChannelMaskOnlineProducer.cc
  src/L1MuGMTRSKeysOnlineProd.cc
)

target_include_directories(L1TriggerConfigGMTConfigProducers PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerConfigGMTConfigProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerConfigGMTConfigProducers PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerConfigGMTConfigProducers PUBLIC /usr/include/root/)
target_include_directories(L1TriggerConfigGMTConfigProducers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerConfigGMTConfigProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerConfigGMTConfigProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerConfigGMTConfigProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerConfigGMTConfigProducers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerConfigGMTConfigProducers PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerConfigGMTConfigProducers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerConfigGMTConfigProducers PUBLIC /usr/include/boost/regex/)


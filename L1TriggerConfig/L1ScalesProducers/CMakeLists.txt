add_library(L1TriggerConfigL1ScalesProducers OBJECT 
  src/SealModule.cc
  src/ScaleRecordHelper.cc
  src/L1CaloEcalScaleConfigOnlineProd.cc
  src/L1MuTriggerScaleKeysOnlineProd.cc
  src/L1MuGMTScalesProducer.cc
  src/L1HfRingEtScaleOnlineProd.cc
  src/L1HtMissScaleOnlineProd.cc
  src/L1MuScalesTester.cc
  src/L1CaloInputScaleTester.cc
  src/L1CaloHcalScaleConfigOnlineProd.cc
  src/L1ScalesTrivialProducer.cc
  src/L1MuTriggerScalesOnlineProducer.cc
  src/L1EmEtScaleOnlineProd.cc
  src/L1CaloInputScalesGenerator.cc
  src/L1MuTriggerPtScaleOnlineProducer.cc
  src/L1MuTriggerScalesProducer.cc
  src/L1MuTriggerPtScaleProducer.cc
  src/L1JetEtScaleOnlineProd.cc
  src/L1CaloInputScalesProducer.cc
  src/L1ScalesTester.cc
)

target_include_directories(L1TriggerConfigL1ScalesProducers PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerConfigL1ScalesProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerConfigL1ScalesProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerConfigL1ScalesProducers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerConfigL1ScalesProducers PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerConfigL1ScalesProducers PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerConfigL1ScalesProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerConfigL1ScalesProducers PUBLIC /usr/include/root/)
target_include_directories(L1TriggerConfigL1ScalesProducers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerConfigL1ScalesProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerConfigL1ScalesProducers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerConfigL1ScalesProducers PUBLIC /usr/include/boost/regex/)


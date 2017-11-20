add_library(L1TriggerConfigCSCTFConfigProducers OBJECT 
  src/L1MuCSCTFParametersTester.cc
  src/SealModule.cc
  src/CSCTFConfigProducer.cc
  src/CSCTFObjectKeysOnlineProd.cc
  src/CSCTFAlignmentOnlineProd.cc
  src/CSCTFConfigOnlineProd.cc
  src/L1MuCSCPtLutConfigOnlineProd.cc
  src/CSCTFConfigTestAnalyzer.cc
)

target_include_directories(L1TriggerConfigCSCTFConfigProducers PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerConfigCSCTFConfigProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerConfigCSCTFConfigProducers PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerConfigCSCTFConfigProducers PUBLIC /usr/include/root/)
target_include_directories(L1TriggerConfigCSCTFConfigProducers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerConfigCSCTFConfigProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerConfigCSCTFConfigProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerConfigCSCTFConfigProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerConfigCSCTFConfigProducers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerConfigCSCTFConfigProducers PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerConfigCSCTFConfigProducers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerConfigCSCTFConfigProducers PUBLIC /usr/include/boost/regex/)


add_library(L1TriggerConfigL1CSCTPConfigProducers OBJECT 
  src/L1CSCTriggerPrimitivesConfigProducer.cc
  src/SealModule.cc
)

target_include_directories(L1TriggerConfigL1CSCTPConfigProducers PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerConfigL1CSCTPConfigProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerConfigL1CSCTPConfigProducers PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerConfigL1CSCTPConfigProducers PUBLIC /usr/include/root/)
target_include_directories(L1TriggerConfigL1CSCTPConfigProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerConfigL1CSCTPConfigProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerConfigL1CSCTPConfigProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerConfigL1CSCTPConfigProducers PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerConfigL1CSCTPConfigProducers PUBLIC /usr/include/boost/regex/)


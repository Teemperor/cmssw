add_subdirectory(plugins)
add_library(L1TriggerConfigDTTPGConfigProducers OBJECT 
  src/SealModule.cc
  src/DTConfigDBProducer.cc
  src/DTConfigTrivialProducer.cc
  src/DTConfigTester.cc
  src/DTPosNegType.cc
)

target_include_directories(L1TriggerConfigDTTPGConfigProducers PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerConfigDTTPGConfigProducers PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(L1TriggerConfigDTTPGConfigProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerConfigDTTPGConfigProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerConfigDTTPGConfigProducers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerConfigDTTPGConfigProducers PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerConfigDTTPGConfigProducers PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerConfigDTTPGConfigProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerConfigDTTPGConfigProducers PUBLIC /usr/include/root/)
target_include_directories(L1TriggerConfigDTTPGConfigProducers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerConfigDTTPGConfigProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerConfigDTTPGConfigProducers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerConfigDTTPGConfigProducers PUBLIC /usr/include/boost/regex/)


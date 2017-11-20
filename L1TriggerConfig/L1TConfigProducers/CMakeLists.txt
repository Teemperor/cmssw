add_library(L1TriggerConfigL1TConfigProducers OBJECT 
  src/L1TUtmTriggerMenuOnlineProd.cc
  src/L1TMuonOverlapParamsOnlineProxy.cc
  src/L1TMuonBarrelParamsOnlineProd.cc
  src/L1TCaloParamsObjectKeysOnlineProd.cc
  src/L1TMuonEndcapParamsOnlineProxy.cc
  src/L1TMuonEndcapParamsOnlineProd.cc
  src/L1TMuonBarrelObjectKeysOnlineProd.cc
  src/L1TMuonEndcapObjectKeysOnlineProd.cc
  src/OnlineDBqueryHelper.cc
  src/L1TUtmTriggerMenuObjectKeysOnlineProd.cc
  src/L1TMuonOverlapParamsOnlineProd.cc
  src/L1TGlobalPrescalesVetosObjectKeysOnlineProd.cc
  src/L1TMuonOverlapObjectKeysOnlineProd.cc
  src/L1TMuonGlobalParamsOnlineProd.cc
  src/L1TMuonGlobalObjectKeysOnlineProd.cc
  src/L1TGlobalPrescalesVetosOnlineProd.cc
  src/L1TCaloParamsOnlineProd.cc
)

target_include_directories(L1TriggerConfigL1TConfigProducers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(L1TriggerConfigL1TConfigProducers PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerConfigL1TConfigProducers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(L1TriggerConfigL1TConfigProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerConfigL1TConfigProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerConfigL1TConfigProducers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(L1TriggerConfigL1TConfigProducers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerConfigL1TConfigProducers PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerConfigL1TConfigProducers PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerConfigL1TConfigProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerConfigL1TConfigProducers PUBLIC /usr/include/root/)
target_include_directories(L1TriggerConfigL1TConfigProducers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerConfigL1TConfigProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerConfigL1TConfigProducers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerConfigL1TConfigProducers PUBLIC /usr/include/boost/regex/)


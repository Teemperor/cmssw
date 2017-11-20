add_subdirectory(test)
add_library(L1TriggerL1TCaloLayer1 OBJECT 
  src/UCTRegion.cc
  src/UCTCrate.cc
  src/L1TCaloLayer1FetchLUTs.cc
  src/UCTTower.cc
  src/UCTGeometry.cc
  src/UCTLayer1.cc
  src/UCTCard.cc
)

target_include_directories(L1TriggerL1TCaloLayer1 PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerL1TCaloLayer1 PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerL1TCaloLayer1 PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerL1TCaloLayer1 PUBLIC /usr/include/root/)
target_include_directories(L1TriggerL1TCaloLayer1 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerL1TCaloLayer1 PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerL1TCaloLayer1 PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerL1TCaloLayer1 PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerL1TCaloLayer1 PUBLIC /usr/include/boost/regex/)


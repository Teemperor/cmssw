add_subdirectory(test)
add_subdirectory(plugins)
add_library(L1TriggerCSCTriggerPrimitives OBJECT 
  src/CSCMuonPortCard.cc
  src/CSCMotherboard.cc
  src/CSCAnodeLCTProcessor.cc
  src/CSCCathodeLCTProcessor.cc
  src/CSCGEMTriggerLUTGenerator.cc
  src/GEMCoPadProcessor.cc
  src/CSCTriggerPrimitivesBuilder.cc
  src/CSCMotherboardME21GEM.cc
  src/CSCMotherboardME11.cc
  src/CSCMotherboardME3141RPC.cc
  src/CSCMotherboardME11GEM.cc
)

target_include_directories(L1TriggerCSCTriggerPrimitives PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerCSCTriggerPrimitives PUBLIC /usr/include/root/)
target_include_directories(L1TriggerCSCTriggerPrimitives PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerCSCTriggerPrimitives PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerCSCTriggerPrimitives PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerCSCTriggerPrimitives PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerCSCTriggerPrimitives PUBLIC /usr/include/boost/regex/)


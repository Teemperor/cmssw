add_library(L1TriggerCSCCommonTrigger OBJECT 
  src/vlib.cc
  src/CSCTriggerGeomManager.cc
  src/CSCTriggerGeometry.cc
  src/CSCPatternLUT.cc
  src/CSCFrontRearLUT.cc
)

target_include_directories(L1TriggerCSCCommonTrigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerCSCCommonTrigger PUBLIC /usr/include/root/)
target_include_directories(L1TriggerCSCCommonTrigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerCSCCommonTrigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerCSCCommonTrigger PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerCSCCommonTrigger PUBLIC /usr/include/boost/regex/)


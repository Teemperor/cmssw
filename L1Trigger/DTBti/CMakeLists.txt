add_library(L1TriggerDTBti OBJECT 
  src/DTBtiChipEquations.cc
  src/DTBtiChipSelTrig.cc
  src/DTBtiTrig.cc
  src/DTBtiTrigData.cc
  src/DTBtiCard.cc
  src/DTBtiHit.cc
  src/DTBtiChip.cc
)

target_include_directories(L1TriggerDTBti PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerDTBti PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerDTBti PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerDTBti PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerDTBti PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerDTBti PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerDTBti PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerDTBti PUBLIC /usr/include/root/)
target_include_directories(L1TriggerDTBti PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerDTBti PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerDTBti PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerDTBti PUBLIC /usr/include/boost/regex/)


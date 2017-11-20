add_library(L1TriggerL1ExtraFromDigis OBJECT 
  src/L1ExtraParticlesProd.cc
  src/L1ExtraTestAnalyzer.cc
  src/L1ExtraParticleMapProd.cc
)

target_include_directories(L1TriggerL1ExtraFromDigis PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerL1ExtraFromDigis PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerL1ExtraFromDigis PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerL1ExtraFromDigis PUBLIC /usr/include/root/)
target_include_directories(L1TriggerL1ExtraFromDigis PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerL1ExtraFromDigis PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerL1ExtraFromDigis PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerL1ExtraFromDigis PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerL1ExtraFromDigis PUBLIC /usr/include/boost/regex/)


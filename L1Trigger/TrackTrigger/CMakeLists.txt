add_subdirectory(plugins)
add_library(L1TriggerTrackTrigger OBJECT 
  src/TTStubAlgorithmRecord.cc
  src/TTStubAlgorithm_cbc3.cc
  src/TTClusterAlgorithm_official.cc
  src/TTClusterAlgorithmRecord.cc
  src/TTStubAlgorithm_official.cc
  src/TTClusterAlgorithm_neighbor.cc
  src/ES_TTClusterAlgorithm.cc
  src/ES_TTStubAlgorithm.cc
)

target_include_directories(L1TriggerTrackTrigger PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerTrackTrigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerTrackTrigger PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerTrackTrigger PUBLIC /usr/include/root/)
target_include_directories(L1TriggerTrackTrigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerTrackTrigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerTrackTrigger PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerTrackTrigger PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerTrackTrigger PUBLIC /usr/include/boost/regex/)


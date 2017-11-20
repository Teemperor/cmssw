add_library(ValidationRPCRecHits OBJECT 
  src/RPCValidHistograms.cc
  src/RPCPointVsRecHit.cc
  src/RPCRecHitValidClient.cc
  src/RPCRecHitValid.cc
)

target_include_directories(ValidationRPCRecHits PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationRPCRecHits PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationRPCRecHits PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationRPCRecHits PUBLIC /usr/include/root/)
target_include_directories(ValidationRPCRecHits PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationRPCRecHits PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationRPCRecHits PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationRPCRecHits PUBLIC /usr/include/boost/)
target_include_directories(ValidationRPCRecHits PUBLIC /usr/include/boost/regex/)


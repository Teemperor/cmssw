add_subdirectory(test)
add_library(RecoLocalMuonRPCRecHit OBJECT 
  src/CSCObjectMapESProducer.cc
  src/RPCRecHitProducer.cc
  src/TracktoRPC.cc
  src/SealModule.cc
  src/DTObjectMapESProducer.cc
  src/RPCRecHitAlgoFactory.cc
  src/RPCMaskReClusterizer.cc
  src/CSCObjectMap.cc
  src/DTSegtoRPC.cc
  src/DTObjectMap.cc
  src/RPCCluster.cc
  src/RPCClusterizer.cc
  src/RPCRecHitStandardAlgo.cc
  src/RPCPointProducer.cc
  src/CSCSegtoRPC.cc
  src/RPCRecHitBaseAlgo.cc
)

target_include_directories(RecoLocalMuonRPCRecHit PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalMuonRPCRecHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalMuonRPCRecHit PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalMuonRPCRecHit PUBLIC /usr/include/root/)
target_include_directories(RecoLocalMuonRPCRecHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalMuonRPCRecHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalMuonRPCRecHit PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalMuonRPCRecHit PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalMuonRPCRecHit PUBLIC /usr/include/boost/regex/)


add_subdirectory(test)
add_library(RecoLocalMuonGEMRecHit OBJECT 
  src/SealModule.cc
  src/GEMCluster.cc
  src/GEMRecHitProducer.cc
  src/GEMMaskReClusterizer.cc
  src/GEMClusterizer.cc
  src/ME0RecHitProducer.cc
  src/ME0RecHitBaseAlgo.cc
  src/GEMRecHitStandardAlgo.cc
  src/GEMRecHitBaseAlgo.cc
  src/ME0RecHitAlgoFactory.cc
  src/ME0RecHitStandardAlgo.cc
  src/GEMRecHitAlgoFactory.cc
)

target_include_directories(RecoLocalMuonGEMRecHit PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalMuonGEMRecHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalMuonGEMRecHit PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalMuonGEMRecHit PUBLIC /usr/include/root/)
target_include_directories(RecoLocalMuonGEMRecHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalMuonGEMRecHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalMuonGEMRecHit PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalMuonGEMRecHit PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalMuonGEMRecHit PUBLIC /usr/include/boost/regex/)


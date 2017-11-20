add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoLocalMuonDTRecHit OBJECT 
  src/DTRecHitAlgoFactory.cc
  src/DTRecHitBaseAlgo.cc
)

target_include_directories(RecoLocalMuonDTRecHit PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalMuonDTRecHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalMuonDTRecHit PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalMuonDTRecHit PUBLIC /usr/include/root/)
target_include_directories(RecoLocalMuonDTRecHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalMuonDTRecHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalMuonDTRecHit PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalMuonDTRecHit PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalMuonDTRecHit PUBLIC /usr/include/boost/regex/)


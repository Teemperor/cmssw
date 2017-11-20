add_library(RecoLocalMuonDTRecHitPlugins OBJECT 
  DTLinearDriftFromDBAlgo.cc
  SealModule.cc
  DTParametrizedDriftAlgo.cc
  DTLinearDriftAlgo.cc
  DTNoDriftAlgo.cc
  DTRecHitProducer.cc
  DTTime2DriftParametrization.cc
)

target_include_directories(RecoLocalMuonDTRecHitPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalMuonDTRecHitPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalMuonDTRecHitPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalMuonDTRecHitPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoLocalMuonDTRecHitPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalMuonDTRecHitPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalMuonDTRecHitPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalMuonDTRecHitPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalMuonDTRecHitPlugins PUBLIC /usr/include/boost/regex/)


add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoEgammaEgammaIsolationAlgos OBJECT 
  src/PhotonTkIsolation.cc
  src/EgammaEcalIsolation.cc
  src/EgammaHcalIsolation.cc
  src/EleTkIsolFromCands.cc
  src/EcalPFClusterIsolation.cc
  src/PFBlockBasedIsolation.cc
  src/EgammaRecHitIsolation.cc
  src/EgammaTowerIsolation.cc
  src/HcalPFClusterIsolation.cc
  src/ElectronTkIsolation.cc
  src/EgammaTrackSelector.cc
  src/EgammaHadTower.cc
)

target_include_directories(RecoEgammaEgammaIsolationAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(RecoEgammaEgammaIsolationAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoEgammaEgammaIsolationAlgos PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoEgammaEgammaIsolationAlgos PUBLIC /usr/include/boost/)
target_include_directories(RecoEgammaEgammaIsolationAlgos PUBLIC /usr/include/eigen3/)
target_include_directories(RecoEgammaEgammaIsolationAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(RecoEgammaEgammaIsolationAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoEgammaEgammaIsolationAlgos PUBLIC /usr/include/root/)
target_include_directories(RecoEgammaEgammaIsolationAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoEgammaEgammaIsolationAlgos PUBLIC /usr/include/boost/regex/)


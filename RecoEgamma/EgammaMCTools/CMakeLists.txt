add_subdirectory(plugins)
add_library(RecoEgammaEgammaMCTools OBJECT 
  src/PizeroMCTruthFinder.cc
  src/PhotonMCTruth.cc
  src/PhotonMCTruthFinder.cc
  src/PizeroMCTruth.cc
  src/ElectronMCTruth.cc
  src/ElectronMCTruthFinder.cc
)

target_include_directories(RecoEgammaEgammaMCTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoEgammaEgammaMCTools PUBLIC /usr/include/root/)
target_include_directories(RecoEgammaEgammaMCTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoEgammaEgammaMCTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoEgammaEgammaMCTools PUBLIC /usr/include/boost/)
target_include_directories(RecoEgammaEgammaMCTools PUBLIC /usr/include/boost/regex/)


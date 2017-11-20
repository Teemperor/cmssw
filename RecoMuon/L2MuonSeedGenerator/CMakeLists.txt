add_library(RecoMuonL2MuonSeedGenerator OBJECT 
  src/SealModule.cc
  src/L2MuonSeedGenerator.cc
  src/L2MuonSeedGeneratorFromL1T.cc
)

target_include_directories(RecoMuonL2MuonSeedGenerator PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonL2MuonSeedGenerator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonL2MuonSeedGenerator PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonL2MuonSeedGenerator PUBLIC /usr/include/root/)
target_include_directories(RecoMuonL2MuonSeedGenerator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonL2MuonSeedGenerator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonL2MuonSeedGenerator PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoMuonL2MuonSeedGenerator PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonL2MuonSeedGenerator PUBLIC /usr/include/boost/regex/)


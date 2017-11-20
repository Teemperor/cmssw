add_library(RecoMuonL2MuonProducer OBJECT 
  src/L2MuonCandidateProducer.cc
  src/SealModule.cc
  src/L2MuonProducer.cc
)

target_include_directories(RecoMuonL2MuonProducer PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonL2MuonProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonL2MuonProducer PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonL2MuonProducer PUBLIC /usr/include/root/)
target_include_directories(RecoMuonL2MuonProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonL2MuonProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonL2MuonProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoMuonL2MuonProducer PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonL2MuonProducer PUBLIC /usr/include/boost/regex/)


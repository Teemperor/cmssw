add_subdirectory(test)
add_library(RecoMuonL2MuonIsolationProducer OBJECT 
  src/L2MuonIsolationProducer.cc
  src/SealModule.cc
)

target_include_directories(RecoMuonL2MuonIsolationProducer PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonL2MuonIsolationProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonL2MuonIsolationProducer PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonL2MuonIsolationProducer PUBLIC /usr/include/root/)
target_include_directories(RecoMuonL2MuonIsolationProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonL2MuonIsolationProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonL2MuonIsolationProducer PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonL2MuonIsolationProducer PUBLIC /usr/include/boost/regex/)


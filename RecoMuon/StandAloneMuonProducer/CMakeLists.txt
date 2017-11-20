add_subdirectory(test)
add_library(RecoMuonStandAloneMuonProducer OBJECT 
  src/SealModule.cc
  src/StandAloneMuonProducer.cc
)

target_include_directories(RecoMuonStandAloneMuonProducer PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonStandAloneMuonProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonStandAloneMuonProducer PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonStandAloneMuonProducer PUBLIC /usr/include/root/)
target_include_directories(RecoMuonStandAloneMuonProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonStandAloneMuonProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonStandAloneMuonProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoMuonStandAloneMuonProducer PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonStandAloneMuonProducer PUBLIC /usr/include/boost/regex/)


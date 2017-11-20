add_subdirectory(test)
add_library(RecoMuonL3MuonIsolationProducer OBJECT 
  src/L3NominalEfficiencyConfigurator.cc
  src/L3MuonSumCaloPFIsolationProducer.cc
  src/SealModule.cc
  src/L3MuonCombinedRelativeIsolationProducer.cc
  src/L3MuonIsolationProducer.cc
)

target_include_directories(RecoMuonL3MuonIsolationProducer PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonL3MuonIsolationProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonL3MuonIsolationProducer PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonL3MuonIsolationProducer PUBLIC /usr/include/root/)
target_include_directories(RecoMuonL3MuonIsolationProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonL3MuonIsolationProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonL3MuonIsolationProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoMuonL3MuonIsolationProducer PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonL3MuonIsolationProducer PUBLIC /usr/include/boost/regex/)


add_subdirectory(plugins)
add_library(RecoMuonMuonIsolation OBJECT 
  src/NominalEfficiencyThresholds.cc
  src/MuonIsolatorFactory.cc
  src/IsolatorByDeposit.cc
  src/MuPFIsoHelper.cc
  src/IsolatorByDepositCount.cc
  src/Cuts.cc
  src/IsolatorByNominalEfficiency.cc
  src/MuIsoByTrackPt.cc
)

target_include_directories(RecoMuonMuonIsolation PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonMuonIsolation PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonMuonIsolation PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonMuonIsolation PUBLIC /usr/include/root/)
target_include_directories(RecoMuonMuonIsolation PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonMuonIsolation PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonMuonIsolation PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonMuonIsolation PUBLIC /usr/include/boost/regex/)


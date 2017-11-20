add_library(DQMOfflinePFTau_plugins OBJECT 
  PFMuonDQMAnalyzer.cc
  SealModule.cc
  PFClient_JetRes.cc
  CandidateBenchmarkAnalyzer.cc
  PFDQMEventSelector.cc
  BenchmarkAnalyzer.cc
  PFJetDQMAnalyzer.cc
  PFClient.cc
  MatchMETBenchmarkAnalyzer.cc
  METBenchmarkAnalyzer.cc
  PFMETDQMAnalyzer.cc
  PFCandidateDQMAnalyzer.cc
  PFCandidateBenchmarkAnalyzer.cc
  PFCandidateManagerAnalyzer.cc
)

target_include_directories(DQMOfflinePFTau_plugins PUBLIC /usr/include/boost/python/)
target_include_directories(DQMOfflinePFTau_plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMOfflinePFTau_plugins PUBLIC /usr/include/python2.7/)
target_include_directories(DQMOfflinePFTau_plugins PUBLIC /usr/include/root/)
target_include_directories(DQMOfflinePFTau_plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMOfflinePFTau_plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMOfflinePFTau_plugins PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMOfflinePFTau_plugins PUBLIC /usr/include/boost/)
target_include_directories(DQMOfflinePFTau_plugins PUBLIC /usr/include/boost/regex/)


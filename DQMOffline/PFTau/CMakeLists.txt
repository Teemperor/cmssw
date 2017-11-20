add_subdirectory(plugins)
add_library(DQMOfflinePFTau OBJECT 
  src/PFCandidateBenchmark.cc
  src/Benchmark.cc
  src/MatchMETBenchmark.cc
  src/PFJetMonitor.cc
  src/PFCandidateMonitor.cc
  src/METBenchmark.cc
  src/CandidateBenchmark.cc
  src/PFCandidateManager.cc
  src/PFMETMonitor.cc
  src/MatchCandidateBenchmark.cc
)

target_include_directories(DQMOfflinePFTau PUBLIC /usr/include/boost/python/)
target_include_directories(DQMOfflinePFTau PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMOfflinePFTau PUBLIC /usr/include/python2.7/)
target_include_directories(DQMOfflinePFTau PUBLIC /usr/include/root/)
target_include_directories(DQMOfflinePFTau PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMOfflinePFTau PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMOfflinePFTau PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMOfflinePFTau PUBLIC /usr/include/boost/)
target_include_directories(DQMOfflinePFTau PUBLIC /usr/include/boost/regex/)


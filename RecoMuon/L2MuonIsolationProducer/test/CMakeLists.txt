add_library(L2MuonIsolationAnalyzer OBJECT 
  L2MuonIsolationAnalyzer.cc
)

target_include_directories(L2MuonIsolationAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(L2MuonIsolationAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L2MuonIsolationAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(L2MuonIsolationAnalyzer PUBLIC /usr/include/root/)
target_include_directories(L2MuonIsolationAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L2MuonIsolationAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L2MuonIsolationAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(L2MuonIsolationAnalyzer PUBLIC /usr/include/boost/regex/)


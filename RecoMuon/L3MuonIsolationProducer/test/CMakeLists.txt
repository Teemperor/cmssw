add_library(L3MuonIsolationAnalyzer OBJECT 
  L3MuonIsolationAnalyzer.cc
)

target_include_directories(L3MuonIsolationAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(L3MuonIsolationAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L3MuonIsolationAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(L3MuonIsolationAnalyzer PUBLIC /usr/include/root/)
target_include_directories(L3MuonIsolationAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L3MuonIsolationAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L3MuonIsolationAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(L3MuonIsolationAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(L3MuonIsolationAnalyzer PUBLIC /usr/include/boost/regex/)


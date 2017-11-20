add_library(RecoMuonTrackingToolsTest OBJECT 
  SealModules.cc
  MuonErrorMatrixAnalyzer.cc
)

target_include_directories(RecoMuonTrackingToolsTest PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonTrackingToolsTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonTrackingToolsTest PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonTrackingToolsTest PUBLIC /usr/include/root/)
target_include_directories(RecoMuonTrackingToolsTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonTrackingToolsTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonTrackingToolsTest PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoMuonTrackingToolsTest PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonTrackingToolsTest PUBLIC /usr/include/boost/regex/)


add_library(DQMOfflineMuon OBJECT 
  src/DTSegmentsTask.cc
  src/MuonPFAnalyzer.cc
  src/SealModule.cc
  src/MuonKinVsEtaAnalyzer.cc
  src/SegmentTrackAnalyzer.cc
  src/MuonTrackResidualsTest.cc
  src/MuonMiniAOD.cc
  src/MuonRecoAnalyzer.cc
  src/EfficiencyAnalyzer.cc
  src/DiMuonHistograms.cc
  src/MuonRecoOneHLT.cc
  src/CSCOfflineMonitor.cc
  src/MuonTestSummary.cc
  src/EfficiencyPlotter.cc
  src/MuonRecoTest.cc
  src/MuonSeedsAnalyzer.cc
  src/MuonTiming.cc
  src/MuonIdDQM.cc
  src/MuonEnergyDepositAnalyzer.cc
  src/MuonIsolationDQM.cc
)

target_include_directories(DQMOfflineMuon PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DQMOfflineMuon PUBLIC /usr/include/python2.7/)
target_include_directories(DQMOfflineMuon PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(DQMOfflineMuon PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DQMOfflineMuon PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMOfflineMuon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMOfflineMuon PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMOfflineMuon PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DQMOfflineMuon PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQMOfflineMuon PUBLIC /usr/include/boost/)
target_include_directories(DQMOfflineMuon PUBLIC /usr/include/boost/python/)
target_include_directories(DQMOfflineMuon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMOfflineMuon PUBLIC /usr/include/root/)
target_include_directories(DQMOfflineMuon PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQMOfflineMuon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMOfflineMuon PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQMOfflineMuon PUBLIC /usr/include/boost/regex/)


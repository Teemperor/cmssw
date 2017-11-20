add_library(RecoLocalMuonCSCRecHitD OBJECT 
  src/CSCStripData.cc
  src/CSCRecoBadChannelsAnalyzer.cc
  src/CSCWireHit.cc
  src/CSCRangeMapForRecHit.cc
  src/CSCStripHit.cc
  src/CSCRecoConditions.cc
  src/CSCMake2DRecHit.cc
  src/HardCodedCorrectionInitialization.cc
  src/CSCHitFromWireOnly.cc
  src/CSCHitFromStripOnly.cc
  src/CSCStripHitData.cc
  src/CSCRecHitDProducer.cc
  src/CSCFindPeakTime.cc
  src/CSCXonStrip_MatchGatti.cc
  src/CSCRecHitDBuilder.cc
)

target_include_directories(RecoLocalMuonCSCRecHitD PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalMuonCSCRecHitD PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalMuonCSCRecHitD PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalMuonCSCRecHitD PUBLIC /usr/include/root/)
target_include_directories(RecoLocalMuonCSCRecHitD PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalMuonCSCRecHitD PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalMuonCSCRecHitD PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalMuonCSCRecHitD PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalMuonCSCRecHitD PUBLIC /usr/include/boost/regex/)


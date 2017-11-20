add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoLocalMuonDTSegment OBJECT 
  src/DTMeantimerPatternReco.cc
  src/DTSegment4DT0Corrector.cc
  src/DTRecSegment4DAlgoFactory.cc
  src/DTCombinatorialPatternReco.cc
  src/DTHitPairForFit.cc
  src/DTLinearFit.cc
  src/DTRecSegment4DProducer.cc
  src/DTSegmentCleaner.cc
  src/DTRecSegment2DProducer.cc
  src/DTRefitAndCombineReco4D.cc
  src/DTMeantimerPatternReco4D.cc
  src/DTSegmentUpdator.cc
  src/DTSegmentExtendedCand.cc
  src/DTRecSegment2DAlgoFactory.cc
  src/DTRecSegment2DExtendedProducer.cc
  src/DTCombinatorialExtendedPatternReco.cc
  src/DTCombinatorialPatternReco4D.cc
  src/DTSegmentCand.cc
  src/DTClusterer.cc
)

target_include_directories(RecoLocalMuonDTSegment PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalMuonDTSegment PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalMuonDTSegment PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalMuonDTSegment PUBLIC /usr/include/root/)
target_include_directories(RecoLocalMuonDTSegment PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalMuonDTSegment PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalMuonDTSegment PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalMuonDTSegment PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalMuonDTSegment PUBLIC /usr/include/boost/regex/)


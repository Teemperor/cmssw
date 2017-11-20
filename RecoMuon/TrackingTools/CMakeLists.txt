add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoMuonTrackingTools OBJECT 
  src/MuonUpdatorAtVertex.cc
  src/MuonServiceProxy.cc
  src/MuonTrackFinder.cc
  src/DirectMuonTrajectoryBuilder.cc
  src/MuonTrajectoryUpdator.cc
  src/MuonErrorMatrix.cc
  src/MuonPatternRecoDumper.cc
  src/MuonSeedFromRecHits.cc
  src/MuonTrackLoader.cc
  src/MuonSegmentMatcher.cc
  src/MuonBestMeasurementFinder.cc
  src/MuonChi2MeasurementEstimator.cc
  src/MuonTrajectoryCleaner.cc
  src/SegmentsTrackAssociator.cc
)

target_include_directories(RecoMuonTrackingTools PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonTrackingTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonTrackingTools PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonTrackingTools PUBLIC /usr/include/root/)
target_include_directories(RecoMuonTrackingTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonTrackingTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonTrackingTools PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoMuonTrackingTools PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonTrackingTools PUBLIC /usr/include/boost/regex/)


add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoMuonGlobalTrackingTools OBJECT 
  src/GlobalTrajectoryBuilderBase.cc
  src/StateSegmentMatcher.cc
  src/ChamberSegmentUtility.cc
  src/MuonTrackingRegionBuilder.cc
  src/GlobalMuonTrackMatcher.cc
  src/ThrParameters.cc
  src/GlobalMuonRefitter.cc
  src/DynamicTruncation.cc
  src/DirectTrackerNavigation.cc
)

target_include_directories(RecoMuonGlobalTrackingTools PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoMuonGlobalTrackingTools PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonGlobalTrackingTools PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoMuonGlobalTrackingTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonGlobalTrackingTools PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoMuonGlobalTrackingTools PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoMuonGlobalTrackingTools PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoMuonGlobalTrackingTools PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonGlobalTrackingTools PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonGlobalTrackingTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonGlobalTrackingTools PUBLIC /usr/include/root/)
target_include_directories(RecoMuonGlobalTrackingTools PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoMuonGlobalTrackingTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonGlobalTrackingTools PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoMuonGlobalTrackingTools PUBLIC /usr/include/boost/regex/)


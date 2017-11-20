add_library(DQMTrackingMonitor OBJECT 
  src/TrackEfficiencyMonitor.cc
  src/GetLumi.cc
  src/TrackEfficiencyClient.cc
  src/TrackAnalyzer.cc
  src/V0Monitor.cc
  src/TrackingMonitor.cc
  src/TrackBuildingAnalyzer.cc
  src/TrackingRecoMaterialAnalyser.cc
  src/dEdxAnalyzer.cc
  src/VertexMonitor.cc
  src/TrackSplittingMonitor.cc
  src/LogMessageMonitor.cc
  src/dEdxHitAnalyzer.cc
  src/PackedCandidateTrackValidator.cc
)

target_include_directories(DQMTrackingMonitor PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DQMTrackingMonitor PUBLIC /usr/include/python2.7/)
target_include_directories(DQMTrackingMonitor PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DQMTrackingMonitor PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMTrackingMonitor PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMTrackingMonitor PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMTrackingMonitor PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DQMTrackingMonitor PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQMTrackingMonitor PUBLIC /usr/include/boost/)
target_include_directories(DQMTrackingMonitor PUBLIC /usr/include/boost/python/)
target_include_directories(DQMTrackingMonitor PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMTrackingMonitor PUBLIC /usr/include/root/)
target_include_directories(DQMTrackingMonitor PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQMTrackingMonitor PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMTrackingMonitor PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQMTrackingMonitor PUBLIC /usr/include/boost/regex/)


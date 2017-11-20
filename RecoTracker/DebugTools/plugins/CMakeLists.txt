add_library(RecoTrackerDebugToolsPlugins OBJECT 
  TestHits.cc
  TrackAlgoCompareUtil.cc
  TestOutliers.cc
  Modules.cc
  CkfDebugger.cc
  CkfDebugTrackCandidateMaker.cc
  TestSmoothHits.cc
  TestTrackHits.cc
)

target_include_directories(RecoTrackerDebugToolsPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTrackerDebugToolsPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTrackerDebugToolsPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTrackerDebugToolsPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoTrackerDebugToolsPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTrackerDebugToolsPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTrackerDebugToolsPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTrackerDebugToolsPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoTrackerDebugToolsPlugins PUBLIC /usr/include/boost/regex/)


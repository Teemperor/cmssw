add_subdirectory(plugins)
add_library(TrackingToolsTrackFitters OBJECT 
  src/module.cc
  src/TrajectoryStateWithArbitraryError.cc
  src/TrajectoryStateCombiner.cc
  src/RecHitSorter.cc
  src/KFTrajectorySmoother.cc
  src/KFTrajectoryFitter.cc
  src/KFSplittingFitter.cc
  src/RecHitSplitter.cc
  src/TrajectoryFitterRecord.cc
)

target_include_directories(TrackingToolsTrackFitters PUBLIC /usr/include/boost/python/)
target_include_directories(TrackingToolsTrackFitters PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsTrackFitters PUBLIC /usr/include/python2.7/)
target_include_directories(TrackingToolsTrackFitters PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsTrackFitters PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsTrackFitters PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsTrackFitters PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsTrackFitters PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/module.cc
  src/TrajectoryStateWithArbitraryError.cc
  src/TrajectoryStateCombiner.cc
  src/RecHitSorter.cc
  src/KFTrajectorySmoother.cc
  src/KFTrajectoryFitter.cc
  src/KFSplittingFitter.cc
  src/RecHitSplitter.cc
  src/TrajectoryFitterRecord.cc
PROPERTIES COMPILE_FLAGS "-Ofast -ffp-contract=off")


add_subdirectory(plugins)
add_library(RecoTrackerCkfPattern OBJECT 
  src/CachingSeedCleanerBySharedInput.cc
  src/SeedCleanerBySharedInput.cc
  src/CkfTrackCandidateMakerBase.cc
  src/CachingSeedCleanerByHitPosition.cc
  src/IntermediateTrajectoryCleaner.cc
  src/PrintoutHelper.cc
  src/TransientInitialStateEstimator.cc
  src/SeedCleanerByHitPosition.cc
  src/CkfTrajectoryBuilder.cc
  src/BaseCkfTrajectoryBuilderFactory.cc
  src/BaseCkfTrajectoryBuilder.cc
)

target_include_directories(RecoTrackerCkfPattern PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTrackerCkfPattern PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTrackerCkfPattern PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTrackerCkfPattern PUBLIC /usr/include/root/)
target_include_directories(RecoTrackerCkfPattern PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTrackerCkfPattern PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTrackerCkfPattern PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTrackerCkfPattern PUBLIC /usr/include/boost/)
target_include_directories(RecoTrackerCkfPattern PUBLIC /usr/include/boost/regex/)


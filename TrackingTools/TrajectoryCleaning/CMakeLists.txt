add_subdirectory(test)
add_subdirectory(plugins)
add_library(TrackingToolsTrajectoryCleaning OBJECT 
  src/TrajectoryCleanerBySharedHits.cc
  src/TrajectoryCleanerFactory.cc
  src/TrajectoryCleaner.cc
  src/TrajectoryCleanerBySharedSeeds.cc
  src/FastTrajectoryCleaner.cc
)

target_include_directories(TrackingToolsTrajectoryCleaning PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsTrajectoryCleaning PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsTrajectoryCleaning PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsTrajectoryCleaning PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsTrajectoryCleaning PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsTrajectoryCleaning PUBLIC /usr/include/boost/regex/)


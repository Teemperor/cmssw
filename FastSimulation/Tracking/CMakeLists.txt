add_subdirectory(test)
add_subdirectory(plugins)
add_library(FastSimulationTracking OBJECT 
  src/TrajectorySeedHitCandidate.cc
  src/SeedFinderSelector.cc
  src/TrackingLayer.cc
  src/SeedMatcher.cc
  src/FastTrackerRecHitSplitter.cc
)

target_include_directories(FastSimulationTracking PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FastSimulationTracking PUBLIC /usr/include/python2.7/)
target_include_directories(FastSimulationTracking PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FastSimulationTracking PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimulationTracking PUBLIC /usr/include/boost/serialization/)
target_include_directories(FastSimulationTracking PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FastSimulationTracking PUBLIC /usr/include/boost/)
target_include_directories(FastSimulationTracking PUBLIC /usr/include/eigen3/)
target_include_directories(FastSimulationTracking PUBLIC /usr/include/boost/python/)
target_include_directories(FastSimulationTracking PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimulationTracking PUBLIC /usr/include/root/)
target_include_directories(FastSimulationTracking PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimulationTracking PUBLIC /usr/include/boost/regex/)


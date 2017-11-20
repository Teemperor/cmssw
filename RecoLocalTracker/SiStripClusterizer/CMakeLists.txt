add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoLocalTrackerSiStripClusterizer OBJECT 
  src/SiStripApvShotCleaner.cc
  src/ThreeThresholdAlgorithm.cc
  src/StripClusterizerAlgorithmFactory.cc
  src/SiStripClusterInfo.cc
  src/StripClusterizerAlgorithm.cc
)

target_include_directories(RecoLocalTrackerSiStripClusterizer PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalTrackerSiStripClusterizer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalTrackerSiStripClusterizer PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalTrackerSiStripClusterizer PUBLIC /usr/include/root/)
target_include_directories(RecoLocalTrackerSiStripClusterizer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalTrackerSiStripClusterizer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalTrackerSiStripClusterizer PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalTrackerSiStripClusterizer PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalTrackerSiStripClusterizer PUBLIC /usr/include/boost/regex/)


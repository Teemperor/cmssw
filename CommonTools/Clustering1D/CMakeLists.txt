add_subdirectory(test)
add_library(CommonToolsClustering1D OBJECT 
  src/TrackDistanceWeightEstimator.cc
  src/Clusterizer1D.cc
  src/OutermostClusterizer1D.cc
  src/MultiClusterizer1D.cc
  src/WeightEstimator.cc
  src/MtvClusterizer1D.cc
  src/Cluster1DMerger.cc
  src/Cluster1D.cc
  src/Cluster1DCleaner.cc
  src/DivisiveClusterizer1D.cc
  src/TrivialWeightEstimator.cc
  src/FsmwClusterizer1D.cc
  src/Clustering1DException.cc
  src/Clusterizer1DCommons.cc
)

target_include_directories(CommonToolsClustering1D PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CommonToolsClustering1D PUBLIC /usr/include/root/)
target_include_directories(CommonToolsClustering1D PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CommonToolsClustering1D PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CommonToolsClustering1D PUBLIC /usr/include/boost/)
target_include_directories(CommonToolsClustering1D PUBLIC /usr/include/boost/regex/)


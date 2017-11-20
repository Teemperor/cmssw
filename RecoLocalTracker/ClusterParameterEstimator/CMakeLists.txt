add_library(RecoLocalTrackerClusterParameterEstimator OBJECT 
  src/module.cc
)

target_include_directories(RecoLocalTrackerClusterParameterEstimator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalTrackerClusterParameterEstimator PUBLIC /usr/include/root/)
target_include_directories(RecoLocalTrackerClusterParameterEstimator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalTrackerClusterParameterEstimator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalTrackerClusterParameterEstimator PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalTrackerClusterParameterEstimator PUBLIC /usr/include/boost/regex/)


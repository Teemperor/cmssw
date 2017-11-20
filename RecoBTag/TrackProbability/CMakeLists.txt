add_subdirectory(test)
add_library(RecoBTagTrackProbability OBJECT 
  src/TrackClassFilter.cc
  src/HistogramProbabilityEstimator.cc
)

target_include_directories(RecoBTagTrackProbability PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoBTagTrackProbability PUBLIC /usr/include/root/)
target_include_directories(RecoBTagTrackProbability PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoBTagTrackProbability PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoBTagTrackProbability PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoBTagTrackProbability PUBLIC /usr/include/boost/)
target_include_directories(RecoBTagTrackProbability PUBLIC /usr/include/boost/regex/)


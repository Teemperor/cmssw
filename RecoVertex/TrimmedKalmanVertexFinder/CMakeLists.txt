add_library(RecoVertexTrimmedKalmanVertexFinder OBJECT 
  src/ConfigurableTrimmedVertexFinder.cc
  src/TrimmedTrackFilter.cc
  src/TrimmedVertexFinder.cc
  src/KalmanTrimmedVertexFinder.cc
)

target_include_directories(RecoVertexTrimmedKalmanVertexFinder PUBLIC /usr/include/boost/python/)
target_include_directories(RecoVertexTrimmedKalmanVertexFinder PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoVertexTrimmedKalmanVertexFinder PUBLIC /usr/include/python2.7/)
target_include_directories(RecoVertexTrimmedKalmanVertexFinder PUBLIC /usr/include/root/)
target_include_directories(RecoVertexTrimmedKalmanVertexFinder PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoVertexTrimmedKalmanVertexFinder PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoVertexTrimmedKalmanVertexFinder PUBLIC /usr/include/boost/)
target_include_directories(RecoVertexTrimmedKalmanVertexFinder PUBLIC /usr/include/boost/regex/)


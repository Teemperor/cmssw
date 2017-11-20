add_subdirectory(plugins)
add_library(RecoVertexKalmanVertexFit OBJECT 
  src/KalmanVertexSmoother.cc
  src/VertexFitterResult.cc
  src/KalmanVertexFitter.cc
  src/KVFHelper.cc
  src/KalmanVertexUpdator.cc
  src/KalmanVertexTrackUpdator.cc
  src/KalmanSmoothedVertexChi2Estimator.cc
  src/KalmanVertexTrackCompatibilityEstimator.cc
  src/SingleTrackVertexConstraint.cc
  src/KalmanTrackToTrackCovCalculator.cc
  src/SimpleVertexTree.cc
)

target_include_directories(RecoVertexKalmanVertexFit PUBLIC /usr/include/boost/python/)
target_include_directories(RecoVertexKalmanVertexFit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoVertexKalmanVertexFit PUBLIC /usr/include/python2.7/)
target_include_directories(RecoVertexKalmanVertexFit PUBLIC /usr/include/root/)
target_include_directories(RecoVertexKalmanVertexFit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoVertexKalmanVertexFit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoVertexKalmanVertexFit PUBLIC /usr/include/boost/)
target_include_directories(RecoVertexKalmanVertexFit PUBLIC /usr/include/boost/regex/)


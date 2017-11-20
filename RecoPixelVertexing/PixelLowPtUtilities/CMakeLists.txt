add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoPixelVertexingPixelLowPtUtilities OBJECT 
  src/PixelTripletLowPtGenerator.cc
  src/TrackCleaner.cc
  src/StripSubClusterShapeTrajectoryFilter.cc
  src/ClusterShape.cc
  src/ClusterShapeTrackFilter.cc
  src/ValidHitPairFilter.cc
  src/ClusterShapeHitFilterESProducer.cc
  src/TrackHitsFilterFactory.cc
  src/TripletFilter.cc
  src/LowPtClusterShapeSeedComparitor.cc
  src/ThirdHitPrediction.cc
  src/ClusterShapeHitFilter.cc
  src/HitInfo.cc
  src/ClusterShapeTrajectoryFilter.cc
  src/TrackFitter.cc
)

target_include_directories(RecoPixelVertexingPixelLowPtUtilities PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoPixelVertexingPixelLowPtUtilities PUBLIC /usr/include/python2.7/)
target_include_directories(RecoPixelVertexingPixelLowPtUtilities PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoPixelVertexingPixelLowPtUtilities PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoPixelVertexingPixelLowPtUtilities PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoPixelVertexingPixelLowPtUtilities PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoPixelVertexingPixelLowPtUtilities PUBLIC /usr/include/boost/)
target_include_directories(RecoPixelVertexingPixelLowPtUtilities PUBLIC /usr/include/eigen3/)
target_include_directories(RecoPixelVertexingPixelLowPtUtilities PUBLIC /usr/include/boost/python/)
target_include_directories(RecoPixelVertexingPixelLowPtUtilities PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoPixelVertexingPixelLowPtUtilities PUBLIC /usr/include/root/)
target_include_directories(RecoPixelVertexingPixelLowPtUtilities PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoPixelVertexingPixelLowPtUtilities PUBLIC /usr/include/boost/regex/)


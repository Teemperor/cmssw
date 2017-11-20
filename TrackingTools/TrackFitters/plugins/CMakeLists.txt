add_library(TrackingToolsTrackFittersPlugins OBJECT 
  KFTrajectorySmootherESProducer.cc
  FlexibleKFFittingSmootherESProducer.cc
  KFTrajectoryFitterESProducer.cc
  KFFittingSmootherESProducer.cc
)

target_include_directories(TrackingToolsTrackFittersPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(TrackingToolsTrackFittersPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsTrackFittersPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(TrackingToolsTrackFittersPlugins PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsTrackFittersPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsTrackFittersPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsTrackFittersPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(TrackingToolsTrackFittersPlugins PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsTrackFittersPlugins PUBLIC /usr/include/boost/regex/)


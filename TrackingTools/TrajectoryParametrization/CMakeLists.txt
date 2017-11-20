add_library(TrackingToolsTrajectoryParametrization OBJECT 
  src/LocalTrajectoryError.cc
  src/CurvilinearTrajectoryParameters.cc
  src/GlobalTrajectoryParameters.cc
  src/PerigeeTrajectoryError.cc
)

target_include_directories(TrackingToolsTrajectoryParametrization PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsTrajectoryParametrization PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsTrajectoryParametrization PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsTrajectoryParametrization PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsTrajectoryParametrization PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsTrajectoryParametrization PUBLIC /usr/include/boost/regex/)


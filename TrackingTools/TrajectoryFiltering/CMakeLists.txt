add_subdirectory(test)
add_subdirectory(plugins)
add_library(TrackingToolsTrajectoryFiltering OBJECT 
  src/MaxLostHitsTrajectoryFilter.cc
  src/MinPtTrajectoryFilter.cc
  src/RegionalTrajectoryFilter.cc
  src/ThresholdPtTrajectoryFilter.cc
  src/MaxConsecLostHitsTrajectoryFilter.cc
  src/CompositeLogicalTrajectoryFilter.cc
  src/MaxHitsTrajectoryFilter.cc
  src/CompositeTrajectoryFilter.cc
  src/TrajectoryFilter.cc
  src/MinHitsTrajectoryFilter.cc
  src/MaxCCCLostHitsTrajectoryFilter.cc
  src/CkfBaseTrajectoryFilter.cc
  src/TrajectoryFilterFactory.cc
  src/ChargeSignificanceTrajectoryFilter.cc
)

target_include_directories(TrackingToolsTrajectoryFiltering PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsTrajectoryFiltering PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsTrajectoryFiltering PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsTrajectoryFiltering PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsTrajectoryFiltering PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsTrajectoryFiltering PUBLIC /usr/include/boost/regex/)


add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/TrackingToolsPatternToolssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/TrackingTools/PatternTools/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/TrackingToolsPatternToolssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/TrackingTools/PatternTools/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/TrackingTools/PatternTools/src/classes.h /home/teemperor/cms/cmssw/TrackingTools/PatternTools/src/classes_def.xml
  COMMENT "Generating ROOT dict TrackingToolsPatternToolssrcclassesh")

add_library(TrackingToolsPatternTools OBJECT 
  src/trackingParametersAtClosestApproachToBeamSpot.cc
  src/MeasurementExtractor.cc
  src/module.cc
  src/ClosestApproachInRPhi.cc
  src/TwoTrackMinimumDistanceHelixLine.cc
  src/TSCBLBuilderNoMaterial.cc
  src/TrajectoryExtrapolatorToLine.cc
  src/CollinearFitAtTM.cc
  src/TempTrajectory.cc
  src/TwoTrackMinimumDistance.cc
  src/Trajectory.cc
  src/TwoTrackMinimumDistanceHelixHelix.cc
  src/TrajAnnealing.cc
  src/TSCPBuilderNoMaterial.cc
  src/TransverseImpactPointExtrapolator.cc
  src/TSCBLBuilderWithPropagator.cc
  src/TwoTrackMinimumDistanceLineLine.cc
  ${CMAKE_BINARY_DIR}/TrackingToolsPatternToolssrcclassesh_rflx.cpp
)

target_include_directories(TrackingToolsPatternTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsPatternTools PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsPatternTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsPatternTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsPatternTools PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsPatternTools PUBLIC /usr/include/boost/regex/)


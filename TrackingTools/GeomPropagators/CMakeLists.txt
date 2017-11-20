add_subdirectory(test)
add_library(TrackingToolsGeomPropagators OBJECT 
  src/Propagator.cc
  src/TrackerBounds.cc
  src/HelixBarrelPlaneCrossingByCircle.cc
  src/StateOnTrackerBound.cc
  src/PropagationDirectionChooser.cc
  src/HelixBarrelPlaneCrossing2OrderLocal.cc
  src/AnalyticalPropagator.cc
  src/StraightLinePlaneCrossing.cc
  src/StraightLineBarrelCylinderCrossing.cc
  src/StraightLinePropagator.cc
  src/AnalyticalImpactPointExtrapolator.cc
  src/HelixArbitraryPlaneCrossing2Order.cc
  src/BeamHaloPropagator.cc
  src/StraightLineCylinderCrossing.cc
  src/HelixArbitraryPlaneCrossing.cc
  src/SmartPropagator.cc
  src/HelixExtrapolatorToLine2Order.cc
  src/AnalyticalTrajectoryExtrapolatorToLine.cc
  src/HelperPropagatorUtility.cc
  src/IterativeHelixExtrapolatorToLine.cc
  src/ES_Propagator.cc
  src/HelixBarrelCylinderCrossing.cc
  src/HelixForwardPlaneCrossing.cc
)

target_include_directories(TrackingToolsGeomPropagators PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsGeomPropagators PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsGeomPropagators PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsGeomPropagators PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsGeomPropagators PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsGeomPropagators PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/Propagator.cc
  src/TrackerBounds.cc
  src/HelixBarrelPlaneCrossingByCircle.cc
  src/StateOnTrackerBound.cc
  src/PropagationDirectionChooser.cc
  src/HelixBarrelPlaneCrossing2OrderLocal.cc
  src/AnalyticalPropagator.cc
  src/StraightLinePlaneCrossing.cc
  src/StraightLineBarrelCylinderCrossing.cc
  src/StraightLinePropagator.cc
  src/AnalyticalImpactPointExtrapolator.cc
  src/HelixArbitraryPlaneCrossing2Order.cc
  src/BeamHaloPropagator.cc
  src/StraightLineCylinderCrossing.cc
  src/HelixArbitraryPlaneCrossing.cc
  src/SmartPropagator.cc
  src/HelixExtrapolatorToLine2Order.cc
  src/AnalyticalTrajectoryExtrapolatorToLine.cc
  src/HelperPropagatorUtility.cc
  src/IterativeHelixExtrapolatorToLine.cc
  src/ES_Propagator.cc
  src/HelixBarrelCylinderCrossing.cc
  src/HelixForwardPlaneCrossing.cc
PROPERTIES COMPILE_FLAGS "-O3")


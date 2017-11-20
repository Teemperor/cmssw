add_subdirectory(NavGeometry)
add_subdirectory(Geant4e)
add_subdirectory(RungeKutta)
add_subdirectory(SteppingHelixPropagator)


# Meta-target that builds everything in this subsystem
add_custom_target(TrackPropagation_all)
add_dependencies(TrackPropagation_all
  TrackPropagationNavGeometry
  testTrackPropagationNavGeometry
  SingleVolumeTest
  DoubleVolumeTest
  TrackPropagationGeant4e
  Geant4ePropagatorAnalyzer
  TrackPropagatorsGeant4ePlugins
  TrackPropagationRungeKutta
  RKTest
  testFastPow
  TrackPropagationSteppingHelixPropagator
  testSteppingHelixPropagatorAnalyzer
  TrackPropagationSteppingHelixPropagatorPlugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(TrackPropagation_libs)
add_dependencies(TrackPropagation_libs
  TrackPropagationNavGeometry
  TrackPropagationGeant4e
  TrackPropagationRungeKutta
  TrackPropagationSteppingHelixPropagator
)

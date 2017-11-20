add_subdirectory(METPUSubtraction)
add_subdirectory(METAlgorithms)
add_subdirectory(METProducers)


# Meta-target that builds everything in this subsystem
add_custom_target(RecoMET_all)
add_dependencies(RecoMET_all
  RecoMETMETPUSubtraction
  RecoMETMETPUSubtraction_plugins
  RecoMETMETAlgorithms
  RecoMETMETProducers
  testRecoMETMETProducers
)
# Meta-target that builds all libs in this subsystem
add_custom_target(RecoMET_libs)
add_dependencies(RecoMET_libs
  RecoMETMETPUSubtraction
  RecoMETMETAlgorithms
  RecoMETMETProducers
)

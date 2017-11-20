add_subdirectory(EgammaClusterProducers)
add_subdirectory(EgammaCoreTools)
add_subdirectory(EgammaClusterAlgos)


# Meta-target that builds everything in this subsystem
add_custom_target(RecoEcal_all)
add_dependencies(RecoEcal_all
  RecoEcalEgammaClusterProducers
  RecoEcalPFSuperClusterTreeMaker
  RecoEcalEgammaCoreTools
  testEcalClusterTools
  testEcalClusterLazyTools
  testEcalClusterFunctions
  testEcalClusterSeverityAlgo
  filterProbClusters
  RecoEcalEcalClusterFunctions
  RecoEcalEgammaClusterAlgos
)
# Meta-target that builds all libs in this subsystem
add_custom_target(RecoEcal_libs)
add_dependencies(RecoEcal_libs
  RecoEcalEgammaClusterProducers
  RecoEcalEgammaCoreTools
  RecoEcalEgammaClusterAlgos
)

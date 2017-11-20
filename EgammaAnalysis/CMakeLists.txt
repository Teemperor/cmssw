add_subdirectory(PhotonIDProducers)
add_subdirectory(CSA07Skims)
add_subdirectory(ElectronTools)


# Meta-target that builds everything in this subsystem
add_custom_target(EgammaAnalysis_all)
add_dependencies(EgammaAnalysis_all
  EgammaAnalysisPhotonIDProducers
  EgammaAnalysisCSA07Skims
  EgammaAnalysisElectronTools
  EgammaEGammaAnalysisToolsTest
  EgammaAnalysisElectronToolsPlugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(EgammaAnalysis_libs)
add_dependencies(EgammaAnalysis_libs
  EgammaAnalysisPhotonIDProducers
  EgammaAnalysisCSA07Skims
  EgammaAnalysisElectronTools
)

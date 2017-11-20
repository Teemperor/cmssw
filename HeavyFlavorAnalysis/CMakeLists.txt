add_subdirectory(Skimming)
add_subdirectory(Onia2MuMu)
add_subdirectory(SpecificDecay)
add_subdirectory(RecoDecay)


# Meta-target that builds everything in this subsystem
add_custom_target(HeavyFlavorAnalysis_all)
add_dependencies(HeavyFlavorAnalysis_all
  HeavyFlavorAnalysisSkimming
  Tau3MuSkim
  HeavyFlavorAnalysisOnia2MuMu
  HeavyFlavorAnalysisSpecificDecay
  HeavyFlavorAnalysisSpecificDecayTest
  HeavyFlavorSpecificDecaysPlugins
  HeavyFlavorAnalysisRecoDecay
  HeavyFlavorAnalysisRecoDecayTest
)
# Meta-target that builds all libs in this subsystem
add_custom_target(HeavyFlavorAnalysis_libs)
add_dependencies(HeavyFlavorAnalysis_libs
  HeavyFlavorAnalysisSkimming
  HeavyFlavorAnalysisOnia2MuMu
  HeavyFlavorAnalysisSpecificDecay
  HeavyFlavorAnalysisRecoDecay
)

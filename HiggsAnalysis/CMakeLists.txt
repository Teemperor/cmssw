add_subdirectory(Skimming)
add_subdirectory(HiggsToGammaGamma)


# Meta-target that builds everything in this subsystem
add_custom_target(HiggsAnalysis_all)
add_dependencies(HiggsAnalysis_all
  HiggsAnalysisSkimming
  HiggsAnalysisHiggsToGammaGamma
)
# Meta-target that builds all libs in this subsystem
add_custom_target(HiggsAnalysis_libs)
add_dependencies(HiggsAnalysis_libs
  HiggsAnalysisSkimming
  HiggsAnalysisHiggsToGammaGamma
)

add_subdirectory(MCEmbeddingTools)


# Meta-target that builds everything in this subsystem
add_custom_target(TauAnalysis_all)
add_dependencies(TauAnalysis_all
  testTauEmbeddingProducers
)

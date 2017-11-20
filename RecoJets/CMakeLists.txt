add_subdirectory(JetAlgorithms)
add_subdirectory(JetProducers)
add_subdirectory(FFTJetAlgorithms)
add_subdirectory(JetAssociationAlgorithms)
add_subdirectory(FFTJetProducers)
add_subdirectory(JetAssociationProducers)
add_subdirectory(JetAnalyzers)


# Meta-target that builds everything in this subsystem
add_custom_target(RecoJets_all)
add_dependencies(RecoJets_all
  RecoJetsJetAlgorithms
  RecoJetsJetProducers
  test-large-voronoi-area
  RecoJetsJetProducers_plugins
  RecoJetsFFTJetAlgorithms
  RecoJetsJetAssociationAlgorithms
  RecoJetsFFTJetProducers
  RecoJetsFFTWJetProducers_plugins
  RecoJetsJetAssociationProducers
  JetAssociationAlgorithmsTests
  RecoJetsJetAnalyzers
)
# Meta-target that builds all libs in this subsystem
add_custom_target(RecoJets_libs)
add_dependencies(RecoJets_libs
  RecoJetsJetAlgorithms
  RecoJetsJetProducers
  RecoJetsFFTJetAlgorithms
  RecoJetsJetAssociationAlgorithms
  RecoJetsFFTJetProducers
  RecoJetsJetAssociationProducers
  RecoJetsJetAnalyzers
)

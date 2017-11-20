add_subdirectory(TauTagTools)
add_subdirectory(ImpactParameter)
add_subdirectory(RecoTau)
add_subdirectory(HLTProducers)


# Meta-target that builds everything in this subsystem
add_custom_target(RecoTauTag_all)
add_dependencies(RecoTauTag_all
  RecoTauTagTauTagTools
  RecoTauTagTauTagToolsPlugins
  RecoTauTagImpactParameter
  TauImpactParameterTest
  RecoTauTagReco3ProngTauPlugins
  RecoTauTagRecoTau
  TestRecoTauTagCombinatoricGenerator
  rerunMVAIsolationOnMiniAOD
  RecoTauTagRecoTauPlugins
  RecoTauTagHLTProducers
)
# Meta-target that builds all libs in this subsystem
add_custom_target(RecoTauTag_libs)
add_dependencies(RecoTauTag_libs
  RecoTauTagTauTagTools
  RecoTauTagImpactParameter
  RecoTauTagRecoTau
  RecoTauTagHLTProducers
)

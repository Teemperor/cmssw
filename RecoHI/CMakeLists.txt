add_subdirectory(HiMuonAlgos)
add_subdirectory(HiEgammaAlgos)
add_subdirectory(HiEvtPlaneAlgos)
add_subdirectory(HiCentralityAlgos)
add_subdirectory(HiJetAlgos)
add_subdirectory(HiTracking)


# Meta-target that builds everything in this subsystem
add_custom_target(RecoHI_all)
add_dependencies(RecoHI_all
  RecoHIHiMuonAlgosPlugins
  RecoHIHiEgammaAlgos
  RecoHIHiEgammaAlgos_testAnalyzers
  RecoHIHiEgammaAlgosPlugins
  RecoHIHiEvtPlaneAlgos
  HiCentralityPlugins
  RecoHIHiJetAlgos
  HiJetAlgosPlugins
  RecoHIHiTracking
  RecoHIHiTrackingTest
  RecoHIHiTrackingPlugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(RecoHI_libs)
add_dependencies(RecoHI_libs
  RecoHIHiEgammaAlgos
  RecoHIHiEvtPlaneAlgos
  RecoHIHiJetAlgos
  RecoHIHiTracking
)

add_subdirectory(Timer)
add_subdirectory(Egamma)
add_subdirectory(btau)
add_subdirectory(HLTfilters)
add_subdirectory(special)
add_subdirectory(Muon)
add_subdirectory(HLTcore)
add_subdirectory(HLTanalyzers)
add_subdirectory(JetMET)


# Meta-target that builds everything in this subsystem
add_custom_target(HLTrigger_all)
add_dependencies(HLTrigger_all
  HLTriggerTimer
  analyzeTiming
  testChrono
  HLTriggerTimerPlugins
  HLTriggerEgamma
  HLTriggerbtau
  HLTriggerHLTfilters
  HLTriggerspecial
  testHLTriggerspecial
  HLTriggerMuon
  HLTMuonRateAnalyzer
  HLTMuonRateAnalyzerWithWeight
  MuEnrichType1Filter
  MuEnrichRenormalizer
  HLTMuonTurnOnAnalyzer
  HLTriggerHLTcore
  HLTriggerHLTcorePlugins
  HLTriggerHLTanalyzers
  HLTriggerJetMET
  HLTriggerJetMETPlugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(HLTrigger_libs)
add_dependencies(HLTrigger_libs
  HLTriggerTimer
  HLTriggerEgamma
  HLTriggerbtau
  HLTriggerHLTfilters
  HLTriggerspecial
  HLTriggerMuon
  HLTriggerHLTcore
  HLTriggerHLTanalyzers
  HLTriggerJetMET
)

add_subdirectory(Exotica)
add_subdirectory(Higgs)
add_subdirectory(Btag)
add_subdirectory(Egamma)
add_subdirectory(Top)
add_subdirectory(B2G)
add_subdirectory(Muon)
add_subdirectory(HeavyFlavor)
add_subdirectory(SUSYBSM)
add_subdirectory(JetMET)
add_subdirectory(Common)
add_subdirectory(Tau)


# Meta-target that builds everything in this subsystem
add_custom_target(HLTriggerOffline_all)
add_dependencies(HLTriggerOffline_all
  HLTriggerOfflineExotica
  HLTriggerOfflineHiggs
  HLTriggerOfflineBtag
  HLTriggerOfflineEgamma
  HLTriggerOfflineTop
  HLTriggerOfflineB2G
  HLTriggerOfflineMuon
  HLTriggerOfflineHeavyFlavor
  HLTriggerOfflineSUSYBSM
  HLTriggerOfflineJetMET
  HLTriggerOfflineCommon
  HLTriggerOfflineTau
)
# Meta-target that builds all libs in this subsystem
add_custom_target(HLTriggerOffline_libs)
add_dependencies(HLTriggerOffline_libs
  HLTriggerOfflineExotica
  HLTriggerOfflineHiggs
  HLTriggerOfflineBtag
  HLTriggerOfflineEgamma
  HLTriggerOfflineTop
  HLTriggerOfflineB2G
  HLTriggerOfflineMuon
  HLTriggerOfflineHeavyFlavor
  HLTriggerOfflineSUSYBSM
  HLTriggerOfflineJetMET
  HLTriggerOfflineCommon
  HLTriggerOfflineTau
)

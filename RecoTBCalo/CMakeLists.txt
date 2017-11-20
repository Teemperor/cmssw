add_subdirectory(HcalPlotter)
add_subdirectory(EcalTBRecProducers)
add_subdirectory(HcalTBTools)
add_subdirectory(EcalTBTDCReconstructor)
add_subdirectory(EcalTBHodoscopeReconstructor)
add_subdirectory(EcalTBAnalysisCoreTools)
add_subdirectory(ZDCTBAnalysis)
add_subdirectory(EcalSimpleTBAnalysis)
add_subdirectory(HcalTBObjectUnpacker)


# Meta-target that builds everything in this subsystem
add_custom_target(RecoTBCalo_all)
add_dependencies(RecoTBCalo_all
  RecoTBCaloHcalPlotter
  RecoTBCaloEcalTBRecProducers
  RecoTBCaloHcalTBTools
  RecoTBCaloEcalTBTDCReconstructor
  RecoTBCaloEcalTBHodoscopeReconstructor
  RecoTBCaloEcalTBAnalysisCoreTools
  EcalShowerContainmentAnalyzer
  RecoTBCaloZDCTBAnalysis
  RecoTBCaloEcalSimpleTBAnalysis
  RecoTBCaloHcalTBObjectUnpacker
  RecoTBCaloHcalTBObjectUnpackerPlugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(RecoTBCalo_libs)
add_dependencies(RecoTBCalo_libs
  RecoTBCaloHcalPlotter
  RecoTBCaloEcalTBRecProducers
  RecoTBCaloHcalTBTools
  RecoTBCaloEcalTBTDCReconstructor
  RecoTBCaloEcalTBHodoscopeReconstructor
  RecoTBCaloEcalTBAnalysisCoreTools
  RecoTBCaloZDCTBAnalysis
  RecoTBCaloEcalSimpleTBAnalysis
  RecoTBCaloHcalTBObjectUnpacker
)

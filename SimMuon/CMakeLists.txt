add_subdirectory(RPCDigitizer)
add_subdirectory(GEMDigitizer)
add_subdirectory(Neutron)
add_subdirectory(CSCDigitizer)
add_subdirectory(DTDigitizer)
add_subdirectory(MCTruth)


# Meta-target that builds everything in this subsystem
add_custom_target(SimMuon_all)
add_dependencies(SimMuon_all
  SimMuonRPCDigitizer
  RPCDigiReader
  RPCEventDump
  RPCFakeEvent
  SimMuonRPCDigitizerPlugins
  SimMuonGEMDigitizer
  GEMDigiReader
  GEMPadDigiReader
  GEMFakeEvent
  GEMDigiSimLinkReader
  SimMuonGEMDigitizerPlugins
  SimMuonNeutron
  SimMuonNeutronPlugins
  SimMuonCSCDigitizer
  CSCNoiseMatrixTest
  CSCGasCollisionsTest
  SimMuonCSCDigitizerPlugins
  SimMuonDTDigitizer
  testDriftTimeParam
  testSimMuonDTDigitizer
  testDTDigiAnalyzer
  SimMuonDTDigitizerPlugins
  SimMuonMCTruth
  SimMuonMCTruthTest
  SimMuonMCTruthPlugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(SimMuon_libs)
add_dependencies(SimMuon_libs
  SimMuonRPCDigitizer
  SimMuonGEMDigitizer
  SimMuonNeutron
  SimMuonCSCDigitizer
  SimMuonDTDigitizer
  SimMuonMCTruth
)

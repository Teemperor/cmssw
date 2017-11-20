add_subdirectory(CSCValidation)
add_subdirectory(GEMRecHit)
add_subdirectory(CSCEfficiency)
add_subdirectory(CSCRecHitD)
add_subdirectory(DTRecHit)
add_subdirectory(RPCRecHit)
add_subdirectory(CSCSegment)
add_subdirectory(DTSegment)


# Meta-target that builds everything in this subsystem
add_custom_target(RecoLocalMuon_all)
add_dependencies(RecoLocalMuon_all
  RecoLocalMuonCSCValidation
  RecoLocalMuonGEMRecHit
  testGEMRecHittestGEMRecHitAnalyzer
  RecoLocalMuonCSCEfficiency
  RecoLocalMuonCSCRecHitD
  RecoLocalMuonDTRecHit
  DTRecHitReader
  RecoLocalMuonDTRecHitPlugins
  RecoLocalMuonRPCRecHit
  RPCRecHitReader
  RecoLocalMuonCSCSegment
  testCSCSegReader
  CSCSegmentVisualise
  RecoLocalMuonDTSegment
  DTAnalyzerDetailed
  DTSegAnalyzer
  DTEffAnalyzer
  DTClusAnalyzer
  STAnalyzer
  RecoLocalMuonDTSegmentPlugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(RecoLocalMuon_libs)
add_dependencies(RecoLocalMuon_libs
  RecoLocalMuonCSCValidation
  RecoLocalMuonGEMRecHit
  RecoLocalMuonCSCEfficiency
  RecoLocalMuonCSCRecHitD
  RecoLocalMuonDTRecHit
  RecoLocalMuonRPCRecHit
  RecoLocalMuonCSCSegment
  RecoLocalMuonDTSegment
)

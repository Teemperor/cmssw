add_subdirectory(DTDigiSync)
add_subdirectory(CSCCalibration)
add_subdirectory(RPCCalibration)
add_subdirectory(DTCalibration)


# Meta-target that builds everything in this subsystem
add_custom_target(CalibMuon_all)
add_dependencies(CalibMuon_all
  CalibMuonDTDigiSync
  CalibMuonCSCCalibration
  CSCCrosstalkPopConAnalyzer
  CSCFakeCrosstalkPopConAnalyzer
  CSCGainsPopConAnalyzer
  CSCFakeGainsPopConAnalyzer
  CSCNoiseMatrixPopConAnalyzer
  CSCFakeNoiseMatrixPopConAnalyzer
  CSCPedestalsPopConAnalyzer
  CSCFakePedestalsPopConAnalyzer
  CSCBadStripsPopConAnalyzer
  CSCBadWiresPopConAnalyzer
  CSCL1TPParametersPopConAnalyzer
  CSCDBL1TPParametersPopConAnalyzer
  CSCBadChambersPopConAnalyzer
  CSCChipSpeedCorrectionPopConAnalyzer
  CSCGasGainCorrectionPopConAnalyzer
  Compare
  testCSCIndexerAnalyzer
  testCSCIndexerAnalyzer2
  testCSCMapperTestStartup
  testCSCMapperTestPostls1
  testIndexer
  CalibMuonCSCCalibrationPlugins
  CalibMuonRPCCalibration
  CalibMuonDTCalibration
  testDTCalibration
  testDTCalibrationDBTools
  CalibMuonDTCalibrationPlugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(CalibMuon_libs)
add_dependencies(CalibMuon_libs
  CalibMuonDTDigiSync
  CalibMuonCSCCalibration
  CalibMuonRPCCalibration
  CalibMuonDTCalibration
)

add_subdirectory(MomentumScaleCalibration)
add_subdirectory(MuonAssociators)


# Meta-target that builds everything in this subsystem
add_custom_target(MuonAnalysis_all)
add_dependencies(MuonAnalysis_all
  MuonAnalysisMomentumScaleCalibration
  TestMuScleFit
  MuonAnalysisMomentumScaleCalibrationPlugins
  MuonAnalysisMuonAssociators
  MuonAnalysisMuonAssociators_plugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(MuonAnalysis_libs)
add_dependencies(MuonAnalysis_libs
  MuonAnalysisMomentumScaleCalibration
  MuonAnalysisMuonAssociators
)

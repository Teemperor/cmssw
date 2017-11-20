add_subdirectory(HepPDTESSource)
add_subdirectory(NoiseGenerators)
add_subdirectory(TrackingAnalysis)
add_subdirectory(HepPDTRecord)
add_subdirectory(GFlash)
add_subdirectory(MixingModule)
add_subdirectory(CaloAnalysis)


# Meta-target that builds everything in this subsystem
add_custom_target(SimGeneral_all)
add_dependencies(SimGeneral_all
  SimGeneralHepPDTESSource
  HepPDTAnalyzer
  SimGeneralNoiseGenerators
  GaussianTailNoiseGeneratorTest
  SimGeneralTrackingAnalysis
  SimGeneralTrackingAnalysis_test
  SimGeneralTrackingAnalysisPlugins
  SimGeneralHepPDTRecord
  testSimGeneralHepPDTRecord
  SimGeneralGFlash
  SimGeneralMixingModule
  SimGeneralMixingModulePlugins
  SimGeneralCaloAnalysisPlugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(SimGeneral_libs)
add_dependencies(SimGeneral_libs
  SimGeneralHepPDTESSource
  SimGeneralNoiseGenerators
  SimGeneralTrackingAnalysis
  SimGeneralHepPDTRecord
  SimGeneralGFlash
  SimGeneralMixingModule
)

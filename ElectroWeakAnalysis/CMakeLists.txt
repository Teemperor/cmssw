add_subdirectory(ZEE)
add_subdirectory(WMuNu)
add_subdirectory(ZMuMu)
add_subdirectory(WENu)
add_subdirectory(Utilities)


# Meta-target that builds everything in this subsystem
add_custom_target(ElectroWeakAnalysis_all)
add_dependencies(ElectroWeakAnalysis_all
  ElectroWeakAnalysisZEE
  ElectroWeakAnalysisWMuNu
  WMuNuValidatorMacro
  ElectroWeakAnalysisZMuMu
  csa08HLTFit
  zChi2Fit
  zFitToyMc
  zUMLChi2Fit
  toyMonteCarlo
  hltEffwithCPError
  hltEffwithCPErrorMCvsDATA
  zMuMuRooFit
  errorMatrix
  ElectroWeakAnalysisZMuMu_plugins
  ElectroWeakAnalysisWENu
  ElectroWeakAnalysisUtilities
)
# Meta-target that builds all libs in this subsystem
add_custom_target(ElectroWeakAnalysis_libs)
add_dependencies(ElectroWeakAnalysis_libs
  ElectroWeakAnalysisZEE
  ElectroWeakAnalysisWMuNu
  ElectroWeakAnalysisZMuMu
  ElectroWeakAnalysisWENu
  ElectroWeakAnalysisUtilities
)

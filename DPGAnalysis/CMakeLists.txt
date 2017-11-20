add_subdirectory(SiStripTools)
add_subdirectory(Skims)


# Meta-target that builds everything in this subsystem
add_custom_target(DPGAnalysis_all)
add_dependencies(DPGAnalysis_all
  DPGAnalysisSiStripTools
  DPGAnalysisSiStripToolsMacros
  DPGAnalysisSiStripToolsPlugins
  DPGAnalysisSkims
)
# Meta-target that builds all libs in this subsystem
add_custom_target(DPGAnalysis_libs)
add_dependencies(DPGAnalysis_libs
  DPGAnalysisSiStripTools
  DPGAnalysisSkims
)

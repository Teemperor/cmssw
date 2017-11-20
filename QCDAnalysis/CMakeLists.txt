add_subdirectory(Skimming)
add_subdirectory(UEAnalysis)


# Meta-target that builds everything in this subsystem
add_custom_target(QCDAnalysis_all)
add_dependencies(QCDAnalysis_all
  QCDAnalysisSkimming
  QCDAnalysisSkimmingPlugins
  QCDAnalysisUEAnalysis
)
# Meta-target that builds all libs in this subsystem
add_custom_target(QCDAnalysis_libs)
add_dependencies(QCDAnalysis_libs
  QCDAnalysisSkimming
  QCDAnalysisUEAnalysis
)

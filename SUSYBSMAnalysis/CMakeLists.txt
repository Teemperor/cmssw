add_subdirectory(HSCP)


# Meta-target that builds everything in this subsystem
add_custom_target(SUSYBSMAnalysis_all)
add_dependencies(SUSYBSMAnalysis_all
  SUSYBSMAnalysisHSCP
  SUSYBSMAnalysisHSCPPlugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(SUSYBSMAnalysis_libs)
add_dependencies(SUSYBSMAnalysis_libs
  SUSYBSMAnalysisHSCP
)

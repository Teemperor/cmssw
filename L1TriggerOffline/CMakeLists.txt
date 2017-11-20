add_subdirectory(L1Analyzer)


# Meta-target that builds everything in this subsystem
add_custom_target(L1TriggerOffline_all)
add_dependencies(L1TriggerOffline_all
  L1TriggerOfflineL1Analyzer
)
# Meta-target that builds all libs in this subsystem
add_custom_target(L1TriggerOffline_libs)
add_dependencies(L1TriggerOffline_libs
  L1TriggerOfflineL1Analyzer
)

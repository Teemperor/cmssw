add_subdirectory(FastTimingCommon)


# Meta-target that builds everything in this subsystem
add_custom_target(SimFastTiming_all)
add_dependencies(SimFastTiming_all
  SimFastTimingFastTimingCommon
)
# Meta-target that builds all libs in this subsystem
add_custom_target(SimFastTiming_libs)
add_dependencies(SimFastTiming_libs
  SimFastTimingFastTimingCommon
)

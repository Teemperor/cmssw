add_subdirectory(EdmEvent)
add_subdirectory(Callgrind)


# Meta-target that builds everything in this subsystem
add_custom_target(PerfTools_all)
add_dependencies(PerfTools_all
  PerfToolsEdmEvent
  edmEventSize
  test_branchSizes
  PerfToolsCallgrind
  testPerfToolsCallgrind
  PerfToolsCallgrindOriginalAnalyzer
  PerfToolsCallgrindService
  PerfToolsCallgrindAnalyzer
)
# Meta-target that builds all libs in this subsystem
add_custom_target(PerfTools_libs)
add_dependencies(PerfTools_libs
  PerfToolsEdmEvent
  PerfToolsCallgrind
)

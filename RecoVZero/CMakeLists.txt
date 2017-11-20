add_subdirectory(VZeroFinding)


# Meta-target that builds everything in this subsystem
add_custom_target(RecoVZero_all)
add_dependencies(RecoVZero_all
  RecoVZeroVZeroFinding
  VZeroTest
  RecoVZeroVZeroFindingPlugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(RecoVZero_libs)
add_dependencies(RecoVZero_libs
  RecoVZeroVZeroFinding
)

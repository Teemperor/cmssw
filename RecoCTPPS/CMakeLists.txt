add_subdirectory(TotemRPLocal)


# Meta-target that builds everything in this subsystem
add_custom_target(RecoCTPPS_all)
add_dependencies(RecoCTPPS_all
  RecoCTPPSTotemRPLocal
  RecoCTPPSTotemRPLocalPlugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(RecoCTPPS_libs)
add_dependencies(RecoCTPPS_libs
  RecoCTPPSTotemRPLocal
)

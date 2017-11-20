add_subdirectory(Skimming)


# Meta-target that builds everything in this subsystem
add_custom_target(Configuration_all)
add_dependencies(Configuration_all
  ConfigurationSkimming
)
# Meta-target that builds all libs in this subsystem
add_custom_target(Configuration_libs)
add_dependencies(Configuration_libs
  ConfigurationSkimming
)

add_subdirectory(SimFP420)


# Meta-target that builds everything in this subsystem
add_custom_target(SimRomanPot_all)
add_dependencies(SimRomanPot_all
  SimRomanPotSimFP420
  SimRomanPotSimFP420Plugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(SimRomanPot_libs)
add_dependencies(SimRomanPot_libs
  SimRomanPotSimFP420
)

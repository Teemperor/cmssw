add_subdirectory(Geometry)


# Meta-target that builds everything in this subsystem
add_custom_target(SLHCUpgradeSimulations_all)
add_dependencies(SLHCUpgradeSimulations_all
  SLHCUpgradeSimulationsGeometry
)
# Meta-target that builds all libs in this subsystem
add_custom_target(SLHCUpgradeSimulations_libs)
add_dependencies(SLHCUpgradeSimulations_libs
  SLHCUpgradeSimulationsGeometry
)

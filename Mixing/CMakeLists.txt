add_subdirectory(Base)


# Meta-target that builds everything in this subsystem
add_custom_target(Mixing_all)
add_dependencies(Mixing_all
  MixingBase
)
# Meta-target that builds all libs in this subsystem
add_custom_target(Mixing_libs)
add_dependencies(Mixing_libs
  MixingBase
)

add_subdirectory(RecoFP420)


# Meta-target that builds everything in this subsystem
add_custom_target(RecoRomanPot_all)
add_dependencies(RecoRomanPot_all
  RecoRomanPotRecoFP420
  RecoRomanPotRecoFP420Plugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(RecoRomanPot_libs)
add_dependencies(RecoRomanPot_libs
  RecoRomanPotRecoFP420
)

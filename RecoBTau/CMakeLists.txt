add_subdirectory(JetCrystalsAssociator)
add_subdirectory(JetTagComputer)


# Meta-target that builds everything in this subsystem
add_custom_target(RecoBTau_all)
add_dependencies(RecoBTau_all
  RecoBTauJetCrystalsAssociator
  RecoBTauJetTagComputer
  RecoBTauJetTagComputerPlugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(RecoBTau_libs)
add_dependencies(RecoBTau_libs
  RecoBTauJetCrystalsAssociator
  RecoBTauJetTagComputer
)

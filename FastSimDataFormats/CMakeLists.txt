add_subdirectory(External)
add_subdirectory(L1GlobalMuonTrigger)
add_subdirectory(NuclearInteractions)
add_subdirectory(CTPPSFastSim)
add_subdirectory(PileUpEvents)


# Meta-target that builds everything in this subsystem
add_custom_target(FastSimDataFormats_all)
add_dependencies(FastSimDataFormats_all
  FastSimDataFormatsExternal
  FastSimDataFormatsL1GlobalMuonTrigger
  FastSimDataFormatsNuclearInteractions
  FastSimDataFormatsCTPPSFastSim
  FastSimDataFormatsPileUpEvents
)
# Meta-target that builds all libs in this subsystem
add_custom_target(FastSimDataFormats_libs)
add_dependencies(FastSimDataFormats_libs
  FastSimDataFormatsExternal
  FastSimDataFormatsL1GlobalMuonTrigger
  FastSimDataFormatsNuclearInteractions
  FastSimDataFormatsCTPPSFastSim
  FastSimDataFormatsPileUpEvents
)

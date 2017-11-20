add_subdirectory(HcalTBObjects)
add_subdirectory(EcalTBObjects)


# Meta-target that builds everything in this subsystem
add_custom_target(TBDataFormats_all)
add_dependencies(TBDataFormats_all
  TBDataFormatsHcalTBObjects
  HcalTBObjectDump
  TBDataFormatsEcalTBObjects
)
# Meta-target that builds all libs in this subsystem
add_custom_target(TBDataFormats_libs)
add_dependencies(TBDataFormats_libs
  TBDataFormatsHcalTBObjects
  TBDataFormatsEcalTBObjects
)

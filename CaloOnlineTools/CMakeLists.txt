add_subdirectory(HcalOnlineDb)
add_subdirectory(EcalTools)


# Meta-target that builds everything in this subsystem
add_custom_target(CaloOnlineTools_all)
add_dependencies(CaloOnlineTools_all
  CaloOnlineToolsHcalOnlineDb
  CaloOnlineToolsHcalOnlineDbPlugins
  CaloOnlineToolsEcalTools
  TPGTreeReader
  CaloOnlineToolsEcalToolsPlugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(CaloOnlineTools_libs)
add_dependencies(CaloOnlineTools_libs
  CaloOnlineToolsHcalOnlineDb
  CaloOnlineToolsEcalTools
)

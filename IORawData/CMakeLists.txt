add_subdirectory(HcalTBInputService)
add_subdirectory(SiPixelInputSources)
add_subdirectory(DTCommissioning)
add_subdirectory(CaloPatterns)


# Meta-target that builds everything in this subsystem
add_custom_target(IORawData_all)
add_dependencies(IORawData_all
  IORawDataHcalTBInputService
  HcalTBWriter
  HcalTBSource.cc
  IORawDataSiPixelInputSources
  IORawDataDTCommissioningPlugins
  IORawDataCaloPatterns
)
# Meta-target that builds all libs in this subsystem
add_custom_target(IORawData_libs)
add_dependencies(IORawData_libs
  IORawDataHcalTBInputService
  IORawDataSiPixelInputSources
  IORawDataCaloPatterns
)

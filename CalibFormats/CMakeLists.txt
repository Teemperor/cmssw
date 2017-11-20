add_subdirectory(CaloTPG)
add_subdirectory(CastorObjects)
add_subdirectory(SiStripObjects)
add_subdirectory(CaloObjects)
add_subdirectory(SiPixelObjects)
add_subdirectory(HcalObjects)


# Meta-target that builds everything in this subsystem
add_custom_target(CalibFormats_all)
add_dependencies(CalibFormats_all
  CalibFormatsCaloTPG
  CalibFormatsCastorObjects
  CalibFormatsSiStripObjects
  testCalibFormatsSiStripObjectsPlugins
  TestCalibFormatsSiStripObjects
  CalibFormatsCaloObjects
  CalibFormatsSiPixelObjects
  CalibFormatsHcalObjects
)
# Meta-target that builds all libs in this subsystem
add_custom_target(CalibFormats_libs)
add_dependencies(CalibFormats_libs
  CalibFormatsCaloTPG
  CalibFormatsCastorObjects
  CalibFormatsSiStripObjects
  CalibFormatsCaloObjects
  CalibFormatsSiPixelObjects
  CalibFormatsHcalObjects
)

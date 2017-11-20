add_subdirectory(VolumeGeometry)
add_subdirectory(Engine)
add_subdirectory(GeomBuilder)
add_subdirectory(Layers)
add_subdirectory(VolumeBasedEngine)
add_subdirectory(Records)
add_subdirectory(ParametrizedEngine)
add_subdirectory(Interpolation)


# Meta-target that builds everything in this subsystem
add_custom_target(MagneticField_all)
add_dependencies(MagneticField_all
  MagneticFieldVolumeGeometry
  MagneticFieldEngine
  testMagneticField
  queryField
  MagneticFieldGeomBuilder
  testMagneticFieldGeomBuilder
  MagneticFieldGeomBuilderPlugins
  MagneticFieldLayers
  MagneticFieldVolumeBasedEngine
  MagneticFieldRecords
  MagneticFieldParametrizedEngine
  MagneticFieldParametrizedEnginePlugins
  MagneticFieldInterpolation
  Grid1D_t
  Grid3D_t
  GridFileReader
  prepareFieldTable
)
# Meta-target that builds all libs in this subsystem
add_custom_target(MagneticField_libs)
add_dependencies(MagneticField_libs
  MagneticFieldVolumeGeometry
  MagneticFieldEngine
  MagneticFieldGeomBuilder
  MagneticFieldLayers
  MagneticFieldVolumeBasedEngine
  MagneticFieldRecords
  MagneticFieldParametrizedEngine
  MagneticFieldInterpolation
)

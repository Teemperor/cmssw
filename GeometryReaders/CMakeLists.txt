add_subdirectory(XMLIdealGeometryESSource)


# Meta-target that builds everything in this subsystem
add_custom_target(GeometryReaders_all)
add_dependencies(GeometryReaders_all
  GeometryReadersXMLIdealGeometryESSource
  PerfectGeometryAnalyzer
  ExtractXMLFile
  TestIdealGeometryESProducer
  TestSpecParAnalyzer
  TestCompareDDDumpFiles
  TestCompareDDSpecsDumpFiles
)
# Meta-target that builds all libs in this subsystem
add_custom_target(GeometryReaders_libs)
add_dependencies(GeometryReaders_libs
  GeometryReadersXMLIdealGeometryESSource
)

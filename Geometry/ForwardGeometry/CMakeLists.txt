add_subdirectory(plugins)
add_library(GeometryForwardGeometry OBJECT 
  src/CastorGeometry.cc
  src/IdealZDCTrapezoid.cc
  src/ZdcTopology.cc
  src/IdealCastorTrapezoid.cc
  src/CastorHardcodeGeometryLoader.cc
  src/ZdcHardcodeGeometryLoader.cc
  src/CastorTopology.cc
  src/ZdcGeometry.cc
)

target_include_directories(GeometryForwardGeometry PUBLIC /usr/include/boost/python/)
target_include_directories(GeometryForwardGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryForwardGeometry PUBLIC /usr/include/python2.7/)
target_include_directories(GeometryForwardGeometry PUBLIC /usr/include/root/)
target_include_directories(GeometryForwardGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryForwardGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryForwardGeometry PUBLIC /usr/include/boost/)
target_include_directories(GeometryForwardGeometry PUBLIC /usr/include/boost/regex/)


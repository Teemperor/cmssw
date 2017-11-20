add_subdirectory(plugins)
add_library(GeometryEcalTestBeam OBJECT 
  src/EcalHodoscopeNumberingScheme.cc
  src/EcalTBCrystalMap.cc
  src/EcalTBHodoscopeGeometry.cc
)

target_include_directories(GeometryEcalTestBeam PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryEcalTestBeam PUBLIC /usr/include/root/)
target_include_directories(GeometryEcalTestBeam PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryEcalTestBeam PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryEcalTestBeam PUBLIC /usr/include/boost/)
target_include_directories(GeometryEcalTestBeam PUBLIC /usr/include/boost/regex/)


add_subdirectory(test)
add_library(GeometryDTGeometry OBJECT 
  src/SealModule.cc
  src/DTSuperLayer.cc
  src/DTLayer.cc
  src/DTTopology.cc
  src/DTLayerType.cc
  src/DTGeometry.cc
  src/DTChamber.cc
)

target_include_directories(GeometryDTGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryDTGeometry PUBLIC /usr/include/root/)
target_include_directories(GeometryDTGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryDTGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryDTGeometry PUBLIC /usr/include/boost/)
target_include_directories(GeometryDTGeometry PUBLIC /usr/include/boost/regex/)


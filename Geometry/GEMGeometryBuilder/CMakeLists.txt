add_subdirectory(plugins)
add_library(GeometryGEMGeometryBuilder OBJECT 
  src/ME0GeometryBuilderFromCondDB.cc
  src/GEMGeometryBuilderFromDDD.cc
  src/ME0GeometryBuilderFromDDD.cc
  src/ME0GeometryBuilderFromDDD10EtaPart.cc
  src/GEMGeometryParsFromDD.cc
  src/ME0GeometryParsFromDD.cc
  src/GEMGeometryBuilderFromCondDB.cc
)

target_include_directories(GeometryGEMGeometryBuilder PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryGEMGeometryBuilder PUBLIC /usr/include/root/)
target_include_directories(GeometryGEMGeometryBuilder PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryGEMGeometryBuilder PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryGEMGeometryBuilder PUBLIC /usr/include/boost/)
target_include_directories(GeometryGEMGeometryBuilder PUBLIC /usr/include/boost/regex/)


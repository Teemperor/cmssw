add_subdirectory(plugins)
add_library(GeometryDTGeometryBuilder OBJECT 
  src/DTGeometryParsFromDD.cc
  src/DTGeometryBuilderFromDDD.cc
  src/DTGeometryBuilderFromCondDB.cc
)

target_include_directories(GeometryDTGeometryBuilder PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryDTGeometryBuilder PUBLIC /usr/include/root/)
target_include_directories(GeometryDTGeometryBuilder PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryDTGeometryBuilder PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryDTGeometryBuilder PUBLIC /usr/include/boost/)
target_include_directories(GeometryDTGeometryBuilder PUBLIC /usr/include/boost/regex/)


add_subdirectory(plugins)
add_library(GeometryRPCGeometryBuilder OBJECT 
  src/RPCGeometryBuilderFromDDD.cc
  src/RPCGeometryBuilderFromCondDB.cc
  src/RPCGeometryParsFromDD.cc
)

target_include_directories(GeometryRPCGeometryBuilder PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryRPCGeometryBuilder PUBLIC /usr/include/root/)
target_include_directories(GeometryRPCGeometryBuilder PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryRPCGeometryBuilder PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryRPCGeometryBuilder PUBLIC /usr/include/boost/)
target_include_directories(GeometryRPCGeometryBuilder PUBLIC /usr/include/boost/regex/)


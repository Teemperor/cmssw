add_subdirectory(test)
add_library(GeometryRPCGeometry OBJECT 
  src/RPCRoll.cc
  src/RPCGeomServ.cc
  src/ES_RPCGeometry.cc
  src/RPCRollSpecs.cc
  src/RPCGeometry.cc
  src/RPCChamber.cc
)

target_include_directories(GeometryRPCGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryRPCGeometry PUBLIC /usr/include/root/)
target_include_directories(GeometryRPCGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryRPCGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryRPCGeometry PUBLIC /usr/include/boost/)
target_include_directories(GeometryRPCGeometry PUBLIC /usr/include/boost/regex/)


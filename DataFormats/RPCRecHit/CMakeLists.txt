add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsRPCRecHitsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/RPCRecHit/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsRPCRecHitsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/RPCRecHit/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/RPCRecHit/src/classes.h /home/teemperor/cms/cmssw/DataFormats/RPCRecHit/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsRPCRecHitsrcclassesh")

add_library(DataFormatsRPCRecHit OBJECT 
  src/RPCRecHit.cc
  ${CMAKE_BINARY_DIR}/DataFormatsRPCRecHitsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsRPCRecHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsRPCRecHit PUBLIC /usr/include/root/)
target_include_directories(DataFormatsRPCRecHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsRPCRecHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsRPCRecHit PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsRPCRecHit PUBLIC /usr/include/boost/regex/)


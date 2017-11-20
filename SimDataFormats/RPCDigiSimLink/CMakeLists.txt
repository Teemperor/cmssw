add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsRPCDigiSimLinksrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/RPCDigiSimLink/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsRPCDigiSimLinksrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/RPCDigiSimLink/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/RPCDigiSimLink/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/RPCDigiSimLink/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsRPCDigiSimLinksrcclassesh")

add_library(SimDataFormatsRPCDigiSimLink OBJECT 
  src/RPCDigiSimLink.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsRPCDigiSimLinksrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsRPCDigiSimLink PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsRPCDigiSimLink PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsRPCDigiSimLink PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsRPCDigiSimLink PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsRPCDigiSimLink PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsRPCDigiSimLink PUBLIC /usr/include/boost/regex/)


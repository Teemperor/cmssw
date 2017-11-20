add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/IORawDataHcalTBInputServicesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/IORawData/HcalTBInputService/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/IORawDataHcalTBInputServicesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/IORawData/HcalTBInputService/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/IORawData/HcalTBInputService/src/classes.h /home/teemperor/cms/cmssw/IORawData/HcalTBInputService/src/classes_def.xml
  COMMENT "Generating ROOT dict IORawDataHcalTBInputServicesrcclassesh")

add_library(IORawDataHcalTBInputService OBJECT 
  src/CDFChunk.cc
  src/CDFRunInfo.cc
  src/CDFEventInfo.cc
  ${CMAKE_BINARY_DIR}/IORawDataHcalTBInputServicesrcclassesh_rflx.cpp
)

target_include_directories(IORawDataHcalTBInputService PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(IORawDataHcalTBInputService PUBLIC /usr/include/root/)


add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsGEMDigiSimLinksrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/GEMDigiSimLink/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsGEMDigiSimLinksrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/GEMDigiSimLink/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/GEMDigiSimLink/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/GEMDigiSimLink/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsGEMDigiSimLinksrcclassesh")

add_library(SimDataFormatsGEMDigiSimLink OBJECT 
  src/GEMDigiSimLink.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsGEMDigiSimLinksrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsGEMDigiSimLink PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsGEMDigiSimLink PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsGEMDigiSimLink PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsGEMDigiSimLink PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsGEMDigiSimLink PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsGEMDigiSimLink PUBLIC /usr/include/boost/regex/)


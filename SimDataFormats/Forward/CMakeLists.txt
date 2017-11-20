add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsForwardsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/Forward/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsForwardsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/Forward/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/Forward/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/Forward/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsForwardsrcclassesh")

add_library(SimDataFormatsForward OBJECT 
  src/LHCTransportLink.cc
  src/TotemTestHistoClass.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsForwardsrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsForward PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsForward PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsForward PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsForward PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsForward PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsForward PUBLIC /usr/include/boost/regex/)


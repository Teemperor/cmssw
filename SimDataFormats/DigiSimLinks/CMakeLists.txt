add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsDigiSimLinkssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/DigiSimLinks/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsDigiSimLinkssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/DigiSimLinks/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/DigiSimLinks/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/DigiSimLinks/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsDigiSimLinkssrcclassesh")

add_library(SimDataFormatsDigiSimLinks OBJECT 
  src/DTDigiSimLink.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsDigiSimLinkssrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsDigiSimLinks PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsDigiSimLinks PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsDigiSimLinks PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsDigiSimLinks PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsDigiSimLinks PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsDigiSimLinks PUBLIC /usr/include/boost/regex/)


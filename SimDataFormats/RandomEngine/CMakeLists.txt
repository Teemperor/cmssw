add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsRandomEnginesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/RandomEngine/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsRandomEnginesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/RandomEngine/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/RandomEngine/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/RandomEngine/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsRandomEnginesrcclassesh")

add_library(SimDataFormatsRandomEngine OBJECT 
  src/RandomEngineStates.cc
  src/RandomEngineState.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsRandomEnginesrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsRandomEngine PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsRandomEngine PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsRandomEngine PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsRandomEngine PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsRandomEngine PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsRandomEngine PUBLIC /usr/include/boost/regex/)


add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsTestObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/TestObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsTestObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/TestObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/TestObjects/src/classes.h /home/teemperor/cms/cmssw/DataFormats/TestObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsTestObjectssrcclassesh")

add_library(DataFormatsTestObjects OBJECT 
  src/ToyProducts.cc
  src/ThingWithMerge.cc
  src/DeleteEarly.cc
  src/ThingWithIsEqual.cc
  src/StreamTestThing.cc
  ${CMAKE_BINARY_DIR}/DataFormatsTestObjectssrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsTestObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsTestObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsTestObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsTestObjects PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsTestObjects PUBLIC /usr/include/root/)
target_include_directories(DataFormatsTestObjects PUBLIC /usr/include/boost/regex/)


add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsEncodedEventIdsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/EncodedEventId/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsEncodedEventIdsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/EncodedEventId/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/EncodedEventId/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/EncodedEventId/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsEncodedEventIdsrcclassesh")

add_library(SimDataFormatsEncodedEventId OBJECT 
  src/EncodedEventId.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsEncodedEventIdsrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsEncodedEventId PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsEncodedEventId PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsEncodedEventId PUBLIC /usr/include/root/)


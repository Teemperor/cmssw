add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/FastSimDataFormatsPileUpEventssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/FastSimDataFormats/PileUpEvents/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/FastSimDataFormatsPileUpEventssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/FastSimDataFormats/PileUpEvents/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/FastSimDataFormats/PileUpEvents/src/classes.h /home/teemperor/cms/cmssw/FastSimDataFormats/PileUpEvents/src/classes_def.xml
  COMMENT "Generating ROOT dict FastSimDataFormatsPileUpEventssrcclassesh")

add_library(FastSimDataFormatsPileUpEvents OBJECT 
  ${CMAKE_BINARY_DIR}/FastSimDataFormatsPileUpEventssrcclassesh_rflx.cpp
)

target_include_directories(FastSimDataFormatsPileUpEvents PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimDataFormatsPileUpEvents PUBLIC /usr/include/root/)


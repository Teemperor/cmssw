add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/FastSimDataFormatsNuclearInteractionssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/FastSimDataFormats/NuclearInteractions/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/FastSimDataFormatsNuclearInteractionssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/FastSimDataFormats/NuclearInteractions/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/FastSimDataFormats/NuclearInteractions/src/classes.h /home/teemperor/cms/cmssw/FastSimDataFormats/NuclearInteractions/src/classes_def.xml
  COMMENT "Generating ROOT dict FastSimDataFormatsNuclearInteractionssrcclassesh")

add_library(FastSimDataFormatsNuclearInteractions OBJECT 
  src/FSimDisplacedVertex.cc
  src/FSimVertexType.cc
  ${CMAKE_BINARY_DIR}/FastSimDataFormatsNuclearInteractionssrcclassesh_rflx.cpp
)

target_include_directories(FastSimDataFormatsNuclearInteractions PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimDataFormatsNuclearInteractions PUBLIC /usr/include/root/)
target_include_directories(FastSimDataFormatsNuclearInteractions PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimDataFormatsNuclearInteractions PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimDataFormatsNuclearInteractions PUBLIC /usr/include/boost/)
target_include_directories(FastSimDataFormatsNuclearInteractions PUBLIC /usr/include/boost/regex/)


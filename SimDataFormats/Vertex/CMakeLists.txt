add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsVertexsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/Vertex/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsVertexsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/Vertex/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/Vertex/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/Vertex/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsVertexsrcclassesh")

add_library(SimDataFormatsVertex OBJECT 
  src/SimVertex.cc
  src/CoreSimVertex.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsVertexsrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsVertex PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsVertex PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsVertex PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsVertex PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsVertex PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsVertex PUBLIC /usr/include/boost/regex/)


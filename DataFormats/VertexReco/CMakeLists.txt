add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsVertexRecosrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/VertexReco/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsVertexRecosrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/VertexReco/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/VertexReco/src/classes.h /home/teemperor/cms/cmssw/DataFormats/VertexReco/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsVertexRecosrcclassesh")

add_library(DataFormatsVertexReco OBJECT 
  src/print.cc
  src/Vertex.cc
  ${CMAKE_BINARY_DIR}/DataFormatsVertexRecosrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsVertexReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsVertexReco PUBLIC /usr/include/root/)
target_include_directories(DataFormatsVertexReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsVertexReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsVertexReco PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsVertexReco PUBLIC /usr/include/boost/regex/)


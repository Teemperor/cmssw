add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/FireworksVerticessrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/Fireworks/Vertices/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/FireworksVerticessrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/Fireworks/Vertices/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/Fireworks/Vertices/src/classes.h /home/teemperor/cms/cmssw/Fireworks/Vertices/src/classes_def.xml
  COMMENT "Generating ROOT dict FireworksVerticessrcclassesh")

add_library(FireworksVertices OBJECT 
  src/TEveEllipsoidGL.cc
  src/TEveEllipsoid.cc
  ${CMAKE_BINARY_DIR}/FireworksVerticessrcclassesh_rflx.cpp
)

target_include_directories(FireworksVertices PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksVertices PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksVertices PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksVertices PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksVertices PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksVertices PUBLIC /usr/include/root/)
target_include_directories(FireworksVertices PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksVertices PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksVertices PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksVertices PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksVertices PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksVertices PUBLIC /usr/include/boost/)
target_include_directories(FireworksVertices PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksVertices PUBLIC /usr/include/boost/regex/)


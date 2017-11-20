add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsStreamersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/Streamer/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsStreamersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/Streamer/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/Streamer/src/classes.h /home/teemperor/cms/cmssw/DataFormats/Streamer/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsStreamersrcclassesh")

add_library(DataFormatsStreamer OBJECT 
  src/StreamedProducts.cc
  ${CMAKE_BINARY_DIR}/DataFormatsStreamersrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsStreamer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsStreamer PUBLIC /usr/include/root/)
target_include_directories(DataFormatsStreamer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsStreamer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsStreamer PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsStreamer PUBLIC /usr/include/boost/regex/)


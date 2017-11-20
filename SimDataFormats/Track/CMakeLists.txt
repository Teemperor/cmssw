add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsTracksrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/Track/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsTracksrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/Track/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/Track/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/Track/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsTracksrcclassesh")

add_library(SimDataFormatsTrack OBJECT 
  src/CoreSimTrack.cc
  src/SimTrack.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsTracksrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsTrack PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsTrack PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsTrack PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsTrack PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsTrack PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsTrack PUBLIC /usr/include/boost/regex/)


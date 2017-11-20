add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsCrossingFramesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/CrossingFrame/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsCrossingFramesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/CrossingFrame/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/CrossingFrame/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/CrossingFrame/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsCrossingFramesrcclassesh")

add_library(SimDataFormatsCrossingFrame OBJECT 
  src/CrossingFramePlaybackInfoNew.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsCrossingFramesrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsCrossingFrame PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsCrossingFrame PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsCrossingFrame PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsCrossingFrame PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsCrossingFrame PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsCrossingFrame PUBLIC /usr/include/boost/regex/)


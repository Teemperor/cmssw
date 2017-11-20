add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsCTPPSRecosrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/CTPPSReco/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsCTPPSRecosrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/CTPPSReco/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/CTPPSReco/src/classes.h /home/teemperor/cms/cmssw/DataFormats/CTPPSReco/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsCTPPSRecosrcclassesh")

add_library(DataFormatsCTPPSReco OBJECT 
  src/TotemRPUVPattern.cc
  src/TotemRPLocalTrack.cc
  ${CMAKE_BINARY_DIR}/DataFormatsCTPPSRecosrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsCTPPSReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsCTPPSReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsCTPPSReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsCTPPSReco PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsCTPPSReco PUBLIC /usr/include/root/)
target_include_directories(DataFormatsCTPPSReco PUBLIC /usr/include/boost/regex/)


add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsEgammaTrackRecosrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/EgammaTrackReco/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsEgammaTrackRecosrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/EgammaTrackReco/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/EgammaTrackReco/src/classes.h /home/teemperor/cms/cmssw/DataFormats/EgammaTrackReco/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsEgammaTrackRecosrcclassesh")

add_library(DataFormatsEgammaTrackReco OBJECT 
  src/ConversionTrack.cc
  ${CMAKE_BINARY_DIR}/DataFormatsEgammaTrackRecosrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsEgammaTrackReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsEgammaTrackReco PUBLIC /usr/include/root/)
target_include_directories(DataFormatsEgammaTrackReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsEgammaTrackReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsEgammaTrackReco PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsEgammaTrackReco PUBLIC /usr/include/boost/regex/)


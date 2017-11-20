add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsTrackRecosrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/TrackReco/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsTrackRecosrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/TrackReco/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/TrackReco/src/classes.h /home/teemperor/cms/cmssw/DataFormats/TrackReco/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsTrackRecosrcclassesh")

add_library(DataFormatsTrackReco OBJECT 
  src/print.cc
  src/Track.cc
  src/TrackBase.cc
  src/DeDxData.cc
  src/TrackResiduals.cc
  src/HitPattern.cc
  src/TrackExtra.cc
  src/fillCovariance.cc
  ${CMAKE_BINARY_DIR}/DataFormatsTrackRecosrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsTrackReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsTrackReco PUBLIC /usr/include/root/)
target_include_directories(DataFormatsTrackReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsTrackReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsTrackReco PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsTrackReco PUBLIC /usr/include/boost/regex/)


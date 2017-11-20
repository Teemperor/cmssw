add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsTrackingRecHitsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/TrackingRecHit/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsTrackingRecHitsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/TrackingRecHit/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/TrackingRecHit/src/classes.h /home/teemperor/cms/cmssw/DataFormats/TrackingRecHit/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsTrackingRecHitsrcclassesh")

add_library(DataFormatsTrackingRecHit OBJECT 
  src/InvalidTrackingRecHit.cc
  src/RecHit1D.cc
  src/TrackingRecHit.cc
  src/AlignmentPositionError.cc
  src/RecHit2DLocalPos.cc
  src/KfComponentsHolder.cc
  ${CMAKE_BINARY_DIR}/DataFormatsTrackingRecHitsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsTrackingRecHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsTrackingRecHit PUBLIC /usr/include/root/)
target_include_directories(DataFormatsTrackingRecHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsTrackingRecHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsTrackingRecHit PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsTrackingRecHit PUBLIC /usr/include/boost/regex/)


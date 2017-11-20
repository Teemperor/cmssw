add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsTrackerRecHit2Dsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/TrackerRecHit2D/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsTrackerRecHit2Dsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/TrackerRecHit2D/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/TrackerRecHit2D/src/classes.h /home/teemperor/cms/cmssw/DataFormats/TrackerRecHit2D/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsTrackerRecHit2Dsrcclassesh")

add_library(DataFormatsTrackerRecHit2D OBJECT 
  src/SiStripMatchedRecHit2D.cc
  src/SiTrackerMultiRecHit.cc
  src/FastProjectedTrackerRecHit.cc
  src/FastSingleTrackerRecHit.cc
  src/FastTrackerRecHit.cc
  src/TrackingRecHitLessFromGlobalPosition.cc
  src/SiStripRecHit2D.cc
  src/SiStripRecHit1D.cc
  src/ProjectedSiStripRecHit2D.cc
  src/FastMatchedTrackerRecHit.cc
  src/TrackerSingleRecHit.cc
  src/SiPixelRecHit.cc
  src/BaseTrackerRecHit.cc
  src/SiPixelRecHitQuality.cc
  src/ClusterRemovalInfo.cc
  ${CMAKE_BINARY_DIR}/DataFormatsTrackerRecHit2Dsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsTrackerRecHit2D PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsTrackerRecHit2D PUBLIC /usr/include/root/)
target_include_directories(DataFormatsTrackerRecHit2D PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsTrackerRecHit2D PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsTrackerRecHit2D PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsTrackerRecHit2D PUBLIC /usr/include/boost/regex/)


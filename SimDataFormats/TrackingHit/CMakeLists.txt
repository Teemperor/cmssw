add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsTrackingHitsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/TrackingHit/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsTrackingHitsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/TrackingHit/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/TrackingHit/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/TrackingHit/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsTrackingHitsrcclassesh")

add_library(SimDataFormatsTrackingHit OBJECT 
  src/PSimHit.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsTrackingHitsrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsTrackingHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsTrackingHit PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsTrackingHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsTrackingHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsTrackingHit PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsTrackingHit PUBLIC /usr/include/boost/regex/)


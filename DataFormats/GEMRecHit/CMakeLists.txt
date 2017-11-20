add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsGEMRecHitsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/GEMRecHit/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsGEMRecHitsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/GEMRecHit/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/GEMRecHit/src/classes.h /home/teemperor/cms/cmssw/DataFormats/GEMRecHit/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsGEMRecHitsrcclassesh")

add_library(DataFormatsGEMRecHit OBJECT 
  src/GEMSegment.cc
  src/GEMRecHit.cc
  src/GEMCSCSegment.cc
  src/ME0RecHit.cc
  src/ME0Segment.cc
  ${CMAKE_BINARY_DIR}/DataFormatsGEMRecHitsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsGEMRecHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsGEMRecHit PUBLIC /usr/include/root/)
target_include_directories(DataFormatsGEMRecHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsGEMRecHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsGEMRecHit PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsGEMRecHit PUBLIC /usr/include/boost/regex/)


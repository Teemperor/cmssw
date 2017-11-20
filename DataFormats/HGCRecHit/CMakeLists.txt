add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsHGCRecHitsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/HGCRecHit/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsHGCRecHitsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/HGCRecHit/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/HGCRecHit/src/classes.h /home/teemperor/cms/cmssw/DataFormats/HGCRecHit/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsHGCRecHitsrcclassesh")

add_library(DataFormatsHGCRecHit OBJECT 
  src/HGCUncalibratedRecHit.cc
  src/HGCRecHit.cc
  ${CMAKE_BINARY_DIR}/DataFormatsHGCRecHitsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsHGCRecHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsHGCRecHit PUBLIC /usr/include/root/)
target_include_directories(DataFormatsHGCRecHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsHGCRecHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsHGCRecHit PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsHGCRecHit PUBLIC /usr/include/boost/regex/)


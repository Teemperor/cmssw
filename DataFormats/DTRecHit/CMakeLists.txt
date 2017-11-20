add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsDTRecHitsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/DTRecHit/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsDTRecHitsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/DTRecHit/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/DTRecHit/src/classes.h /home/teemperor/cms/cmssw/DataFormats/DTRecHit/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsDTRecHitsrcclassesh")

add_library(DataFormatsDTRecHit OBJECT 
  src/DTRecHit1DPair.cc
  src/DTSLRecSegment2D.cc
  src/DTRangeMapAccessor.cc
  src/DTEnums.cc
  src/DTRecSegment4D.cc
  src/DTRecHit1D.cc
  src/DTChamberRecSegment2D.cc
  src/DTSLRecCluster.cc
  src/DTRecSegment2D.cc
  ${CMAKE_BINARY_DIR}/DataFormatsDTRecHitsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsDTRecHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsDTRecHit PUBLIC /usr/include/root/)
target_include_directories(DataFormatsDTRecHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsDTRecHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsDTRecHit PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsDTRecHit PUBLIC /usr/include/boost/regex/)


add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsCSCRecHitsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/CSCRecHit/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsCSCRecHitsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/CSCRecHit/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/CSCRecHit/src/classes.h /home/teemperor/cms/cmssw/DataFormats/CSCRecHit/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsCSCRecHitsrcclassesh")

add_library(DataFormatsCSCRecHit OBJECT 
  src/CSCRangeMapAccessor.cc
  src/CSCSegment.cc
  src/CSCRecHit2D.cc
  ${CMAKE_BINARY_DIR}/DataFormatsCSCRecHitsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsCSCRecHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsCSCRecHit PUBLIC /usr/include/root/)
target_include_directories(DataFormatsCSCRecHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsCSCRecHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsCSCRecHit PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsCSCRecHit PUBLIC /usr/include/boost/regex/)


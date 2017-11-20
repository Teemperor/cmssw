add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsL1DTTrackFindersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/L1DTTrackFinder/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsL1DTTrackFindersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/L1DTTrackFinder/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/L1DTTrackFinder/src/classes.h /home/teemperor/cms/cmssw/DataFormats/L1DTTrackFinder/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsL1DTTrackFindersrcclassesh")

add_library(DataFormatsL1DTTrackFinder OBJECT 
  src/L1MuDTChambPhDigi.cc
  src/L1MuDTTrackCand.cc
  src/L1MuDTChambThContainer.cc
  src/L1MuDTChambPhContainer.cc
  src/L1MuDTTrackContainer.cc
  src/L1MuDTChambThDigi.cc
  ${CMAKE_BINARY_DIR}/DataFormatsL1DTTrackFindersrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsL1DTTrackFinder PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsL1DTTrackFinder PUBLIC /usr/include/root/)
target_include_directories(DataFormatsL1DTTrackFinder PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsL1DTTrackFinder PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsL1DTTrackFinder PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsL1DTTrackFinder PUBLIC /usr/include/boost/regex/)


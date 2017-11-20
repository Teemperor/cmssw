add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsL1CSCTrackFindersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/L1CSCTrackFinder/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsL1CSCTrackFindersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/L1CSCTrackFinder/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/L1CSCTrackFinder/src/classes.h /home/teemperor/cms/cmssw/DataFormats/L1CSCTrackFinder/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsL1CSCTrackFindersrcclassesh")

add_library(DataFormatsL1CSCTrackFinder OBJECT 
  src/L1Track.cc
  src/L1TrackId.cc
  src/TrackStub.cc
  src/CSCTFConstants.cc
  ${CMAKE_BINARY_DIR}/DataFormatsL1CSCTrackFindersrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsL1CSCTrackFinder PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsL1CSCTrackFinder PUBLIC /usr/include/root/)
target_include_directories(DataFormatsL1CSCTrackFinder PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsL1CSCTrackFinder PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsL1CSCTrackFinder PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsL1CSCTrackFinder PUBLIC /usr/include/boost/regex/)


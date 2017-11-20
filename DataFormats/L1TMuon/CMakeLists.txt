add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsL1TMuonsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/L1TMuon/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsL1TMuonsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/L1TMuon/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/L1TMuon/src/classes.h /home/teemperor/cms/cmssw/DataFormats/L1TMuon/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsL1TMuonsrcclassesh")

add_library(DataFormatsL1TMuon OBJECT 
  src/EMTFDaqOut.cc
  src/EMTFHit.cc
  src/EMTFTrackExtra.cc
  src/EMTFTrack.cc
  src/RegionalMuonCand.cc
  src/EMTFHitExtra.cc
  ${CMAKE_BINARY_DIR}/DataFormatsL1TMuonsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsL1TMuon PUBLIC /usr/include/boost/python/)
target_include_directories(DataFormatsL1TMuon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsL1TMuon PUBLIC /usr/include/python2.7/)
target_include_directories(DataFormatsL1TMuon PUBLIC /usr/include/root/)
target_include_directories(DataFormatsL1TMuon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsL1TMuon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsL1TMuon PUBLIC /usr/include/boost/serialization/)
target_include_directories(DataFormatsL1TMuon PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsL1TMuon PUBLIC /usr/include/boost/regex/)


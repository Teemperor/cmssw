add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsL1TrackTriggersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/L1TrackTrigger/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsL1TrackTriggersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/L1TrackTrigger/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/L1TrackTrigger/src/classes.h /home/teemperor/cms/cmssw/DataFormats/L1TrackTrigger/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsL1TrackTriggersrcclassesh")

add_library(DataFormatsL1TrackTrigger OBJECT 
  src/TTCluster.cc
  ${CMAKE_BINARY_DIR}/DataFormatsL1TrackTriggersrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsL1TrackTrigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsL1TrackTrigger PUBLIC /usr/include/root/)
target_include_directories(DataFormatsL1TrackTrigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsL1TrackTrigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsL1TrackTrigger PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsL1TrackTrigger PUBLIC /usr/include/boost/regex/)


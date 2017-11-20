add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsTrackerCommonsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/TrackerCommon/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsTrackerCommonsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/TrackerCommon/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/TrackerCommon/src/classes.h /home/teemperor/cms/cmssw/DataFormats/TrackerCommon/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsTrackerCommonsrcclassesh")

add_library(DataFormatsTrackerCommon OBJECT 
  src/TrackerTopology.cc
  src/ClusterSummary.cc
  ${CMAKE_BINARY_DIR}/DataFormatsTrackerCommonsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsTrackerCommon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsTrackerCommon PUBLIC /usr/include/root/)
target_include_directories(DataFormatsTrackerCommon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsTrackerCommon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsTrackerCommon PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsTrackerCommon PUBLIC /usr/include/boost/regex/)


add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsHLTRecosrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/HLTReco/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsHLTRecosrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/HLTReco/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/HLTReco/src/classes.h /home/teemperor/cms/cmssw/DataFormats/HLTReco/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsHLTRecosrcclassesh")

add_library(DataFormatsHLTReco OBJECT 
  src/HLTPerformanceInfo.cc
  ${CMAKE_BINARY_DIR}/DataFormatsHLTRecosrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsHLTReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsHLTReco PUBLIC /usr/include/root/)
target_include_directories(DataFormatsHLTReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsHLTReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsHLTReco PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsHLTReco PUBLIC /usr/include/boost/regex/)


add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsEcalRawDatasrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/EcalRawData/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsEcalRawDatasrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/EcalRawData/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/EcalRawData/src/classes.h /home/teemperor/cms/cmssw/DataFormats/EcalRawData/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsEcalRawDatasrcclassesh")

add_library(DataFormatsEcalRawData OBJECT 
  src/ESDCCHeaderBlock.cc
  src/ESKCHIPBlock.cc
  src/EcalListOfFEDS.cc
  src/EcalDCCHeaderBlock.cc
  src/ESListOfFEDS.cc
  ${CMAKE_BINARY_DIR}/DataFormatsEcalRawDatasrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsEcalRawData PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsEcalRawData PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsEcalRawData PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsEcalRawData PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsEcalRawData PUBLIC /usr/include/root/)
target_include_directories(DataFormatsEcalRawData PUBLIC /usr/include/boost/regex/)


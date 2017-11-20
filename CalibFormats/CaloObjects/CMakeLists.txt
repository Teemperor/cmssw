add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CalibFormatsCaloObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CalibFormats/CaloObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CalibFormatsCaloObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CalibFormats/CaloObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CalibFormats/CaloObjects/src/classes.h /home/teemperor/cms/cmssw/CalibFormats/CaloObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CalibFormatsCaloObjectssrcclassesh")

add_library(CalibFormatsCaloObjects OBJECT 
  src/CaloTSamples.cc
  src/IntegerCaloSamples.cc
  src/CaloSamples.cc
  ${CMAKE_BINARY_DIR}/CalibFormatsCaloObjectssrcclassesh_rflx.cpp
)

target_include_directories(CalibFormatsCaloObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibFormatsCaloObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibFormatsCaloObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibFormatsCaloObjects PUBLIC /usr/include/boost/)
target_include_directories(CalibFormatsCaloObjects PUBLIC /usr/include/root/)
target_include_directories(CalibFormatsCaloObjects PUBLIC /usr/include/boost/regex/)


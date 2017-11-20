add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsValidationFormatssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/ValidationFormats/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsValidationFormatssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/ValidationFormats/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/ValidationFormats/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/ValidationFormats/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsValidationFormatssrcclassesh")

add_library(SimDataFormatsValidationFormats OBJECT 
  src/PHGCalValidInfo.cc
  src/MaterialAccountingTrack.cc
  src/PValidationFormats.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsValidationFormatssrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsValidationFormats PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsValidationFormats PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsValidationFormats PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsValidationFormats PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsValidationFormats PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsValidationFormats PUBLIC /usr/include/Geant4/)
target_include_directories(SimDataFormatsValidationFormats PUBLIC /usr/include/boost/regex/)


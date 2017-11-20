add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsEcalDetIdsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/EcalDetId/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsEcalDetIdsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/EcalDetId/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/EcalDetId/src/classes.h /home/teemperor/cms/cmssw/DataFormats/EcalDetId/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsEcalDetIdsrcclassesh")

add_library(DataFormatsEcalDetId OBJECT 
  src/EcalTriggerElectronicsId.cc
  src/EcalTrigTowerDetId.cc
  src/EcalElectronicsId.cc
  src/EcalPnDiodeDetId.cc
  src/ESDetId.cc
  src/EcalScDetId.cc
  src/EEDetId.cc
  src/EBDetId.cc
  ${CMAKE_BINARY_DIR}/DataFormatsEcalDetIdsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsEcalDetId PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsEcalDetId PUBLIC /usr/include/root/)
target_include_directories(DataFormatsEcalDetId PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsEcalDetId PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsEcalDetId PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsEcalDetId PUBLIC /usr/include/boost/regex/)


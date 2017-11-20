add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsHcalDetIdsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/HcalDetId/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsHcalDetIdsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/HcalDetId/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/HcalDetId/src/classes.h /home/teemperor/cms/cmssw/DataFormats/HcalDetId/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsHcalDetIdsrcclassesh")

add_library(DataFormatsHcalDetId OBJECT 
  src/HcalDetId.cc
  src/HcalGenericDetId.cc
  src/HcalTrigTowerDetId.cc
  src/HcalElectronicsId.cc
  src/HcalCalibDetId.cc
  src/HcalTestNumbering.cc
  src/HcalCastorDetId.cc
  src/HcalDcsDetId.cc
  src/HcalFrontEndId.cc
  src/HcalZDCDetId.cc
  src/CastorElectronicsId.cc
  src/HcalOtherDetId.cc
  ${CMAKE_BINARY_DIR}/DataFormatsHcalDetIdsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsHcalDetId PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsHcalDetId PUBLIC /usr/include/root/)
target_include_directories(DataFormatsHcalDetId PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsHcalDetId PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsHcalDetId PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsHcalDetId PUBLIC /usr/include/boost/regex/)


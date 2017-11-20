add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsCaloTowerssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/CaloTowers/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsCaloTowerssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/CaloTowers/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/CaloTowers/src/classes.h /home/teemperor/cms/cmssw/DataFormats/CaloTowers/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsCaloTowerssrcclassesh")

add_library(DataFormatsCaloTowers OBJECT 
  src/CaloTower.cc
  src/CaloTowerDetId.cc
  ${CMAKE_BINARY_DIR}/DataFormatsCaloTowerssrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsCaloTowers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsCaloTowers PUBLIC /usr/include/root/)
target_include_directories(DataFormatsCaloTowers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsCaloTowers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsCaloTowers PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsCaloTowers PUBLIC /usr/include/boost/regex/)


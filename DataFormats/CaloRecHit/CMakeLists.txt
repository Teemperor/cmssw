add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsCaloRecHitsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/CaloRecHit/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsCaloRecHitsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/CaloRecHit/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/CaloRecHit/src/classes.h /home/teemperor/cms/cmssw/DataFormats/CaloRecHit/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsCaloRecHitsrcclassesh")

add_library(DataFormatsCaloRecHit OBJECT 
  src/CaloRecHit.cc
  src/CaloCluster.cc
  src/CaloID.cc
  ${CMAKE_BINARY_DIR}/DataFormatsCaloRecHitsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsCaloRecHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsCaloRecHit PUBLIC /usr/include/root/)
target_include_directories(DataFormatsCaloRecHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsCaloRecHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsCaloRecHit PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsCaloRecHit PUBLIC /usr/include/boost/regex/)


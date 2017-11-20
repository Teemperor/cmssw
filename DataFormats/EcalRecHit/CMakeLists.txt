add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsEcalRecHitsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/EcalRecHit/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsEcalRecHitsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/EcalRecHit/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/EcalRecHit/src/classes.h /home/teemperor/cms/cmssw/DataFormats/EcalRecHit/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsEcalRecHitsrcclassesh")

add_library(DataFormatsEcalRecHit OBJECT 
  src/EcalUncalibratedRecHit.cc
  src/EcalRecHit.cc
  ${CMAKE_BINARY_DIR}/DataFormatsEcalRecHitsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsEcalRecHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsEcalRecHit PUBLIC /usr/include/root/)
target_include_directories(DataFormatsEcalRecHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsEcalRecHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsEcalRecHit PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsEcalRecHit PUBLIC /usr/include/boost/regex/)


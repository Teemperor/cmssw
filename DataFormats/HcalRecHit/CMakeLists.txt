add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsHcalRecHitsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/HcalRecHit/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsHcalRecHitsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/HcalRecHit/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/HcalRecHit/src/classes.h /home/teemperor/cms/cmssw/DataFormats/HcalRecHit/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsHcalRecHitsrcclassesh")

add_library(DataFormatsHcalRecHit OBJECT 
  src/ZDCRecHit.cc
  src/CastorRecHit.cc
  src/HFQIE10Info.cc
  src/HORecHit.cc
  src/HFRecHit.cc
  src/HcalCalibRecHit.cc
  src/HFPreRecHit.cc
  src/HBHERecHitAuxSetter.cc
  src/HBHERecHit.cc
  src/HcalSourcePositionData.cc
  ${CMAKE_BINARY_DIR}/DataFormatsHcalRecHitsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsHcalRecHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsHcalRecHit PUBLIC /usr/include/root/)
target_include_directories(DataFormatsHcalRecHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsHcalRecHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsHcalRecHit PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsHcalRecHit PUBLIC /usr/include/boost/regex/)


add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/TBDataFormatsHcalTBObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/TBDataFormats/HcalTBObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/TBDataFormatsHcalTBObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/TBDataFormats/HcalTBObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/TBDataFormats/HcalTBObjects/src/classes.h /home/teemperor/cms/cmssw/TBDataFormats/HcalTBObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict TBDataFormatsHcalTBObjectssrcclassesh")

add_library(TBDataFormatsHcalTBObjects OBJECT 
  src/HcalTBEventPosition.cc
  src/HcalTBTriggerData.cc
  src/HcalTBTiming.cc
  src/HcalTBRunData.cc
  src/HcalTBParticleId.cc
  src/HcalTBBeamCounters.cc
  ${CMAKE_BINARY_DIR}/TBDataFormatsHcalTBObjectssrcclassesh_rflx.cpp
)

target_include_directories(TBDataFormatsHcalTBObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TBDataFormatsHcalTBObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TBDataFormatsHcalTBObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TBDataFormatsHcalTBObjects PUBLIC /usr/include/boost/)
target_include_directories(TBDataFormatsHcalTBObjects PUBLIC /usr/include/root/)
target_include_directories(TBDataFormatsHcalTBObjects PUBLIC /usr/include/boost/regex/)


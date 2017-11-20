add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/TBDataFormatsEcalTBObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/TBDataFormats/EcalTBObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/TBDataFormatsEcalTBObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/TBDataFormats/EcalTBObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/TBDataFormats/EcalTBObjects/src/classes.h /home/teemperor/cms/cmssw/TBDataFormats/EcalTBObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict TBDataFormatsEcalTBObjectssrcclassesh")

add_library(TBDataFormatsEcalTBObjects OBJECT 
  src/EcalTBEventHeader.cc
  src/EcalTBTDCRawInfo.cc
  src/EcalTBHodoscopeRecInfo.cc
  src/EcalTBTDCRecInfo.cc
  src/EcalTBHodoscopePlaneRawHits.cc
  src/EcalTBHodoscopeRawInfo.cc
  src/EcalTBTDCSample.cc
  ${CMAKE_BINARY_DIR}/TBDataFormatsEcalTBObjectssrcclassesh_rflx.cpp
)

target_include_directories(TBDataFormatsEcalTBObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TBDataFormatsEcalTBObjects PUBLIC /usr/include/root/)
target_include_directories(TBDataFormatsEcalTBObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TBDataFormatsEcalTBObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TBDataFormatsEcalTBObjects PUBLIC /usr/include/boost/)
target_include_directories(TBDataFormatsEcalTBObjects PUBLIC /usr/include/boost/regex/)


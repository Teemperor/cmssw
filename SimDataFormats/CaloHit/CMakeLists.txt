add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsCaloHitsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/CaloHit/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsCaloHitsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/CaloHit/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/CaloHit/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/CaloHit/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsCaloHitsrcclassesh")

add_library(SimDataFormatsCaloHit OBJECT 
  src/PCaloHit.cc
  src/HFShowerPhoton.cc
  src/CastorShowerLibraryInfo.cc
  src/CastorShowerEvent.cc
  src/HFShowerLibraryEventInfo.cc
  src/CaloHit.cc
  src/PassiveHit.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsCaloHitsrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsCaloHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsCaloHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsCaloHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsCaloHit PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsCaloHit PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsCaloHit PUBLIC /usr/include/boost/regex/)


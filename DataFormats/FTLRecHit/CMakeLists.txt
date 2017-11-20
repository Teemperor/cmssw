add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsFTLRecHitsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/FTLRecHit/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsFTLRecHitsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/FTLRecHit/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/FTLRecHit/src/classes.h /home/teemperor/cms/cmssw/DataFormats/FTLRecHit/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsFTLRecHitsrcclassesh")

add_library(DataFormatsFTLRecHit OBJECT 
  src/FTLUncalibratedRecHit.cc
  src/FTLRecHit.cc
  ${CMAKE_BINARY_DIR}/DataFormatsFTLRecHitsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsFTLRecHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsFTLRecHit PUBLIC /usr/include/root/)
target_include_directories(DataFormatsFTLRecHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsFTLRecHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsFTLRecHit PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsFTLRecHit PUBLIC /usr/include/boost/regex/)


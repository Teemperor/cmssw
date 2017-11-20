add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsCaloTestsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/CaloTest/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsCaloTestsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/CaloTest/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/CaloTest/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/CaloTest/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsCaloTestsrcclassesh")

add_library(SimDataFormatsCaloTest OBJECT 
  src/HcalTestHistoClass.cc
  src/HGCalTestNumbering.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsCaloTestsrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsCaloTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsCaloTest PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsCaloTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsCaloTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsCaloTest PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsCaloTest PUBLIC /usr/include/boost/regex/)


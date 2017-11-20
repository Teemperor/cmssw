add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsCLHEPsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/CLHEP/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsCLHEPsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/CLHEP/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/CLHEP/src/classes.h /home/teemperor/cms/cmssw/DataFormats/CLHEP/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsCLHEPsrcclassesh")

add_library(DataFormatsCLHEP OBJECT 
  ${CMAKE_BINARY_DIR}/DataFormatsCLHEPsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsCLHEP PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsCLHEP PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsCLHEP PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsCLHEP PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsCLHEP PUBLIC /usr/include/root/)
target_include_directories(DataFormatsCLHEP PUBLIC /usr/include/boost/regex/)


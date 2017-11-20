add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/FWCoreTFWLiteSelectorsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/FWCore/TFWLiteSelector/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/FWCoreTFWLiteSelectorsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/FWCore/TFWLiteSelector/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/FWCore/TFWLiteSelector/src/classes.h /home/teemperor/cms/cmssw/FWCore/TFWLiteSelector/src/classes_def.xml
  COMMENT "Generating ROOT dict FWCoreTFWLiteSelectorsrcclassesh")

add_library(FWCoreTFWLiteSelector OBJECT 
  src/TFWLiteSelectorBasic.cc
  ${CMAKE_BINARY_DIR}/FWCoreTFWLiteSelectorsrcclassesh_rflx.cpp
)

target_include_directories(FWCoreTFWLiteSelector PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreTFWLiteSelector PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreTFWLiteSelector PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreTFWLiteSelector PUBLIC /usr/include/root/)
target_include_directories(FWCoreTFWLiteSelector PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreTFWLiteSelector PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreTFWLiteSelector PUBLIC /usr/include/boost/)
target_include_directories(FWCoreTFWLiteSelector PUBLIC /usr/include/boost/regex/)


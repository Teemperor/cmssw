add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/FWCoreTFWLiteSelectorTestsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/FWCore/TFWLiteSelectorTest/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/FWCoreTFWLiteSelectorTestsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/FWCore/TFWLiteSelectorTest/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/FWCore/TFWLiteSelectorTest/src/classes.h /home/teemperor/cms/cmssw/FWCore/TFWLiteSelectorTest/src/classes_def.xml
  COMMENT "Generating ROOT dict FWCoreTFWLiteSelectorTestsrcclassesh")

add_library(FWCoreTFWLiteSelectorTest OBJECT 
  src/ThingsTSelector2.cc
  src/ThingsTSelector.cc
  ${CMAKE_BINARY_DIR}/FWCoreTFWLiteSelectorTestsrcclassesh_rflx.cpp
)

target_include_directories(FWCoreTFWLiteSelectorTest PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreTFWLiteSelectorTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreTFWLiteSelectorTest PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreTFWLiteSelectorTest PUBLIC /usr/include/root/)
target_include_directories(FWCoreTFWLiteSelectorTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreTFWLiteSelectorTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreTFWLiteSelectorTest PUBLIC /usr/include/boost/)
target_include_directories(FWCoreTFWLiteSelectorTest PUBLIC /usr/include/boost/regex/)


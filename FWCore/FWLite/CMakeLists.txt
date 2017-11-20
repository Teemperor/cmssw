add_subdirectory(bin)
add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/FWCoreFWLitesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/FWCore/FWLite/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/FWCoreFWLitesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/FWCore/FWLite/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/FWCore/FWLite/src/classes.h /home/teemperor/cms/cmssw/FWCore/FWLite/src/classes_def.xml
  COMMENT "Generating ROOT dict FWCoreFWLitesrcclassesh")

add_library(FWCoreFWLite OBJECT 
  src/RefStreamer.cc
  src/BranchMapReader.cc
  src/AutoLibraryLoader.cc
  src/FWLiteEnabler.cc
  src/branchToClass.cc
  src/BareRootProductGetter.cc
  ${CMAKE_BINARY_DIR}/FWCoreFWLitesrcclassesh_rflx.cpp
)

target_include_directories(FWCoreFWLite PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreFWLite PUBLIC /usr/include/root/)
target_include_directories(FWCoreFWLite PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreFWLite PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreFWLite PUBLIC /usr/include/boost/)
target_include_directories(FWCoreFWLite PUBLIC /usr/include/boost/regex/)


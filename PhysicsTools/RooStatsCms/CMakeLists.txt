add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/PhysicsToolsRooStatsCmssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/PhysicsTools/RooStatsCms/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/PhysicsToolsRooStatsCmssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/PhysicsTools/RooStatsCms/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/PhysicsTools/RooStatsCms/src/classes.h /home/teemperor/cms/cmssw/PhysicsTools/RooStatsCms/src/classes_def.xml
  COMMENT "Generating ROOT dict PhysicsToolsRooStatsCmssrcclassesh")

add_library(PhysicsToolsRooStatsCms OBJECT 
  src/ExclusionBandPlot.cc
  src/SterneBinomialInterval.cc
  src/LEPBandPlot.cc
  src/ClopperPearsonBinomialInterval.cc
  src/BinomialInterval.cc
  src/FeldmanCousinsBinomialInterval.cc
  src/StatisticalPlot.cc
  ${CMAKE_BINARY_DIR}/PhysicsToolsRooStatsCmssrcclassesh_rflx.cpp
)

target_include_directories(PhysicsToolsRooStatsCms PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsRooStatsCms PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsRooStatsCms PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsRooStatsCms PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsRooStatsCms PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsRooStatsCms PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsRooStatsCms PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsRooStatsCms PUBLIC /usr/include/boost/regex/)


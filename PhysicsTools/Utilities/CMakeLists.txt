add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/PhysicsToolsUtilitiessrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/PhysicsTools/Utilities/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/PhysicsToolsUtilitiessrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/PhysicsTools/Utilities/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/PhysicsTools/Utilities/src/classes.h /home/teemperor/cms/cmssw/PhysicsTools/Utilities/src/classes_def.xml
  COMMENT "Generating ROOT dict PhysicsToolsUtilitiessrcclassesh")

add_library(PhysicsToolsUtilities OBJECT 
  src/Lumi3DReWeighting.cc
  src/Variables.cc
  src/SideBandSubtraction.cc
  src/LumiReWeighting.cc
  src/NumericalIntegration.cc
  ${CMAKE_BINARY_DIR}/PhysicsToolsUtilitiessrcclassesh_rflx.cpp
)

target_include_directories(PhysicsToolsUtilities PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsUtilities PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsUtilities PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsUtilities PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsUtilities PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsUtilities PUBLIC /usr/include/boost/regex/)


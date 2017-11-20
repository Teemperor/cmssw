add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/PhysicsToolsIsolationUtilssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/PhysicsTools/IsolationUtils/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/PhysicsToolsIsolationUtilssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/PhysicsTools/IsolationUtils/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/PhysicsTools/IsolationUtils/src/classes.h /home/teemperor/cms/cmssw/PhysicsTools/IsolationUtils/src/classes_def.xml
  COMMENT "Generating ROOT dict PhysicsToolsIsolationUtilssrcclassesh")

add_library(PhysicsToolsIsolationUtils OBJECT 
  src/ConeAreaRootFunction.cc
  src/IntegrandThetaFunction.cc
  src/FixedAreaIsolationCone.cc
  src/IntegralOverPhiFunction.cc
  src/ConeAreaFunction.cc
  ${CMAKE_BINARY_DIR}/PhysicsToolsIsolationUtilssrcclassesh_rflx.cpp
)

target_include_directories(PhysicsToolsIsolationUtils PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsIsolationUtils PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsIsolationUtils PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsIsolationUtils PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsIsolationUtils PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsIsolationUtils PUBLIC /usr/include/boost/regex/)


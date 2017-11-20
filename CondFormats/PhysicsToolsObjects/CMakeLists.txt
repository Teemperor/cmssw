add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsPhysicsToolsObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/PhysicsToolsObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsPhysicsToolsObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/PhysicsToolsObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/PhysicsToolsObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/PhysicsToolsObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsPhysicsToolsObjectssrcclassesh")

add_library(CondFormatsPhysicsToolsObjects OBJECT 
  src/T_EventSetup_Histogram.cc
  src/BinningPointByMap.cc
  src/PerformancePayloadFromBinnedTFormula.cc
  src/PerformanceWorkingPoint.cc
  src/T_EventSetup_MVAComputer.cc
  src/PhysicsTGraphPayload.cc
  src/MVAComputer.cc
  src/T_EventSetup_PhysicsTGraphPayload.cc
  src/PerformancePayloadFromTable.cc
  src/T_EventSetup_PhysicsTFormulaPayload.cc
  src/PerformancePayload.cc
  src/PhysicsPerformancePayload.cc
  src/PerformancePayloadFromTFormula.cc
  ${CMAKE_BINARY_DIR}/CondFormatsPhysicsToolsObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsPhysicsToolsObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsPhysicsToolsObjects PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CondFormatsPhysicsToolsObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsPhysicsToolsObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsPhysicsToolsObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsPhysicsToolsObjects PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CondFormatsPhysicsToolsObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsPhysicsToolsObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsPhysicsToolsObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsPhysicsToolsObjects PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CondFormatsPhysicsToolsObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsPhysicsToolsObjects PUBLIC /usr/include/boost/regex/)


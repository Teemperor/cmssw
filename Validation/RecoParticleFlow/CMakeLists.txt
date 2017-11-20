add_subdirectory(bin)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/ValidationRecoParticleFlowsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/Validation/RecoParticleFlow/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/ValidationRecoParticleFlowsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/Validation/RecoParticleFlow/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/Validation/RecoParticleFlow/src/classes.h /home/teemperor/cms/cmssw/Validation/RecoParticleFlow/src/classes_def.xml
  COMMENT "Generating ROOT dict ValidationRecoParticleFlowsrcclassesh")

add_library(ValidationRecoParticleFlow OBJECT 
  src/Comparator.cc
  src/TH2Analyzer.cc
  src/NicePlot.cc
  ${CMAKE_BINARY_DIR}/ValidationRecoParticleFlowsrcclassesh_rflx.cpp
)

target_include_directories(ValidationRecoParticleFlow PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationRecoParticleFlow PUBLIC /usr/include/root/)


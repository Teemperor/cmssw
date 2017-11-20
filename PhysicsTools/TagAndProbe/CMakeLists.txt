add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/PhysicsToolsTagAndProbesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/PhysicsTools/TagAndProbe/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/PhysicsToolsTagAndProbesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/PhysicsTools/TagAndProbe/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/PhysicsTools/TagAndProbe/src/classes.h /home/teemperor/cms/cmssw/PhysicsTools/TagAndProbe/src/classes_def.xml
  COMMENT "Generating ROOT dict PhysicsToolsTagAndProbesrcclassesh")

add_library(PhysicsToolsTagAndProbe OBJECT 
  src/TPTreeFiller.cc
  src/TagProbePairMaker.cc
  src/RooCBExGaussShape.cc
  src/RooCMSShape.cc
  src/TagProbeFitter.cc
  src/ZGeneratorLineShape.cc
  src/BaseTreeFiller.cc
  ${CMAKE_BINARY_DIR}/PhysicsToolsTagAndProbesrcclassesh_rflx.cpp
)

target_include_directories(PhysicsToolsTagAndProbe PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PhysicsToolsTagAndProbe PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsTagAndProbe PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PhysicsToolsTagAndProbe PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsTagAndProbe PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsTagAndProbe PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PhysicsToolsTagAndProbe PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsTagAndProbe PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsTagAndProbe PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsTagAndProbe PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsTagAndProbe PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsTagAndProbe PUBLIC /usr/include/boost/regex/)


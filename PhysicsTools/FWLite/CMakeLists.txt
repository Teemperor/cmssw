add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/PhysicsToolsFWLitesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/PhysicsTools/FWLite/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/PhysicsToolsFWLitesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/PhysicsTools/FWLite/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/PhysicsTools/FWLite/src/classes.h /home/teemperor/cms/cmssw/PhysicsTools/FWLite/src/classes_def.xml
  COMMENT "Generating ROOT dict PhysicsToolsFWLitesrcclassesh")

add_library(PhysicsToolsFWLite OBJECT 
  src/TH1Store.cc
  src/VariableMapCont.cc
  src/EventContainer.cc
  src/ScannerHelpers.cc
  src/TFileService.cc
  src/CommandLineParser.cc
  ${CMAKE_BINARY_DIR}/PhysicsToolsFWLitesrcclassesh_rflx.cpp
)

target_include_directories(PhysicsToolsFWLite PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsFWLite PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PhysicsToolsFWLite PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsFWLite PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsFWLite PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsFWLite PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PhysicsToolsFWLite PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsFWLite PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsFWLite PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsFWLite PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PhysicsToolsFWLite PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsFWLite PUBLIC /usr/include/boost/regex/)


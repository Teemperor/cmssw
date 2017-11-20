add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/PhysicsToolsSelectorUtilssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/PhysicsTools/SelectorUtils/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/PhysicsToolsSelectorUtilssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/PhysicsTools/SelectorUtils/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/PhysicsTools/SelectorUtils/src/classes.h /home/teemperor/cms/cmssw/PhysicsTools/SelectorUtils/src/classes_def.xml
  COMMENT "Generating ROOT dict PhysicsToolsSelectorUtilssrcclassesh")

add_library(PhysicsToolsSelectorUtils OBJECT 
  src/SimpleCutBasedElectronIDSelectionFunctor.cc
  src/WPlusJetsEventSelector.cc
  src/PFElectronSelector.cc
  src/strbitset.cc
  src/CutApplicatorBase.cc
  src/EventSelector.cc
  src/PFMuonSelector.cc
  ${CMAKE_BINARY_DIR}/PhysicsToolsSelectorUtilssrcclassesh_rflx.cpp
)

target_include_directories(PhysicsToolsSelectorUtils PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsSelectorUtils PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PhysicsToolsSelectorUtils PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsSelectorUtils PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsSelectorUtils PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsSelectorUtils PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PhysicsToolsSelectorUtils PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsSelectorUtils PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsSelectorUtils PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsSelectorUtils PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PhysicsToolsSelectorUtils PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsSelectorUtils PUBLIC /usr/include/boost/regex/)


add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/PhysicsToolsPatUtilssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/PhysicsTools/PatUtils/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/PhysicsToolsPatUtilssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/PhysicsTools/PatUtils/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/PhysicsTools/PatUtils/src/classes.h /home/teemperor/cms/cmssw/PhysicsTools/PatUtils/src/classes_def.xml
  COMMENT "Generating ROOT dict PhysicsToolsPatUtilssrcclassesh")

add_library(PhysicsToolsPatUtils OBJECT 
  src/bJetSelector.cc
  src/CaloJetSelector.cc
  src/LeptonJetIsolationAngle.cc
  src/RazorComputer.cc
  src/DuplicatedPhotonRemover.cc
  src/DuplicatedElectronRemover.cc
  src/VertexAssociationSelector.cc
  src/CaloIsolationEnergy.cc
  src/LeptonVertexSignificance.cc
  src/ElectronSelector.cc
  src/StringParserTools.cc
  src/ObjectResolutionCalc.cc
  src/EventHypothesisTools.cc
  src/PATDiObjectProxy.cc
  src/TrackerIsolationPt.cc
  src/SimpleJetTrackAssociator.cc
  src/MuonSelector.cc
  src/TriggerHelper.cc
  ${CMAKE_BINARY_DIR}/PhysicsToolsPatUtilssrcclassesh_rflx.cpp
)

target_include_directories(PhysicsToolsPatUtils PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PhysicsToolsPatUtils PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsPatUtils PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PhysicsToolsPatUtils PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsPatUtils PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsPatUtils PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PhysicsToolsPatUtils PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsPatUtils PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsPatUtils PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsPatUtils PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsPatUtils PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsPatUtils PUBLIC /usr/include/boost/regex/)


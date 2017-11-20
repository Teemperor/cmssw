add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/PhysicsToolsHeppysrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/PhysicsTools/Heppy/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/PhysicsToolsHeppysrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/PhysicsTools/Heppy/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/PhysicsTools/Heppy/src/classes.h /home/teemperor/cms/cmssw/PhysicsTools/Heppy/src/classes_def.xml
  COMMENT "Generating ROOT dict PhysicsToolsHeppysrcclassesh")

add_library(PhysicsToolsHeppy OBJECT 
  src/FSRWeightAlgo.cc
  src/Hemisphere.cc
  src/PdfWeightProducerTool.cc
  src/JetUtils.cc
  src/mt2w_bisect.cc
  src/Davismt2.cc
  src/RochCor.cc
  src/TriggerBitChecker.cc
  src/AlphaT.cc
  src/CMGMuonCleanerBySegmentsAlgo.cc
  src/RochCor2012.cc
  src/Megajet.cc
  src/Apc.cc
  src/EGammaMvaEleEstimatorFWLite.cc
  src/BTagSF.cc
  src/ReclusterJets.cc
  src/IsolationComputer.cc
  ${CMAKE_BINARY_DIR}/PhysicsToolsHeppysrcclassesh_rflx.cpp
)

target_include_directories(PhysicsToolsHeppy PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PhysicsToolsHeppy PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsHeppy PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PhysicsToolsHeppy PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsHeppy PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsHeppy PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PhysicsToolsHeppy PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(PhysicsToolsHeppy PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsHeppy PUBLIC /usr/include/eigen3/)
target_include_directories(PhysicsToolsHeppy PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsHeppy PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsHeppy PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(PhysicsToolsHeppy PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsHeppy PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(PhysicsToolsHeppy PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsHeppy PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(PhysicsToolsHeppy PUBLIC /usr/include/boost/regex/)


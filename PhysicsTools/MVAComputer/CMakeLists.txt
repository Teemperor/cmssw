add_subdirectory(bin)
add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/PhysicsToolsMVAComputersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/PhysicsTools/MVAComputer/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/PhysicsToolsMVAComputersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/PhysicsTools/MVAComputer/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/PhysicsTools/MVAComputer/src/classes.h /home/teemperor/cms/cmssw/PhysicsTools/MVAComputer/src/classes_def.xml
  COMMENT "Generating ROOT dict PhysicsToolsMVAComputersrcclassesh")

add_library(PhysicsToolsMVAComputer OBJECT 
  src/VarProcessor.cc
  src/TreeReader.cc
  src/ProcOptional.cc
  src/ProcMLP.cc
  src/Spline.cc
  src/ProcLinear.cc
  src/MVAComputerCache.cc
  src/ProcLikelihood.cc
  src/BitSet.cc
  src/MVAComputer.cc
  src/ProcSplitter.cc
  src/MVAComputerRecord.cc
  src/AtomicId.cc
  src/ProcForeach.cc
  src/MVAComputerESSourceBase.cc
  src/ProcCategory.cc
  src/ProcNormalize.cc
  src/ProcMultiply.cc
  src/ProcSort.cc
  src/ProcMatrix.cc
  src/ProcCount.cc
  src/ProcClassed.cc
  ${CMAKE_BINARY_DIR}/PhysicsToolsMVAComputersrcclassesh_rflx.cpp
)

target_include_directories(PhysicsToolsMVAComputer PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsMVAComputer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PhysicsToolsMVAComputer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsMVAComputer PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsMVAComputer PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsMVAComputer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PhysicsToolsMVAComputer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsMVAComputer PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsMVAComputer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsMVAComputer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PhysicsToolsMVAComputer PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsMVAComputer PUBLIC /usr/include/boost/regex/)


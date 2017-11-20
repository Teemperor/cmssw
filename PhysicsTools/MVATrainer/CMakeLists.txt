add_subdirectory(bin)
add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/PhysicsToolsMVATrainersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/PhysicsTools/MVATrainer/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/PhysicsToolsMVATrainersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/PhysicsTools/MVATrainer/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/PhysicsTools/MVATrainer/src/classes.h /home/teemperor/cms/cmssw/PhysicsTools/MVATrainer/src/classes_def.xml
  COMMENT "Generating ROOT dict PhysicsToolsMVATrainersrcclassesh")

add_library(PhysicsToolsMVATrainer OBJECT 
  src/TrainProcessor.cc
  src/ProcOptional.cc
  src/LeastSquares.cc
  src/XMLDocument.cc
  src/ProcLinear.cc
  src/SourceVariableSet.cc
  src/MVATrainerContainerSave.cc
  src/ProcLikelihood.cc
  src/TreeTrainer.cc
  src/ProcSplitter.cc
  src/ProcForeach.cc
  src/MVATrainerFileSave.cc
  src/MVATrainerLooper.cc
  src/ProcCategory.cc
  src/TrainerMonitoring.cc
  src/ProcNormalize.cc
  src/ProcMultiply.cc
  src/MVATrainerSave.cc
  src/ProcSort.cc
  src/ProcMatrix.cc
  src/MVATrainer.cc
  src/ProcCount.cc
  src/ProcClassed.cc
  src/TreeSaver.cc
  src/Interceptor.cc
  ${CMAKE_BINARY_DIR}/PhysicsToolsMVATrainersrcclassesh_rflx.cpp
)

target_include_directories(PhysicsToolsMVATrainer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PhysicsToolsMVATrainer PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsMVATrainer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PhysicsToolsMVATrainer PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsMVATrainer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsMVATrainer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PhysicsToolsMVATrainer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(PhysicsToolsMVATrainer PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsMVATrainer PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsMVATrainer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsMVATrainer PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsMVATrainer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(PhysicsToolsMVATrainer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsMVATrainer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(PhysicsToolsMVATrainer PUBLIC /usr/include/boost/regex/)


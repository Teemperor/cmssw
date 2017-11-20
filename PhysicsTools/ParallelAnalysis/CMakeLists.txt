add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/PhysicsToolsParallelAnalysissrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/PhysicsTools/ParallelAnalysis/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/PhysicsToolsParallelAnalysissrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/PhysicsTools/ParallelAnalysis/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/PhysicsTools/ParallelAnalysis/src/classes.h /home/teemperor/cms/cmssw/PhysicsTools/ParallelAnalysis/src/classes_def.xml
  COMMENT "Generating ROOT dict PhysicsToolsParallelAnalysissrcclassesh")

add_library(PhysicsToolsParallelAnalysis OBJECT 
  src/TrackTSelector.cc
  src/TrackAnalysisAlgorithm.cc
  ${CMAKE_BINARY_DIR}/PhysicsToolsParallelAnalysissrcclassesh_rflx.cpp
)

target_include_directories(PhysicsToolsParallelAnalysis PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsParallelAnalysis PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsParallelAnalysis PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsParallelAnalysis PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsParallelAnalysis PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsParallelAnalysis PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsParallelAnalysis PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsParallelAnalysis PUBLIC /usr/include/boost/regex/)


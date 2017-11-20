add_subdirectory(test)
add_subdirectory(plugins)
add_library(PhysicsToolsPatExamples OBJECT 
  src/PatMuonAnalyzer.cc
  src/AnalysisTasksAnalyzerBTag.cc
  src/AnalysisTasksAnalyzerJEC.cc
  src/PatBTagCommonHistos.cc
)

target_include_directories(PhysicsToolsPatExamples PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PhysicsToolsPatExamples PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsPatExamples PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PhysicsToolsPatExamples PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsPatExamples PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsPatExamples PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PhysicsToolsPatExamples PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsPatExamples PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsPatExamples PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsPatExamples PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsPatExamples PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsPatExamples PUBLIC /usr/include/boost/regex/)


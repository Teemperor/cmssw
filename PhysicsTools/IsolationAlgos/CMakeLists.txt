add_subdirectory(test)
add_subdirectory(plugins)
add_library(PhysicsToolsIsolationAlgos OBJECT 
  src/IsoDepositVetoFactory.cc
  src/EventDependentAbsVetos.cc
  src/PropagateToCal.cc
  src/IsoDepositExtractorFactory.cc
  src/CITKIsolationConeDefinitionBase.cc
)

target_include_directories(PhysicsToolsIsolationAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsIsolationAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsIsolationAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsIsolationAlgos PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsIsolationAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsIsolationAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsIsolationAlgos PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsIsolationAlgos PUBLIC /usr/include/boost/regex/)


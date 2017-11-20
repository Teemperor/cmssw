add_subdirectory(test)
add_subdirectory(plugins)
add_library(PhysicsToolsJetCharge OBJECT 
  src/JetCharge.cc
)

target_include_directories(PhysicsToolsJetCharge PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsJetCharge PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsJetCharge PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsJetCharge PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsJetCharge PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsJetCharge PUBLIC /usr/include/boost/regex/)


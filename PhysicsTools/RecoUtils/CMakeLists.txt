add_subdirectory(plugins)
add_library(PhysicsToolsRecoUtils OBJECT 
  src/CandKinematicVertexFitter.cc
  src/CandMassKinFitter.cc
  src/CandCommonVertexFitter.cc
  src/CheckHitPattern.cc
)

target_include_directories(PhysicsToolsRecoUtils PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsRecoUtils PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsRecoUtils PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsRecoUtils PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsRecoUtils PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsRecoUtils PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsRecoUtils PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsRecoUtils PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsRecoUtils PUBLIC /usr/include/boost/regex/)


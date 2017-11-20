add_library(SimG4CoreCustomPhysicsPlugins OBJECT 
  RHStopTracer.cc
  RHStopDump.cc
  module.cc
)

target_include_directories(SimG4CoreCustomPhysicsPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(SimG4CoreCustomPhysicsPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CoreCustomPhysicsPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(SimG4CoreCustomPhysicsPlugins PUBLIC /usr/include/root/)
target_include_directories(SimG4CoreCustomPhysicsPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CoreCustomPhysicsPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CoreCustomPhysicsPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CoreCustomPhysicsPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CoreCustomPhysicsPlugins PUBLIC /usr/include/boost/)
target_include_directories(SimG4CoreCustomPhysicsPlugins PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CoreCustomPhysicsPlugins PUBLIC /usr/include/boost/regex/)


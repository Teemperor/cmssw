add_library(PhysicsToolsMVAComputerPlugins OBJECT 
  module.cc
)

target_include_directories(PhysicsToolsMVAComputerPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsMVAComputerPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PhysicsToolsMVAComputerPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsMVAComputerPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsMVAComputerPlugins PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsMVAComputerPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PhysicsToolsMVAComputerPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsMVAComputerPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsMVAComputerPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsMVAComputerPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PhysicsToolsMVAComputerPlugins PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsMVAComputerPlugins PUBLIC /usr/include/boost/regex/)

add_library(PhysicsToolsMVAComputerProcTMVA OBJECT 
  ProcTMVA.cc
)

target_include_directories(PhysicsToolsMVAComputerProcTMVA PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsMVAComputerProcTMVA PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PhysicsToolsMVAComputerProcTMVA PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsMVAComputerProcTMVA PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsMVAComputerProcTMVA PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsMVAComputerProcTMVA PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PhysicsToolsMVAComputerProcTMVA PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsMVAComputerProcTMVA PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsMVAComputerProcTMVA PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsMVAComputerProcTMVA PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PhysicsToolsMVAComputerProcTMVA PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsMVAComputerProcTMVA PUBLIC /usr/include/boost/regex/)


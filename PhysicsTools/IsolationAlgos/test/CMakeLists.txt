add_library(PhysicsToolsIsolationAlgos_tests OBJECT 
  CandIsoComparer.cc
  CandIsoDumper.cc
)

target_include_directories(PhysicsToolsIsolationAlgos_tests PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsIsolationAlgos_tests PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PhysicsToolsIsolationAlgos_tests PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsIsolationAlgos_tests PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsIsolationAlgos_tests PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsIsolationAlgos_tests PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PhysicsToolsIsolationAlgos_tests PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsIsolationAlgos_tests PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsIsolationAlgos_tests PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsIsolationAlgos_tests PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PhysicsToolsIsolationAlgos_tests PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsIsolationAlgos_tests PUBLIC /usr/include/boost/regex/)


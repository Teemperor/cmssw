add_library(PhysicsToolsPatExamples_testplugin OBJECT 
  MuonVIDCITKAnalyzer.cc
)

target_include_directories(PhysicsToolsPatExamples_testplugin PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PhysicsToolsPatExamples_testplugin PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsPatExamples_testplugin PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PhysicsToolsPatExamples_testplugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsPatExamples_testplugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsPatExamples_testplugin PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PhysicsToolsPatExamples_testplugin PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsPatExamples_testplugin PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsPatExamples_testplugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsPatExamples_testplugin PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsPatExamples_testplugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsPatExamples_testplugin PUBLIC /usr/include/boost/regex/)


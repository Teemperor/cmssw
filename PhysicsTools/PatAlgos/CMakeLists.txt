add_subdirectory(test)
add_subdirectory(plugins)
add_library(PhysicsToolsPatAlgos OBJECT 
  src/VertexingHelper.cc
  src/IsoDepositIsolator.cc
  src/PATPrimaryVertexSelector.cc
  src/KinResolutionsLoader.cc
  src/PATUserDataMerger.cc
  src/StringResolutionProvider.cc
  src/BaseIsolator.cc
  src/OverlapTest.cc
  src/MultiIsolator.cc
  src/HemisphereAlgo.cc
  src/EfficiencyLoader.cc
  src/KinematicResolutionRcd.cc
  src/SimpleIsolator.cc
)

target_include_directories(PhysicsToolsPatAlgos PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PhysicsToolsPatAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsPatAlgos PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PhysicsToolsPatAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsPatAlgos PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsPatAlgos PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PhysicsToolsPatAlgos PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(PhysicsToolsPatAlgos PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsPatAlgos PUBLIC /usr/include/eigen3/)
target_include_directories(PhysicsToolsPatAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsPatAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsPatAlgos PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsPatAlgos PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(PhysicsToolsPatAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsPatAlgos PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(PhysicsToolsPatAlgos PUBLIC /usr/include/boost/regex/)


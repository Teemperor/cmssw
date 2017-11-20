add_subdirectory(plugins)
add_library(CommonToolsCandAlgos OBJECT 
  src/decayParser.cc
  src/GenJetParticleSelector.cc
  src/ModifyObjectValueBase.cc
)

target_include_directories(CommonToolsCandAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(CommonToolsCandAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CommonToolsCandAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(CommonToolsCandAlgos PUBLIC /usr/include/root/)
target_include_directories(CommonToolsCandAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CommonToolsCandAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CommonToolsCandAlgos PUBLIC /usr/include/boost/serialization/)
target_include_directories(CommonToolsCandAlgos PUBLIC /usr/include/boost/)
target_include_directories(CommonToolsCandAlgos PUBLIC /usr/include/boost/regex/)


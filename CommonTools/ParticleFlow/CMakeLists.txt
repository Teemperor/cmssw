add_subdirectory(test)
add_subdirectory(plugins)
add_library(CommonToolsParticleFlow OBJECT 
  src/EventHypothesis.cc
  src/PFPileUpAlgo.cc
  src/PFMETAlgo.cc
  src/PFIsoDepositAlgo.cc
)

target_include_directories(CommonToolsParticleFlow PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CommonToolsParticleFlow PUBLIC /usr/include/root/)
target_include_directories(CommonToolsParticleFlow PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CommonToolsParticleFlow PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CommonToolsParticleFlow PUBLIC /usr/include/boost/serialization/)
target_include_directories(CommonToolsParticleFlow PUBLIC /usr/include/boost/)
target_include_directories(CommonToolsParticleFlow PUBLIC /usr/include/boost/regex/)


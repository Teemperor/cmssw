add_subdirectory(plugins)
add_library(FireworksParticleFlow OBJECT 
  src/FWPFClusterRPZUtils.cc
  src/setTrackTypePF.cc
  src/FWPFRhoPhiRecHit.cc
  src/FWPFMaths.cc
  src/FWPFTrackUtils.cc
  src/FWLegoEvePFCandidate.cc
  src/FWPFLegoRecHit.cc
)

target_include_directories(FireworksParticleFlow PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksParticleFlow PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksParticleFlow PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksParticleFlow PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksParticleFlow PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksParticleFlow PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksParticleFlow PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksParticleFlow PUBLIC /usr/include/boost/)
target_include_directories(FireworksParticleFlow PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksParticleFlow PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksParticleFlow PUBLIC /usr/include/root/)
target_include_directories(FireworksParticleFlow PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksParticleFlow PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksParticleFlow PUBLIC /usr/include/boost/regex/)


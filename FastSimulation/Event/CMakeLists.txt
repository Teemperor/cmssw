add_library(FastSimulationEvent OBJECT 
  src/KineParticleFilter.cc
  src/FSimVertex.cc
  src/FSimEvent.cc
  src/FBaseSimEvent.cc
  src/FSimTrack.cc
)

target_include_directories(FastSimulationEvent PUBLIC /usr/include/boost/python/)
target_include_directories(FastSimulationEvent PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimulationEvent PUBLIC /usr/include/python2.7/)
target_include_directories(FastSimulationEvent PUBLIC /usr/include/root/)
target_include_directories(FastSimulationEvent PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimulationEvent PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimulationEvent PUBLIC /usr/include/boost/)
target_include_directories(FastSimulationEvent PUBLIC /usr/include/boost/regex/)


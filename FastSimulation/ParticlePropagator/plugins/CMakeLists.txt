add_library(FastSimulationParticlePropagatorPlugin OBJECT 
  MagneticFieldMapESProducer.cc
)

target_include_directories(FastSimulationParticlePropagatorPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(FastSimulationParticlePropagatorPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimulationParticlePropagatorPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(FastSimulationParticlePropagatorPlugin PUBLIC /usr/include/root/)
target_include_directories(FastSimulationParticlePropagatorPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimulationParticlePropagatorPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimulationParticlePropagatorPlugin PUBLIC /usr/include/boost/)
target_include_directories(FastSimulationParticlePropagatorPlugin PUBLIC /usr/include/boost/regex/)


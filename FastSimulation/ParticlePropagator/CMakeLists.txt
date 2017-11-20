add_subdirectory(plugins)
add_library(FastSimulationParticlePropagator OBJECT 
  src/ES_MagneticFieldMap.cc
  src/MagneticFieldMapRecord.cc
  src/ParticlePropagator.cc
  src/MagneticFieldMap.cc
)

target_include_directories(FastSimulationParticlePropagator PUBLIC /usr/include/boost/python/)
target_include_directories(FastSimulationParticlePropagator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimulationParticlePropagator PUBLIC /usr/include/python2.7/)
target_include_directories(FastSimulationParticlePropagator PUBLIC /usr/include/root/)
target_include_directories(FastSimulationParticlePropagator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimulationParticlePropagator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimulationParticlePropagator PUBLIC /usr/include/boost/)
target_include_directories(FastSimulationParticlePropagator PUBLIC /usr/include/boost/regex/)


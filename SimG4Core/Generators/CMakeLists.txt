add_library(SimG4CoreGenerators OBJECT 
  src/HepMCParticle.cc
  src/LumiMonitorFilter.cc
  src/Generator.cc
)

target_include_directories(SimG4CoreGenerators PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CoreGenerators PUBLIC /usr/include/root/)
target_include_directories(SimG4CoreGenerators PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CoreGenerators PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CoreGenerators PUBLIC /usr/include/boost/)
target_include_directories(SimG4CoreGenerators PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CoreGenerators PUBLIC /usr/include/boost/regex/)


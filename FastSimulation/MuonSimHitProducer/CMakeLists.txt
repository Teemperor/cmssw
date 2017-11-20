add_library(FastSimulationMuonSimHitProducer OBJECT 
  src/MuonSimHitProducer.cc
)

target_include_directories(FastSimulationMuonSimHitProducer PUBLIC /usr/include/boost/python/)
target_include_directories(FastSimulationMuonSimHitProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimulationMuonSimHitProducer PUBLIC /usr/include/python2.7/)
target_include_directories(FastSimulationMuonSimHitProducer PUBLIC /usr/include/root/)
target_include_directories(FastSimulationMuonSimHitProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimulationMuonSimHitProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimulationMuonSimHitProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(FastSimulationMuonSimHitProducer PUBLIC /usr/include/boost/)
target_include_directories(FastSimulationMuonSimHitProducer PUBLIC /usr/include/Geant4/)
target_include_directories(FastSimulationMuonSimHitProducer PUBLIC /usr/include/boost/regex/)


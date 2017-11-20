add_library(GeneratorInterfaceCosmicMuonGenerator OBJECT 
  src/SealModule.cc
  src/CosMuoGenProducer.cc
  src/SingleParticleEvent.cc
  src/CMSCGEN.cc
  src/Point5MaterialMap.cc
  src/CMSCGENnorm.cc
  src/CosmicMuonGenerator.cc
)

target_include_directories(GeneratorInterfaceCosmicMuonGenerator PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfaceCosmicMuonGenerator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfaceCosmicMuonGenerator PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfaceCosmicMuonGenerator PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfaceCosmicMuonGenerator PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfaceCosmicMuonGenerator PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfaceCosmicMuonGenerator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfaceCosmicMuonGenerator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfaceCosmicMuonGenerator PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfaceCosmicMuonGenerator PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfaceCosmicMuonGenerator PUBLIC /usr/include/boost/regex/)


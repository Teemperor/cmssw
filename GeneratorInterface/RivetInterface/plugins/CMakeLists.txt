add_library(GeneratorInterfaceRivetInterface_plugins OBJECT 
  RivetHarvesting.cc
  GenParticles2HepMCConverter.cc
  RivetAnalyzer.cc
  MergedGenParticleProducer.cc
  ParticleLevelProducer.cc
  DQMRivetClient.cc
)

target_include_directories(GeneratorInterfaceRivetInterface_plugins PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfaceRivetInterface_plugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfaceRivetInterface_plugins PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(GeneratorInterfaceRivetInterface_plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfaceRivetInterface_plugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfaceRivetInterface_plugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(GeneratorInterfaceRivetInterface_plugins PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfaceRivetInterface_plugins PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfaceRivetInterface_plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfaceRivetInterface_plugins PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfaceRivetInterface_plugins PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfaceRivetInterface_plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfaceRivetInterface_plugins PUBLIC /usr/include/boost/regex/)


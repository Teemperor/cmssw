add_subdirectory(plugins)
add_library(GeneratorInterfaceCore OBJECT 
  src/EmbeddingHepMCFilter.cc
  src/BaseHadronizer.cc
  src/HepMCFilterDriver.cc
  src/PartonShowerBsHepMCFilter.cc
  src/GenericDauHepMCFilter.cc
  src/BaseHepMCFilter.cc
  src/FortranInstance.cc
  src/ParameterCollector.cc
)

target_include_directories(GeneratorInterfaceCore PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfaceCore PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfaceCore PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfaceCore PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfaceCore PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfaceCore PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfaceCore PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfaceCore PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfaceCore PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfaceCore PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfaceCore PUBLIC /usr/include/boost/regex/)


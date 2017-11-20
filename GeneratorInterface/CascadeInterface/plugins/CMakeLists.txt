add_library(GeneratorInterfaceCascadeInterface OBJECT 
  Cascade2GeneratorFilter.cc
  Cascade2Hadronizer.cc
)

target_include_directories(GeneratorInterfaceCascadeInterface PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfaceCascadeInterface PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfaceCascadeInterface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfaceCascadeInterface PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfaceCascadeInterface PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfaceCascadeInterface PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfaceCascadeInterface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfaceCascadeInterface PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfaceCascadeInterface PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfaceCascadeInterface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfaceCascadeInterface PUBLIC /usr/include/boost/regex/)
target_include_directories(GeneratorInterfaceCascadeInterface PUBLIC /usr/include/Pythia8/)


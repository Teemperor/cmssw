add_subdirectory(test)
add_subdirectory(plugins)
add_library(GeneratorInterfaceAMPTInterface OBJECT 
  src/AMPTGeneratorFilter.cc
  src/AMPTHadronizer.cc
)

target_include_directories(GeneratorInterfaceAMPTInterface PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfaceAMPTInterface PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfaceAMPTInterface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfaceAMPTInterface PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfaceAMPTInterface PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfaceAMPTInterface PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfaceAMPTInterface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfaceAMPTInterface PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfaceAMPTInterface PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfaceAMPTInterface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfaceAMPTInterface PUBLIC /usr/include/boost/regex/)


add_library(GeneratorInterfaceCore_plugins OBJECT 
  module.cc
  GenXSecAnalyzer.cc
  GenFilterEfficiencyAnalyzer.cc
  GenFilterEfficiencyProducer.cc
  GeneratorSmearedProducer.cc
)

target_include_directories(GeneratorInterfaceCore_plugins PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfaceCore_plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfaceCore_plugins PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfaceCore_plugins PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfaceCore_plugins PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfaceCore_plugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfaceCore_plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfaceCore_plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfaceCore_plugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfaceCore_plugins PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfaceCore_plugins PUBLIC /usr/include/boost/regex/)


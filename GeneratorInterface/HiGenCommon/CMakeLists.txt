add_subdirectory(plugins)
add_library(GeneratorInterfaceHiGenCommon OBJECT 
  src/HiGenEvtSelectorFactory.cc
  src/PartonHadronDecayGenEvtSelector.cc
  src/HadronDecayGenEvtSelector.cc
  src/MultiCandGenEvtSelector.cc
  src/EcalGenEvtSelector.cc
  src/EcalGenEvtSelectorFrag.cc
)

target_include_directories(GeneratorInterfaceHiGenCommon PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfaceHiGenCommon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfaceHiGenCommon PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfaceHiGenCommon PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfaceHiGenCommon PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfaceHiGenCommon PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfaceHiGenCommon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfaceHiGenCommon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfaceHiGenCommon PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfaceHiGenCommon PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfaceHiGenCommon PUBLIC /usr/include/boost/regex/)


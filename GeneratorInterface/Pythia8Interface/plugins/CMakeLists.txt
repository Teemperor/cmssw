add_library(GeneratorInterfacePythia8Filters OBJECT 
  Pythia8Hadronizer.cc
  Py8toJetInput.cc
  JetMatchingHook.cc
  PowhegResHook.cc
  EmissionVetoHook1.cc
  LHAupLesHouches.cc
)

target_include_directories(GeneratorInterfacePythia8Filters PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfacePythia8Filters PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfacePythia8Filters PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfacePythia8Filters PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfacePythia8Filters PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfacePythia8Filters PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfacePythia8Filters PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfacePythia8Filters PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfacePythia8Filters PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfacePythia8Filters PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfacePythia8Filters PUBLIC /usr/include/boost/regex/)
target_include_directories(GeneratorInterfacePythia8Filters PUBLIC /usr/include/Pythia8/)

add_library(GeneratorInterfacePythia8Guns OBJECT 
  Py8EGun.cc
  Py8JetGun.cc
  Py8PtGun.cc
)

target_include_directories(GeneratorInterfacePythia8Guns PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfacePythia8Guns PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfacePythia8Guns PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfacePythia8Guns PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfacePythia8Guns PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfacePythia8Guns PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfacePythia8Guns PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfacePythia8Guns PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfacePythia8Guns PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfacePythia8Guns PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfacePythia8Guns PUBLIC /usr/include/boost/regex/)
target_include_directories(GeneratorInterfacePythia8Guns PUBLIC /usr/include/Pythia8/)


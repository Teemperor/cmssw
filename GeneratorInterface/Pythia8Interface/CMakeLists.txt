add_subdirectory(test)
add_subdirectory(plugins)
add_library(GeneratorInterfacePythia8Interface OBJECT 
  src/PTFilterHook.cc
  src/Py8GunBase.cc
  src/ResonanceDecayFilterHook.cc
  src/MultiUserHook.cc
  src/P8RndmEngine.cc
  src/Py8InterfaceBase.cc
)

target_include_directories(GeneratorInterfacePythia8Interface PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfacePythia8Interface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfacePythia8Interface PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfacePythia8Interface PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfacePythia8Interface PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfacePythia8Interface PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfacePythia8Interface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfacePythia8Interface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfacePythia8Interface PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfacePythia8Interface PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfacePythia8Interface PUBLIC /usr/include/boost/regex/)
target_include_directories(GeneratorInterfacePythia8Interface PUBLIC /usr/include/Pythia8/)


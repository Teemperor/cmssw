add_subdirectory(test)
add_subdirectory(plugins)
add_library(GeneratorInterfaceLHEInterface OBJECT 
  src/LHEReader.cc
  src/XMLUtils.cc
  src/LHERunInfo.cc
  src/LHEEvent.cc
  src/LHEProxy.cc
)

target_include_directories(GeneratorInterfaceLHEInterface PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfaceLHEInterface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfaceLHEInterface PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfaceLHEInterface PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfaceLHEInterface PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfaceLHEInterface PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfaceLHEInterface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfaceLHEInterface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfaceLHEInterface PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfaceLHEInterface PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfaceLHEInterface PUBLIC /usr/include/boost/regex/)


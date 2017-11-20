add_subdirectory(test)
add_subdirectory(plugins)
add_library(GeneratorInterfaceExhumeInterface OBJECT 
  src/ExhumeHadronizer.cc
  src/Higgs.cpp
  src/Dummy.cpp
  src/Weight.cpp
  src/Event.cpp
  src/GG.cpp
  src/Integral.cpp
  src/QQ.cpp
  src/DiPhoton.cpp
  src/TwoSpace.cpp
  src/CrossSection.cpp
)

target_include_directories(GeneratorInterfaceExhumeInterface PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfaceExhumeInterface PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfaceExhumeInterface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfaceExhumeInterface PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfaceExhumeInterface PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfaceExhumeInterface PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfaceExhumeInterface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfaceExhumeInterface PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfaceExhumeInterface PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfaceExhumeInterface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfaceExhumeInterface PUBLIC /usr/include/boost/regex/)


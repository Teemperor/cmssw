add_subdirectory(plugins)
add_library(GeneratorInterfaceRivetInterface OBJECT 
  src/CMS_2013_I1224539_DIJET.cc
)

target_include_directories(GeneratorInterfaceRivetInterface PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfaceRivetInterface PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfaceRivetInterface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfaceRivetInterface PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfaceRivetInterface PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfaceRivetInterface PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfaceRivetInterface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfaceRivetInterface PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfaceRivetInterface PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfaceRivetInterface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfaceRivetInterface PUBLIC /usr/include/boost/regex/)


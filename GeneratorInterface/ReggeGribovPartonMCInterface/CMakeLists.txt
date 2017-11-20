add_subdirectory(plugins)
add_library(GeneratorInterfaceReggeGribovPartonMCInterface OBJECT 
  src/read.cc
  src/LzmaFile.cc
  src/7zFile.cc
  src/Alloc.cc
  src/7zStream.cc
  src/ReggeGribovPartonMCHadronizer.cc
  src/fileinpathwrapper.cc
  src/IO_EPOS.cc
  src/ReggeGribovPartonMCGeneratorFilter.cc
  src/LzmaDec.cc
  src/LzmaFile.interface.cc
)

target_include_directories(GeneratorInterfaceReggeGribovPartonMCInterface PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfaceReggeGribovPartonMCInterface PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfaceReggeGribovPartonMCInterface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfaceReggeGribovPartonMCInterface PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfaceReggeGribovPartonMCInterface PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfaceReggeGribovPartonMCInterface PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfaceReggeGribovPartonMCInterface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfaceReggeGribovPartonMCInterface PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfaceReggeGribovPartonMCInterface PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfaceReggeGribovPartonMCInterface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfaceReggeGribovPartonMCInterface PUBLIC /usr/include/boost/regex/)


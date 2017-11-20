add_subdirectory(plugins)
add_library(GeneratorInterfaceEvtGenInterface OBJECT 
  src/EvtGenFactory.cc
  src/EvtGenInterfaceBase.cc
)

target_include_directories(GeneratorInterfaceEvtGenInterface PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfaceEvtGenInterface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfaceEvtGenInterface PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfaceEvtGenInterface PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfaceEvtGenInterface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfaceEvtGenInterface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfaceEvtGenInterface PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfaceEvtGenInterface PUBLIC /usr/include/boost/regex/)


add_subdirectory(plugins)
add_library(IOMCInput OBJECT 
  src/SealModule.cc
  src/HepMCFileReader.cc
  src/MCFileSource.cc
)

target_include_directories(IOMCInput PUBLIC /usr/include/boost/python/)
target_include_directories(IOMCInput PUBLIC /usr/include/boost/filesystem/)
target_include_directories(IOMCInput PUBLIC /usr/include/python2.7/)
target_include_directories(IOMCInput PUBLIC /usr/include/root/)
target_include_directories(IOMCInput PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(IOMCInput PUBLIC /home/teemperor/cms/md5/)
target_include_directories(IOMCInput PUBLIC /usr/include/boost/)
target_include_directories(IOMCInput PUBLIC /usr/include/boost/regex/)


add_subdirectory(plugins)
add_library(IOPoolOutput OBJECT 
  src/RootOutputTree.cc
  src/RootOutputFile.cc
  src/PoolOutputModule.cc
  src/TimeoutPoolOutputModule.cc
)

target_include_directories(IOPoolOutput PUBLIC /usr/include/boost/python/)
target_include_directories(IOPoolOutput PUBLIC /usr/include/boost/filesystem/)
target_include_directories(IOPoolOutput PUBLIC /usr/include/python2.7/)
target_include_directories(IOPoolOutput PUBLIC /usr/include/root/)
target_include_directories(IOPoolOutput PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(IOPoolOutput PUBLIC /home/teemperor/cms/md5/)
target_include_directories(IOPoolOutput PUBLIC /usr/include/boost/)
target_include_directories(IOPoolOutput PUBLIC /usr/include/boost/regex/)


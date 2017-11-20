add_subdirectory(bin)
add_library(IOPoolCommon OBJECT 
  src/RootServiceChecker.cc
)

target_include_directories(IOPoolCommon PUBLIC /usr/include/boost/python/)
target_include_directories(IOPoolCommon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(IOPoolCommon PUBLIC /usr/include/python2.7/)
target_include_directories(IOPoolCommon PUBLIC /usr/include/root/)
target_include_directories(IOPoolCommon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(IOPoolCommon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(IOPoolCommon PUBLIC /usr/include/boost/)
target_include_directories(IOPoolCommon PUBLIC /usr/include/boost/regex/)


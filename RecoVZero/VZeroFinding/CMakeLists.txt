add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoVZeroVZeroFinding OBJECT 
  src/VZeroFinder.cc
)

target_include_directories(RecoVZeroVZeroFinding PUBLIC /usr/include/boost/python/)
target_include_directories(RecoVZeroVZeroFinding PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoVZeroVZeroFinding PUBLIC /usr/include/python2.7/)
target_include_directories(RecoVZeroVZeroFinding PUBLIC /usr/include/root/)
target_include_directories(RecoVZeroVZeroFinding PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoVZeroVZeroFinding PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoVZeroVZeroFinding PUBLIC /usr/include/boost/)
target_include_directories(RecoVZeroVZeroFinding PUBLIC /usr/include/boost/regex/)


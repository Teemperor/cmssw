add_subdirectory(test)
add_library(FWCoreCatalog OBJECT 
  src/InputFileCatalog.cc
  src/FileLocator.cc
)

target_include_directories(FWCoreCatalog PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreCatalog PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreCatalog PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreCatalog PUBLIC /usr/include/root/)
target_include_directories(FWCoreCatalog PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreCatalog PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreCatalog PUBLIC /usr/include/boost/)
target_include_directories(FWCoreCatalog PUBLIC /usr/include/boost/regex/)


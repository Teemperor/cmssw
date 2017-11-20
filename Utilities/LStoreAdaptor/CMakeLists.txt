add_subdirectory(plugins)
add_library(UtilitiesLStoreAdaptor OBJECT 
  src/LStoreFile.cc
)

target_include_directories(UtilitiesLStoreAdaptor PUBLIC /usr/include/boost/python/)
target_include_directories(UtilitiesLStoreAdaptor PUBLIC /usr/include/boost/filesystem/)
target_include_directories(UtilitiesLStoreAdaptor PUBLIC /usr/include/python2.7/)
target_include_directories(UtilitiesLStoreAdaptor PUBLIC /usr/include/root/)
target_include_directories(UtilitiesLStoreAdaptor PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(UtilitiesLStoreAdaptor PUBLIC /home/teemperor/cms/md5/)
target_include_directories(UtilitiesLStoreAdaptor PUBLIC /usr/include/boost/)
target_include_directories(UtilitiesLStoreAdaptor PUBLIC /usr/include/boost/regex/)
target_compile_definitions(UtilitiesLStoreAdaptor PUBLIC -D_FILE_OFFSET_BITS=64)


add_subdirectory(plugins)
add_library(UtilitiesDCacheAdaptor OBJECT 
  src/DCacheFile.cc
)

target_include_directories(UtilitiesDCacheAdaptor PUBLIC /usr/include/boost/python/)
target_include_directories(UtilitiesDCacheAdaptor PUBLIC /usr/include/boost/filesystem/)
target_include_directories(UtilitiesDCacheAdaptor PUBLIC /usr/include/python2.7/)
target_include_directories(UtilitiesDCacheAdaptor PUBLIC /usr/include/root/)
target_include_directories(UtilitiesDCacheAdaptor PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(UtilitiesDCacheAdaptor PUBLIC /home/teemperor/cms/md5/)
target_include_directories(UtilitiesDCacheAdaptor PUBLIC /usr/include/boost/)
target_include_directories(UtilitiesDCacheAdaptor PUBLIC /usr/include/boost/regex/)
target_compile_definitions(UtilitiesDCacheAdaptor PUBLIC -D_FILE_OFFSET_BITS=32)


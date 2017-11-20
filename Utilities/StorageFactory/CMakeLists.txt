add_subdirectory(bin)
add_subdirectory(test)
add_subdirectory(plugins)
add_library(UtilitiesStorageFactory OBJECT 
  src/IOChannel.cc
  src/StorageAccount.cc
  src/RemoteFile.cc
  src/StorageMaker.cc
  src/StorageMakerFactory.cc
  src/LocalCacheFile.cc
  src/Throw.cc
  src/IOInput.cc
  src/IOOutput.cc
  src/UnixIOChannel.cc
  src/StorageFactory.cc
  src/LocalFileSystem.cc
  src/StatisticsSenderService.cc
  src/File.cc
  src/UnixFile.cc
  src/StorageAccountProxy.cc
  src/Storage.cc
)

target_include_directories(UtilitiesStorageFactory PUBLIC /usr/include/boost/python/)
target_include_directories(UtilitiesStorageFactory PUBLIC /usr/include/boost/filesystem/)
target_include_directories(UtilitiesStorageFactory PUBLIC /usr/include/python2.7/)
target_include_directories(UtilitiesStorageFactory PUBLIC /usr/include/root/)
target_include_directories(UtilitiesStorageFactory PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(UtilitiesStorageFactory PUBLIC /home/teemperor/cms/md5/)
target_include_directories(UtilitiesStorageFactory PUBLIC /usr/include/boost/)
target_include_directories(UtilitiesStorageFactory PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/IOChannel.cc
  src/StorageAccount.cc
  src/RemoteFile.cc
  src/StorageMaker.cc
  src/StorageMakerFactory.cc
  src/LocalCacheFile.cc
  src/Throw.cc
  src/IOInput.cc
  src/IOOutput.cc
  src/UnixIOChannel.cc
  src/StorageFactory.cc
  src/LocalFileSystem.cc
  src/StatisticsSenderService.cc
  src/File.cc
  src/UnixFile.cc
  src/StorageAccountProxy.cc
  src/Storage.cc
PROPERTIES COMPILE_FLAGS "-D_FILE_OFFSET_BITS=64")


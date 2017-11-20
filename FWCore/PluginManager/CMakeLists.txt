add_subdirectory(bin)
add_subdirectory(test)
add_library(FWCorePluginManager OBJECT 
  src/standard.cc
  src/ProblemTracker.cc
  src/PluginFactoryManager.cc
  src/PluginFactoryBase.cc
  src/SharedLibrary.cc
  src/PluginCapabilities.cc
  src/PresenceFactory.cc
  src/PluginManager.cc
  src/CacheParser.cc
)

target_include_directories(FWCorePluginManager PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCorePluginManager PUBLIC /usr/include/root/)
target_include_directories(FWCorePluginManager PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCorePluginManager PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCorePluginManager PUBLIC /usr/include/boost/)
target_include_directories(FWCorePluginManager PUBLIC /usr/include/boost/regex/)


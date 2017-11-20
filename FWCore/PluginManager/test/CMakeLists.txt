add_library(TestFWCorePluginManagerPluginFactoryManager OBJECT 
  pluginfactorymanager_t.cc
)

target_include_directories(TestFWCorePluginManagerPluginFactoryManager PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCorePluginManagerPluginFactoryManager PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCorePluginManagerPluginFactoryManager PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCorePluginManagerPluginFactoryManager PUBLIC /usr/include/boost/)
target_include_directories(TestFWCorePluginManagerPluginFactoryManager PUBLIC /usr/include/root/)
target_include_directories(TestFWCorePluginManagerPluginFactoryManager PUBLIC /usr/include/boost/regex/)

add_library(TestFWCorePluginManagerPluginManager OBJECT 
  pluginmanager_t.cc
)

target_include_directories(TestFWCorePluginManagerPluginManager PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCorePluginManagerPluginManager PUBLIC /usr/include/root/)
target_include_directories(TestFWCorePluginManagerPluginManager PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCorePluginManagerPluginManager PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCorePluginManagerPluginManager PUBLIC /usr/include/boost/)
target_include_directories(TestFWCorePluginManagerPluginManager PUBLIC /usr/include/boost/regex/)

add_library(TestFWCorePluginManagerCacheParser OBJECT 
  cacheparser_t.cc
)

target_include_directories(TestFWCorePluginManagerCacheParser PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCorePluginManagerCacheParser PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCorePluginManagerCacheParser PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCorePluginManagerCacheParser PUBLIC /usr/include/boost/)
target_include_directories(TestFWCorePluginManagerCacheParser PUBLIC /usr/include/root/)
target_include_directories(TestFWCorePluginManagerCacheParser PUBLIC /usr/include/boost/regex/)

add_library(TestFWCorePluginManagerPluginFactory OBJECT 
  pluginfactory_t.cc
)

target_include_directories(TestFWCorePluginManagerPluginFactory PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCorePluginManagerPluginFactory PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCorePluginManagerPluginFactory PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCorePluginManagerPluginFactory PUBLIC /usr/include/boost/)
target_include_directories(TestFWCorePluginManagerPluginFactory PUBLIC /usr/include/root/)
target_include_directories(TestFWCorePluginManagerPluginFactory PUBLIC /usr/include/boost/regex/)

add_library(TestFWCorePluginManagerDummyFactory OBJECT 
  DummyFactory.cc
)

target_include_directories(TestFWCorePluginManagerDummyFactory PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCorePluginManagerDummyFactory PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCorePluginManagerDummyFactory PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCorePluginManagerDummyFactory PUBLIC /usr/include/boost/)
target_include_directories(TestFWCorePluginManagerDummyFactory PUBLIC /usr/include/root/)
target_include_directories(TestFWCorePluginManagerDummyFactory PUBLIC /usr/include/boost/regex/)

add_library(TestFWCorePluginManagerDummyPlugins OBJECT 
  OneDummy.cc
  TwoDummy.cc
)

target_include_directories(TestFWCorePluginManagerDummyPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCorePluginManagerDummyPlugins PUBLIC /usr/include/root/)
target_include_directories(TestFWCorePluginManagerDummyPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCorePluginManagerDummyPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCorePluginManagerDummyPlugins PUBLIC /usr/include/boost/)
target_include_directories(TestFWCorePluginManagerDummyPlugins PUBLIC /usr/include/boost/regex/)


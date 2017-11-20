add_subdirectory(test)
add_library(FWCoreServiceRegistry OBJECT 
  src/PathsAndConsumesOfModulesBase.cc
  src/ParentContext.cc
  src/PathContext.cc
  src/ServiceMakerBase.cc
  src/ServiceRegistry.cc
  src/GlobalContext.cc
  src/ProcessContext.cc
  src/ServicesManager.cc
  src/CurrentModuleOnThread.cc
  src/ServicePluginFactory.cc
  src/ServiceWrapperBase.cc
  src/ConsumesInfo.cc
  src/ServiceToken.cc
  src/ActivityRegistry.cc
  src/StreamContext.cc
  src/PlaceInPathContext.cc
  src/ModuleCallingContext.cc
  src/InternalContext.cc
)

target_include_directories(FWCoreServiceRegistry PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreServiceRegistry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreServiceRegistry PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreServiceRegistry PUBLIC /usr/include/root/)
target_include_directories(FWCoreServiceRegistry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreServiceRegistry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreServiceRegistry PUBLIC /usr/include/boost/)
target_include_directories(FWCoreServiceRegistry PUBLIC /usr/include/boost/regex/)


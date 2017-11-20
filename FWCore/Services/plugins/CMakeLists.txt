add_library(FWCoreServicesPlugins OBJECT 
  ProcInfoFetcher.cc
  ZombieKillerService.cc
  LoadAllDictionaries.cc
  Tracer.cc
  ResourceEnforcer.cc
  ConcurrentModuleTimer.cc
  CondorStatusUpdater.cc
  Module.cc
  PrintLoadingPlugins.cc
  SimpleMemoryCheck.cc
  DependencyGraph.cc
  EnableFloatingPointExceptions.cc
  UnixSignalService.cc
  StallMonitor.cc
  Timing.cc
  ProductRegistryDumper.cc
  CPU.cc
  InitRootHandlers.cc
)

target_include_directories(FWCoreServicesPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreServicesPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreServicesPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreServicesPlugins PUBLIC /usr/include/root/)
target_include_directories(FWCoreServicesPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreServicesPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreServicesPlugins PUBLIC /usr/include/boost/)
target_include_directories(FWCoreServicesPlugins PUBLIC /usr/include/boost/regex/)


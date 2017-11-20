add_library(SimGeneralMixingModulePlugins OBJECT 
  SealModule.cc
  TestMix.cc
  TestMixedSource.cc
  Mixing2DB.cc
  MixEvtVtxGenerator.cc
  MixingWorker.cc
  MixingModule.cc
  Adjuster.cc
  MixingWorkerBase.cc
  InputAnalyzer.cc
  CFWriter.cc
  HiMixingModule.cc
  SecSourceAnalyzer.cc
)

target_include_directories(SimGeneralMixingModulePlugins PUBLIC /usr/include/python2.7/)
target_include_directories(SimGeneralMixingModulePlugins PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(SimGeneralMixingModulePlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimGeneralMixingModulePlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimGeneralMixingModulePlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(SimGeneralMixingModulePlugins PUBLIC /usr/include/boost/)
target_include_directories(SimGeneralMixingModulePlugins PUBLIC /usr/include/boost/python/)
target_include_directories(SimGeneralMixingModulePlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimGeneralMixingModulePlugins PUBLIC /usr/include/root/)
target_include_directories(SimGeneralMixingModulePlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(SimGeneralMixingModulePlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimGeneralMixingModulePlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(SimGeneralMixingModulePlugins PUBLIC /usr/include/boost/regex/)


add_library(L1TriggerRegionalCaloTriggerPlugins OBJECT 
  L1RCTSaveInput.cc
  SealModule.cc
  MaskedRctInputDigiProducer.cc
  L1RCTRelValAnalyzer.cc
  L1RCTInputProducer.cc
  L1RCTTestAnalyzer.cc
  L1RCTTPGProvider.cc
  L1RCTProducer.cc
  L1RCTLutWriter.cc
)

target_include_directories(L1TriggerRegionalCaloTriggerPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(L1TriggerRegionalCaloTriggerPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerRegionalCaloTriggerPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(L1TriggerRegionalCaloTriggerPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(L1TriggerRegionalCaloTriggerPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerRegionalCaloTriggerPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerRegionalCaloTriggerPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(L1TriggerRegionalCaloTriggerPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerRegionalCaloTriggerPlugins PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerRegionalCaloTriggerPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerRegionalCaloTriggerPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerRegionalCaloTriggerPlugins PUBLIC /usr/include/root/)
target_include_directories(L1TriggerRegionalCaloTriggerPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerRegionalCaloTriggerPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerRegionalCaloTriggerPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerRegionalCaloTriggerPlugins PUBLIC /usr/include/boost/regex/)


add_library(HLTriggerJetMETPlugins OBJECT 
  HLTJetHbbFilter.cc
  HLTRFilter.cc
  SealModule.cc
  HLTScoutingCaloProducer.cc
  HLTRHemisphere.cc
  HLTCATopTagFilter.cc
  HLTScoutingPFProducer.cc
  PixelJetPuId.cc
  HLTScoutingPrimaryVertexProducer.cc
  HLTCAWZTagFilter.cc
)

target_include_directories(HLTriggerJetMETPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(HLTriggerJetMETPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(HLTriggerJetMETPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(HLTriggerJetMETPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HLTriggerJetMETPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(HLTriggerJetMETPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(HLTriggerJetMETPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HLTriggerJetMETPlugins PUBLIC /usr/include/boost/)
target_include_directories(HLTriggerJetMETPlugins PUBLIC /usr/include/eigen3/)
target_include_directories(HLTriggerJetMETPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(HLTriggerJetMETPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HLTriggerJetMETPlugins PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(HLTriggerJetMETPlugins PUBLIC /usr/include/root/)
target_include_directories(HLTriggerJetMETPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(HLTriggerJetMETPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HLTriggerJetMETPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(HLTriggerJetMETPlugins PUBLIC /usr/include/boost/regex/)


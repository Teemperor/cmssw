add_library(RecoBTagCombinedPlugins OBJECT 
  DeepCMVATagInfoProducer.cc
  ChargeTagESProducer.cc
  DeepNNTagInfoProducer.cc
  DeepFlavourJetTagsProducer.cc
  CombinedMVAV2JetTagESProducer.cc
)

target_include_directories(RecoBTagCombinedPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoBTagCombinedPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoBTagCombinedPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoBTagCombinedPlugins PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(RecoBTagCombinedPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoBTagCombinedPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoBTagCombinedPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoBTagCombinedPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoBTagCombinedPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoBTagCombinedPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoBTagCombinedPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoBTagCombinedPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoBTagCombinedPlugins PUBLIC /usr/include/boost/regex/)


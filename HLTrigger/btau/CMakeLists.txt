add_library(HLTriggerbtau OBJECT 
  src/HLTDisplacedmumumuFilter.cc
  src/HLTmumutkVtxProducer.cc
  src/HLTmumutkFilter.cc
  src/HLTmmkkFilter.cc
  src/modules.cc
  src/HLTmumutktkVtxProducer.cc
  src/HLTDisplacedmumuVtxProducer.cc
  src/HLTDisplacedtktkFilter.cc
  src/HLTmmkFilter.cc
  src/HLTDisplacedmumumuVtxProducer.cc
  src/HLTJetPairDzMatchFilter.cc
  src/HLTDisplacedtktkVtxProducer.cc
  src/HLTJetTag.cc
  src/HLTDisplacedmumuFilter.cc
  src/HLTmumutktkFilter.cc
  src/ConeIsolation.cc
  src/HLTJetTagWithMatching.cc
  src/ConeIsolationAlgorithm.cc
)

target_include_directories(HLTriggerbtau PUBLIC /usr/include/boost/iostreams/)
target_include_directories(HLTriggerbtau PUBLIC /usr/include/python2.7/)
target_include_directories(HLTriggerbtau PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(HLTriggerbtau PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HLTriggerbtau PUBLIC /usr/include/boost/serialization/)
target_include_directories(HLTriggerbtau PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(HLTriggerbtau PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HLTriggerbtau PUBLIC /usr/include/boost/)
target_include_directories(HLTriggerbtau PUBLIC /usr/include/boost/python/)
target_include_directories(HLTriggerbtau PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HLTriggerbtau PUBLIC /usr/include/root/)
target_include_directories(HLTriggerbtau PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(HLTriggerbtau PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HLTriggerbtau PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(HLTriggerbtau PUBLIC /usr/include/boost/regex/)


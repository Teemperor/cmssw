add_library(RecoTauTagHLTProducers OBJECT 
  src/PFTauToJetProducer.cc
  src/PFJetToCaloProducer.cc
  src/CaloTowerFromL1TCreatorForTauHLT.cc
  src/SealModule.cc
  src/L2TauPixelTrackMatch.cc
  src/L1HLTTauMatching.cc
  src/L1THLTTauMatching.cc
  src/L2TauPixelIsoTagProducer.cc
  src/L2TauJetsMerger.cc
  src/L1HLTJetsMatching.cc
  src/HLTPFTauPairLeadTrackDzMatchFilter.cc
  src/DQMTauProducer.cc
  src/VertexFromTrackProducer.cc
  src/TauJetSelectorForHLTTrackSeeding.cc
  src/CaloTowerCreatorForTauHLT.cc
)

target_include_directories(RecoTauTagHLTProducers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoTauTagHLTProducers PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTauTagHLTProducers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoTauTagHLTProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTauTagHLTProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTauTagHLTProducers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoTauTagHLTProducers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoTauTagHLTProducers PUBLIC /usr/include/boost/)
target_include_directories(RecoTauTagHLTProducers PUBLIC /usr/include/eigen3/)
target_include_directories(RecoTauTagHLTProducers PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTauTagHLTProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTauTagHLTProducers PUBLIC /usr/include/root/)
target_include_directories(RecoTauTagHLTProducers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoTauTagHLTProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTauTagHLTProducers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoTauTagHLTProducers PUBLIC /usr/include/boost/regex/)


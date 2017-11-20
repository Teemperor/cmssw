add_library(RecoJetsJetProducers_plugins OBJECT 
  NjettinessAdder.cc
  SubJetProducer.cc
  SubEventGenJetProducer.cc
  ECFAdder.cc
  BoostedTauSeedsProducer.cc
  VirtualJetProducer.cc
  CATopJetTagger.cc
  QjetsAdder.cc
  FixedGridRhoProducerFastjet.cc
  BasicToPFJet.cc
  JetIDProducer.cc
  CMSInsideOutJetProducer.cc
  FastjetJetProducer.cc
  PileupJPTJetIdProducer.cc
  PUFilter.cc
  MVAJetPuIdProducer.cc
  QGTagger.cc
  PileupJetIdProducer.cc
  HTTTopJetProducer.cc
  SubjetFilterJetProducer.cc
  PtMinJetSelector.cc
  CATopJetProducer.cc
  CastorJetIDProducer.cc
  InputGenJetsParticleSelector.cc
  CompoundJetProducer.cc
  FixedGridRhoProducer.cc
)

target_include_directories(RecoJetsJetProducers_plugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoJetsJetProducers_plugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoJetsJetProducers_plugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoJetsJetProducers_plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoJetsJetProducers_plugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoJetsJetProducers_plugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoJetsJetProducers_plugins PUBLIC /usr/include/boost/)
target_include_directories(RecoJetsJetProducers_plugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoJetsJetProducers_plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoJetsJetProducers_plugins PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(RecoJetsJetProducers_plugins PUBLIC /usr/include/root/)
target_include_directories(RecoJetsJetProducers_plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoJetsJetProducers_plugins PUBLIC /usr/include/boost/regex/)


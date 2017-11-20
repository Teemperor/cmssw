add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoJetsJetProducers OBJECT 
  src/JetMuonHitsIDHelper.cc
  src/JetIDHelper.cc
  src/AnomalousTower.cc
  src/PileUpSubtractor.cc
  src/PileupJPTJetIdAlgo.cc
  src/JetMatchingTools.cc
  src/MVAJetPuId.cc
  src/BackgroundEstimator.cc
  src/JetSpecific.cc
  src/CastorJetIDHelper.cc
  src/PileupJetIdAlgo.cc
)

target_include_directories(RecoJetsJetProducers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoJetsJetProducers PUBLIC /usr/include/python2.7/)
target_include_directories(RecoJetsJetProducers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoJetsJetProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoJetsJetProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoJetsJetProducers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoJetsJetProducers PUBLIC /usr/include/boost/)
target_include_directories(RecoJetsJetProducers PUBLIC /usr/include/boost/python/)
target_include_directories(RecoJetsJetProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoJetsJetProducers PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(RecoJetsJetProducers PUBLIC /usr/include/root/)
target_include_directories(RecoJetsJetProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoJetsJetProducers PUBLIC /usr/include/boost/regex/)


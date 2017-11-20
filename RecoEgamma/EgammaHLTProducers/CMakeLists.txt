add_library(RecoEgammaEgammaHLTProducers OBJECT 
  src/EgammaHLTEcalRecIsolationProducer.cc
  src/EgammaHLTPixelMatchVarProducer.cc
  src/EgammaHLTRecoEcalCandidateProducers.cc
  src/ESRecHitsMerger.cc
  src/EgammaHLTElectronDetaDphiProducer.cc
  src/EgammaHLTHybridClusterProducer.cc
  src/EgammaHLTTimeCleanedRechitProducer.cc
  src/EgammaHLTGsfTrackVarProducer.cc
  src/EgammaHLTR9IDProducer.cc
  src/EcalListOfFEDSProducer.cc
  src/EcalRecHitsMerger.cc
  src/EgammaHLTNxNClusterProducer.cc
  src/EgammaHLTPhotonTrackIsolationProducersRegional.cc
  src/EgammaHLTRegionalPixelSeedGeneratorProducers.cc
  src/SealModules.cc
  src/EgammaHLTR9Producer.cc
  src/EgammaHLTElectronCombinedIsolationProducer.cc
  src/EgammaHLTBcHcalIsolationProducersRegional.cc
  src/EgammaHLTMulti5x5ClusterProducer.cc
  src/EgammaHLTEcalIsolationProducersRegional.cc
  src/HLTHcalPFClusterIsolationProducer.cc
  src/EgammaHLTPFPhotonIsolationProducer.cc
  src/EgammaHLTHcalIsolationProducersRegional.cc
  src/EgammaHLTClusterShapeProducer.cc
  src/EgammaHLTRemoveDuplicatedSC.cc
  src/HLTRechitInRegionsProducer.cc
  src/EgammaHLTHcalIsolationDoubleConeProducers.cc
  src/EgammaHLTIslandClusterProducer.cc
  src/HLTRecHitInAllL1RegionsProducer.cc
  src/EgammaHLTFilteredSuperClusterProducer.cc
  src/EgammaHLTCaloTowerProducer.cc
  src/EgammaHLTPixelMatchElectronProducers.cc
  src/ESListOfFEDSProducer.cc
  src/HLTCaloObjInRegionsProducer.cc
  src/EgammaHLTPFNeutralIsolationProducer.cc
  src/EgammaHLTCombinedIsolationProducer.cc
  src/EgammaHLTElectronTrackIsolationProducers.cc
  src/EgammaHLTPFChargedIsolationProducer.cc
  src/HLTEcalPFClusterIsolationProducer.cc
)

target_include_directories(RecoEgammaEgammaHLTProducers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoEgammaEgammaHLTProducers PUBLIC /usr/include/python2.7/)
target_include_directories(RecoEgammaEgammaHLTProducers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoEgammaEgammaHLTProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoEgammaEgammaHLTProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoEgammaEgammaHLTProducers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoEgammaEgammaHLTProducers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoEgammaEgammaHLTProducers PUBLIC /usr/include/boost/)
target_include_directories(RecoEgammaEgammaHLTProducers PUBLIC /usr/include/eigen3/)
target_include_directories(RecoEgammaEgammaHLTProducers PUBLIC /usr/include/boost/python/)
target_include_directories(RecoEgammaEgammaHLTProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoEgammaEgammaHLTProducers PUBLIC /usr/include/root/)
target_include_directories(RecoEgammaEgammaHLTProducers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoEgammaEgammaHLTProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoEgammaEgammaHLTProducers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoEgammaEgammaHLTProducers PUBLIC /usr/include/boost/regex/)


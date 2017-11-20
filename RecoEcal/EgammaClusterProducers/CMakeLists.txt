add_subdirectory(test)
add_library(RecoEcalEgammaClusterProducers OBJECT 
  src/Multi5x5SuperClusterProducer.cc
  src/PreshowerPhiClusterProducer.cc
  src/IslandClusterProducer.cc
  src/CosmicClusterProducer.cc
  src/SealModule.cc
  src/EgammaSCCorrectionMaker.cc
  src/ReducedESRecHitCollectionProducer.cc
  src/UnifiedSCCollectionProducer.cc
  src/Multi5x5ClusterProducer.cc
  src/HybridClusterProducer.cc
  src/InterestingDetIdFromSuperClusterProducer.cc
  src/InterestingTrackEcalDetIdProducer.cc
  src/PFECALSuperClusterProducer.cc
  src/ReducedRecHitCollectionProducer.cc
  src/UncleanSCRecoveryProducer.cc
  src/CleanAndMergeProducer.cc
  src/InterestingDetIdCollectionProducer.cc
  src/RecHitFilter.cc
  src/PreshowerClusterShapeProducer.cc
  src/PreshowerClusterProducer.cc
  src/EcalDigiSelector.cc
)

target_include_directories(RecoEcalEgammaClusterProducers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoEcalEgammaClusterProducers PUBLIC /usr/include/python2.7/)
target_include_directories(RecoEcalEgammaClusterProducers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoEcalEgammaClusterProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoEcalEgammaClusterProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoEcalEgammaClusterProducers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoEcalEgammaClusterProducers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoEcalEgammaClusterProducers PUBLIC /usr/include/boost/)
target_include_directories(RecoEcalEgammaClusterProducers PUBLIC /usr/include/eigen3/)
target_include_directories(RecoEcalEgammaClusterProducers PUBLIC /usr/include/boost/python/)
target_include_directories(RecoEcalEgammaClusterProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoEcalEgammaClusterProducers PUBLIC /usr/include/root/)
target_include_directories(RecoEcalEgammaClusterProducers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoEcalEgammaClusterProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoEcalEgammaClusterProducers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoEcalEgammaClusterProducers PUBLIC /usr/include/boost/regex/)


add_library(RecoParticleFlowPFClusterProducerPlugins OBJECT 
  SealModule.cc
  RecHitQualityTests.cc
  Basic2DGenericTopoClusterizer.cc
  PFRecHitProducer.cc
  PFClusterTimeAssigner.cc
  Basic2DGenericPFlowPositionCalc.cc
  RecHitCreators.cc
  RBXAndHPDCleaner.cc
  LocalMaximumSeedFinder.cc
  CorrectedECALPFClusterProducer.cc
  SpikeAndDoubleSpikeCleaner.cc
  Navigators.cc
  PFlow2DClusterizerWithTime.cc
  Cluster3DPCACalculator.cc
  PFMultiDepthClusterizer.cc
  ECAL2DPositionCalcWithDepthCorr.cc
  PFClusterTimeSelector.cc
  PFCTRecHitProducer.cc
  PFMultiDepthClusterProducer.cc
  PFClusterProducer.cc
  PFClusterCollectionMerger.cc
  PassThruSeedFinder.cc
  Basic2DGenericPFlowClusterizer.cc
)

target_include_directories(RecoParticleFlowPFClusterProducerPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins PUBLIC /usr/include/eigen3/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins PUBLIC /usr/include/boost/regex/)

add_library(RecoParticleFlowPFClusterProducerPlugins_simmappers OBJECT 
  SimMappers/GenericSimClusterMapper.cc
)

target_include_directories(RecoParticleFlowPFClusterProducerPlugins_simmappers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins_simmappers PUBLIC /usr/include/python2.7/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins_simmappers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins_simmappers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins_simmappers PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins_simmappers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins_simmappers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins_simmappers PUBLIC /usr/include/boost/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins_simmappers PUBLIC /usr/include/eigen3/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins_simmappers PUBLIC /usr/include/boost/python/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins_simmappers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins_simmappers PUBLIC /usr/include/root/)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins_simmappers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins_simmappers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins_simmappers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoParticleFlowPFClusterProducerPlugins_simmappers PUBLIC /usr/include/boost/regex/)


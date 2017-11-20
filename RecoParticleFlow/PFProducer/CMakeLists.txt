add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoParticleFlowPFProducer OBJECT 
  src/PFMuonAlgo.cc
  src/PFAlgoTestBenchConversions.cc
  src/PFBlockLink.cc
  src/Utils.cc
  src/PFPhotonAlgo.cc
  src/KDTreeLinkerAlgo.cc
  src/PFCandConnector.cc
  src/PFAlgo.cc
  src/PFElectronAlgo.cc
  src/KDTreeLinkerBase.cc
  src/PFEGammaFilters.cc
  src/PFBlockAlgo.cc
  src/PFEGammaAlgo.cc
  src/PFAlgoTestBenchElectrons.cc
  src/BlockElementLinkerBase.cc
  src/PhotonSelectorAlgo.cc
  src/BlockElementImporterBase.cc
  src/PFEGammaHeavyObjectCache.cc
)

target_include_directories(RecoParticleFlowPFProducer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoParticleFlowPFProducer PUBLIC /usr/include/python2.7/)
target_include_directories(RecoParticleFlowPFProducer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoParticleFlowPFProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoParticleFlowPFProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoParticleFlowPFProducer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoParticleFlowPFProducer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoParticleFlowPFProducer PUBLIC /usr/include/boost/)
target_include_directories(RecoParticleFlowPFProducer PUBLIC /usr/include/eigen3/)
target_include_directories(RecoParticleFlowPFProducer PUBLIC /usr/include/boost/python/)
target_include_directories(RecoParticleFlowPFProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoParticleFlowPFProducer PUBLIC /usr/include/root/)
target_include_directories(RecoParticleFlowPFProducer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoParticleFlowPFProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoParticleFlowPFProducer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoParticleFlowPFProducer PUBLIC /usr/include/boost/regex/)


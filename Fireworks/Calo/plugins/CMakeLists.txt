add_library(FireworksCaloPlugins OBJECT 
  FWCaloTowerDetailView.cc
  FWZDCRecHitProxyBuilder.cc
  FWHFTowerProxyBuilder.cc
  FWHFTowerSliceSelector.cc
  FWMETProxyBuilder.cc
  FWL1MuonParticleProxyBuilder.cc
  FWCastorRecHitProxyBuilder.cc
  FWHFRecHitProxyBuilder.cc
  FWMETGlimpseProxyBuilder.cc
  FWJetProxyBuilder.cc
  FWPRCaloTowerProxyBuilder.cc
  FWMET3DProxyBuilder.cc
  FWL1EtMissParticleGlimpseProxyBuilder.cc
  FWHGCRecHitProxyBuilder.cc
  FWCaloRecHitDigitSetProxyBuilder.cc
  FWL1EtMissParticleProxyBuilder.cc
  FWHORecHitProxyBuilder.cc
  FWL1JetParticleLegoProxyBuilder.cc
  FWJetLegoProxyBuilder.cc
  FWHBHERecHitProxyBuilder.cc
  FWCaloTauProxyBuilder.cc
  FWPFTauProxyBuilder.cc
  FWFTLRecHitProxyBuilder.cc
  FWCaloTowerProxyBuilder.cc
  FWL1JetParticleProxyBuilder.cc
  FWL1EmParticleProxyBuilder.cc
  FWMETLegoProxyBuilder.cc
  FWCaloClusterProxyBuilder.cc
  FWL1EtMissParticleLegoProxyBuilder.cc
  FWL1MuonParticleLegoProxyBuilder.cc
  FWCaloTowerSliceSelector.cc
  FWEcalRecHitProxyBuilder.cc
)

target_include_directories(FireworksCaloPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksCaloPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksCaloPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksCaloPlugins PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksCaloPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksCaloPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksCaloPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksCaloPlugins PUBLIC /usr/include/boost/)
target_include_directories(FireworksCaloPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksCaloPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksCaloPlugins PUBLIC /usr/include/root/)
target_include_directories(FireworksCaloPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksCaloPlugins PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksCaloPlugins PUBLIC /usr/include/boost/regex/)


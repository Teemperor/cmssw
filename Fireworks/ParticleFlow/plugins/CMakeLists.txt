add_library(FireworksParticleFlowPlugins OBJECT 
  FWPFTrackRPZProxyBuilder.cc
  FWPFPatJetLegoProxyBuilder.cc
  FWPFCandidateTowerSliceSelector.cc
  FWPFClusterLegoProxyBuilder.cc
  FWPFCandidateWithHitsProxyBuilder.cc
  FWPFEcalRecHitRPProxyBuilder.cc
  FWPFPatJet3DProxyBuilder.cc
  FWPFCandidateDetailView.cc
  FWPFTrackLegoProxyBuilder.cc
  FWPFCandidatesLegoProxyBuilder.cc
  FWPFEcalRecHitLegoProxyBuilder.cc
  FWPFBlockProxyBuilder.cc
  FWPFTrack3DProxyBuilder.cc
  FWPFCandidate3DProxyBuilder.cc
  FWPFClusterRPZProxyBuilder.cc
  FWPFCandidateTowerProxyBuilder.cc
)

target_include_directories(FireworksParticleFlowPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksParticleFlowPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksParticleFlowPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksParticleFlowPlugins PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksParticleFlowPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksParticleFlowPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksParticleFlowPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksParticleFlowPlugins PUBLIC /usr/include/boost/)
target_include_directories(FireworksParticleFlowPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksParticleFlowPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksParticleFlowPlugins PUBLIC /usr/include/root/)
target_include_directories(FireworksParticleFlowPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksParticleFlowPlugins PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksParticleFlowPlugins PUBLIC /usr/include/boost/regex/)


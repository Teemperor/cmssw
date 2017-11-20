add_library(CommonToolsRecoAlgos_plugins OBJECT 
  EtMinSuperClusterCountFilter.cc
  EtaPtMinGsfElectronFullCloneSelector.cc
  ConcreteChargedCandidateProducer.cc
  SuperClusterSelector.cc
  ConcreteEcalCandidateProducer.cc
  TrackWithVertexSelector.cc
  PhotonCountFilter.cc
  ElectronShallowCloneProducer.cc
  PtMinMuonCountFilter.cc
  TrackingParticleSelector.cc
  EtMinPhotonSelector.cc
  TrackSelector.cc
  MuonShallowCloneProducer.cc
  SuperClusterMerger.cc
  GenJetShallowCloneProducer.cc
  CosmicTrackingParticleSelector.cc
  MassWindowTrackSelector.cc
  PtMinPixelMatchGsfElectronCountFilter.cc
  EtMinCaloJetSelector.cc
  GsfElectronSelector.cc
  CaloJetSelector.cc
  GsfElectronRefSelector.cc
  CaloRecHitCandidateProducer.cc
  EtMinCaloJetRefSelector.cc
  PrimaryVertexSorter.cc
  ConcreteChargedRefCandidateProducer.cc
  LargestPtTrackSelector.cc
  PhotonSelector.cc
  HBHENoiseFilterResultProducer.cc
  RecoChargedRefCandidateToTrackRefProducer.cc
  RecoTrackViewRefSelector.cc
  SuperClusterRefSelector.cc
  EtMinPFJetSelector.cc
  PFClusterCandidateMerger.cc
  EtaPtMinGsfElectronSelector.cc
  PFClusterCandidateProducer.cc
  EtaEtMinCaloJetCountFilter.cc
  TrackFullCloneSelector.cc
  JetConstituentSelector.cc
  BooleanFlagFilter.cc
  VertexCompositeCandidateCollectionSelector.cc
  JetDeltaRTagInfoValueMapProducer.cc
  EtaPtMinPixelMatchGsfElectronSelector.cc
  RecoCandViewRefSelector.cc
  ConcreteStandAloneMuonCandidateProducer.cc
  EtaRangeCaloJetSelector.cc
  JetTracksAssociationToTrackRefs.cc
  EtMinCaloJetCountFilter.cc
  VertexSelector.cc
  TrackWithVertexRefSelector.cc
  PhotonRefSelector.cc
  GsfElectronShallowCloneProducer.cc
  ME0MuonTrackCollProducer.cc
  MuonRefSelector.cc
  GenJetRefSelector.cc
  LargestEtPFJetSelector.cc
  TrackViewCandidateProducer.cc
  VertexRefSelector.cc
  PtMinGsfElectronCountFilter.cc
  RecoTrackSelector.cc
  CompositeDimuonAndSelector.cc
  EtaPtMinPixelMatchGsfElectronFullCloneSelector.cc
  RecoTrackRefSelector.cc
  PtMinMuonSelector.cc
  MuonCountFilter.cc
  TrackRefSelector.cc
  PtMinTrackSelector.cc
  CaloJetCountFilter.cc
  ChargedCandidateProducer.cc
  MuonViewRefSelector.cc
  GenMETShallowCloneProducer.cc
  PFJetSelector.cc
  TrackingParticleRefSelector.cc
  PtMinElectronCountFilter.cc
  VertexCountFilter.cc
  CaloJetShallowCloneProducer.cc
  TrackingParticleConversionRefSelector.cc
  JetDeltaRValueMapProducer.cc
  LargestEtCaloJetSelector.cc
  CaloJetRefSelector.cc
  MuonSelector.cc
  CaloMETShallowCloneProducer.cc
  EtMinPhotonCountFilter.cc
  TrackCountFilter.cc
  ChargedRefCandidateProducer.cc
  BasicClusterMerger.cc
)

target_include_directories(CommonToolsRecoAlgos_plugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CommonToolsRecoAlgos_plugins PUBLIC /usr/include/python2.7/)
target_include_directories(CommonToolsRecoAlgos_plugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CommonToolsRecoAlgos_plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CommonToolsRecoAlgos_plugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(CommonToolsRecoAlgos_plugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CommonToolsRecoAlgos_plugins PUBLIC /usr/include/boost/)
target_include_directories(CommonToolsRecoAlgos_plugins PUBLIC /usr/include/boost/python/)
target_include_directories(CommonToolsRecoAlgos_plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CommonToolsRecoAlgos_plugins PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(CommonToolsRecoAlgos_plugins PUBLIC /usr/include/root/)
target_include_directories(CommonToolsRecoAlgos_plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CommonToolsRecoAlgos_plugins PUBLIC /usr/include/boost/regex/)


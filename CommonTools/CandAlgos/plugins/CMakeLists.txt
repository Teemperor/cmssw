add_library(CommonToolsCandAlgos_plugins OBJECT 
  NamedCandViewCombiner.cc
  PdgIdAndStatusCandSelector.cc
  ParticleDecayProducer.cc
  StatusCandSelector.cc
  EtaPtMinCandSelector.cc
  CandViewShallowCloneProducer.cc
  CandReducer.cc
  PdgIdCandSelector.cc
  CandViewCountFilter.cc
  CandViewRefSelector.cc
  PdgIdCandRefSelector.cc
  PtMinCandViewSelector.cc
  PdgIdCandExcluder.cc
  CandPtrSelector.cc
  GenParticleCustomSelector.cc
  PdgIdAndStatusCandViewSelector.cc
  LargestPtCandSelector.cc
  NamedCandViewShallowClonePtrCombiner.cc
  PdgIdAndStatusCandDecaySelector.cc
  CompositeCandAndSelector.cc
  CandViewMerger.cc
  StatusCandViewSelector.cc
  DeltaRMinCandCombiner.cc
  CandCountFilter.cc
  PtMinCandSelector.cc
  DummyCandSelector.cc
  CandViewShallowCloneCombiner.cc
  CandHistoAnalyzer.cc
  EtaPtMinPdgIdCandSelector.cc
  CandViewShallowClonePtrCombiner.cc
  CandViewCombiner.cc
  CandPtrProjector.cc
  CandCollectionExistFilter.cc
  CandRefMerger.cc
  PtMinAssociatedVariableMaxCutCandSelector.cc
  AssociatedVariableMaxCutCandViewSelector.cc
  PtMinCandViewCloneSelector.cc
  CandDoubleAssociationVectorSelector.cc
  CandViewSelector.cc
  PdgIdCandViewSelector.cc
  DeltaPhiMinCandCombiner.cc
  CandCandAssociationMapOneToOne2Association.cc
  EtaPtMinCandViewSelector.cc
  CandSelector.cc
  NamedCandViewShallowCloneCombiner.cc
  CandViewHistoAnalyzer.cc
  NamedCandShallowCloneCombiner.cc
  GenJetParticleRefSelector.cc
  CandMerger.cc
  CandDoubleAssociationVector2ValueMap.cc
  CandViewNtpProducer.cc
  AssociatedVariableMaxCutCandSelectorNew.cc
  AssociatedVariableMaxCutCandSelector.cc
  TrivialDeltaRViewMatcher.cc
  TrivialDeltaRMatcher.cc
  AssociatedVariableMaxCutCandRefSelector.cc
  LargestPtCandViewSelector.cc
  StatusCandRefSelector.cc
  CandViewRefMerger.cc
)

target_include_directories(CommonToolsCandAlgos_plugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CommonToolsCandAlgos_plugins PUBLIC /usr/include/python2.7/)
target_include_directories(CommonToolsCandAlgos_plugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CommonToolsCandAlgos_plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CommonToolsCandAlgos_plugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(CommonToolsCandAlgos_plugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CommonToolsCandAlgos_plugins PUBLIC /usr/include/boost/)
target_include_directories(CommonToolsCandAlgos_plugins PUBLIC /usr/include/boost/python/)
target_include_directories(CommonToolsCandAlgos_plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CommonToolsCandAlgos_plugins PUBLIC /usr/include/root/)
target_include_directories(CommonToolsCandAlgos_plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CommonToolsCandAlgos_plugins PUBLIC /usr/include/boost/regex/)


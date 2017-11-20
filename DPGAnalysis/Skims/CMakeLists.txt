add_library(DPGAnalysisSkims OBJECT 
  src/SecondaryVertexFilter.cc
  src/HcalHPDFilter.cc
  src/TrgMatchCandidateProducer.cc
  src/TrgMatchIsolatedPixelTrackCandidateProducer.cc
  src/LogErrorEventFilter.cc
  src/HCALHighEnergyFilter.cc
  src/NMaxPerLumi.cc
  src/TrgMatchGsfElectronProducer.cc
  src/TrgMatchMETProducer.cc
  src/RecHitEnergyFilter.cc
  src/TrgMatchSuperClusterProducer.cc
  src/FilterScrapingPixelProbability.cc
  src/CSCSkim.cc
  src/WZInterestingEventSelector.cc
  src/TrgMatchChargedCandidateProducer.cc
  src/RecoChargedCandidateMatchedProbeMaker.cc
  src/DetStatus.cc
  src/JetHTJetPlusHOFilter.cc
  src/SimpleJetFilter.cc
  src/TrgMatchElectronProducer.cc
  src/EcalSkim.cc
  src/GoodVertexFilter.cc
  src/TagProbeMassEDMFilter.cc
  src/SelectHFMinBias.cc
  src/TrgMatchJetProducer.cc
  src/HLTMuonPtFilter.cc
  src/SinglePhotonJetPlusHOFilter.cc
  src/ECALActivity.cc
  src/HLTInspect.cc
  src/RPCRecHitFilter.cc
  src/FilterOutScraping.cc
  src/TagProbeMassProducer.cc
  src/RPCNoise.cc
  src/EcalTangentFilter.cc
  src/MuonPtFilter.cc
  src/PixelCountFilter.cc
  src/TrgMatchMuonProducer.cc
  src/BeamSplash.cc
  src/PickEvents.cc
  src/TrgMatchEcalCandidateProducer.cc
  src/PhysDecl.cc
)

target_include_directories(DPGAnalysisSkims PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DPGAnalysisSkims PUBLIC /usr/include/python2.7/)
target_include_directories(DPGAnalysisSkims PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DPGAnalysisSkims PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DPGAnalysisSkims PUBLIC /usr/include/boost/serialization/)
target_include_directories(DPGAnalysisSkims PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DPGAnalysisSkims PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DPGAnalysisSkims PUBLIC /usr/include/boost/)
target_include_directories(DPGAnalysisSkims PUBLIC /usr/include/eigen3/)
target_include_directories(DPGAnalysisSkims PUBLIC /usr/include/boost/python/)
target_include_directories(DPGAnalysisSkims PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DPGAnalysisSkims PUBLIC /usr/include/root/)
target_include_directories(DPGAnalysisSkims PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DPGAnalysisSkims PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DPGAnalysisSkims PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DPGAnalysisSkims PUBLIC /usr/include/boost/regex/)


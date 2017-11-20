add_library(RecoMuonMuonIdentificationPlugins OBJECT 
  MuonIdProducer.cc
  CosmicsMuonIdProducer.cc
  GlobalMuonToMuonProducer.cc
  ME0MuonConverter.cc
  TrajectorySeedFromMuonProducer.cc
  MuonProducer.cc
  MuonLinksProducerForHLT.cc
  MuonRefProducer.cc
  Module.cc
  ME0MuonSelector.cc
  MuonTimingProducer.cc
  CaloMuonProducer.cc
  MuonsFromRefitTracksProducer.cc
  MuonLinksProducer.cc
  CaloMuonMerger.cc
  InterestingEcalDetIdProducer.cc
  ME0SegmentMatcher.cc
  MuonShowerInformationProducer.cc
)

target_include_directories(RecoMuonMuonIdentificationPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoMuonMuonIdentificationPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonMuonIdentificationPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoMuonMuonIdentificationPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonMuonIdentificationPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoMuonMuonIdentificationPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoMuonMuonIdentificationPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoMuonMuonIdentificationPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonMuonIdentificationPlugins PUBLIC /usr/include/eigen3/)
target_include_directories(RecoMuonMuonIdentificationPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonMuonIdentificationPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonMuonIdentificationPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoMuonMuonIdentificationPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoMuonMuonIdentificationPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonMuonIdentificationPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoMuonMuonIdentificationPlugins PUBLIC /usr/include/boost/regex/)

add_library(RecoMuonMuonIdentificationPlugins_cuts OBJECT 
  cuts/MuonTrackCut.cc
  cuts/GlobalMuonPromptTightCut.cc
  cuts/MuonTypeByOrCut.cc
  cuts/MuonPOGStandardCut.cc
  cuts/MuonMomQualityCut.cc
  cuts/MuonDzCut.cc
  cuts/MuonDxyCut.cc
  cuts/TMOneStationTightCut.cc
  cuts/MuonMatchCut.cc
  cuts/MuonSegmentCompatibilityCut.cc
)

target_include_directories(RecoMuonMuonIdentificationPlugins_cuts PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoMuonMuonIdentificationPlugins_cuts PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonMuonIdentificationPlugins_cuts PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoMuonMuonIdentificationPlugins_cuts PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonMuonIdentificationPlugins_cuts PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoMuonMuonIdentificationPlugins_cuts PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoMuonMuonIdentificationPlugins_cuts PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoMuonMuonIdentificationPlugins_cuts PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonMuonIdentificationPlugins_cuts PUBLIC /usr/include/eigen3/)
target_include_directories(RecoMuonMuonIdentificationPlugins_cuts PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonMuonIdentificationPlugins_cuts PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonMuonIdentificationPlugins_cuts PUBLIC /usr/include/root/)
target_include_directories(RecoMuonMuonIdentificationPlugins_cuts PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoMuonMuonIdentificationPlugins_cuts PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonMuonIdentificationPlugins_cuts PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoMuonMuonIdentificationPlugins_cuts PUBLIC /usr/include/boost/regex/)


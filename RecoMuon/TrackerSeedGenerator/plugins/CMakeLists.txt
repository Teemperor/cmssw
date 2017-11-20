add_library(RecoMuonTrackerSeedGeneratorPlugins OBJECT 
  SealModule.cc
  TSGFromPropagation.cc
  TSGForOI.cc
  SeparatingTSG.cc
  DualByEtaTSG.cc
  TSGForRoadSearch.cc
  CompositeTSG.cc
  TSGFromL1Muon.cc
  CollectionCombiner.cc
  TSGFromOrderedHits.cc
  CombinedTSG.cc
  TSGFromL2Muon.cc
  TSGSmart.cc
  DualByL2TSG.cc
)

target_include_directories(RecoMuonTrackerSeedGeneratorPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoMuonTrackerSeedGeneratorPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonTrackerSeedGeneratorPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoMuonTrackerSeedGeneratorPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonTrackerSeedGeneratorPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoMuonTrackerSeedGeneratorPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoMuonTrackerSeedGeneratorPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoMuonTrackerSeedGeneratorPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonTrackerSeedGeneratorPlugins PUBLIC /usr/include/eigen3/)
target_include_directories(RecoMuonTrackerSeedGeneratorPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonTrackerSeedGeneratorPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonTrackerSeedGeneratorPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoMuonTrackerSeedGeneratorPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoMuonTrackerSeedGeneratorPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonTrackerSeedGeneratorPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoMuonTrackerSeedGeneratorPlugins PUBLIC /usr/include/boost/regex/)


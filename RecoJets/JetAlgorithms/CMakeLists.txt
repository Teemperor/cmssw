add_library(RecoJetsJetAlgorithms OBJECT 
  src/CATopJetHelper.cc
  src/FastPrunePlugin.cc
  src/HEPTopTaggerV2.cc
  src/Qjets.cc
  src/CMSBoostedTauSeedingAlgorithm.cc
  src/CATopJetAlgorithm.cc
  src/SubJetAlgorithm.cc
  src/PrunedRecombiner.cc
  src/QjetsPlugin.cc
  src/CMSInsideOutAlgorithm.cc
  src/SubjetFilterAlgorithm.cc
  src/HEPTopTaggerWrapperV2.cc
  src/FixedGridEnergyDensity.cc
  src/QGLikelihoodCalculator.cc
)

target_include_directories(RecoJetsJetAlgorithms PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoJetsJetAlgorithms PUBLIC /usr/include/python2.7/)
target_include_directories(RecoJetsJetAlgorithms PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoJetsJetAlgorithms PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoJetsJetAlgorithms PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoJetsJetAlgorithms PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoJetsJetAlgorithms PUBLIC /usr/include/boost/)
target_include_directories(RecoJetsJetAlgorithms PUBLIC /usr/include/boost/python/)
target_include_directories(RecoJetsJetAlgorithms PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoJetsJetAlgorithms PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(RecoJetsJetAlgorithms PUBLIC /usr/include/root/)
target_include_directories(RecoJetsJetAlgorithms PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoJetsJetAlgorithms PUBLIC /usr/include/boost/regex/)


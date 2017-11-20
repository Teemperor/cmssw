add_library(RecoTauTagTauTagToolsPlugins OBJECT 
  RecoTauMatcher.cc
  RecoTauCloningTools.cc
  TauGenJetDumper.cc
  RecoTauGenJetMatchSelector.cc
  RecoTauDifferenceAnalyzer.cc
  TruthTauDecayModeProducer.cc
  TauDiscriminationByStringCut.cc
  PFTauSelector.cc
  PFTauMVAInputDiscriminantTranslator.cc
  TauMVACondUtilities.cc
  RecoTauDistanceFromTruthPlugin.cc
  TauDecayModeTruthMatcher.cc
  PFTauViewRefDiscriminantSelector.cc
  RecoTauObjectEmbedderPlugin.cc
  RecoTauDecayModeTruthMatchPlugin.cc
  RecoTauPlotDiscriminator.cc
  RecoTauRandomDiscriminant.cc
  CandViewRefRandomSelector.cc
  CaloTauSelector.cc
  RecoTauPiZeroFlattener.cc
  PFTauViewRefSelector.cc
  RecoTauEventFlagProducer.cc
  RecoTauRandomCleanerPlugin.cc
  RecoTauViewMerger.cc
  CandViewRefTriggerBiasRemover.cc
  RecoTauDumper.cc
  RecoTauDiscriminationByGenMatch.cc
  RecoTauIndexDiscriminatorProducer.cc
)

target_include_directories(RecoTauTagTauTagToolsPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoTauTagTauTagToolsPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTauTagTauTagToolsPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoTauTagTauTagToolsPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTauTagTauTagToolsPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTauTagTauTagToolsPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoTauTagTauTagToolsPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoTauTagTauTagToolsPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoTauTagTauTagToolsPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTauTagTauTagToolsPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTauTagTauTagToolsPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoTauTagTauTagToolsPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoTauTagTauTagToolsPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTauTagTauTagToolsPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoTauTagTauTagToolsPlugins PUBLIC /usr/include/boost/regex/)


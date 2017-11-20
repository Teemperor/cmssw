add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoTauTagRecoTau OBJECT 
  src/RecoTauPiZeroPlugins.cc
  src/RecoTauConstructor.cc
  src/RecoTauCommonUtilities.cc
  src/AntiElectronIDCut2.cc
  src/RecoTauBuilderPlugins.cc
  src/RecoTauQualityCuts.cc
  src/PFRecoTauAlgorithm.cc
  src/AntiElectronIDMVA6.cc
  src/RecoTauVertexAssociator.cc
  src/RecoTauDiscriminantFunctions.cc
  src/PFRecoTauAlgorithmBase.cc
  src/AntiElectronIDMVA5.cc
  src/pfRecoTauChargedHadronAuxFunctions.cc
  src/RecoTauPluginsCommon.cc
  src/RecoTauIsolationMasking.cc
  src/HPSPFRecoTauAlgorithm.cc
  src/PFTauDecayModeTools.cc
  src/RecoTauDiscriminantPlugins.cc
  src/TauDiscriminationProducerBase.cc
  src/CaloRecoTauAlgorithm.cc
  src/PFRecoTauChargedHadronPlugins.cc
  src/PFRecoTauTagInfoAlgorithm.cc
  src/CaloRecoTauTagInfoAlgorithm.cc
  src/RecoTauBinnedIsolationPlugin.cc
)

target_include_directories(RecoTauTagRecoTau PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoTauTagRecoTau PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTauTagRecoTau PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoTauTagRecoTau PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTauTagRecoTau PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTauTagRecoTau PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoTauTagRecoTau PUBLIC /usr/include/boost/)
target_include_directories(RecoTauTagRecoTau PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTauTagRecoTau PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTauTagRecoTau PUBLIC /usr/include/root/)
target_include_directories(RecoTauTagRecoTau PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTauTagRecoTau PUBLIC /usr/include/boost/regex/)


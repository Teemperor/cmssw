add_library(RecoEgammaExamplesPlugins OBJECT 
  SimplePi0DiscAnalyzer.cc
  ElectronIDAnalyzer.cc
  SealModule.cc
  PatPhotonSimpleAnalyzer.cc
  GsfElectronMCAnalyzer.cc
  DQMAnalyzer.cc
  GsfElectronFakeAnalyzer.cc
  SiStripElectronAnalyzer.cc
  MCPhotonAnalyzer.cc
  SimplePhotonAnalyzer.cc
  MCElectronAnalyzer.cc
  MCPizeroAnalyzer.cc
  PhotonsWithConversionsAnalyzer.cc
  GsfElectronDataAnalyzer.cc
  ElectronSeedAnalyzer.cc
  GsfElectronMCFakeAnalyzer.cc
  SimpleConvertedPhotonAnalyzer.cc
)

target_include_directories(RecoEgammaExamplesPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoEgammaExamplesPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoEgammaExamplesPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoEgammaExamplesPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoEgammaExamplesPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoEgammaExamplesPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoEgammaExamplesPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoEgammaExamplesPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoEgammaExamplesPlugins PUBLIC /usr/include/eigen3/)
target_include_directories(RecoEgammaExamplesPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoEgammaExamplesPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoEgammaExamplesPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoEgammaExamplesPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoEgammaExamplesPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoEgammaExamplesPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoEgammaExamplesPlugins PUBLIC /usr/include/boost/regex/)


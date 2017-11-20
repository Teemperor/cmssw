add_subdirectory(plugins)
add_library(DQMOfflineRecoB OBJECT 
  src/Tools.cc
  src/BaseTagInfoPlotter.cc
  src/MVAJetTagPlotter.cc
  src/EtaPtBin.cc
  src/EffPurFromHistos2D.cc
  src/TrackCountingTagPlotter.cc
  src/AcceptJet.cc
  src/TrackProbabilityTagPlotter.cc
  src/MatchJet.cc
  src/EffPurFromHistos.cc
  src/TagInfoPlotterFactory.cc
  src/TaggingVariablePlotter.cc
  src/HistoShifter.cc
  src/JetTagPlotter.cc
  src/HistoProviderDQM.cc
  src/SoftLeptonTagPlotter.cc
  src/TagCorrelationPlotter.cc
  src/BaseBTagPlotter.cc
  src/BTagDifferentialPlot.cc
)

target_include_directories(DQMOfflineRecoB PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DQMOfflineRecoB PUBLIC /usr/include/python2.7/)
target_include_directories(DQMOfflineRecoB PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DQMOfflineRecoB PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMOfflineRecoB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMOfflineRecoB PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMOfflineRecoB PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DQMOfflineRecoB PUBLIC /usr/include/boost/)
target_include_directories(DQMOfflineRecoB PUBLIC /usr/include/boost/python/)
target_include_directories(DQMOfflineRecoB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMOfflineRecoB PUBLIC /usr/include/root/)
target_include_directories(DQMOfflineRecoB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMOfflineRecoB PUBLIC /usr/include/boost/regex/)


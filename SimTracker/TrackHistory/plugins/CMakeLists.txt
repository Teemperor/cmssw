add_library(TrackHistoryPlugins OBJECT 
  TrackHistoryAnalyzer.cc
  TrackCategoriesAnalyzer.cc
  SVTagInfoValidationAnalyzer.cc
  JetVetoedTracksAssociatorAtVertex.cc
  CategorySelectors.cc
  TrackingParticleBHadronRefSelector.cc
  QualityCutsAnalyzer.cc
  GenTrackMatcher.cc
  TrackingParticleCategoriesAnalyser.cc
  VertexHistoryAnalyzer.cc
  SecondaryVertexTagInfoProxy.cc
)

target_include_directories(TrackHistoryPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(TrackHistoryPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(TrackHistoryPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(TrackHistoryPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackHistoryPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(TrackHistoryPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(TrackHistoryPlugins PUBLIC /usr/include/boost/)
target_include_directories(TrackHistoryPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(TrackHistoryPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackHistoryPlugins PUBLIC /usr/include/root/)
target_include_directories(TrackHistoryPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackHistoryPlugins PUBLIC /usr/include/boost/regex/)


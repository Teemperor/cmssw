add_library(FastSimulationTrackingPlugins OBJECT 
  ConversionTrackRefFix.cc
  RecoTrackAccumulator.cc
  PixelTracksProducer.cc
  TrajectorySeedProducer.cc
  TrackCandidateProducer.cc
  FastTrackerRecHitMaskProducer.cc
  ElectronSeedTrackRefFix.cc
  FastTrackerRecHitCombiner.cc
)

target_include_directories(FastSimulationTrackingPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FastSimulationTrackingPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(FastSimulationTrackingPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FastSimulationTrackingPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimulationTrackingPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(FastSimulationTrackingPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FastSimulationTrackingPlugins PUBLIC /usr/include/boost/)
target_include_directories(FastSimulationTrackingPlugins PUBLIC /usr/include/eigen3/)
target_include_directories(FastSimulationTrackingPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(FastSimulationTrackingPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimulationTrackingPlugins PUBLIC /usr/include/root/)
target_include_directories(FastSimulationTrackingPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimulationTrackingPlugins PUBLIC /usr/include/boost/regex/)


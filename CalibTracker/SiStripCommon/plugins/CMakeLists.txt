add_library(CalibTrackerSiStripCommonPlugins OBJECT 
  ShallowTrackClustersProducer.cc
  ShallowSimTracksProducer.cc
  SiStripDCSFilter.cc
  SealModules.cc
  ShallowEventDataProducer.cc
  ShallowGainCalibration.cc
  ShallowTree.cc
  SiStripBFieldFilter.cc
  ShallowTracksProducer.cc
  ShallowRechitClustersProducer.cc
  ShallowSimhitClustersProducer.cc
  ShallowDigisProducer.cc
  SiStripDetInfoFileWriter.cc
  ShallowClustersProducer.cc
)

target_include_directories(CalibTrackerSiStripCommonPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CalibTrackerSiStripCommonPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(CalibTrackerSiStripCommonPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(CalibTrackerSiStripCommonPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CalibTrackerSiStripCommonPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibTrackerSiStripCommonPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibTrackerSiStripCommonPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CalibTrackerSiStripCommonPlugins PUBLIC /usr/include/boost/)
target_include_directories(CalibTrackerSiStripCommonPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(CalibTrackerSiStripCommonPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibTrackerSiStripCommonPlugins PUBLIC /usr/include/root/)
target_include_directories(CalibTrackerSiStripCommonPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibTrackerSiStripCommonPlugins PUBLIC /usr/include/boost/regex/)


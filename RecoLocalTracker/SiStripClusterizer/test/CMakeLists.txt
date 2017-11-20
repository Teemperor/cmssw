add_library(RecoLocalTrackerSiStripClusterizerTestPlugins OBJECT 
  ClusterizerUnitTesterESProducer.cc
  CompareClusters.cc
  SealModules.cc
  ClusterRefinerTagMCmerged.cc
  StripByStripTestDriver.cc
  ClusterizerUnitTester.cc
)

target_include_directories(RecoLocalTrackerSiStripClusterizerTestPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalTrackerSiStripClusterizerTestPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalTrackerSiStripClusterizerTestPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalTrackerSiStripClusterizerTestPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoLocalTrackerSiStripClusterizerTestPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalTrackerSiStripClusterizerTestPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalTrackerSiStripClusterizerTestPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalTrackerSiStripClusterizerTestPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalTrackerSiStripClusterizerTestPlugins PUBLIC /usr/include/boost/regex/)


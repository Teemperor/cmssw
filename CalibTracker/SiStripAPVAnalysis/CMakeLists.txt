add_subdirectory(plugins)
add_library(CalibTrackerSiStripAPVAnalysis OBJECT 
  src/ApvAnalysisFactory.cc
  src/TT6PedestalCalculator.cc
  src/ApvAnalysis.cc
  src/TkCommonModeTopology.cc
  src/TT6CommonModeCalculator.cc
  src/TT6NoiseCalculator.cc
  src/TkCommonMode.cc
  src/MedianCommonModeCalculator.cc
  src/TT6NTPedestalCalculator.cc
  src/ApvFactoryService.cc
  src/SimpleNoiseCalculator.cc
  src/TT6ApvMask.cc
  src/SimplePedestalCalculator.cc
)

target_include_directories(CalibTrackerSiStripAPVAnalysis PUBLIC /usr/include/boost/python/)
target_include_directories(CalibTrackerSiStripAPVAnalysis PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibTrackerSiStripAPVAnalysis PUBLIC /usr/include/python2.7/)
target_include_directories(CalibTrackerSiStripAPVAnalysis PUBLIC /usr/include/root/)
target_include_directories(CalibTrackerSiStripAPVAnalysis PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibTrackerSiStripAPVAnalysis PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibTrackerSiStripAPVAnalysis PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibTrackerSiStripAPVAnalysis PUBLIC /usr/include/boost/)
target_include_directories(CalibTrackerSiStripAPVAnalysis PUBLIC /usr/include/boost/regex/)


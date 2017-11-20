add_subdirectory(plugins)
add_library(RecoLocalTrackerSiStripZeroSuppression OBJECT 
  src/SiStripAPVRestorer.cc
  src/TT6CMNSubtractor.cc
  src/FastLinearCMNSubtractor.cc
  src/SiStripPedestalsSubtractor.cc
  src/SiStripRawProcessingAlgorithms.cc
  src/PercentileCMNSubtractor.cc
  src/MedianCMNSubtractor.cc
  src/SiStripRawProcessingFactory.cc
  src/SiStripFedZeroSuppression.cc
  src/IteratedMedianCMNSubtractor.cc
)

target_include_directories(RecoLocalTrackerSiStripZeroSuppression PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoLocalTrackerSiStripZeroSuppression PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalTrackerSiStripZeroSuppression PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoLocalTrackerSiStripZeroSuppression PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalTrackerSiStripZeroSuppression PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalTrackerSiStripZeroSuppression PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoLocalTrackerSiStripZeroSuppression PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalTrackerSiStripZeroSuppression PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalTrackerSiStripZeroSuppression PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalTrackerSiStripZeroSuppression PUBLIC /usr/include/root/)
target_include_directories(RecoLocalTrackerSiStripZeroSuppression PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalTrackerSiStripZeroSuppression PUBLIC /usr/include/boost/regex/)


add_library(SimTrackerSiStripDigitizerPlugins OBJECT 
  SiLinearChargeCollectionDrifter.cc
  SealModule.cc
  SiPileUpSignals.cc
  SiLinearChargeDivider.cc
  SiStripDigitizerAlgorithm.cc
  DigiSimLinkProducer.cc
  SiTrivialInduceChargeOnStrips.cc
  SiHitDigitizer.cc
  DigiSimLinkPileUpSignals.cc
  SiStripDigitizer.cc
  DigiSimLinkAlgorithm.cc
)

target_include_directories(SimTrackerSiStripDigitizerPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(SimTrackerSiStripDigitizerPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(SimTrackerSiStripDigitizerPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimTrackerSiStripDigitizerPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(SimTrackerSiStripDigitizerPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimTrackerSiStripDigitizerPlugins PUBLIC /usr/include/root/)
target_include_directories(SimTrackerSiStripDigitizerPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimTrackerSiStripDigitizerPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimTrackerSiStripDigitizerPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimTrackerSiStripDigitizerPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimTrackerSiStripDigitizerPlugins PUBLIC /usr/include/boost/)
target_include_directories(SimTrackerSiStripDigitizerPlugins PUBLIC /usr/include/boost/regex/)


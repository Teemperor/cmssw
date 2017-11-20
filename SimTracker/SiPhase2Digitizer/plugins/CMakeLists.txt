add_library(SimTrackerSiPhase2DigitizerPlugins OBJECT 
  Phase2TrackerDigitizer.cc
  PSPDigitizerAlgorithm.cc
  Phase2TrackerDigitizerAlgorithm.cc
  PixelDigitizerAlgorithm.cc
  PSSDigitizerAlgorithm.cc
  SSDigitizerAlgorithm.cc
)

target_include_directories(SimTrackerSiPhase2DigitizerPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(SimTrackerSiPhase2DigitizerPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimTrackerSiPhase2DigitizerPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(SimTrackerSiPhase2DigitizerPlugins PUBLIC /usr/include/root/)
target_include_directories(SimTrackerSiPhase2DigitizerPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimTrackerSiPhase2DigitizerPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimTrackerSiPhase2DigitizerPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimTrackerSiPhase2DigitizerPlugins PUBLIC /usr/include/boost/)
target_include_directories(SimTrackerSiPhase2DigitizerPlugins PUBLIC /usr/include/boost/regex/)


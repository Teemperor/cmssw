add_subdirectory(plugins)
add_library(SimTrackerSiStripDigitizer OBJECT 
  src/SiGaussianTailNoiseAdder.cc
  src/SiTrivialDigitalConverter.cc
)

target_include_directories(SimTrackerSiStripDigitizer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(SimTrackerSiStripDigitizer PUBLIC /usr/include/python2.7/)
target_include_directories(SimTrackerSiStripDigitizer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimTrackerSiStripDigitizer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimTrackerSiStripDigitizer PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimTrackerSiStripDigitizer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimTrackerSiStripDigitizer PUBLIC /usr/include/boost/)
target_include_directories(SimTrackerSiStripDigitizer PUBLIC /usr/include/boost/python/)
target_include_directories(SimTrackerSiStripDigitizer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimTrackerSiStripDigitizer PUBLIC /usr/include/root/)
target_include_directories(SimTrackerSiStripDigitizer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimTrackerSiStripDigitizer PUBLIC /usr/include/boost/regex/)


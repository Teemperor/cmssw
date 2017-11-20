add_subdirectory(plugins)
add_library(CalibTrackerSiStripQuality OBJECT 
  src/SiStripBadAPVAlgorithmFromClusterOccupancy.cc
  src/SiStripBadAPVandHotStripAlgorithmFromClusterOccupancy.cc
  src/SiStripHotStripAlgorithmFromClusterOccupancy.cc
)

target_include_directories(CalibTrackerSiStripQuality PUBLIC /usr/include/boost/python/)
target_include_directories(CalibTrackerSiStripQuality PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibTrackerSiStripQuality PUBLIC /usr/include/python2.7/)
target_include_directories(CalibTrackerSiStripQuality PUBLIC /usr/include/root/)
target_include_directories(CalibTrackerSiStripQuality PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibTrackerSiStripQuality PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibTrackerSiStripQuality PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibTrackerSiStripQuality PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(CalibTrackerSiStripQuality PUBLIC /usr/include/boost/)
target_include_directories(CalibTrackerSiStripQuality PUBLIC /usr/include/boost/regex/)


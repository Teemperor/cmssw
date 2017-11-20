add_subdirectory(plugins)
add_library(CalibTrackerSiStripCommon OBJECT 
  src/ShallowTools.cc
  src/TkDetMap.cc
  src/SiStripDetInfoFileReader.cc
  src/SiStripFedIdListReader.cc
  src/SiStripDCSStatus.cc
)

target_include_directories(CalibTrackerSiStripCommon PUBLIC /usr/include/boost/python/)
target_include_directories(CalibTrackerSiStripCommon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibTrackerSiStripCommon PUBLIC /usr/include/python2.7/)
target_include_directories(CalibTrackerSiStripCommon PUBLIC /usr/include/root/)
target_include_directories(CalibTrackerSiStripCommon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibTrackerSiStripCommon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibTrackerSiStripCommon PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibTrackerSiStripCommon PUBLIC /usr/include/boost/)
target_include_directories(CalibTrackerSiStripCommon PUBLIC /usr/include/boost/regex/)


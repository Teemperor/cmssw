add_subdirectory(plugins)
add_library(DQMOfflineCalibTracker OBJECT 
  src/StatisticsFilter.cc
  src/APVValidationPlots.cc
  src/StripValidationPlots.cc
)

target_include_directories(DQMOfflineCalibTracker PUBLIC /usr/include/boost/python/)
target_include_directories(DQMOfflineCalibTracker PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMOfflineCalibTracker PUBLIC /usr/include/python2.7/)
target_include_directories(DQMOfflineCalibTracker PUBLIC /usr/include/root/)
target_include_directories(DQMOfflineCalibTracker PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMOfflineCalibTracker PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMOfflineCalibTracker PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMOfflineCalibTracker PUBLIC /usr/include/boost/)
target_include_directories(DQMOfflineCalibTracker PUBLIC /usr/include/boost/regex/)


add_library(SimTrackerCommon OBJECT 
  src/SiG4UniversalFluctuation.cc
  src/SimHitSelectorFromDB.cc
)

target_include_directories(SimTrackerCommon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimTrackerCommon PUBLIC /usr/include/root/)
target_include_directories(SimTrackerCommon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimTrackerCommon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimTrackerCommon PUBLIC /usr/include/boost/)
target_include_directories(SimTrackerCommon PUBLIC /usr/include/boost/regex/)


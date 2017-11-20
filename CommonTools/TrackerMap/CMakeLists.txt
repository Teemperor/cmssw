add_subdirectory(bin)
add_library(CommonToolsTrackerMap OBJECT 
  src/TmModule.cc
  src/TmApvPair.cc
  src/TrackerMap.cc
  src/TmPsu.cc
  src/TmCcu.cc
)

target_include_directories(CommonToolsTrackerMap PUBLIC /usr/include/boost/python/)
target_include_directories(CommonToolsTrackerMap PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CommonToolsTrackerMap PUBLIC /usr/include/python2.7/)
target_include_directories(CommonToolsTrackerMap PUBLIC /usr/include/root/)
target_include_directories(CommonToolsTrackerMap PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CommonToolsTrackerMap PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CommonToolsTrackerMap PUBLIC /usr/include/boost/serialization/)
target_include_directories(CommonToolsTrackerMap PUBLIC /usr/include/boost/)
target_include_directories(CommonToolsTrackerMap PUBLIC /usr/include/boost/regex/)


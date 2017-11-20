add_library(SimTrackerRecords OBJECT 
  src/TrackAssociatorRecord.cc
)

target_include_directories(SimTrackerRecords PUBLIC /usr/include/boost/python/)
target_include_directories(SimTrackerRecords PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimTrackerRecords PUBLIC /usr/include/python2.7/)
target_include_directories(SimTrackerRecords PUBLIC /usr/include/root/)
target_include_directories(SimTrackerRecords PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimTrackerRecords PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimTrackerRecords PUBLIC /usr/include/boost/)
target_include_directories(SimTrackerRecords PUBLIC /usr/include/boost/regex/)


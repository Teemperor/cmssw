add_library(TrackingToolsRecords OBJECT 
  src/DetIdAssociatorRecord.cc
  src/TrackingComponentsRecord.cc
  src/TransientTrackRecord.cc
  src/TransientRecHitRecord.cc
)

target_include_directories(TrackingToolsRecords PUBLIC /usr/include/boost/python/)
target_include_directories(TrackingToolsRecords PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsRecords PUBLIC /usr/include/python2.7/)
target_include_directories(TrackingToolsRecords PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsRecords PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsRecords PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsRecords PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsRecords PUBLIC /usr/include/boost/regex/)


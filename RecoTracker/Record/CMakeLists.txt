add_library(RecoTrackerRecord OBJECT 
  src/CkfComponentsRecord.cc
  src/MultiRecHitRecord.cc
  src/TrackerRecoGeometryRecord.cc
  src/NavigationSchoolRecord.cc
)

target_include_directories(RecoTrackerRecord PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTrackerRecord PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTrackerRecord PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTrackerRecord PUBLIC /usr/include/root/)
target_include_directories(RecoTrackerRecord PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTrackerRecord PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTrackerRecord PUBLIC /usr/include/boost/)
target_include_directories(RecoTrackerRecord PUBLIC /usr/include/boost/regex/)


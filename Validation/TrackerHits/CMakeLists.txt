add_library(ValidationTrackerHits OBJECT 
  src/TrackerHitProducer.cc
  src/TrackerHitAnalyzer.cc
)

target_include_directories(ValidationTrackerHits PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationTrackerHits PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationTrackerHits PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationTrackerHits PUBLIC /usr/include/root/)
target_include_directories(ValidationTrackerHits PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationTrackerHits PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationTrackerHits PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationTrackerHits PUBLIC /usr/include/boost/)
target_include_directories(ValidationTrackerHits PUBLIC /usr/include/Geant4/)
target_include_directories(ValidationTrackerHits PUBLIC /usr/include/boost/regex/)


add_subdirectory(plugins)
add_library(ValidationCSCRecHits OBJECT 
  src/CSCRecHitValidation.cc
  src/CSCSegmentValidation.cc
  src/CSCRecHit2DValidation.cc
)

target_include_directories(ValidationCSCRecHits PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationCSCRecHits PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationCSCRecHits PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationCSCRecHits PUBLIC /usr/include/root/)
target_include_directories(ValidationCSCRecHits PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationCSCRecHits PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationCSCRecHits PUBLIC /usr/include/boost/serialization/)
target_include_directories(ValidationCSCRecHits PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationCSCRecHits PUBLIC /usr/include/boost/)
target_include_directories(ValidationCSCRecHits PUBLIC /usr/include/boost/regex/)


add_library(testHitPattern OBJECT 
  testHitPattern.cpp
)

target_include_directories(testHitPattern PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testHitPattern PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testHitPattern PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testHitPattern PUBLIC /usr/include/boost/)
target_include_directories(testHitPattern PUBLIC /usr/include/root/)
target_include_directories(testHitPattern PUBLIC /usr/include/boost/regex/)

add_library(testDataFormatsTrackReco OBJECT 
  testTrack.cc
  testRunner.cpp
)

target_include_directories(testDataFormatsTrackReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDataFormatsTrackReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDataFormatsTrackReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDataFormatsTrackReco PUBLIC /usr/include/boost/)
target_include_directories(testDataFormatsTrackReco PUBLIC /usr/include/root/)
target_include_directories(testDataFormatsTrackReco PUBLIC /usr/include/boost/regex/)


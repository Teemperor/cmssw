add_subdirectory(test)
add_subdirectory(plugins)
add_library(EventFilterPhase2TrackerRawToDigi OBJECT 
  src/Phase2TrackerFEDDAQTrailer.cc
  src/Phase2TrackerFEDBuffer.cc
  src/Phase2TrackerFEDHeader.cc
  src/Phase2TrackerFEDDAQHeader.cc
)

target_include_directories(EventFilterPhase2TrackerRawToDigi PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterPhase2TrackerRawToDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterPhase2TrackerRawToDigi PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterPhase2TrackerRawToDigi PUBLIC /usr/include/root/)
target_include_directories(EventFilterPhase2TrackerRawToDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterPhase2TrackerRawToDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterPhase2TrackerRawToDigi PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterPhase2TrackerRawToDigi PUBLIC /usr/include/boost/)
target_include_directories(EventFilterPhase2TrackerRawToDigi PUBLIC /usr/include/boost/regex/)


add_subdirectory(test)
add_subdirectory(plugins)
add_library(EventFilterCSCTFRawToDigi OBJECT 
  src/CSCSPRecord.cc
  src/CSCTFEvent.cc
  src/CSCSPEvent.cc
)

target_include_directories(EventFilterCSCTFRawToDigi PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterCSCTFRawToDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterCSCTFRawToDigi PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterCSCTFRawToDigi PUBLIC /usr/include/root/)
target_include_directories(EventFilterCSCTFRawToDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterCSCTFRawToDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterCSCTFRawToDigi PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterCSCTFRawToDigi PUBLIC /usr/include/boost/)
target_include_directories(EventFilterCSCTFRawToDigi PUBLIC /usr/include/boost/regex/)


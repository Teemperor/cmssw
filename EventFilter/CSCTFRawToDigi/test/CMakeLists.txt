add_library(EventFilterCSCTFSingleGen_test OBJECT 
  CSCTFSingleGen.cc
)

target_include_directories(EventFilterCSCTFSingleGen_test PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterCSCTFSingleGen_test PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterCSCTFSingleGen_test PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterCSCTFSingleGen_test PUBLIC /usr/include/root/)
target_include_directories(EventFilterCSCTFSingleGen_test PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterCSCTFSingleGen_test PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterCSCTFSingleGen_test PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterCSCTFSingleGen_test PUBLIC /usr/include/boost/)
target_include_directories(EventFilterCSCTFSingleGen_test PUBLIC /usr/include/boost/regex/)

add_library(testCSCTFRawToDigi OBJECT 
  testCSCTFRawToDigi.cpp
)

target_include_directories(testCSCTFRawToDigi PUBLIC /usr/include/boost/python/)
target_include_directories(testCSCTFRawToDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCSCTFRawToDigi PUBLIC /usr/include/python2.7/)
target_include_directories(testCSCTFRawToDigi PUBLIC /usr/include/root/)
target_include_directories(testCSCTFRawToDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCSCTFRawToDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCSCTFRawToDigi PUBLIC /usr/include/boost/serialization/)
target_include_directories(testCSCTFRawToDigi PUBLIC /usr/include/boost/)
target_include_directories(testCSCTFRawToDigi PUBLIC /usr/include/boost/regex/)


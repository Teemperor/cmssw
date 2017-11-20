add_library(RKTest OBJECT 
  RKTest.cc
)

target_include_directories(RKTest PUBLIC /usr/include/boost/python/)
target_include_directories(RKTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RKTest PUBLIC /usr/include/python2.7/)
target_include_directories(RKTest PUBLIC /usr/include/root/)
target_include_directories(RKTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RKTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RKTest PUBLIC /usr/include/boost/)
target_include_directories(RKTest PUBLIC /usr/include/boost/regex/)

add_library(testFastPow OBJECT 
  testFastPow.cpp
)

target_include_directories(testFastPow PUBLIC /usr/include/boost/python/)
target_include_directories(testFastPow PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testFastPow PUBLIC /usr/include/python2.7/)
target_include_directories(testFastPow PUBLIC /usr/include/root/)
target_include_directories(testFastPow PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testFastPow PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testFastPow PUBLIC /usr/include/boost/)
target_include_directories(testFastPow PUBLIC /usr/include/boost/regex/)


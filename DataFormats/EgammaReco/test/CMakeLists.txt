add_library(testSuperCluster OBJECT 
  testRunner.cpp
  testSuperCluster.cppunit.cc
)

target_include_directories(testSuperCluster PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testSuperCluster PUBLIC /usr/include/root/)
target_include_directories(testSuperCluster PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testSuperCluster PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testSuperCluster PUBLIC /usr/include/boost/)
target_include_directories(testSuperCluster PUBLIC /usr/include/boost/regex/)


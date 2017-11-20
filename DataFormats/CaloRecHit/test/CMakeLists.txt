add_library(testCaloCluster OBJECT 
  testRunner.cpp
  testCaloCluster.cppunit.cc
)

target_include_directories(testCaloCluster PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCaloCluster PUBLIC /usr/include/root/)
target_include_directories(testCaloCluster PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCaloCluster PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCaloCluster PUBLIC /usr/include/boost/)
target_include_directories(testCaloCluster PUBLIC /usr/include/boost/regex/)


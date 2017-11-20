add_library(testTrackingToolsTrackAssociator OBJECT 
  TestTrackAssociator.cc
)

target_include_directories(testTrackingToolsTrackAssociator PUBLIC /usr/include/boost/python/)
target_include_directories(testTrackingToolsTrackAssociator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testTrackingToolsTrackAssociator PUBLIC /usr/include/python2.7/)
target_include_directories(testTrackingToolsTrackAssociator PUBLIC /usr/include/root/)
target_include_directories(testTrackingToolsTrackAssociator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testTrackingToolsTrackAssociator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testTrackingToolsTrackAssociator PUBLIC /usr/include/boost/serialization/)
target_include_directories(testTrackingToolsTrackAssociator PUBLIC /usr/include/boost/)
target_include_directories(testTrackingToolsTrackAssociator PUBLIC /usr/include/boost/regex/)

add_library(testCaloMatchingExample OBJECT 
  CaloMatchingExample.cc
)

target_include_directories(testCaloMatchingExample PUBLIC /usr/include/boost/python/)
target_include_directories(testCaloMatchingExample PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCaloMatchingExample PUBLIC /usr/include/python2.7/)
target_include_directories(testCaloMatchingExample PUBLIC /usr/include/root/)
target_include_directories(testCaloMatchingExample PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCaloMatchingExample PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCaloMatchingExample PUBLIC /usr/include/boost/serialization/)
target_include_directories(testCaloMatchingExample PUBLIC /usr/include/boost/)
target_include_directories(testCaloMatchingExample PUBLIC /usr/include/boost/regex/)


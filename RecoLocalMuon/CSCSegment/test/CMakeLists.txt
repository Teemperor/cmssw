add_library(testCSCSegReader OBJECT 
  CSCSegmentReader.cc
)

target_include_directories(testCSCSegReader PUBLIC /usr/include/boost/python/)
target_include_directories(testCSCSegReader PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCSCSegReader PUBLIC /usr/include/python2.7/)
target_include_directories(testCSCSegReader PUBLIC /usr/include/root/)
target_include_directories(testCSCSegReader PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCSCSegReader PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCSCSegReader PUBLIC /usr/include/boost/)
target_include_directories(testCSCSegReader PUBLIC /usr/include/boost/regex/)

add_library(CSCSegmentVisualise OBJECT 
  CSCSegmentVisualise.cc
)

target_include_directories(CSCSegmentVisualise PUBLIC /usr/include/boost/python/)
target_include_directories(CSCSegmentVisualise PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCSegmentVisualise PUBLIC /usr/include/python2.7/)
target_include_directories(CSCSegmentVisualise PUBLIC /usr/include/root/)
target_include_directories(CSCSegmentVisualise PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCSegmentVisualise PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCSegmentVisualise PUBLIC /usr/include/boost/)
target_include_directories(CSCSegmentVisualise PUBLIC /usr/include/boost/regex/)


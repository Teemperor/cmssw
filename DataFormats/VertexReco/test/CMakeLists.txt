add_library(testDataFormatsVertexReco OBJECT 
  testVertex.cc
  testRunner.cpp
)

target_include_directories(testDataFormatsVertexReco PUBLIC /usr/include/boost/python/)
target_include_directories(testDataFormatsVertexReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDataFormatsVertexReco PUBLIC /usr/include/python2.7/)
target_include_directories(testDataFormatsVertexReco PUBLIC /usr/include/root/)
target_include_directories(testDataFormatsVertexReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDataFormatsVertexReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDataFormatsVertexReco PUBLIC /usr/include/boost/)
target_include_directories(testDataFormatsVertexReco PUBLIC /usr/include/boost/regex/)


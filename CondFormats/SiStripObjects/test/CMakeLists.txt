add_library(TestSiStripLatency OBJECT 
  TestSiStripLatency.cc
)

target_include_directories(TestSiStripLatency PUBLIC /usr/include/boost/python/)
target_include_directories(TestSiStripLatency PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestSiStripLatency PUBLIC /usr/include/python2.7/)
target_include_directories(TestSiStripLatency PUBLIC /usr/include/root/)
target_include_directories(TestSiStripLatency PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestSiStripLatency PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestSiStripLatency PUBLIC /usr/include/boost/serialization/)
target_include_directories(TestSiStripLatency PUBLIC /usr/include/boost/)
target_include_directories(TestSiStripLatency PUBLIC /usr/include/boost/regex/)

add_library(TestCondFormatsSiStripObjects OBJECT 
  UnitTests/TestSiStripConfObject.cc
  UnitTests/TestSiStripBaseDelay.cc
  UnitTests/MasterTestCondFormatsSiStripObjects.cpp
)

target_include_directories(TestCondFormatsSiStripObjects PUBLIC /usr/include/boost/python/)
target_include_directories(TestCondFormatsSiStripObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestCondFormatsSiStripObjects PUBLIC /usr/include/python2.7/)
target_include_directories(TestCondFormatsSiStripObjects PUBLIC /usr/include/root/)
target_include_directories(TestCondFormatsSiStripObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestCondFormatsSiStripObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestCondFormatsSiStripObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(TestCondFormatsSiStripObjects PUBLIC /usr/include/boost/)
target_include_directories(TestCondFormatsSiStripObjects PUBLIC /usr/include/boost/regex/)

add_library(testSerializationSiStripObjects OBJECT 
  testSerializationSiStripObjects.cpp
)

target_include_directories(testSerializationSiStripObjects PUBLIC /usr/include/boost/python/)
target_include_directories(testSerializationSiStripObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testSerializationSiStripObjects PUBLIC /usr/include/python2.7/)
target_include_directories(testSerializationSiStripObjects PUBLIC /usr/include/root/)
target_include_directories(testSerializationSiStripObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testSerializationSiStripObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testSerializationSiStripObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(testSerializationSiStripObjects PUBLIC /usr/include/boost/)
target_include_directories(testSerializationSiStripObjects PUBLIC /usr/include/boost/regex/)


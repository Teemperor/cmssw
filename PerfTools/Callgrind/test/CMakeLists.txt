add_library(testPerfToolsCallgrind OBJECT 
  testRunner.cpp
  ProfilerServiceTest.cppunit.cc
)

target_include_directories(testPerfToolsCallgrind PUBLIC /usr/include/boost/python/)
target_include_directories(testPerfToolsCallgrind PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testPerfToolsCallgrind PUBLIC /usr/include/python2.7/)
target_include_directories(testPerfToolsCallgrind PUBLIC /usr/include/root/)
target_include_directories(testPerfToolsCallgrind PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testPerfToolsCallgrind PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testPerfToolsCallgrind PUBLIC /usr/include/boost/)
target_include_directories(testPerfToolsCallgrind PUBLIC /usr/include/boost/regex/)


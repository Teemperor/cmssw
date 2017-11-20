add_library(testEcalSeverity OBJECT 
  testRunner.cpp
  testEcalSeverityLevelAlgo.cppunit.cc
)

target_include_directories(testEcalSeverity PUBLIC /usr/include/python2.7/)
target_include_directories(testEcalSeverity PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testEcalSeverity PUBLIC /usr/include/boost/serialization/)
target_include_directories(testEcalSeverity PUBLIC /usr/include/boost/)
target_include_directories(testEcalSeverity PUBLIC /usr/include/eigen3/)
target_include_directories(testEcalSeverity PUBLIC /usr/include/boost/python/)
target_include_directories(testEcalSeverity PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testEcalSeverity PUBLIC /usr/include/root/)
target_include_directories(testEcalSeverity PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testEcalSeverity PUBLIC /usr/include/boost/regex/)

add_library(testEcalSeverityLevelAlgo OBJECT 
  stubs/testEcalSeverityLevelAlgo.cc
)

target_include_directories(testEcalSeverityLevelAlgo PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testEcalSeverityLevelAlgo PUBLIC /usr/include/python2.7/)
target_include_directories(testEcalSeverityLevelAlgo PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testEcalSeverityLevelAlgo PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testEcalSeverityLevelAlgo PUBLIC /usr/include/boost/serialization/)
target_include_directories(testEcalSeverityLevelAlgo PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testEcalSeverityLevelAlgo PUBLIC /usr/include/boost/)
target_include_directories(testEcalSeverityLevelAlgo PUBLIC /usr/include/eigen3/)
target_include_directories(testEcalSeverityLevelAlgo PUBLIC /usr/include/boost/python/)
target_include_directories(testEcalSeverityLevelAlgo PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testEcalSeverityLevelAlgo PUBLIC /usr/include/root/)
target_include_directories(testEcalSeverityLevelAlgo PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testEcalSeverityLevelAlgo PUBLIC /usr/include/boost/regex/)


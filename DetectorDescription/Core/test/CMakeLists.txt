add_library(testCore OBJECT 
  testRunner.cpp
  DDIsValid.cppunit.cc
)

target_include_directories(testCore PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCore PUBLIC /usr/include/root/)
target_include_directories(testCore PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCore PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCore PUBLIC /usr/include/boost/)
target_include_directories(testCore PUBLIC /usr/include/boost/regex/)

add_library(testStrVector OBJECT 
  testRunner.cpp
  DDStrVector.cppunit.cc
)

target_include_directories(testStrVector PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testStrVector PUBLIC /usr/include/root/)
target_include_directories(testStrVector PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testStrVector PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testStrVector PUBLIC /usr/include/boost/)
target_include_directories(testStrVector PUBLIC /usr/include/boost/regex/)

add_library(testDDFilter OBJECT 
  DDFilter.cppunit.cc
  testRunner.cpp
)

target_include_directories(testDDFilter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDDFilter PUBLIC /usr/include/root/)
target_include_directories(testDDFilter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDDFilter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDDFilter PUBLIC /usr/include/boost/)
target_include_directories(testDDFilter PUBLIC /usr/include/boost/regex/)

add_library(testShapes OBJECT 
  testShapes.cpp
)

target_include_directories(testShapes PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testShapes PUBLIC /usr/include/root/)
target_include_directories(testShapes PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testShapes PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testShapes PUBLIC /usr/include/boost/)
target_include_directories(testShapes PUBLIC /usr/include/boost/regex/)

add_library(clhepToROOTMath OBJECT 
  clhepToROOTMath.cpp
)

target_include_directories(clhepToROOTMath PUBLIC /usr/include/boost/filesystem/)
target_include_directories(clhepToROOTMath PUBLIC /usr/include/root/)
target_include_directories(clhepToROOTMath PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(clhepToROOTMath PUBLIC /home/teemperor/cms/md5/)
target_include_directories(clhepToROOTMath PUBLIC /usr/include/boost/)
target_include_directories(clhepToROOTMath PUBLIC /usr/include/boost/regex/)

add_library(test_DDRotation OBJECT 
  test_DDRotation.cpp
)

target_include_directories(test_DDRotation PUBLIC /usr/include/boost/filesystem/)
target_include_directories(test_DDRotation PUBLIC /usr/include/root/)
target_include_directories(test_DDRotation PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(test_DDRotation PUBLIC /home/teemperor/cms/md5/)
target_include_directories(test_DDRotation PUBLIC /usr/include/boost/)
target_include_directories(test_DDRotation PUBLIC /usr/include/boost/regex/)


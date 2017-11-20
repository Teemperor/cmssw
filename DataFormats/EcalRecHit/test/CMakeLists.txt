add_library(testEcalRecHit OBJECT 
  testRunner.cpp
  testEcalRecHit.cppunit.cc
  testEcalUncalibratedRecHit.cppunit.cc
)

target_include_directories(testEcalRecHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testEcalRecHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testEcalRecHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testEcalRecHit PUBLIC /usr/include/boost/)
target_include_directories(testEcalRecHit PUBLIC /usr/include/root/)
target_include_directories(testEcalRecHit PUBLIC /usr/include/boost/regex/)


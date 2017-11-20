add_library(testPhysicsToolsCandUtils OBJECT 
  testMakeCompositeCandidate.cc
  testThrust.cc
)

target_include_directories(testPhysicsToolsCandUtils PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testPhysicsToolsCandUtils PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testPhysicsToolsCandUtils PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testPhysicsToolsCandUtils PUBLIC /usr/include/boost/)
target_include_directories(testPhysicsToolsCandUtils PUBLIC /usr/include/root/)
target_include_directories(testPhysicsToolsCandUtils PUBLIC /usr/include/boost/regex/)


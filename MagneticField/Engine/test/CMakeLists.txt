add_library(testMagneticField OBJECT 
  testMagneticField.cc
)

target_include_directories(testMagneticField PUBLIC /usr/include/boost/python/)
target_include_directories(testMagneticField PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testMagneticField PUBLIC /usr/include/python2.7/)
target_include_directories(testMagneticField PUBLIC /usr/include/root/)
target_include_directories(testMagneticField PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testMagneticField PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testMagneticField PUBLIC /usr/include/boost/)
target_include_directories(testMagneticField PUBLIC /usr/include/boost/regex/)

add_library(queryField OBJECT 
  queryField.cc
)

target_include_directories(queryField PUBLIC /usr/include/boost/python/)
target_include_directories(queryField PUBLIC /usr/include/boost/filesystem/)
target_include_directories(queryField PUBLIC /usr/include/python2.7/)
target_include_directories(queryField PUBLIC /usr/include/root/)
target_include_directories(queryField PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(queryField PUBLIC /home/teemperor/cms/md5/)
target_include_directories(queryField PUBLIC /usr/include/boost/)
target_include_directories(queryField PUBLIC /usr/include/boost/regex/)


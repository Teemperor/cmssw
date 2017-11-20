add_library(testDTGeometry OBJECT 
  DTGeometryAnalyzer.cc
)

target_include_directories(testDTGeometry PUBLIC /usr/include/boost/python/)
target_include_directories(testDTGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDTGeometry PUBLIC /usr/include/python2.7/)
target_include_directories(testDTGeometry PUBLIC /usr/include/root/)
target_include_directories(testDTGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDTGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDTGeometry PUBLIC /usr/include/boost/)
target_include_directories(testDTGeometry PUBLIC /usr/include/boost/regex/)

add_library(testDTTopology OBJECT 
  testDTTopology.cpp
)

target_include_directories(testDTTopology PUBLIC /usr/include/boost/python/)
target_include_directories(testDTTopology PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDTTopology PUBLIC /usr/include/python2.7/)
target_include_directories(testDTTopology PUBLIC /usr/include/root/)
target_include_directories(testDTTopology PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDTTopology PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDTTopology PUBLIC /usr/include/boost/)
target_include_directories(testDTTopology PUBLIC /usr/include/boost/regex/)


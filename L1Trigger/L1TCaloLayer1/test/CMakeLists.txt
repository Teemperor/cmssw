add_library(testUCTGeometry OBJECT 
  testUCTGeometry.cpp
)

target_include_directories(testUCTGeometry PUBLIC /usr/include/boost/python/)
target_include_directories(testUCTGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testUCTGeometry PUBLIC /usr/include/python2.7/)
target_include_directories(testUCTGeometry PUBLIC /usr/include/root/)
target_include_directories(testUCTGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testUCTGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testUCTGeometry PUBLIC /usr/include/boost/serialization/)
target_include_directories(testUCTGeometry PUBLIC /usr/include/boost/)
target_include_directories(testUCTGeometry PUBLIC /usr/include/boost/regex/)

add_library(testUCTLayer1 OBJECT 
  testUCTLayer1.cpp
)

target_include_directories(testUCTLayer1 PUBLIC /usr/include/boost/python/)
target_include_directories(testUCTLayer1 PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testUCTLayer1 PUBLIC /usr/include/python2.7/)
target_include_directories(testUCTLayer1 PUBLIC /usr/include/root/)
target_include_directories(testUCTLayer1 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testUCTLayer1 PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testUCTLayer1 PUBLIC /usr/include/boost/serialization/)
target_include_directories(testUCTLayer1 PUBLIC /usr/include/boost/)
target_include_directories(testUCTLayer1 PUBLIC /usr/include/boost/regex/)

add_library(testUCTLayer1HF OBJECT 
  testUCTLayer1HF.cpp
)

target_include_directories(testUCTLayer1HF PUBLIC /usr/include/boost/python/)
target_include_directories(testUCTLayer1HF PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testUCTLayer1HF PUBLIC /usr/include/python2.7/)
target_include_directories(testUCTLayer1HF PUBLIC /usr/include/root/)
target_include_directories(testUCTLayer1HF PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testUCTLayer1HF PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testUCTLayer1HF PUBLIC /usr/include/boost/serialization/)
target_include_directories(testUCTLayer1HF PUBLIC /usr/include/boost/)
target_include_directories(testUCTLayer1HF PUBLIC /usr/include/boost/regex/)


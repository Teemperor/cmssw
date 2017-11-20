add_library(testTSOS OBJECT 
  testTSOS.cpp
)

target_include_directories(testTSOS PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testTSOS PUBLIC /usr/include/root/)
target_include_directories(testTSOS PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testTSOS PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testTSOS PUBLIC /usr/include/boost/)
target_include_directories(testTSOS PUBLIC /usr/include/boost/regex/)

add_library(testProxy OBJECT 
  testProxy.cpp
)

target_include_directories(testProxy PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testProxy PUBLIC /usr/include/root/)
target_include_directories(testProxy PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testProxy PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testProxy PUBLIC /usr/include/boost/)
target_include_directories(testProxy PUBLIC /usr/include/boost/regex/)

add_library(testChurn OBJECT 
  testChurn.cpp
)

target_include_directories(testChurn PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testChurn PUBLIC /usr/include/root/)
target_include_directories(testChurn PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testChurn PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testChurn PUBLIC /usr/include/boost/)
target_include_directories(testChurn PUBLIC /usr/include/boost/regex/)


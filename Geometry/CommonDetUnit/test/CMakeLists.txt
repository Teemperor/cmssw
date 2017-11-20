add_library(testDetSort OBJECT 
  testDetSort.cpp
)

target_include_directories(testDetSort PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDetSort PUBLIC /usr/include/root/)
target_include_directories(testDetSort PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDetSort PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDetSort PUBLIC /usr/include/boost/)
target_include_directories(testDetSort PUBLIC /usr/include/boost/regex/)

add_library(testGeomDetEnumerators OBJECT 
  testGeomDetEnumerators.cpp
)

target_include_directories(testGeomDetEnumerators PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testGeomDetEnumerators PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testGeomDetEnumerators PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testGeomDetEnumerators PUBLIC /usr/include/boost/)
target_include_directories(testGeomDetEnumerators PUBLIC /usr/include/root/)
target_include_directories(testGeomDetEnumerators PUBLIC /usr/include/boost/regex/)


add_library(TestRounding OBJECT 
  testRounding.cpp
)

target_include_directories(TestRounding PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestRounding PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestRounding PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestRounding PUBLIC /usr/include/boost/)
target_include_directories(TestRounding PUBLIC /usr/include/root/)
target_include_directories(TestRounding PUBLIC /usr/include/boost/regex/)


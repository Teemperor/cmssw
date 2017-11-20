add_library(ScalersTest OBJECT 
  ScalersTest.cpp
)

target_include_directories(ScalersTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ScalersTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ScalersTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ScalersTest PUBLIC /usr/include/boost/)
target_include_directories(ScalersTest PUBLIC /usr/include/root/)
target_include_directories(ScalersTest PUBLIC /usr/include/boost/regex/)


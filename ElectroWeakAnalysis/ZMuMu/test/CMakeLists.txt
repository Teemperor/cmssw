add_library(errorMatrix OBJECT 
  errorMatrix.cpp
)

target_include_directories(errorMatrix PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(errorMatrix PUBLIC /home/teemperor/cms/md5/)
target_include_directories(errorMatrix PUBLIC /usr/include/boost/filesystem/)
target_include_directories(errorMatrix PUBLIC /usr/include/boost/)
target_include_directories(errorMatrix PUBLIC /usr/include/root/)
target_include_directories(errorMatrix PUBLIC /usr/include/boost/regex/)


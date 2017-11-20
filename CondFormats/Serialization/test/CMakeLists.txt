add_library(testSerializationEqual OBJECT 
  testSerializationEqual.cpp
)

target_include_directories(testSerializationEqual PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testSerializationEqual PUBLIC /usr/include/root/)
target_include_directories(testSerializationEqual PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testSerializationEqual PUBLIC /usr/include/boost/serialization/)
target_include_directories(testSerializationEqual PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testSerializationEqual PUBLIC /usr/include/boost/)
target_include_directories(testSerializationEqual PUBLIC /usr/include/boost/regex/)


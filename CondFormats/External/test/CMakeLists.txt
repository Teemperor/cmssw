add_library(testSerializationExternal OBJECT 
  testSerializationExternal.cpp
)

target_include_directories(testSerializationExternal PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testSerializationExternal PUBLIC /usr/include/root/)
target_include_directories(testSerializationExternal PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testSerializationExternal PUBLIC /usr/include/boost/serialization/)
target_include_directories(testSerializationExternal PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testSerializationExternal PUBLIC /usr/include/boost/)
target_include_directories(testSerializationExternal PUBLIC /usr/include/boost/regex/)


add_library(testSerializationRPCObjects OBJECT 
  testSerializationRPCObjects.cpp
)

target_include_directories(testSerializationRPCObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testSerializationRPCObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testSerializationRPCObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(testSerializationRPCObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testSerializationRPCObjects PUBLIC /usr/include/boost/)
target_include_directories(testSerializationRPCObjects PUBLIC /usr/include/root/)
target_include_directories(testSerializationRPCObjects PUBLIC /usr/include/boost/regex/)


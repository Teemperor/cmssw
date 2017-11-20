add_library(testSerializationLuminosity OBJECT 
  testSerializationLuminosity.cpp
)

target_include_directories(testSerializationLuminosity PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testSerializationLuminosity PUBLIC /usr/include/boost/serialization/)
target_include_directories(testSerializationLuminosity PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testSerializationLuminosity PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testSerializationLuminosity PUBLIC /usr/include/boost/)
target_include_directories(testSerializationLuminosity PUBLIC /usr/include/root/)
target_include_directories(testSerializationLuminosity PUBLIC /usr/include/boost/regex/)


add_library(testSerializationDQMObjects OBJECT 
  testSerializationDQMObjects.cpp
)

target_include_directories(testSerializationDQMObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testSerializationDQMObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(testSerializationDQMObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testSerializationDQMObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testSerializationDQMObjects PUBLIC /usr/include/boost/)
target_include_directories(testSerializationDQMObjects PUBLIC /usr/include/root/)
target_include_directories(testSerializationDQMObjects PUBLIC /usr/include/boost/regex/)


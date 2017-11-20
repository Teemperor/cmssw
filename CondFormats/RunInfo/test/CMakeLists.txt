add_library(testSerializationRunInfo OBJECT 
  testSerializationRunInfo.cpp
)

target_include_directories(testSerializationRunInfo PUBLIC /usr/include/boost/python/)
target_include_directories(testSerializationRunInfo PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testSerializationRunInfo PUBLIC /usr/include/python2.7/)
target_include_directories(testSerializationRunInfo PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(testSerializationRunInfo PUBLIC /usr/include/root/)
target_include_directories(testSerializationRunInfo PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testSerializationRunInfo PUBLIC /usr/include/boost/serialization/)
target_include_directories(testSerializationRunInfo PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testSerializationRunInfo PUBLIC /usr/include/boost/)
target_include_directories(testSerializationRunInfo PUBLIC /usr/include/boost/regex/)

add_library(fromXML OBJECT 
  fromXML.cpp
)

target_include_directories(fromXML PUBLIC /usr/include/boost/python/)
target_include_directories(fromXML PUBLIC /usr/include/boost/filesystem/)
target_include_directories(fromXML PUBLIC /usr/include/python2.7/)
target_include_directories(fromXML PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(fromXML PUBLIC /usr/include/root/)
target_include_directories(fromXML PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(fromXML PUBLIC /usr/include/boost/serialization/)
target_include_directories(fromXML PUBLIC /home/teemperor/cms/md5/)
target_include_directories(fromXML PUBLIC /usr/include/boost/)
target_include_directories(fromXML PUBLIC /usr/include/boost/regex/)


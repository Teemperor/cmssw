add_library(testEcalShowerContainmentCorrections OBJECT 
  testEcalShowerContaimentCorrections.cc
)

target_include_directories(testEcalShowerContainmentCorrections PUBLIC /usr/include/boost/python/)
target_include_directories(testEcalShowerContainmentCorrections PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testEcalShowerContainmentCorrections PUBLIC /usr/include/python2.7/)
target_include_directories(testEcalShowerContainmentCorrections PUBLIC /usr/include/root/)
target_include_directories(testEcalShowerContainmentCorrections PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testEcalShowerContainmentCorrections PUBLIC /usr/include/boost/serialization/)
target_include_directories(testEcalShowerContainmentCorrections PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testEcalShowerContainmentCorrections PUBLIC /usr/include/boost/)
target_include_directories(testEcalShowerContainmentCorrections PUBLIC /usr/include/boost/regex/)

add_library(testSerializationEcalCorrections OBJECT 
  testSerializationEcalCorrections.cpp
)

target_include_directories(testSerializationEcalCorrections PUBLIC /usr/include/boost/python/)
target_include_directories(testSerializationEcalCorrections PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testSerializationEcalCorrections PUBLIC /usr/include/python2.7/)
target_include_directories(testSerializationEcalCorrections PUBLIC /usr/include/root/)
target_include_directories(testSerializationEcalCorrections PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testSerializationEcalCorrections PUBLIC /usr/include/boost/serialization/)
target_include_directories(testSerializationEcalCorrections PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testSerializationEcalCorrections PUBLIC /usr/include/boost/)
target_include_directories(testSerializationEcalCorrections PUBLIC /usr/include/boost/regex/)


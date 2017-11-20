add_library(testSerializationBTauObjects OBJECT 
  testSerializationBTauObjects.cpp
)

target_include_directories(testSerializationBTauObjects PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testSerializationBTauObjects PUBLIC /usr/include/python2.7/)
target_include_directories(testSerializationBTauObjects PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testSerializationBTauObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(testSerializationBTauObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testSerializationBTauObjects PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testSerializationBTauObjects PUBLIC /usr/include/boost/)
target_include_directories(testSerializationBTauObjects PUBLIC /usr/include/boost/python/)
target_include_directories(testSerializationBTauObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testSerializationBTauObjects PUBLIC /usr/include/root/)
target_include_directories(testSerializationBTauObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testSerializationBTauObjects PUBLIC /usr/include/boost/regex/)

add_library(testBTagEntry OBJECT 
  testBTagEntry.cpp
)

target_include_directories(testBTagEntry PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testBTagEntry PUBLIC /usr/include/python2.7/)
target_include_directories(testBTagEntry PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testBTagEntry PUBLIC /usr/include/boost/serialization/)
target_include_directories(testBTagEntry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testBTagEntry PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testBTagEntry PUBLIC /usr/include/boost/)
target_include_directories(testBTagEntry PUBLIC /usr/include/boost/python/)
target_include_directories(testBTagEntry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testBTagEntry PUBLIC /usr/include/root/)
target_include_directories(testBTagEntry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testBTagEntry PUBLIC /usr/include/boost/regex/)

add_library(testBTagCalibration OBJECT 
  testBTagCalibration.cpp
)

target_include_directories(testBTagCalibration PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testBTagCalibration PUBLIC /usr/include/python2.7/)
target_include_directories(testBTagCalibration PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testBTagCalibration PUBLIC /usr/include/boost/serialization/)
target_include_directories(testBTagCalibration PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testBTagCalibration PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testBTagCalibration PUBLIC /usr/include/boost/)
target_include_directories(testBTagCalibration PUBLIC /usr/include/boost/python/)
target_include_directories(testBTagCalibration PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testBTagCalibration PUBLIC /usr/include/root/)
target_include_directories(testBTagCalibration PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testBTagCalibration PUBLIC /usr/include/boost/regex/)


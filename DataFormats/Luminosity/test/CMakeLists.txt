add_library(testDataFormatsLuminosity OBJECT 
  testRunner.cpp
  lumiInfo_t.cpp
  beamCurrentInfo_t.cpp
  lumiInfoRunHeader_t.cpp
)

target_include_directories(testDataFormatsLuminosity PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDataFormatsLuminosity PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDataFormatsLuminosity PUBLIC /usr/include/boost/serialization/)
target_include_directories(testDataFormatsLuminosity PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDataFormatsLuminosity PUBLIC /usr/include/boost/)
target_include_directories(testDataFormatsLuminosity PUBLIC /usr/include/root/)
target_include_directories(testDataFormatsLuminosity PUBLIC /usr/include/boost/regex/)


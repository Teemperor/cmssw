add_library(test_L1GtDefinitions OBJECT 
  test_L1GtDefinitions.cc
)

target_include_directories(test_L1GtDefinitions PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(test_L1GtDefinitions PUBLIC /home/teemperor/cms/md5/)
target_include_directories(test_L1GtDefinitions PUBLIC /usr/include/boost/serialization/)
target_include_directories(test_L1GtDefinitions PUBLIC /usr/include/boost/filesystem/)
target_include_directories(test_L1GtDefinitions PUBLIC /usr/include/boost/)
target_include_directories(test_L1GtDefinitions PUBLIC /usr/include/root/)
target_include_directories(test_L1GtDefinitions PUBLIC /usr/include/boost/regex/)


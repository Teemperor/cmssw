add_library(test_precomputed_value_sort OBJECT 
  test_precomputed_value_sort.cpp
)

target_include_directories(test_precomputed_value_sort PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(test_precomputed_value_sort PUBLIC /home/teemperor/cms/md5/)
target_include_directories(test_precomputed_value_sort PUBLIC /usr/include/boost/filesystem/)
target_include_directories(test_precomputed_value_sort PUBLIC /usr/include/boost/)
target_include_directories(test_precomputed_value_sort PUBLIC /usr/include/root/)
target_include_directories(test_precomputed_value_sort PUBLIC /usr/include/boost/regex/)

add_library(TestTBB OBJECT 
  TestTBB.cc
)

target_include_directories(TestTBB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestTBB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestTBB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestTBB PUBLIC /usr/include/boost/)
target_include_directories(TestTBB PUBLIC /usr/include/root/)
target_include_directories(TestTBB PUBLIC /usr/include/boost/regex/)


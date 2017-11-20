add_library(test_branchSizes OBJECT 
  branchSizes.cpp
)

target_include_directories(test_branchSizes PUBLIC /usr/include/boost/filesystem/)
target_include_directories(test_branchSizes PUBLIC /usr/include/root/)
target_include_directories(test_branchSizes PUBLIC /usr/include/boost/program_options/)
target_include_directories(test_branchSizes PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(test_branchSizes PUBLIC /home/teemperor/cms/md5/)
target_include_directories(test_branchSizes PUBLIC /usr/include/boost/)
target_include_directories(test_branchSizes PUBLIC /usr/include/boost/regex/)


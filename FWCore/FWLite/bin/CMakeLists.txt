add_library(edmClassStorageSize OBJECT 
  storageSize.cc
)

target_include_directories(edmClassStorageSize PUBLIC /usr/include/boost/filesystem/)
target_include_directories(edmClassStorageSize PUBLIC /usr/include/root/)
target_include_directories(edmClassStorageSize PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(edmClassStorageSize PUBLIC /home/teemperor/cms/md5/)
target_include_directories(edmClassStorageSize PUBLIC /usr/include/boost/program_options/)
target_include_directories(edmClassStorageSize PUBLIC /usr/include/boost/)
target_include_directories(edmClassStorageSize PUBLIC /usr/include/boost/regex/)

add_library(edmBranchStorageSize OBJECT 
  storageSizeForBranch.cc
)

target_include_directories(edmBranchStorageSize PUBLIC /usr/include/boost/filesystem/)
target_include_directories(edmBranchStorageSize PUBLIC /usr/include/root/)
target_include_directories(edmBranchStorageSize PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(edmBranchStorageSize PUBLIC /home/teemperor/cms/md5/)
target_include_directories(edmBranchStorageSize PUBLIC /usr/include/boost/program_options/)
target_include_directories(edmBranchStorageSize PUBLIC /usr/include/boost/)
target_include_directories(edmBranchStorageSize PUBLIC /usr/include/boost/regex/)


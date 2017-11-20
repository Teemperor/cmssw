add_library(FKDTree_t OBJECT 
  FKDTree_t.cpp
)

target_include_directories(FKDTree_t PUBLIC /usr/include/boost/python/)
target_include_directories(FKDTree_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FKDTree_t PUBLIC /usr/include/python2.7/)
target_include_directories(FKDTree_t PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(FKDTree_t PUBLIC /usr/include/root/)
target_include_directories(FKDTree_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FKDTree_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FKDTree_t PUBLIC /usr/include/boost/)
target_include_directories(FKDTree_t PUBLIC /usr/include/boost/regex/)


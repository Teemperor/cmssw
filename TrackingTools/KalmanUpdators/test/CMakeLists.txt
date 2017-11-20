add_library(KFUpdator_t OBJECT 
  KFUpdator_t.cpp
)

target_include_directories(KFUpdator_t PUBLIC /usr/include/boost/python/)
target_include_directories(KFUpdator_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(KFUpdator_t PUBLIC /usr/include/python2.7/)
target_include_directories(KFUpdator_t PUBLIC /usr/include/root/)
target_include_directories(KFUpdator_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(KFUpdator_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(KFUpdator_t PUBLIC /usr/include/boost/serialization/)
target_include_directories(KFUpdator_t PUBLIC /usr/include/boost/)
target_include_directories(KFUpdator_t PUBLIC /usr/include/boost/regex/)


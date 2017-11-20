add_library(HelixPropagators_t OBJECT 
  HelixPropagators_t.cpp
)

target_include_directories(HelixPropagators_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HelixPropagators_t PUBLIC /usr/include/root/)
target_include_directories(HelixPropagators_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HelixPropagators_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HelixPropagators_t PUBLIC /usr/include/boost/)
target_include_directories(HelixPropagators_t PUBLIC /usr/include/boost/regex/)


add_library(Enum_t OBJECT 
  Enum_t.cpp
)

target_include_directories(Enum_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(Enum_t PUBLIC /usr/include/root/)
target_include_directories(Enum_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(Enum_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(Enum_t PUBLIC /usr/include/boost/)
target_include_directories(Enum_t PUBLIC /usr/include/boost/regex/)


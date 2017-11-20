add_library(Singleton_ OBJECT 
  Singleton_.cpp
)

target_include_directories(Singleton_ PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(Singleton_ PUBLIC /home/teemperor/cms/md5/)
target_include_directories(Singleton_ PUBLIC /usr/include/boost/filesystem/)
target_include_directories(Singleton_ PUBLIC /usr/include/boost/)
target_include_directories(Singleton_ PUBLIC /usr/include/root/)
target_include_directories(Singleton_ PUBLIC /usr/include/boost/regex/)


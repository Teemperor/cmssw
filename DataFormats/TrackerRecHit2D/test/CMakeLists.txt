add_library(mayown_t OBJECT 
  mayown_t.cpp
)

target_include_directories(mayown_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(mayown_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(mayown_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(mayown_t PUBLIC /usr/include/boost/)
target_include_directories(mayown_t PUBLIC /usr/include/root/)
target_include_directories(mayown_t PUBLIC /usr/include/boost/regex/)

add_library(testOmniClusterRef OBJECT 
  testOmniClusterRef.cpp
)

target_include_directories(testOmniClusterRef PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testOmniClusterRef PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testOmniClusterRef PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testOmniClusterRef PUBLIC /usr/include/boost/)
target_include_directories(testOmniClusterRef PUBLIC /usr/include/root/)
target_include_directories(testOmniClusterRef PUBLIC /usr/include/boost/regex/)


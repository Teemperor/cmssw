add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoBTagPerformanceDB OBJECT 
  src/BtagPerformance.cc
)

target_include_directories(RecoBTagPerformanceDB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoBTagPerformanceDB PUBLIC /usr/include/root/)
target_include_directories(RecoBTagPerformanceDB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoBTagPerformanceDB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoBTagPerformanceDB PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoBTagPerformanceDB PUBLIC /usr/include/boost/)
target_include_directories(RecoBTagPerformanceDB PUBLIC /usr/include/boost/regex/)


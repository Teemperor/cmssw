add_subdirectory(bin)
add_library(ValidationPerformance OBJECT 
  src/PerfomanceAnalyzer.cc
)

target_include_directories(ValidationPerformance PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationPerformance PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationPerformance PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationPerformance PUBLIC /usr/include/root/)
target_include_directories(ValidationPerformance PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationPerformance PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationPerformance PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationPerformance PUBLIC /usr/include/boost/)
target_include_directories(ValidationPerformance PUBLIC /usr/include/boost/regex/)


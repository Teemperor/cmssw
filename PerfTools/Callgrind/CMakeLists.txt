add_subdirectory(test)
add_subdirectory(plugins)
add_library(PerfToolsCallgrind OBJECT 
  src/ProfilerService.cc
)

target_include_directories(PerfToolsCallgrind PUBLIC /usr/include/boost/python/)
target_include_directories(PerfToolsCallgrind PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PerfToolsCallgrind PUBLIC /usr/include/python2.7/)
target_include_directories(PerfToolsCallgrind PUBLIC /usr/include/root/)
target_include_directories(PerfToolsCallgrind PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PerfToolsCallgrind PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PerfToolsCallgrind PUBLIC /usr/include/boost/)
target_include_directories(PerfToolsCallgrind PUBLIC /usr/include/boost/regex/)


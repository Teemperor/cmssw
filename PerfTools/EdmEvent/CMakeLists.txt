add_subdirectory(bin)
add_subdirectory(test)
add_library(PerfToolsEdmEvent OBJECT 
  src/EdmEventSize.cc
)

target_include_directories(PerfToolsEdmEvent PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PerfToolsEdmEvent PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PerfToolsEdmEvent PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PerfToolsEdmEvent PUBLIC /usr/include/boost/)
target_include_directories(PerfToolsEdmEvent PUBLIC /usr/include/root/)
target_include_directories(PerfToolsEdmEvent PUBLIC /usr/include/boost/regex/)


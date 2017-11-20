add_library(edmEventSize OBJECT 
  edmEventSize.cpp
)

target_include_directories(edmEventSize PUBLIC /usr/include/boost/filesystem/)
target_include_directories(edmEventSize PUBLIC /usr/include/root/)
target_include_directories(edmEventSize PUBLIC /usr/include/boost/program_options/)
target_include_directories(edmEventSize PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(edmEventSize PUBLIC /home/teemperor/cms/md5/)
target_include_directories(edmEventSize PUBLIC /usr/include/boost/)
target_include_directories(edmEventSize PUBLIC /usr/include/boost/regex/)


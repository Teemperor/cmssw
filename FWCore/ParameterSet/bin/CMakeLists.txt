add_library(edmPluginHelp OBJECT 
  edmPluginHelp.cpp
)

target_include_directories(edmPluginHelp PUBLIC /usr/include/boost/filesystem/)
target_include_directories(edmPluginHelp PUBLIC /usr/include/root/)
target_include_directories(edmPluginHelp PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(edmPluginHelp PUBLIC /home/teemperor/cms/md5/)
target_include_directories(edmPluginHelp PUBLIC /usr/include/boost/program_options/)
target_include_directories(edmPluginHelp PUBLIC /usr/include/boost/)
target_include_directories(edmPluginHelp PUBLIC /usr/include/boost/regex/)

add_library(edmWriteConfigs OBJECT 
  edmWriteConfigs.cpp
)

target_include_directories(edmWriteConfigs PUBLIC /usr/include/boost/filesystem/)
target_include_directories(edmWriteConfigs PUBLIC /usr/include/root/)
target_include_directories(edmWriteConfigs PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(edmWriteConfigs PUBLIC /home/teemperor/cms/md5/)
target_include_directories(edmWriteConfigs PUBLIC /usr/include/boost/program_options/)
target_include_directories(edmWriteConfigs PUBLIC /usr/include/boost/)
target_include_directories(edmWriteConfigs PUBLIC /usr/include/boost/regex/)


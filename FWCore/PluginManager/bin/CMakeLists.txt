add_library(edmPluginDump OBJECT 
  dump.cc
)

target_include_directories(edmPluginDump PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(edmPluginDump PUBLIC /home/teemperor/cms/md5/)
target_include_directories(edmPluginDump PUBLIC /usr/include/boost/program_options/)
target_include_directories(edmPluginDump PUBLIC /usr/include/boost/filesystem/)
target_include_directories(edmPluginDump PUBLIC /usr/include/boost/)
target_include_directories(edmPluginDump PUBLIC /usr/include/root/)
target_include_directories(edmPluginDump PUBLIC /usr/include/boost/regex/)

add_library(edmPluginRefresh OBJECT 
  refresh.cc
)

target_include_directories(edmPluginRefresh PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(edmPluginRefresh PUBLIC /home/teemperor/cms/md5/)
target_include_directories(edmPluginRefresh PUBLIC /usr/include/boost/program_options/)
target_include_directories(edmPluginRefresh PUBLIC /usr/include/boost/filesystem/)
target_include_directories(edmPluginRefresh PUBLIC /usr/include/boost/)
target_include_directories(edmPluginRefresh PUBLIC /usr/include/root/)
target_include_directories(edmPluginRefresh PUBLIC /usr/include/boost/regex/)


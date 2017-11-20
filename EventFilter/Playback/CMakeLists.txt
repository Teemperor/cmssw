add_subdirectory(plugins)
add_library(EventFilterPlayback OBJECT 
  src/PlaybackRawDataProvider.cc
)

target_include_directories(EventFilterPlayback PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterPlayback PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterPlayback PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterPlayback PUBLIC /usr/include/root/)
target_include_directories(EventFilterPlayback PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterPlayback PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterPlayback PUBLIC /usr/include/boost/)
target_include_directories(EventFilterPlayback PUBLIC /usr/include/boost/regex/)


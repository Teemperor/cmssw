add_library(EventFilterRctRawToDigiPlugins OBJECT 
  RctRawToDigi.cc
)

target_include_directories(EventFilterRctRawToDigiPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterRctRawToDigiPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterRctRawToDigiPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterRctRawToDigiPlugins PUBLIC /usr/include/root/)
target_include_directories(EventFilterRctRawToDigiPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterRctRawToDigiPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterRctRawToDigiPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterRctRawToDigiPlugins PUBLIC /usr/include/boost/)
target_include_directories(EventFilterRctRawToDigiPlugins PUBLIC /usr/include/boost/regex/)


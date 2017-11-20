add_library(ME0TriggerPlugins OBJECT 
  ME0TriggerProducer.cc
  SealModule.cc
)

target_include_directories(ME0TriggerPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(ME0TriggerPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ME0TriggerPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(ME0TriggerPlugins PUBLIC /usr/include/root/)
target_include_directories(ME0TriggerPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ME0TriggerPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ME0TriggerPlugins PUBLIC /usr/include/boost/)
target_include_directories(ME0TriggerPlugins PUBLIC /usr/include/boost/regex/)


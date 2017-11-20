add_library(DQMServicesClientConfigPlugins OBJECT 
  DQMGenericClient.cc
  SealModule.cc
)

target_include_directories(DQMServicesClientConfigPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(DQMServicesClientConfigPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMServicesClientConfigPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(DQMServicesClientConfigPlugins PUBLIC /usr/include/root/)
target_include_directories(DQMServicesClientConfigPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMServicesClientConfigPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMServicesClientConfigPlugins PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMServicesClientConfigPlugins PUBLIC /usr/include/boost/)
target_include_directories(DQMServicesClientConfigPlugins PUBLIC /usr/include/boost/regex/)


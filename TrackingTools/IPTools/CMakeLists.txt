add_library(TrackingToolsIPTools OBJECT 
  src/IPTools.cc
)

target_include_directories(TrackingToolsIPTools PUBLIC /usr/include/boost/python/)
target_include_directories(TrackingToolsIPTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsIPTools PUBLIC /usr/include/python2.7/)
target_include_directories(TrackingToolsIPTools PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsIPTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsIPTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsIPTools PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsIPTools PUBLIC /usr/include/boost/regex/)


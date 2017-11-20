add_library(EventFilterPhase2TrackerRawToDigiPlugins OBJECT 
  Phase2TrackerDigiProducer.cc
  module.cc
  Phase2TrackerCommissioningDigiProducer.cc
)

target_include_directories(EventFilterPhase2TrackerRawToDigiPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterPhase2TrackerRawToDigiPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterPhase2TrackerRawToDigiPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterPhase2TrackerRawToDigiPlugins PUBLIC /usr/include/root/)
target_include_directories(EventFilterPhase2TrackerRawToDigiPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterPhase2TrackerRawToDigiPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterPhase2TrackerRawToDigiPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterPhase2TrackerRawToDigiPlugins PUBLIC /usr/include/boost/)
target_include_directories(EventFilterPhase2TrackerRawToDigiPlugins PUBLIC /usr/include/boost/regex/)


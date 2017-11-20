add_library(EventFilterRawDataCollector OBJECT 
  src/RawDataCollectorByLabel.cc
  src/SealModule.cc
  src/RawDataSelector.cc
  src/RawDataFEDSelector.cc
)

target_include_directories(EventFilterRawDataCollector PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterRawDataCollector PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterRawDataCollector PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterRawDataCollector PUBLIC /usr/include/root/)
target_include_directories(EventFilterRawDataCollector PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterRawDataCollector PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterRawDataCollector PUBLIC /usr/include/boost/)
target_include_directories(EventFilterRawDataCollector PUBLIC /usr/include/boost/regex/)


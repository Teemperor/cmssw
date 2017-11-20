add_library(EventFilterHcalRawToDigiPlugins OBJECT 
  HcalCalibFEDSelector.cc
  HcalCalibTypeFilter.cc
  HcalDigiToRaw.cc
  HcalEmptyEventFilter.cc
  HcalHistogramRawToDigi.cc
  HcalRawToDigi.cc
  modules.cc
  HcalDigiToRawuHTR.cc
)

target_include_directories(EventFilterHcalRawToDigiPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterHcalRawToDigiPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterHcalRawToDigiPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterHcalRawToDigiPlugins PUBLIC /usr/include/root/)
target_include_directories(EventFilterHcalRawToDigiPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterHcalRawToDigiPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterHcalRawToDigiPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterHcalRawToDigiPlugins PUBLIC /usr/include/boost/)
target_include_directories(EventFilterHcalRawToDigiPlugins PUBLIC /usr/include/boost/regex/)

add_library(EventFilterHcalRawToDigiFiltersPlugins OBJECT 
  HcalLaserEventFiltProducer2012.cc
  HcalLaserHFFilter2012.cc
  HcalLaserHBHEFilter2012.cc
  HcalLaserHBHEHFFilter2012.cc
)

target_include_directories(EventFilterHcalRawToDigiFiltersPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterHcalRawToDigiFiltersPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterHcalRawToDigiFiltersPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterHcalRawToDigiFiltersPlugins PUBLIC /usr/include/root/)
target_include_directories(EventFilterHcalRawToDigiFiltersPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterHcalRawToDigiFiltersPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterHcalRawToDigiFiltersPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterHcalRawToDigiFiltersPlugins PUBLIC /usr/include/boost/)
target_include_directories(EventFilterHcalRawToDigiFiltersPlugins PUBLIC /usr/include/boost/regex/)


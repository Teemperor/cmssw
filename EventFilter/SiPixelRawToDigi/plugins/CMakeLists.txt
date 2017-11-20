add_library(EventFilterSiPixelRawToDigiPlugins OBJECT 
  SealModule.cc
  SiPixelDigiToRaw.cc
  SiPixelRawToDigi.cc
)

target_include_directories(EventFilterSiPixelRawToDigiPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterSiPixelRawToDigiPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterSiPixelRawToDigiPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterSiPixelRawToDigiPlugins PUBLIC /usr/include/root/)
target_include_directories(EventFilterSiPixelRawToDigiPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterSiPixelRawToDigiPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterSiPixelRawToDigiPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterSiPixelRawToDigiPlugins PUBLIC /usr/include/boost/)
target_include_directories(EventFilterSiPixelRawToDigiPlugins PUBLIC /usr/include/boost/regex/)


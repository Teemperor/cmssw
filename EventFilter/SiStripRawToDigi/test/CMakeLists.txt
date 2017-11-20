add_library(testEventFilterSiStripRawToDigiPlugins OBJECT 
  plugins/SiStripDigiValidator.cc
  plugins/module.cc
  plugins/SiStripFEDRawDataAnalyzer.cc
  plugins/SiStripDigiAnalyzer.cc
  plugins/SiStripTrivialClusterSource.cc
  plugins/SiStripModuleTimer.cc
  plugins/SiStripTrivialDigiSource.cc
  plugins/SiStripClusterValidator.cc
)

target_include_directories(testEventFilterSiStripRawToDigiPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(testEventFilterSiStripRawToDigiPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testEventFilterSiStripRawToDigiPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(testEventFilterSiStripRawToDigiPlugins PUBLIC /usr/include/root/)
target_include_directories(testEventFilterSiStripRawToDigiPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testEventFilterSiStripRawToDigiPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testEventFilterSiStripRawToDigiPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(testEventFilterSiStripRawToDigiPlugins PUBLIC /usr/include/boost/)
target_include_directories(testEventFilterSiStripRawToDigiPlugins PUBLIC /usr/include/boost/regex/)


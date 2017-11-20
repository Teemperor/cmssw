add_library(testDataFormatsSiStripCommonPlugins OBJECT 
  plugins/examples_SiStripFecKey.cc
  plugins/test_SiStripKey.cc
  plugins/modules.cc
  plugins/perf_SiStripFecKey.cc
  plugins/test_SiStripNullKey.cc
  plugins/test_Template.cc
  plugins/test_SiStripFedKey.cc
  plugins/test_SiStripFecKey.cc
  plugins/test_SiStripHistoTitle.cc
  plugins/test_SiStripEnumsAndStrings.cc
)

target_include_directories(testDataFormatsSiStripCommonPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(testDataFormatsSiStripCommonPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDataFormatsSiStripCommonPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(testDataFormatsSiStripCommonPlugins PUBLIC /usr/include/root/)
target_include_directories(testDataFormatsSiStripCommonPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDataFormatsSiStripCommonPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDataFormatsSiStripCommonPlugins PUBLIC /usr/include/boost/)
target_include_directories(testDataFormatsSiStripCommonPlugins PUBLIC /usr/include/boost/regex/)


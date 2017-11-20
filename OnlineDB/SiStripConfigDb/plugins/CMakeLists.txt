add_library(OnlineDBSiStripConfigDbPlugins OBJECT 
  module.cc
)

target_include_directories(OnlineDBSiStripConfigDbPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(OnlineDBSiStripConfigDbPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(OnlineDBSiStripConfigDbPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(OnlineDBSiStripConfigDbPlugins PUBLIC /usr/include/root/)
target_include_directories(OnlineDBSiStripConfigDbPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(OnlineDBSiStripConfigDbPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(OnlineDBSiStripConfigDbPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(OnlineDBSiStripConfigDbPlugins PUBLIC /usr/include/boost/)
target_include_directories(OnlineDBSiStripConfigDbPlugins PUBLIC /usr/include/boost/regex/)
target_include_directories(OnlineDBSiStripConfigDbPlugins PUBLIC /home/teemperor/cms/ext/misc/)


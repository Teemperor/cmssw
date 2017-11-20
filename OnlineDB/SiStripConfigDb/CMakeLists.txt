add_subdirectory(test)
add_subdirectory(plugins)
add_library(OnlineDBSiStripConfigDb OBJECT 
  src/SiStripDbParams.cc
  src/SiStripConfigDb.cc
  src/FedConnections.cc
  src/DeviceDescriptions.cc
  src/DcuDetIds.cc
  src/FedDescriptions.cc
  src/AnalysisDescriptions.cc
  src/SiStripPartition.cc
)

target_include_directories(OnlineDBSiStripConfigDb PUBLIC /usr/include/boost/filesystem/)
target_include_directories(OnlineDBSiStripConfigDb PUBLIC /usr/include/root/)
target_include_directories(OnlineDBSiStripConfigDb PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(OnlineDBSiStripConfigDb PUBLIC /home/teemperor/cms/md5/)
target_include_directories(OnlineDBSiStripConfigDb PUBLIC /usr/include/boost/serialization/)
target_include_directories(OnlineDBSiStripConfigDb PUBLIC /usr/include/boost/)
target_include_directories(OnlineDBSiStripConfigDb PUBLIC /usr/include/boost/regex/)
target_include_directories(OnlineDBSiStripConfigDb PUBLIC /home/teemperor/cms/ext/misc/)


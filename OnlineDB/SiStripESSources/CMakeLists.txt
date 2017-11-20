add_subdirectory(test)
add_subdirectory(plugins)
add_library(OnlineDBSiStripESSources OBJECT 
  src/SiStripPedestalsBuilderFromDb.cc
  src/SiStripCondObjBuilderFromDb.cc
  src/SiStripGainBuilderFromDb.cc
  src/SiStripFedCablingBuilderFromDb.cc
  src/SiStripNoiseBuilderFromDb.cc
)

target_include_directories(OnlineDBSiStripESSources PUBLIC /usr/include/python2.7/)
target_include_directories(OnlineDBSiStripESSources PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(OnlineDBSiStripESSources PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(OnlineDBSiStripESSources PUBLIC /home/teemperor/cms/md5/)
target_include_directories(OnlineDBSiStripESSources PUBLIC /usr/include/boost/serialization/)
target_include_directories(OnlineDBSiStripESSources PUBLIC /usr/include/boost/)
target_include_directories(OnlineDBSiStripESSources PUBLIC /usr/include/boost/python/)
target_include_directories(OnlineDBSiStripESSources PUBLIC /usr/include/boost/filesystem/)
target_include_directories(OnlineDBSiStripESSources PUBLIC /usr/include/root/)
target_include_directories(OnlineDBSiStripESSources PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(OnlineDBSiStripESSources PUBLIC /usr/include/boost/regex/)
target_include_directories(OnlineDBSiStripESSources PUBLIC /home/teemperor/cms/ext/misc/)


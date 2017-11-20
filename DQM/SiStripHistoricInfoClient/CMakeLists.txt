add_subdirectory(plugins)
add_library(DQMSiStripHistoricInfoClient OBJECT 
  src/HDQMInspectorConfigTracking.cc
  src/HDQMInspectorConfigSiStrip.cc
)

target_include_directories(DQMSiStripHistoricInfoClient PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMSiStripHistoricInfoClient PUBLIC /usr/include/root/)
target_include_directories(DQMSiStripHistoricInfoClient PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMSiStripHistoricInfoClient PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMSiStripHistoricInfoClient PUBLIC /usr/include/boost/)
target_include_directories(DQMSiStripHistoricInfoClient PUBLIC /usr/include/boost/regex/)


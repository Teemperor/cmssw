add_subdirectory(plugins)
add_library(DQMEcalMonitorDbModule OBJECT 
  src/MonitorElementsDb.cc
  src/DBReaderWorkers.cc
  src/LogicIDTranslation.cc
  src/DBWriterWorkers.cc
  src/MonitorXMLParser.cc
)

target_include_directories(DQMEcalMonitorDbModule PUBLIC /usr/include/python2.7/)
target_include_directories(DQMEcalMonitorDbModule PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(DQMEcalMonitorDbModule PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMEcalMonitorDbModule PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMEcalMonitorDbModule PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMEcalMonitorDbModule PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQMEcalMonitorDbModule PUBLIC /usr/include/boost/)
target_include_directories(DQMEcalMonitorDbModule PUBLIC /usr/include/boost/python/)
target_include_directories(DQMEcalMonitorDbModule PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMEcalMonitorDbModule PUBLIC /usr/include/root/)
target_include_directories(DQMEcalMonitorDbModule PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQMEcalMonitorDbModule PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMEcalMonitorDbModule PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQMEcalMonitorDbModule PUBLIC /usr/include/boost/regex/)


add_subdirectory(test)
add_subdirectory(plugins)
add_library(EventFilterUtilities OBJECT 
  src/DataPoint.cc
  src/FastMonitoringService.cc
  src/DataPointDefinition.cc
  src/FedRawDataInputSource.cc
  src/DirManager.cc
  src/JSONSerializer.cc
  src/crc32c.cc
  src/FileIO.cc
  src/MicroStateServiceClassic.cc
  src/FastMonitor.cc
  src/MicroStateService.cc
  src/EvFDaqDirector.cc
  src/AuxiliaryMakers.cc
  src/json_reader.cpp
  src/json_value.cpp
  src/json_writer.cpp
)

target_include_directories(EventFilterUtilities PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterUtilities PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterUtilities PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterUtilities PUBLIC /usr/include/root/)
target_include_directories(EventFilterUtilities PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterUtilities PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterUtilities PUBLIC /usr/include/boost/)
target_include_directories(EventFilterUtilities PUBLIC /usr/include/boost/regex/)


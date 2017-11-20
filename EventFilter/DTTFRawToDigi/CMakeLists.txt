add_library(EventFilterDTTFRawToDigi OBJECT 
  src/SealModule.cc
  src/DTTFFEDReader.cc
  src/DTTFFEDSim.cc
)

target_include_directories(EventFilterDTTFRawToDigi PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterDTTFRawToDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterDTTFRawToDigi PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterDTTFRawToDigi PUBLIC /usr/include/root/)
target_include_directories(EventFilterDTTFRawToDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterDTTFRawToDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterDTTFRawToDigi PUBLIC /usr/include/boost/)
target_include_directories(EventFilterDTTFRawToDigi PUBLIC /usr/include/boost/regex/)


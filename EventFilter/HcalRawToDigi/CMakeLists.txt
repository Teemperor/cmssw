add_subdirectory(plugins)
add_library(EventFilterHcalRawToDigi OBJECT 
  src/HcalUnpacker.cc
  src/HcalHTRData.cc
  src/AMC13Header.cc
  src/HcalDCCHeader.cc
  src/HcalTTPUnpacker.cc
  src/HcalDTCHeader.cc
  src/HcalUHTRData.cc
  src/HcalFEDList.cc
  src/HcalDataFrameFilter.cc
  src/HcalPacker.cc
)

target_include_directories(EventFilterHcalRawToDigi PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterHcalRawToDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterHcalRawToDigi PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterHcalRawToDigi PUBLIC /usr/include/root/)
target_include_directories(EventFilterHcalRawToDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterHcalRawToDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterHcalRawToDigi PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterHcalRawToDigi PUBLIC /usr/include/boost/)
target_include_directories(EventFilterHcalRawToDigi PUBLIC /usr/include/boost/regex/)


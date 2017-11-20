add_subdirectory(test)
add_subdirectory(plugins)
add_library(EventFilterCTPPSRawToDigi OBJECT 
  src/RawDataUnpacker.cc
  src/RPixErrorChecker.cc
  src/RawToDigiConverter.cc
  src/CTPPSPixelDataFormatter.cc
  src/CounterChecker.cc
  src/SimpleVFATFrameCollection.cc
  src/VFATFrame.cc
  src/VFATFrameCollection.cc
)

target_include_directories(EventFilterCTPPSRawToDigi PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterCTPPSRawToDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterCTPPSRawToDigi PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterCTPPSRawToDigi PUBLIC /usr/include/root/)
target_include_directories(EventFilterCTPPSRawToDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterCTPPSRawToDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterCTPPSRawToDigi PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterCTPPSRawToDigi PUBLIC /usr/include/boost/)
target_include_directories(EventFilterCTPPSRawToDigi PUBLIC /usr/include/boost/regex/)


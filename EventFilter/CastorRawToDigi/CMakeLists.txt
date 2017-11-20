add_subdirectory(plugins)
add_library(EventFilterCastorRawToDigi OBJECT 
  src/CastorPacker.cc
  src/CastorCtdcPacker.cc
  src/CastorMergerData.cc
  src/CastorCtdcUnpacker.cc
  src/CastorCollections.cc
  src/CastorRawCollections.cc
  src/CastorUnpacker.cc
  src/CastorDataFrameFilter.cc
  src/CastorCORData.cc
  src/CastorCTDCHeader.cc
  src/ZdcUnpacker.cc
)

target_include_directories(EventFilterCastorRawToDigi PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterCastorRawToDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterCastorRawToDigi PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterCastorRawToDigi PUBLIC /usr/include/root/)
target_include_directories(EventFilterCastorRawToDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterCastorRawToDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterCastorRawToDigi PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterCastorRawToDigi PUBLIC /usr/include/boost/)
target_include_directories(EventFilterCastorRawToDigi PUBLIC /usr/include/boost/regex/)


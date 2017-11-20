add_subdirectory(test)
add_subdirectory(plugins)
add_library(EventFilterSiPixelRawToDigi OBJECT 
  src/PixelUnpackingRegions.cc
  src/ErrorChecker.cc
  src/PixelDataFormatter.cc
)

target_include_directories(EventFilterSiPixelRawToDigi PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterSiPixelRawToDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterSiPixelRawToDigi PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterSiPixelRawToDigi PUBLIC /usr/include/root/)
target_include_directories(EventFilterSiPixelRawToDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterSiPixelRawToDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterSiPixelRawToDigi PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterSiPixelRawToDigi PUBLIC /usr/include/boost/)
target_include_directories(EventFilterSiPixelRawToDigi PUBLIC /usr/include/boost/regex/)


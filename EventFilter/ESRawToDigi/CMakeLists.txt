add_library(EventFilterESRawToDigi OBJECT 
  src/SealModule.cc
  src/ESRawToDigi.cc
  src/ESUnpacker.cc
)

target_include_directories(EventFilterESRawToDigi PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterESRawToDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterESRawToDigi PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterESRawToDigi PUBLIC /usr/include/root/)
target_include_directories(EventFilterESRawToDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterESRawToDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterESRawToDigi PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterESRawToDigi PUBLIC /usr/include/boost/)
target_include_directories(EventFilterESRawToDigi PUBLIC /usr/include/eigen3/)
target_include_directories(EventFilterESRawToDigi PUBLIC /usr/include/boost/regex/)


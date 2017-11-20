add_subdirectory(plugins)
add_library(EventFilterGctRawToDigi OBJECT 
  src/GctFormatTranslateV35.cc
  src/GctBlockHeader.cc
  src/GctUnpackCollections.cc
  src/GctFormatTranslateV38.cc
  src/GctFormatTranslateMCLegacy.cc
  src/GctFormatTranslateBase.cc
)

target_include_directories(EventFilterGctRawToDigi PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterGctRawToDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterGctRawToDigi PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterGctRawToDigi PUBLIC /usr/include/root/)
target_include_directories(EventFilterGctRawToDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterGctRawToDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterGctRawToDigi PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterGctRawToDigi PUBLIC /usr/include/boost/)
target_include_directories(EventFilterGctRawToDigi PUBLIC /usr/include/boost/regex/)


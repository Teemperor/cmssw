add_library(UtilitiesLStoreAdaptorPlugin OBJECT 
  LStoreStorageMaker.cc
)

target_include_directories(UtilitiesLStoreAdaptorPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(UtilitiesLStoreAdaptorPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(UtilitiesLStoreAdaptorPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(UtilitiesLStoreAdaptorPlugin PUBLIC /usr/include/root/)
target_include_directories(UtilitiesLStoreAdaptorPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(UtilitiesLStoreAdaptorPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(UtilitiesLStoreAdaptorPlugin PUBLIC /usr/include/boost/)
target_include_directories(UtilitiesLStoreAdaptorPlugin PUBLIC /usr/include/boost/regex/)


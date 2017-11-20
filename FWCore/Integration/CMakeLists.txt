add_library(FWCoreIntegration OBJECT 
  src/ESTestData.cc
  src/ESTestRecords.cc
)

target_include_directories(FWCoreIntegration PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreIntegration PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreIntegration PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreIntegration PUBLIC /usr/include/root/)
target_include_directories(FWCoreIntegration PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreIntegration PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreIntegration PUBLIC /usr/include/boost/)
target_include_directories(FWCoreIntegration PUBLIC /usr/include/boost/regex/)


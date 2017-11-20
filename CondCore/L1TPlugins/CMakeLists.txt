add_library(CondCoreL1TPlugins OBJECT 
  src/DTFTRecords.cc
  src/RPCRecords.cc
  src/UpgradeRecords4.cc
  src/UpgradeRecords3.cc
  src/GTRecords2.cc
  src/GMTRecords.cc
  src/UpgradeRecords1.cc
  src/CentralL1Records.cc
  src/L1Scalers.cc
  src/UpgradeRecords2.cc
  src/GTRecords1.cc
  src/RCTRecords.cc
  src/GTRecords3.cc
  src/CSCTFRecords.cc
  src/GCTRecords.cc
)

target_include_directories(CondCoreL1TPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(CondCoreL1TPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondCoreL1TPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondCoreL1TPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondCoreL1TPlugins PUBLIC /usr/include/boost/)
target_include_directories(CondCoreL1TPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(CondCoreL1TPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondCoreL1TPlugins PUBLIC /usr/include/root/)
target_include_directories(CondCoreL1TPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondCoreL1TPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondCoreL1TPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondCoreL1TPlugins PUBLIC /usr/include/boost/regex/)


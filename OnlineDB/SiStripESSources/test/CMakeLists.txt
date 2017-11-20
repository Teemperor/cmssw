add_library(testOnlineDBSiStripESSources OBJECT 
  stubs/SealModule.cc
  stubs/test_FedCablingBuilder.cc
  stubs/test_PedestalsBuilder.cc
  stubs/test_NoiseBuilder.cc
  stubs/testSiStripGainBuilderFromDb.cc
  stubs/test_AnalyzeCabling.cc
)

target_include_directories(testOnlineDBSiStripESSources PUBLIC /usr/include/python2.7/)
target_include_directories(testOnlineDBSiStripESSources PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(testOnlineDBSiStripESSources PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(testOnlineDBSiStripESSources PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testOnlineDBSiStripESSources PUBLIC /usr/include/boost/serialization/)
target_include_directories(testOnlineDBSiStripESSources PUBLIC /usr/include/boost/)
target_include_directories(testOnlineDBSiStripESSources PUBLIC /usr/include/boost/python/)
target_include_directories(testOnlineDBSiStripESSources PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testOnlineDBSiStripESSources PUBLIC /usr/include/root/)
target_include_directories(testOnlineDBSiStripESSources PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testOnlineDBSiStripESSources PUBLIC /usr/include/boost/regex/)
target_include_directories(testOnlineDBSiStripESSources PUBLIC /home/teemperor/cms/ext/misc/)


add_subdirectory(plugins)
add_library(DQMEcalCommon OBJECT 
  src/EcalDQMCommonUtils2.cc
  src/MESetChannel.cc
  src/DQWorker.cc
  src/EcalDQMonitor.cc
  src/MESetTrend.cc
  src/MESetDet0D.cc
  src/MESetDet1D.cc
  src/MESetMulti.cc
  src/MESetEcal.cc
  src/EcalDQMCommonUtils.cc
  src/MESetDet2D.cc
  src/MESetBinningUtils.cc
  src/MESetProjection.cc
  src/MESetUtils.cc
  src/MESet.cc
  src/MESetBinningUtils2.cc
  src/StatusManager.cc
  src/MESetNonObject.cc
)

target_include_directories(DQMEcalCommon PUBLIC /usr/include/boost/python/)
target_include_directories(DQMEcalCommon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMEcalCommon PUBLIC /usr/include/python2.7/)
target_include_directories(DQMEcalCommon PUBLIC /usr/include/root/)
target_include_directories(DQMEcalCommon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMEcalCommon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMEcalCommon PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMEcalCommon PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMEcalCommon PUBLIC /usr/include/boost/)
target_include_directories(DQMEcalCommon PUBLIC /usr/include/boost/regex/)


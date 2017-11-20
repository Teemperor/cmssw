add_subdirectory(test)
add_subdirectory(plugins)
add_library(CalibMuonDTCalibration OBJECT 
  src/DTT0BaseCorrection.cc
  src/DTCalibMuonSelection.cc
  src/DTTTrigCorrectionFactory.cc
  src/DTMeanTimerFitter.cc
  src/DTVDriftPluginFactory.cc
  src/DTTimeBoxFitter.cc
  src/DTT0CorrectionFactory.cc
  src/DTRecHitSegmentResidual.cc
  src/DTResidualFitter.cc
  src/DTVDriftBaseAlgo.cc
  src/DTSegmentSelector.cc
  src/DTTTrigBaseCorrection.cc
  src/DTTMax.cc
)

target_include_directories(CalibMuonDTCalibration PUBLIC /usr/include/python2.7/)
target_include_directories(CalibMuonDTCalibration PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibMuonDTCalibration PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibMuonDTCalibration PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CalibMuonDTCalibration PUBLIC /usr/include/boost/)
target_include_directories(CalibMuonDTCalibration PUBLIC /usr/include/boost/python/)
target_include_directories(CalibMuonDTCalibration PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibMuonDTCalibration PUBLIC /usr/include/root/)
target_include_directories(CalibMuonDTCalibration PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CalibMuonDTCalibration PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibMuonDTCalibration PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CalibMuonDTCalibration PUBLIC /usr/include/boost/regex/)


add_library(CalibMuonCSCCalibrationPlugins OBJECT 
  CSCFakePedestalsConditions.cc
  CSCGasGainCorrectionDBConditions.cc
  SealModule.cc
  CSCGainsConditions.cc
  modules.cc
  CSCIndexerESProducer.cc
  CSCChipSpeedCorrectionDBConditions.cc
  CSCGainsDBConditions.cc
  CSCBadWiresConditions.cc
  CSCFakeDBNoiseMatrix.cc
  CSCFakeDBCrosstalk.cc
  CSCFakeDBGains.cc
  CSCNoiseMatrixDBConditions.cc
  CSCFakeGainsConditions.cc
  CSCCrosstalkConditions.cc
  CSCCrosstalkDBConditions.cc
  CSCBadChambersConditions.cc
  CSCPedestalsDBConditions.cc
  CSCChannelMapperESProducer.cc
  CSCNoiseMatrixConditions.cc
  CSCFakeCrosstalkConditions.cc
  CSCFakeNoiseMatrixConditions.cc
  CSCFakeDBPedestals.cc
  CSCBadStripsConditions.cc
  CSCL1TPParameters.cc
)

target_include_directories(CalibMuonCSCCalibrationPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(CalibMuonCSCCalibrationPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibMuonCSCCalibrationPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(CalibMuonCSCCalibrationPlugins PUBLIC /usr/include/root/)
target_include_directories(CalibMuonCSCCalibrationPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibMuonCSCCalibrationPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibMuonCSCCalibrationPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibMuonCSCCalibrationPlugins PUBLIC /usr/include/boost/)
target_include_directories(CalibMuonCSCCalibrationPlugins PUBLIC /usr/include/boost/regex/)


add_library(CalibMuonDTCalibrationPlugins OBJECT 
  DTTTrigFillWithAverage.cc
  DTT0FillChamberFromDB.cc
  DTResidualCalibration.cc
  DTTTrigResidualCorrection.cc
  SealModule.cc
  DTT0AbsoluteReferenceCorrection.cc
  DTT0WireInChamberReferenceCorrection.cc
  DTTTrigCalibration.cc
  DTNoiseCalibration.cc
  DTVDriftSegment.cc
  DTT0Calibration.cc
  DTT0FillDefaultFromDB.cc
  DTMapGenerator.cc
  DTNoiseComputation.cc
  DTTTrigCorrection.cc
  DTTPDeadWriter.cc
  DTTTrigMatchRPhi.cc
  DTVDriftMeanTimer.cc
  DTTTrigCorrectionFirst.cc
  DTFakeT0ESProducer.cc
  DTTTrigOffsetCalibration.cc
  DTGeometryParserFromDDD.cc
  DTVDriftSegmentCalibration.cc
  DTT0CalibrationNew.cc
  DTT0Correction.cc
  DTT0FEBPathCorrection.cc
  DTT0ChamberReferenceCorrection.cc
  DTTTrigT0SegCorrection.cc
  DTVDriftCalibration.cc
  DTTPAnalyzer.cc
  DTTTrigWriter.cc
  DTTTrigConstantShift.cc
  DTCalibrationMap.cc
  DTVDriftWriter.cc
)

target_include_directories(CalibMuonDTCalibrationPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CalibMuonDTCalibrationPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(CalibMuonDTCalibrationPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CalibMuonDTCalibrationPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibMuonDTCalibrationPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibMuonDTCalibrationPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CalibMuonDTCalibrationPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CalibMuonDTCalibrationPlugins PUBLIC /usr/include/boost/)
target_include_directories(CalibMuonDTCalibrationPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(CalibMuonDTCalibrationPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibMuonDTCalibrationPlugins PUBLIC /usr/include/root/)
target_include_directories(CalibMuonDTCalibrationPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CalibMuonDTCalibrationPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibMuonDTCalibrationPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CalibMuonDTCalibrationPlugins PUBLIC /usr/include/boost/regex/)


add_library(AlignmentCocoaModel OBJECT 
  src/OptOModifiedRhomboidPrism.cc
  src/Entry.cc
  src/ErrorCorrelationMgr.cc
  src/DeviationsFromFileSensor2D.cc
  src/ParameterMgr.cc
  src/OptOMirror.cc
  src/ALILine.cc
  src/OpticalObjectMgr.cc
  src/EntryLengthAffCentre.cc
  src/MeasurementDistancemeter3dim.cc
  src/MeasurementSensor2D.cc
  src/OptOCameraDetector.cc
  src/ALIRmDataFromFile.cc
  src/OptOLens.cc
  src/CocoaDaqReaderRoot.cc
  src/LightRay.cc
  src/OptOTiltmeter.cc
  src/MeasurementTiltmeter.cc
  src/OptORisleyPrism.cc
  src/ErrorCorrelation.cc
  src/OptOXLaser.cc
  src/Model.cc
  src/MeasurementDistancemeter.cc
  src/OptOPlateSplitter.cc
  src/OptOSensor2D.cc
  src/FittedEntriesReader.cc
  src/ALIPlane.cc
  src/MeasurementCOPS.cc
  src/OptOLaser.cc
  src/OptODistancemeter3dim.cc
  src/OptOSource.cc
  src/EntryAngleAffAngles.cc
  src/OptOScreen.cc
  src/CocoaDaqReaderText.cc
  src/OptOOpticalSquare.cc
  src/Measurement.cc
  src/EntryMgr.cc
  src/OptOCOPS.cc
  src/OpticalObject.cc
  src/OptODistancemeter.cc
  src/OptOCubeSplitter.cc
  src/DeviationSensor2D.cc
  src/MeasurementDiffEntry.cc
  src/ALIUnitsTable.cc
  src/OptOPinhole.cc
  src/EntryData.cc
  src/EntryLength.cc
  src/EntryAngle.cc
  src/OptOUserDefined.cc
)

target_include_directories(AlignmentCocoaModel PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentCocoaModel PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentCocoaModel PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentCocoaModel PUBLIC /usr/include/root/)
target_include_directories(AlignmentCocoaModel PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentCocoaModel PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentCocoaModel PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentCocoaModel PUBLIC /usr/include/boost/)
target_include_directories(AlignmentCocoaModel PUBLIC /usr/include/boost/regex/)


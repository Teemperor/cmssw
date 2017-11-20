add_library(CondFormatsAlignmentRecord OBJECT 
  src/EEAlignmentErrorRcd.cc
  src/DTAlignmentErrorRcd.cc
  src/HEAlignmentRcd.cc
  src/EBAlignmentErrorRcd.cc
  src/RPMisalignedAlignmentRecord.cc
  src/HFAlignmentRcd.cc
  src/DTAlignmentRcd.cc
  src/HFAlignmentErrorExtendedRcd.cc
  src/TrackerSurfaceDeformationRcd.cc
  src/CastorAlignmentRcd.cc
  src/TrackerAlignmentErrorExtendedRcd.cc
  src/TrackerAlignmentRcd.cc
  src/CSCAlignmentRcd.cc
  src/CaloTowerAlignmentRcd.cc
  src/TrackerSurveyErrorRcd.cc
  src/HBAlignmentErrorExtendedRcd.cc
  src/HBAlignmentRcd.cc
  src/HFAlignmentErrorRcd.cc
  src/ESAlignmentErrorRcd.cc
  src/TrackerAlignmentErrorRcd.cc
  src/HcalAlignmentErrorExtendedRcd.cc
  src/EcalAlignmentErrorExtendedRcd.cc
  src/HBAlignmentErrorRcd.cc
  src/ZDCAlignmentRcd.cc
  src/CSCAlignmentErrorRcd.cc
  src/DTAlignmentErrorExtendedRcd.cc
  src/GlobalPositionRcd.cc
  src/CSCSurveyRcd.cc
  src/CastorAlignmentErrorRcd.cc
  src/ZDCAlignmentErrorExtendedRcd.cc
  src/TrackerSurveyErrorExtendedRcd.cc
  src/HEAlignmentErrorRcd.cc
  src/ZDCAlignmentErrorRcd.cc
  src/DTSurveyErrorExtendedRcd.cc
  src/HcalAlignmentRcd.cc
  src/HEAlignmentErrorExtendedRcd.cc
  src/CaloTowerAlignmentErrorRcd.cc
  src/EBAlignmentErrorExtendedRcd.cc
  src/CaloTowerAlignmentErrorExtendedRcd.cc
  src/EEAlignmentRcd.cc
  src/RPMeasuredAlignmentRecord.cc
  src/HOAlignmentErrorRcd.cc
  src/TrackerSurveyRcd.cc
  src/HOAlignmentErrorExtendedRcd.cc
  src/HcalAlignmentErrorRcd.cc
  src/DTSurveyErrorRcd.cc
  src/HOAlignmentRcd.cc
  src/EBAlignmentRcd.cc
  src/ESAlignmentErrorExtendedRcd.cc
  src/EEAlignmentErrorExtendedRcd.cc
  src/ESAlignmentRcd.cc
  src/DTSurveyRcd.cc
  src/RPRealAlignmentRecord.cc
  src/CSCAlignmentErrorExtendedRcd.cc
  src/CSCSurveyErrorRcd.cc
  src/CSCSurveyErrorExtendedRcd.cc
  src/CastorAlignmentErrorExtendedRcd.cc
)

target_include_directories(CondFormatsAlignmentRecord PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsAlignmentRecord PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsAlignmentRecord PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsAlignmentRecord PUBLIC /usr/include/root/)
target_include_directories(CondFormatsAlignmentRecord PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsAlignmentRecord PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsAlignmentRecord PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsAlignmentRecord PUBLIC /usr/include/boost/regex/)


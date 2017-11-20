add_library(CalibFormatsHcalObjects OBJECT 
  src/HcalCoderDb.cc
  src/HcalCalibrationWidthsSet.cc
  src/HcalCalibrationWidths.cc
  src/HcalCalibrations.cc
  src/HcalCalibrationsSet.cc
  src/HcalText2DetIdConverter.cc
  src/ES_HcalTPGCoder.cc
  src/HcalNominalCoder.cc
  src/HcalDbService.cc
  src/HcalDbRecord.cc
  src/HcalTPGCoder.cc
  src/HcalTPGRecord.cc
)

target_include_directories(CalibFormatsHcalObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CalibFormatsHcalObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibFormatsHcalObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CalibFormatsHcalObjects PUBLIC /usr/include/root/)
target_include_directories(CalibFormatsHcalObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibFormatsHcalObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibFormatsHcalObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibFormatsHcalObjects PUBLIC /usr/include/boost/)
target_include_directories(CalibFormatsHcalObjects PUBLIC /usr/include/boost/regex/)


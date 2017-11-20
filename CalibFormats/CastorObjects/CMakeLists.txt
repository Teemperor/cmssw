add_library(CalibFormatsCastorObjects OBJECT 
  src/CastorTPGCoder.cc
  src/CastorCalibrationsSet.cc
  src/CastorDbRecord.cc
  src/CastorChannelCoder.cc
  src/CastorText2DetIdConverter.cc
  src/CastorCalibrations.cc
  src/CastorDbService.cc
  src/CastorCoderDB.cc
  src/CastorNominalCoder.cc
  src/QieShape.cc
  src/ES_CastorTPGCoder.cc
  src/CastorCalibrationWidths.cc
  src/CastorCalibrationWidthsSet.cc
  src/CastorTPGRecord.cc
)

target_include_directories(CalibFormatsCastorObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CalibFormatsCastorObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibFormatsCastorObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CalibFormatsCastorObjects PUBLIC /usr/include/root/)
target_include_directories(CalibFormatsCastorObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibFormatsCastorObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibFormatsCastorObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibFormatsCastorObjects PUBLIC /usr/include/boost/)
target_include_directories(CalibFormatsCastorObjects PUBLIC /usr/include/boost/regex/)


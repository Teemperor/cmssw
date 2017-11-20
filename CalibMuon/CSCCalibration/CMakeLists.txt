add_subdirectory(test)
add_subdirectory(plugins)
add_library(CalibMuonCSCCalibration OBJECT 
  src/CSCIndexerBase.cc
  src/CSCChannelMapperPostls1.cc
  src/CSCChannelMapperFactory.cc
  src/CSCConditions.cc
  src/ES_CSCIndexerBase.cc
  src/CSCChannelMapperRecord.cc
  src/ES_CSCChannelMapperBase.cc
  src/CSCIndexerRecord.cc
  src/CSCIndexerPostls1.cc
  src/CSCIndexerFactory.cc
  src/CSCIndexerStartup.cc
  src/CSCChannelMapperStartup.cc
)

target_include_directories(CalibMuonCSCCalibration PUBLIC /usr/include/boost/python/)
target_include_directories(CalibMuonCSCCalibration PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibMuonCSCCalibration PUBLIC /usr/include/python2.7/)
target_include_directories(CalibMuonCSCCalibration PUBLIC /usr/include/root/)
target_include_directories(CalibMuonCSCCalibration PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibMuonCSCCalibration PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibMuonCSCCalibration PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibMuonCSCCalibration PUBLIC /usr/include/boost/)
target_include_directories(CalibMuonCSCCalibration PUBLIC /usr/include/boost/regex/)


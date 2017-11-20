add_subdirectory(test)
add_library(RecoBTagXMLCalibration OBJECT 
  src/CalibrationXML.cc
  src/CalibratedHistogramXML.cc
)

target_include_directories(RecoBTagXMLCalibration PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoBTagXMLCalibration PUBLIC /usr/include/root/)
target_include_directories(RecoBTagXMLCalibration PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoBTagXMLCalibration PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoBTagXMLCalibration PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoBTagXMLCalibration PUBLIC /usr/include/boost/)
target_include_directories(RecoBTagXMLCalibration PUBLIC /usr/include/boost/regex/)


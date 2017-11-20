add_subdirectory(plugins)
add_library(CalibCalorimetryCastorCalib OBJECT 
  src/CastorLedAnalysis.cc
  src/CastorDbXml.cc
  src/CastorPulseShapes.cc
  src/CastorPedestalAnalysis.cc
  src/CastorDbASCIIIO.cc
  src/CastorTimeSlew.cc
  src/CastorAlgoUtils.cc
  src/CastorDbHardcode.cc
  src/CastorPulseContainmentCorrection.cc
)

target_include_directories(CalibCalorimetryCastorCalib PUBLIC /usr/include/boost/python/)
target_include_directories(CalibCalorimetryCastorCalib PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibCalorimetryCastorCalib PUBLIC /usr/include/python2.7/)
target_include_directories(CalibCalorimetryCastorCalib PUBLIC /usr/include/root/)
target_include_directories(CalibCalorimetryCastorCalib PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibCalorimetryCastorCalib PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibCalorimetryCastorCalib PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibCalorimetryCastorCalib PUBLIC /usr/include/boost/)
target_include_directories(CalibCalorimetryCastorCalib PUBLIC /usr/include/boost/regex/)


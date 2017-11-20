add_library(CalibrationHcalConnectivity OBJECT 
  src/HcalCableMapper.cc
)

target_include_directories(CalibrationHcalConnectivity PUBLIC /usr/include/boost/python/)
target_include_directories(CalibrationHcalConnectivity PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibrationHcalConnectivity PUBLIC /usr/include/python2.7/)
target_include_directories(CalibrationHcalConnectivity PUBLIC /usr/include/root/)
target_include_directories(CalibrationHcalConnectivity PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibrationHcalConnectivity PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibrationHcalConnectivity PUBLIC /usr/include/boost/)
target_include_directories(CalibrationHcalConnectivity PUBLIC /usr/include/boost/regex/)


add_library(CalibCalorimetryHcalPlugins OBJECT 
  src/SealModule.cc
  src/HcalHardcodeCalibrations.cc
  src/HcalTextCalibrations.cc
  src/HBHEDarkeningEP.cc
  src/HcalDbProducer.cc
)

target_include_directories(CalibCalorimetryHcalPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(CalibCalorimetryHcalPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibCalorimetryHcalPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(CalibCalorimetryHcalPlugins PUBLIC /usr/include/root/)
target_include_directories(CalibCalorimetryHcalPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibCalorimetryHcalPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibCalorimetryHcalPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibCalorimetryHcalPlugins PUBLIC /usr/include/boost/)
target_include_directories(CalibCalorimetryHcalPlugins PUBLIC /usr/include/boost/regex/)


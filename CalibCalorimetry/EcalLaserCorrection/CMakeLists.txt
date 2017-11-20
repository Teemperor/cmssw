add_subdirectory(test)
add_subdirectory(plugins)
add_library(CalibCalorimetryEcalLaserCorrection OBJECT 
  src/EcalLaserDbRecord.cc
  src/EcalLaserDbService.cc
)

target_include_directories(CalibCalorimetryEcalLaserCorrection PUBLIC /usr/include/boost/python/)
target_include_directories(CalibCalorimetryEcalLaserCorrection PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibCalorimetryEcalLaserCorrection PUBLIC /usr/include/python2.7/)
target_include_directories(CalibCalorimetryEcalLaserCorrection PUBLIC /usr/include/root/)
target_include_directories(CalibCalorimetryEcalLaserCorrection PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibCalorimetryEcalLaserCorrection PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibCalorimetryEcalLaserCorrection PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibCalorimetryEcalLaserCorrection PUBLIC /usr/include/boost/)
target_include_directories(CalibCalorimetryEcalLaserCorrection PUBLIC /usr/include/boost/regex/)


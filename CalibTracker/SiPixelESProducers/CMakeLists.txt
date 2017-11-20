add_subdirectory(test)
add_subdirectory(plugins)
add_library(CalibTrackerSiPixelESProducers OBJECT 
  src/SiPixelDetInfoFileReader.cc
  src/SiPixelGainCalibrationOfflineSimService.cc
  src/SiPixelCPEGenericDBErrorParametrization.cc
  src/SiPixelGainCalibrationService.cc
  src/SiPixelGainCalibrationForHLTSimService.cc
  src/SiPixelGainCalibrationForHLTService.cc
  src/SiPixelGainCalibrationOfflineService.cc
)

target_include_directories(CalibTrackerSiPixelESProducers PUBLIC /usr/include/boost/python/)
target_include_directories(CalibTrackerSiPixelESProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibTrackerSiPixelESProducers PUBLIC /usr/include/python2.7/)
target_include_directories(CalibTrackerSiPixelESProducers PUBLIC /usr/include/root/)
target_include_directories(CalibTrackerSiPixelESProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibTrackerSiPixelESProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibTrackerSiPixelESProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibTrackerSiPixelESProducers PUBLIC /usr/include/boost/)
target_include_directories(CalibTrackerSiPixelESProducers PUBLIC /usr/include/boost/regex/)


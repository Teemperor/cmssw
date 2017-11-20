add_library(CalibTrackerSiPixelESProducersPlugins OBJECT 
  SiPixelDetInfoFileWriter.cc
  SiPixelFakeLorentzAngleESSource.cc
  SiPixelQualityESProducer.cc
  SealModules.cc
  SiPixelFakeGainForHLTESSource.cc
  SiPixelFakeGainOfflineESSource.cc
  SiPixelGenErrorDBObjectESProducer.cc
  SiPixelFakeCPEGenericErrorParmESSource.cc
  SiPixelFakeQualityESSource.cc
  SiPixelTemplateDBObjectESProducer.cc
  SiPixelFakeGenErrorDBObjectESSource.cc
  SiPixelFakeTemplateDBObjectESSource.cc
  SiPixelFakeGainESSource.cc
)

target_include_directories(CalibTrackerSiPixelESProducersPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(CalibTrackerSiPixelESProducersPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibTrackerSiPixelESProducersPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(CalibTrackerSiPixelESProducersPlugins PUBLIC /usr/include/root/)
target_include_directories(CalibTrackerSiPixelESProducersPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibTrackerSiPixelESProducersPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibTrackerSiPixelESProducersPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibTrackerSiPixelESProducersPlugins PUBLIC /usr/include/boost/)
target_include_directories(CalibTrackerSiPixelESProducersPlugins PUBLIC /usr/include/boost/regex/)


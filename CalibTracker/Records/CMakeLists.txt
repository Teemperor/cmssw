add_library(CalibTrackerRecords OBJECT 
  src/SiPixel2DTemplateDBObjectESProducerRcd.cc
  src/SiStripDependentRecords.cc
  src/SiPixelGenErrorDBObjectESProducerRcd.cc
  src/SiPixelTemplateDBObjectESProducerRcd.cc
)

target_include_directories(CalibTrackerRecords PUBLIC /usr/include/boost/python/)
target_include_directories(CalibTrackerRecords PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibTrackerRecords PUBLIC /usr/include/python2.7/)
target_include_directories(CalibTrackerRecords PUBLIC /usr/include/root/)
target_include_directories(CalibTrackerRecords PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibTrackerRecords PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibTrackerRecords PUBLIC /usr/include/boost/)
target_include_directories(CalibTrackerRecords PUBLIC /usr/include/boost/regex/)


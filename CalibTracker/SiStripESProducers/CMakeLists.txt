add_subdirectory(test)
add_subdirectory(plugins)
add_library(CalibTrackerSiStripESProducers OBJECT 
  src/SiStripHashedDetIdESProducer.cc
  src/SiStripNoiseESSource.cc
  src/SiStripGainESSource.cc
  src/Phase2TrackerCablingESProducer.cc
  src/SiStripFedCablingESProducer.cc
  src/SiStripPedestalsESSource.cc
)

target_include_directories(CalibTrackerSiStripESProducers PUBLIC /usr/include/boost/python/)
target_include_directories(CalibTrackerSiStripESProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibTrackerSiStripESProducers PUBLIC /usr/include/python2.7/)
target_include_directories(CalibTrackerSiStripESProducers PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(CalibTrackerSiStripESProducers PUBLIC /usr/include/root/)
target_include_directories(CalibTrackerSiStripESProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibTrackerSiStripESProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibTrackerSiStripESProducers PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(CalibTrackerSiStripESProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibTrackerSiStripESProducers PUBLIC /usr/include/boost/)
target_include_directories(CalibTrackerSiStripESProducers PUBLIC /usr/include/boost/regex/)


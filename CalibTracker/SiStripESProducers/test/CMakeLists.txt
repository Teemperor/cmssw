add_library(testCalibTrackerSiStripESProducers OBJECT 
  testSiStripQualityESProducer.cc
  SealModules.cc
  CheckPhase2Cabling.cc
)

target_include_directories(testCalibTrackerSiStripESProducers PUBLIC /usr/include/boost/python/)
target_include_directories(testCalibTrackerSiStripESProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCalibTrackerSiStripESProducers PUBLIC /usr/include/python2.7/)
target_include_directories(testCalibTrackerSiStripESProducers PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(testCalibTrackerSiStripESProducers PUBLIC /usr/include/root/)
target_include_directories(testCalibTrackerSiStripESProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCalibTrackerSiStripESProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCalibTrackerSiStripESProducers PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(testCalibTrackerSiStripESProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(testCalibTrackerSiStripESProducers PUBLIC /usr/include/boost/)
target_include_directories(testCalibTrackerSiStripESProducers PUBLIC /usr/include/boost/regex/)


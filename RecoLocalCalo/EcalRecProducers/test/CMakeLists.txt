add_library(testEcalLocalReco OBJECT 
  EcalLocalRecoTask.cc
)

target_include_directories(testEcalLocalReco PUBLIC /usr/include/boost/python/)
target_include_directories(testEcalLocalReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testEcalLocalReco PUBLIC /usr/include/python2.7/)
target_include_directories(testEcalLocalReco PUBLIC /usr/include/root/)
target_include_directories(testEcalLocalReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testEcalLocalReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testEcalLocalReco PUBLIC /usr/include/boost/serialization/)
target_include_directories(testEcalLocalReco PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(testEcalLocalReco PUBLIC /usr/include/boost/)
target_include_directories(testEcalLocalReco PUBLIC /usr/include/boost/regex/)

add_library(EcalBasicUncalibRecHitFilter OBJECT 
  stubs/EcalBasicUncalibRecHitFilter.cc
)

target_include_directories(EcalBasicUncalibRecHitFilter PUBLIC /usr/include/boost/python/)
target_include_directories(EcalBasicUncalibRecHitFilter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EcalBasicUncalibRecHitFilter PUBLIC /usr/include/python2.7/)
target_include_directories(EcalBasicUncalibRecHitFilter PUBLIC /usr/include/root/)
target_include_directories(EcalBasicUncalibRecHitFilter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EcalBasicUncalibRecHitFilter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EcalBasicUncalibRecHitFilter PUBLIC /usr/include/boost/serialization/)
target_include_directories(EcalBasicUncalibRecHitFilter PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(EcalBasicUncalibRecHitFilter PUBLIC /usr/include/boost/)
target_include_directories(EcalBasicUncalibRecHitFilter PUBLIC /usr/include/boost/regex/)

add_library(testEcalCompactTrigPrimProducer OBJECT 
  EcalCompactTrigPrimProducerTest.cc
)

target_include_directories(testEcalCompactTrigPrimProducer PUBLIC /usr/include/boost/python/)
target_include_directories(testEcalCompactTrigPrimProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testEcalCompactTrigPrimProducer PUBLIC /usr/include/python2.7/)
target_include_directories(testEcalCompactTrigPrimProducer PUBLIC /usr/include/root/)
target_include_directories(testEcalCompactTrigPrimProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testEcalCompactTrigPrimProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testEcalCompactTrigPrimProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(testEcalCompactTrigPrimProducer PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(testEcalCompactTrigPrimProducer PUBLIC /usr/include/boost/)
target_include_directories(testEcalCompactTrigPrimProducer PUBLIC /usr/include/boost/regex/)

add_library(testEcalSampleMaskRecordESProducer OBJECT 
  stubs/EcalSampleMaskRecordESProducer.cc
)

target_include_directories(testEcalSampleMaskRecordESProducer PUBLIC /usr/include/boost/python/)
target_include_directories(testEcalSampleMaskRecordESProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testEcalSampleMaskRecordESProducer PUBLIC /usr/include/python2.7/)
target_include_directories(testEcalSampleMaskRecordESProducer PUBLIC /usr/include/root/)
target_include_directories(testEcalSampleMaskRecordESProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testEcalSampleMaskRecordESProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testEcalSampleMaskRecordESProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(testEcalSampleMaskRecordESProducer PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(testEcalSampleMaskRecordESProducer PUBLIC /usr/include/boost/)
target_include_directories(testEcalSampleMaskRecordESProducer PUBLIC /usr/include/boost/regex/)

add_library(testEcalRecHitProducersPlugins OBJECT 
  plugins/EcalRecHitDump.cc
  plugins/EcalUncalibRecHitDump.cc
)

target_include_directories(testEcalRecHitProducersPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(testEcalRecHitProducersPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testEcalRecHitProducersPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(testEcalRecHitProducersPlugins PUBLIC /usr/include/root/)
target_include_directories(testEcalRecHitProducersPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testEcalRecHitProducersPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testEcalRecHitProducersPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(testEcalRecHitProducersPlugins PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(testEcalRecHitProducersPlugins PUBLIC /usr/include/boost/)
target_include_directories(testEcalRecHitProducersPlugins PUBLIC /usr/include/boost/regex/)


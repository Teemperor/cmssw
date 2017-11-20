add_library(testL1TriggerL1THGCal OBJECT 
  HGCalTriggerBestChoiceTester.cc
  HGCalTriggerBestChoiceTriggerCellTester.cc
  HGCalTriggerGeomTester.cc
  HGCalTriggerBestChoiceMonitor.cc
  HGCalTriggerThresholdTriggerCellTester.cc
)

target_include_directories(testL1TriggerL1THGCal PUBLIC /usr/include/boost/python/)
target_include_directories(testL1TriggerL1THGCal PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testL1TriggerL1THGCal PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testL1TriggerL1THGCal PUBLIC /usr/include/python2.7/)
target_include_directories(testL1TriggerL1THGCal PUBLIC /usr/include/root/)
target_include_directories(testL1TriggerL1THGCal PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testL1TriggerL1THGCal PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testL1TriggerL1THGCal PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testL1TriggerL1THGCal PUBLIC /usr/include/boost/serialization/)
target_include_directories(testL1TriggerL1THGCal PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testL1TriggerL1THGCal PUBLIC /usr/include/boost/)
target_include_directories(testL1TriggerL1THGCal PUBLIC /usr/include/boost/regex/)

add_library(TestBestChoiceCodec OBJECT 
  unittest_bestchoicecodec.cc
  testRunner.cc
)

target_include_directories(TestBestChoiceCodec PUBLIC /usr/include/boost/python/)
target_include_directories(TestBestChoiceCodec PUBLIC /usr/include/boost/iostreams/)
target_include_directories(TestBestChoiceCodec PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestBestChoiceCodec PUBLIC /usr/include/python2.7/)
target_include_directories(TestBestChoiceCodec PUBLIC /usr/include/root/)
target_include_directories(TestBestChoiceCodec PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(TestBestChoiceCodec PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestBestChoiceCodec PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestBestChoiceCodec PUBLIC /usr/include/boost/serialization/)
target_include_directories(TestBestChoiceCodec PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(TestBestChoiceCodec PUBLIC /usr/include/boost/)
target_include_directories(TestBestChoiceCodec PUBLIC /usr/include/boost/regex/)


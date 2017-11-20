add_subdirectory(plugins)
add_library(RecoTBCaloHcalTBObjectUnpacker OBJECT 
  src/HcalTBTriggerDataUnpacker.cc
  src/HcalTBSourcePositionDataUnpacker.cc
  src/HcalTBSlowDataUnpacker.cc
  src/HcalTBTDCUnpacker.cc
  src/HcalTBQADCUnpacker.cc
)

target_include_directories(RecoTBCaloHcalTBObjectUnpacker PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTBCaloHcalTBObjectUnpacker PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTBCaloHcalTBObjectUnpacker PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTBCaloHcalTBObjectUnpacker PUBLIC /usr/include/root/)
target_include_directories(RecoTBCaloHcalTBObjectUnpacker PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTBCaloHcalTBObjectUnpacker PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTBCaloHcalTBObjectUnpacker PUBLIC /usr/include/boost/)
target_include_directories(RecoTBCaloHcalTBObjectUnpacker PUBLIC /usr/include/boost/regex/)


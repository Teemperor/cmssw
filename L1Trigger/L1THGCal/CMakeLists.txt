add_subdirectory(test)
add_subdirectory(plugins)
add_library(L1TriggerL1THGCal OBJECT 
  src/HGCalTriggerFECodecBase.cc
  src/HGCalTriggerBackendAlgorithmBase.cc
  src/HGCalTriggerGeometryBase.cc
  src/HGCalTriggerBackendProcessor.cc
  src/HGCalTriggerNtupleBase.cc
  src/HGCalTriggerGeometryGenericMapping.cc
  src/fe_codecs/HGCalTriggerCellBestChoiceCodecImpl.cc
  src/fe_codecs/HGCalTriggerCellThresholdCodecImpl.cc
  src/fe_codecs/HGCalBestChoiceCodecImpl.cc
  src/fe_codecs/HGCal64BitRandomCodecImpl.cc
  src/be_algorithms/HGCalClusteringImpl.cc
  src/be_algorithms/HGCalMulticlusteringImpl.cc
  src/be_algorithms/HGCalTriggerCellCalibration.cc
)

target_include_directories(L1TriggerL1THGCal PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerL1THGCal PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerL1THGCal PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerL1THGCal PUBLIC /usr/include/root/)
target_include_directories(L1TriggerL1THGCal PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerL1THGCal PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerL1THGCal PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerL1THGCal PUBLIC /usr/include/boost/regex/)


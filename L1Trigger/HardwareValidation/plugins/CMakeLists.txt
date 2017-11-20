add_library(L1TriggerHardwareValidationPlugins OBJECT 
  SealModule.cc
  L1DummyProducer.cc
  L1DEFilter.cc
  L1EmulBias.cc
)

target_include_directories(L1TriggerHardwareValidationPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerHardwareValidationPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerHardwareValidationPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerHardwareValidationPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerHardwareValidationPlugins PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerHardwareValidationPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerHardwareValidationPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerHardwareValidationPlugins PUBLIC /usr/include/root/)
target_include_directories(L1TriggerHardwareValidationPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerHardwareValidationPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerHardwareValidationPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerHardwareValidationPlugins PUBLIC /usr/include/boost/regex/)


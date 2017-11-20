add_library(L1TriggerConfigDTTPGConfig OBJECT 
  src/DTConfigBti.cc
  src/DTConfigPedestals.cc
  src/DTConfigTraco.cc
  src/DTConfigTrigUnit.cc
  src/DTConfigManager.cc
  src/DTConfigSectColl.cc
  src/DTConfigManagerRcd.cc
  src/T_EventSetup_DTConfigManager.cc
  src/DTConfigTSPhi.cc
  src/DTConfigLUTs.cc
  src/DTConfigTSTheta.cc
)

target_include_directories(L1TriggerConfigDTTPGConfig PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerConfigDTTPGConfig PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerConfigDTTPGConfig PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerConfigDTTPGConfig PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerConfigDTTPGConfig PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerConfigDTTPGConfig PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerConfigDTTPGConfig PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerConfigDTTPGConfig PUBLIC /usr/include/root/)
target_include_directories(L1TriggerConfigDTTPGConfig PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerConfigDTTPGConfig PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerConfigDTTPGConfig PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerConfigDTTPGConfig PUBLIC /usr/include/boost/regex/)


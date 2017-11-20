add_library(L1TriggerDTTriggerServerPhi OBJECT 
  src/DTTSCand.cc
  src/DTTSM.cc
  src/DTChambPhSegm.cc
  src/DTTSS.cc
  src/DTTSPhi.cc
)

target_include_directories(L1TriggerDTTriggerServerPhi PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerDTTriggerServerPhi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerDTTriggerServerPhi PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerDTTriggerServerPhi PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerDTTriggerServerPhi PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerDTTriggerServerPhi PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerDTTriggerServerPhi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerDTTriggerServerPhi PUBLIC /usr/include/root/)
target_include_directories(L1TriggerDTTriggerServerPhi PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerDTTriggerServerPhi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerDTTriggerServerPhi PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerDTTriggerServerPhi PUBLIC /usr/include/boost/regex/)


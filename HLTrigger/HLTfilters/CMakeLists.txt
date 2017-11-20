add_library(HLTriggerHLTfilters OBJECT 
  src/HLTBool.cc
  src/SealModule.cc
  src/HLTLevel1GTSeed.cc
  src/TriggerResultsFilterFromDB.cc
  src/HLTHighLevel.cc
  src/HLTLevel1Activity.cc
  src/HLTSinglet.cc
  src/HLTL1TSeed.cc
  src/HLTDoublet.cc
  src/TestBXVectorRefProducer.cc
  src/HLTDoubletDZ.cc
  src/HLTLevel1Pattern.cc
  src/HLTSummaryFilter.cc
  src/HLTBeamModeFilter.cc
  src/TriggerResultsFilter.cc
  src/HLTSmartSinglet.cc
  src/HLTGlobalSums.cc
  src/HLTFiltCand.cc
)

target_include_directories(HLTriggerHLTfilters PUBLIC /usr/include/boost/iostreams/)
target_include_directories(HLTriggerHLTfilters PUBLIC /usr/include/python2.7/)
target_include_directories(HLTriggerHLTfilters PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(HLTriggerHLTfilters PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HLTriggerHLTfilters PUBLIC /usr/include/boost/serialization/)
target_include_directories(HLTriggerHLTfilters PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(HLTriggerHLTfilters PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HLTriggerHLTfilters PUBLIC /usr/include/boost/)
target_include_directories(HLTriggerHLTfilters PUBLIC /usr/include/boost/python/)
target_include_directories(HLTriggerHLTfilters PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HLTriggerHLTfilters PUBLIC /usr/include/root/)
target_include_directories(HLTriggerHLTfilters PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(HLTriggerHLTfilters PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HLTriggerHLTfilters PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(HLTriggerHLTfilters PUBLIC /usr/include/boost/regex/)


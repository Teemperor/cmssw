add_subdirectory(test)
add_library(HLTriggerMuon OBJECT 
  src/HLTMuonTrackMassFilter.cc
  src/HLTMuonTrkL1TFilter.cc
  src/HLTMuonPFIsoFilter.cc
  src/SealModule.cc
  src/HLTL1MuonNoL2Selector.cc
  src/HLTMuonL1RegionalFilter.cc
  src/HLTMuonDimuonL2FromL1TFilter.cc
  src/HLTL1MuonSelector.cc
  src/HLTMuonDimuonL3Filter.cc
  src/HLTMuonL1TtoL3TkPreFilter.cc
  src/HLTMuonIsoFilter.cc
  src/HLTScoutingMuonProducer.cc
  src/HLTMuonTrkFilter.cc
  src/HLTMuonDimuonL2Filter.cc
  src/HLTL1TMuonSelector.cc
  src/HLTMuonL2PreFilter.cc
  src/HLTMuonL1TFilter.cc
  src/HLTMuonL1Filter.cc
  src/HLTMuonL1TRegionalFilter.cc
  src/HLTMuonL3PreFilter.cc
  src/HLTMuonTrimuonL3Filter.cc
  src/HLTMuonL1toL3TkPreFilter.cc
  src/HLTDiMuonGlbTrkFilter.cc
  src/HLTMuonL2FromL1TPreFilter.cc
)

target_include_directories(HLTriggerMuon PUBLIC /usr/include/boost/iostreams/)
target_include_directories(HLTriggerMuon PUBLIC /usr/include/python2.7/)
target_include_directories(HLTriggerMuon PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(HLTriggerMuon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HLTriggerMuon PUBLIC /usr/include/boost/serialization/)
target_include_directories(HLTriggerMuon PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(HLTriggerMuon PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HLTriggerMuon PUBLIC /usr/include/boost/)
target_include_directories(HLTriggerMuon PUBLIC /usr/include/boost/python/)
target_include_directories(HLTriggerMuon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HLTriggerMuon PUBLIC /usr/include/root/)
target_include_directories(HLTriggerMuon PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(HLTriggerMuon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HLTriggerMuon PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(HLTriggerMuon PUBLIC /usr/include/boost/regex/)


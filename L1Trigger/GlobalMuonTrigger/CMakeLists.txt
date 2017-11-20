add_subdirectory(test)
add_library(L1TriggerGlobalMuonTrigger OBJECT 
  src/SealModule.cc
  src/L1MuGMTMIAUPhiPro2LUT.cc
  src/L1MuGMTLFPhiProEtaConvLUT.cc
  src/L1MuGMTLFSortRankEtaPhiLUT.cc
  src/L1MuGMTMatcher.cc
  src/L1MuGMTLFMergeRankCombineLUT.cc
  src/L1MuGMTSorter.cc
  src/L1MuGMTMIAUPhiPro1LUT.cc
  src/L1MuGMTLFCOUDeltaEtaLUT.cc
  src/L1MuGMTLFOvlEtaConvLUT.cc
  src/L1MuGMTLUTHelpers.cc
  src/L1MuGMTLFMergeRankPtQLUT.cc
  src/L1MuGMTLFSortRankPtQLUT.cc
  src/L1MuGMTInputEvent.cc
  src/L1MuGMTLFMergeRankEtaPhiLUT.cc
  src/L1MuGMTSortRankUnit.cc
  src/L1MuGMTConfig.cc
  src/L1MuGMTLUT.cc
  src/L1MuGMTEtaLUT.cc
  src/L1MuGMTLFSortRankEtaQLUT.cc
  src/L1MuGlobalMuonTrigger.cc
  src/L1MuGMTLFEtaConvLUT.cc
  src/L1MuGMTMIAUEtaConvLUT.cc
  src/L1MuGMTLFSortRankCombineLUT.cc
  src/L1MuGMTDebugBlock.cc
  src/L1MuGMTLFMergeRankEtaQLUT.cc
  src/L1MuGMTHWFileReader.cc
  src/L1MuGMTCancelOutUnit.cc
  src/L1MuGMTPhiLUT.cc
  src/L1MuGMTMipIsoAU.cc
  src/L1MuGMTLFDisableHotLUT.cc
  src/L1MuGMTPSB.cc
  src/L1MuGMTLFMatchQualLUT.cc
  src/L1MuGMTMerger.cc
  src/L1MuGMTLFPhiProLUT.cc
  src/L1MuGMTPhiProjectionUnit.cc
  src/L1MuGMTEtaProjectionUnit.cc
  src/L1MuGMTLFDeltaEtaLUT.cc
  src/L1MuGMTMIAUEtaProLUT.cc
  src/L1MuGMTLFPtMixLUT.cc
)

target_include_directories(L1TriggerGlobalMuonTrigger PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerGlobalMuonTrigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerGlobalMuonTrigger PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerGlobalMuonTrigger PUBLIC /usr/include/root/)
target_include_directories(L1TriggerGlobalMuonTrigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerGlobalMuonTrigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerGlobalMuonTrigger PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerGlobalMuonTrigger PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerGlobalMuonTrigger PUBLIC /usr/include/boost/regex/)


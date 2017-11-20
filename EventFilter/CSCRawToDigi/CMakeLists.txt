add_subdirectory(test)
add_subdirectory(plugins)
add_library(EventFilterCSCRawToDigi OBJECT 
  src/CSCTMBHeader.cc
  src/CSCDigiToRaw.cc
  src/CSCTMBMiniScope.cc
  src/CSCAnodeData2006.cc
  src/CSCDDUEventData.cc
  src/CSCDMBHeader2013.cc
  src/CSCDMBTrailer.cc
  src/CSCAnodeData.cc
  src/bitset_append.cc
  src/CSCRPCData.cc
  src/CSCALCTHeader.cc
  src/CSCDDUHeader.cc
  src/CSCCLCTData.cc
  src/CSCDDUDataItr.cc
  src/CSCDCCHeader.cc
  src/CSCTMBBlockedCFEB.cc
  src/CSCChamberDataItr.cc
  src/CSCALCTHeader2006.cc
  src/CSCTMBHeader2007.cc
  src/CSCTMBData.cc
  src/CSCDCCEventData.cc
  src/CSCTMBHeader2006.cc
  src/CSCTMBHeader2013.cc
  src/CSCTMBScope.cc
  src/CSCEventData.cc
  src/CSCDCCExaminer.cc
  src/CSCDMBHeader.cc
  src/CSCDMBHeader2005.cc
  src/CSCALCTHeader2007.cc
  src/CSCTMBTrailer.cc
  src/CSCCFEBTimeSlice.cc
  src/CSCTMBHeader2007_rev0x50c3.cc
  src/CSCALCTTrailer.cc
  src/CSCBadCFEBTimeSlice.cc
  src/CSCCFEBData.cc
  src/CSCAnodeData2007.cc
  src/CSCBadCFEBWord.cc
)

target_include_directories(EventFilterCSCRawToDigi PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterCSCRawToDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterCSCRawToDigi PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterCSCRawToDigi PUBLIC /usr/include/root/)
target_include_directories(EventFilterCSCRawToDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterCSCRawToDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterCSCRawToDigi PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterCSCRawToDigi PUBLIC /usr/include/boost/)
target_include_directories(EventFilterCSCRawToDigi PUBLIC /usr/include/boost/regex/)


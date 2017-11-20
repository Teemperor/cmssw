add_subdirectory(plugins)
add_library(L1TriggerDTTrackFinder OBJECT 
  src/L1MuDTTrackFinder.cc
  src/L1MuDTTrackSegPhi.cc
  src/L1MuDTSectorProcessor.cc
  src/L1MuDTTrackAssembler.cc
  src/L1MuDTSecProcId.cc
  src/L1MuDTERS.cc
  src/L1MuDTEtaProcessor.cc
  src/L1MuDTTrackAssParam.cc
  src/L1MuDTTFSetup.cc
  src/L1MuDTEUX.cc
  src/L1MuDTTrackSegLoc.cc
  src/L1MuDTSEU.cc
  src/L1MuDTAddressArray.cc
  src/L1MuDTAssignmentUnit.cc
  src/L1MuDTTFConfig.cc
  src/L1MuDTSecProcMap.cc
  src/L1MuDTTrackSegEta.cc
  src/L1MuDTMuonSorter.cc
  src/L1MuDTSectorReceiver.cc
  src/L1MuDTDataBuffer.cc
  src/L1MuDTWedgeSorter.cc
  src/L1MuDTExtrapolationUnit.cc
  src/L1MuDTTrack.cc
)

target_include_directories(L1TriggerDTTrackFinder PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerDTTrackFinder PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerDTTrackFinder PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerDTTrackFinder PUBLIC /usr/include/root/)
target_include_directories(L1TriggerDTTrackFinder PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerDTTrackFinder PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerDTTrackFinder PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerDTTrackFinder PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerDTTrackFinder PUBLIC /usr/include/boost/regex/)


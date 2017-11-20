add_subdirectory(test)
add_subdirectory(plugins)
add_library(L1TriggerCSCTrackFinder OBJECT 
  src/CSCSectorReceiverLUT.cc
  src/CSCTFSectorProcessor.cc
  src/CSCTFSPCoreLogic.cc
  src/CSCTFCandidateBuilder.cc
  src/CSCSectorReceiverMiniLUT.cc
  src/CSCTFMuonSorter.cc
  src/CSCTFDTReceiverLUT.cc
  src/CSCTFPtMethods.cc
  src/CSCTrackFinderDataTypes.cc
  src/CSCSectorReceiverMiniLUT_parameters.cc
  src/CSCTFDTReceiver.cc
  src/CSCTFPtLUT.cc
  src/CSCTFTrackBuilder.cc
)

target_include_directories(L1TriggerCSCTrackFinder PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerCSCTrackFinder PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerCSCTrackFinder PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerCSCTrackFinder PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerCSCTrackFinder PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerCSCTrackFinder PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerCSCTrackFinder PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerCSCTrackFinder PUBLIC /usr/include/root/)
target_include_directories(L1TriggerCSCTrackFinder PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerCSCTrackFinder PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerCSCTrackFinder PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerCSCTrackFinder PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/CSCSectorReceiverLUT.cc
  src/CSCTFSectorProcessor.cc
  src/CSCTFSPCoreLogic.cc
  src/CSCTFCandidateBuilder.cc
  src/CSCSectorReceiverMiniLUT.cc
  src/CSCTFMuonSorter.cc
  src/CSCTFDTReceiverLUT.cc
  src/CSCTFPtMethods.cc
  src/CSCTrackFinderDataTypes.cc
  src/CSCSectorReceiverMiniLUT_parameters.cc
  src/CSCTFDTReceiver.cc
  src/CSCTFPtLUT.cc
  src/CSCTFTrackBuilder.cc
PROPERTIES COMPILE_FLAGS "-O1")


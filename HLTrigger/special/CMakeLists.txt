add_subdirectory(test)
add_library(HLTriggerspecial OBJECT 
  src/HLTPixelAsymmetryFilter.cc
  src/HLTEcalPixelIsolTrackFilter.cc
  src/HLTL1NumberFilter.cc
  src/HLTRPCTrigNoSyncFilter.cc
  src/SealModule.cc
  src/HLTPixelClusterShapeFilter.cc
  src/HLTLogMonitorFilter.cc
  src/HLTHcalCalibTypeFilter.cc
  src/HLTEcalPhiSymFilter.cc
  src/HLTHcalTowerFilter.cc
  src/HLTCaloTowerFilter.cc
  src/HLTPixlMBForAlignmentFilter.cc
  src/HLTMuonPointingFilter.cc
  src/HLTTriggerTypeFilter.cc
  src/HLTRechitsToDigis.cc
  src/HLTHcalSimpleRecHitFilter.cc
  src/HLTTrackSeedMultiplicityFilter.cc
  src/HLTSingleVertexPixelTrackFilter.cc
  src/HLTVertexFilter.cc
  src/HLTCSCAcceptBusyFilter.cc
  src/HLTCSCActivityFilter.cc
  src/HLTRPCFilter.cc
  src/HLTDTActivityFilter.cc
  src/HLTFEDSizeFilter.cc
  src/HLTPixelIsolTrackL1TFilter.cc
  src/HLTDummyCollections.cc
  src/HLTRegionalEcalResonanceFilter.cc
  src/HLTTrackerHaloFilter.cc
  src/HLTPixelActivityHFSumEnergyFilter.cc
  src/HLTPixlMBFilt.cc
  src/HLTHcalPhiSymFilter.cc
  src/HLTCSCOverlapFilter.cc
  src/HLTPixelIsolTrackFilter.cc
  src/EcalMIPRecHitFilter.cc
  src/HLTPhysicsDeclared.cc
  src/HLTHFAsymmetryFilter.cc
  src/HLTHcalNZSFilter.cc
  src/HLTEcalResonanceFilter.cc
  src/HLTEcalTowerFilter.cc
  src/HLTEventNumberFilter.cc
  src/HLTEcalIsolationFilter.cc
  src/HLTHcalNoiseFilter.cc
  src/HLTPixelActivityFilter.cc
  src/HLTDTROMonitorFilter.cc
  src/HLTDynamicPrescaler.cc
  src/HLTCSCRing2or3Filter.cc
  src/EcalSimpleUncalibRecHitFilter.cc
)

target_include_directories(HLTriggerspecial PUBLIC /usr/include/boost/iostreams/)
target_include_directories(HLTriggerspecial PUBLIC /usr/include/python2.7/)
target_include_directories(HLTriggerspecial PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(HLTriggerspecial PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HLTriggerspecial PUBLIC /usr/include/boost/serialization/)
target_include_directories(HLTriggerspecial PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(HLTriggerspecial PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HLTriggerspecial PUBLIC /usr/include/boost/)
target_include_directories(HLTriggerspecial PUBLIC /usr/include/eigen3/)
target_include_directories(HLTriggerspecial PUBLIC /usr/include/boost/python/)
target_include_directories(HLTriggerspecial PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HLTriggerspecial PUBLIC /usr/include/root/)
target_include_directories(HLTriggerspecial PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(HLTriggerspecial PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HLTriggerspecial PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(HLTriggerspecial PUBLIC /usr/include/boost/regex/)


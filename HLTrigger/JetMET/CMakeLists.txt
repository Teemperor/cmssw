add_subdirectory(plugins)
add_library(HLTriggerJetMET OBJECT 
  src/HLTAcoFilter.cc
  src/HLTJetVBFFilter.cc
  src/HLTRapGapFilter.cc
  src/HLTHtMhtFilter.cc
  src/HLTNVFilter.cc
  src/HLTJetCollectionsForBoostedLeptonPlusJets.cc
  src/PFJetsMatchedToFilteredCaloJetsProducer.cc
  src/HLTAlphaTFilter.cc
  src/HLTMinDPhiMETFilter.cc
  src/HLTHemiDPhiFilter.cc
  src/HLTPhi2METFilter.cc
  src/HLTHPDFilter.cc
  src/HLTHcalTowerNoiseCleanerWithrechit.cc
  src/HLTHtMhtProducer.cc
  src/HLTJetSortedVBFFilter.cc
  src/HLTDiJetAveFilter.cc
  src/AlphaT.cc
  src/HLTJetL1MatchProducer.cc
  src/HLTCaloJetIDProducer.cc
  src/AnyJetToCaloJetProducer.cc
  src/HLTJetCollForElePlusJets.cc
  src/HLTForwardBackwardJetsFilter.cc
  src/HLTJetCollectionsVBFFilter.cc
  src/HLTDiJetEtaTopologyFilter.cc
  src/HLTExclDiJetFilter.cc
  src/HLTMonoJetFilter.cc
  src/HLTPFEnergyFractionsFilter.cc
  src/HLTHcalLaserFilter.cc
  src/HLTJetCollectionsForElePlusJets.cc
  src/HLTPFJetIDProducer.cc
  src/HLTCaloTowerHtMhtProducer.cc
  src/HLTJetCollectionsForLeptonPlusJets.cc
  src/HLTJetEtaTopologyFilter.cc
  src/HLTMETCleanerUsingJetID.cc
  src/HLTHcalTowerNoiseCleaner.cc
  src/HLTTrackMETProducer.cc
  src/HLT2jetGapFilter.cc
  src/HLTJetL1TMatchProducer.cc
  src/HLTMhtProducer.cc
  src/HLTMhtFilter.cc
  src/HLTHcalMETNoiseCleaner.cc
  src/HLTHcalMETNoiseFilter.cc
  src/HLTFatJetMassFilter.cc
  src/HLTDiJetAveEtaFilter.cc
  src/HLTJetCollectionsFilter.cc
)

target_include_directories(HLTriggerJetMET PUBLIC /usr/include/boost/iostreams/)
target_include_directories(HLTriggerJetMET PUBLIC /usr/include/python2.7/)
target_include_directories(HLTriggerJetMET PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(HLTriggerJetMET PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HLTriggerJetMET PUBLIC /usr/include/boost/serialization/)
target_include_directories(HLTriggerJetMET PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(HLTriggerJetMET PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HLTriggerJetMET PUBLIC /usr/include/boost/)
target_include_directories(HLTriggerJetMET PUBLIC /usr/include/eigen3/)
target_include_directories(HLTriggerJetMET PUBLIC /usr/include/boost/python/)
target_include_directories(HLTriggerJetMET PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HLTriggerJetMET PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(HLTriggerJetMET PUBLIC /usr/include/root/)
target_include_directories(HLTriggerJetMET PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(HLTriggerJetMET PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HLTriggerJetMET PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(HLTriggerJetMET PUBLIC /usr/include/boost/regex/)


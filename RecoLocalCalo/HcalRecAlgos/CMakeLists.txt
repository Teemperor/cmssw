add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoLocalCaloHcalRecAlgos OBJECT 
  src/HFTimingTrustFlag.cc
  src/PedestalSub.cc
  src/HFSimpleTimeCheck.cc
  src/HcalSeverityLevelComputerRcd.cc
  src/HBHETimeProfileStatusBitSetter.cc
  src/AbsPlan1RechitCombiner.cc
  src/SimpleHBHEPhase1Algo.cc
  src/HFFlexibleTimeCheck.cc
  src/parseHBHEPhase1AlgoDescription.cc
  src/HcalSimpleRecAlgo.cc
  src/HcalSeverityLevelComputer.cc
  src/HBHENegativeFlag.cc
  src/HFRecHitAuxSetter.cc
  src/HBHETimingShapedFlag.cc
  src/HBHEPulseShapeFlag.cc
  src/SimplePlan1RechitCombiner.cc
  src/HcalTimingCorrector.cc
  src/ZdcSimpleRecAlgo.cc
  src/PulseShapeFitOOTPileupCorrection.cc
  src/HybridMinimizer.cc
  src/ES_HcalSeverityLevelComputer.cc
  src/HBHEIsolatedNoiseAlgos.cc
  src/parsePlan1RechitCombiner.cc
  src/fetchHcalAlgoData.cc
  src/parseHFPhase1AlgoDescription.cc
  src/HBHEStatusBitSetter.cc
  src/HcalHF_PETalgorithm.cc
  src/HFPreRecAlgo.cc
  src/HcalDeterministicFit.cc
  src/HcalADCSaturationFlag.cc
  src/HcalHFStatusBitFromRecHits.cc
  src/HcalHF_S9S1algorithm.cc
  src/HcalHFStatusBitFromDigis.cc
)

target_include_directories(RecoLocalCaloHcalRecAlgos PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoLocalCaloHcalRecAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalCaloHcalRecAlgos PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoLocalCaloHcalRecAlgos PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalCaloHcalRecAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalCaloHcalRecAlgos PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoLocalCaloHcalRecAlgos PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoLocalCaloHcalRecAlgos PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalCaloHcalRecAlgos PUBLIC /usr/include/eigen3/)
target_include_directories(RecoLocalCaloHcalRecAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalCaloHcalRecAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalCaloHcalRecAlgos PUBLIC /usr/include/root/)
target_include_directories(RecoLocalCaloHcalRecAlgos PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoLocalCaloHcalRecAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalCaloHcalRecAlgos PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoLocalCaloHcalRecAlgos PUBLIC /usr/include/boost/regex/)


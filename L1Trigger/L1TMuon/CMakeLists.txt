add_subdirectory(plugins)
add_library(L1TriggerL1TMuon OBJECT 
  src/L1TMuonGlobalParamsHelper.cc
  src/RegionalMuonRawDigiTranslator.cc
  src/MicroGMTMatchQualLUTFactory.cc
  src/MicroGMTMatchQualSimpleLUT.cc
  src/L1TMuonGlobalParams_PUBLIC.cc
  src/SubsystemCollectorFactory.cc
  src/MuonTriggerPrimitive.cc
  src/MuonRawDigiTranslator.cc
  src/MicroGMTRankPtQualLUTFactory.cc
  src/MicroGMTAbsoluteIsolationCheckLUT.cc
  src/GeometryTranslator.cc
  src/MicroGMTMatchQualFineLUT.cc
  src/MicroGMTAbsoluteIsolationCheckLUTFactory.cc
  src/MicroGMTRelativeIsolationCheckLUTFactory.cc
  src/MicroGMTCaloIndexSelectionLUT.cc
  src/DTBunchCrossingCleaner.cc
  src/MicroGMTIsolationUnit.cc
  src/GMTInternalMuon.cc
  src/MicroGMTExtrapolationLUTFactory.cc
  src/SubsystemCollector.cc
  src/MicroGMTExtrapolationLUT.cc
  src/MicroGMTRelativeIsolationCheckLUT.cc
  src/MicroGMTConfiguration.cc
  src/MicroGMTRankPtQualLUT.cc
  src/MicroGMTLUT.cc
  src/MicroGMTCaloIndexSelectionLUTFactory.cc
  src/MicroGMTCancelOutUnit.cc
)

target_include_directories(L1TriggerL1TMuon PUBLIC /usr/include/boost/iostreams/)
target_include_directories(L1TriggerL1TMuon PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerL1TMuon PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(L1TriggerL1TMuon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerL1TMuon PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerL1TMuon PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(L1TriggerL1TMuon PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerL1TMuon PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerL1TMuon PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerL1TMuon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerL1TMuon PUBLIC /usr/include/root/)
target_include_directories(L1TriggerL1TMuon PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerL1TMuon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerL1TMuon PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerL1TMuon PUBLIC /usr/include/boost/regex/)


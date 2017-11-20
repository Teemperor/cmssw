add_library(HLTriggerEgamma OBJECT 
  src/HLTEgammaEtFilterPairs.cc
  src/SealModule.cc
  src/HLTElectronPFMTFilter.cc
  src/HLTElectronEoverpFilterRegional.cc
  src/HLTEgammaGenericQuadraticEtaFilter.cc
  src/HLTEgammaL1MatchFilterPairs.cc
  src/HLTElectronOneOEMinusOneOPFilterRegional.cc
  src/HLTEgammaDoubleLegCombFilter.cc
  src/HLTGenericFilter.cc
  src/HLTEgammaDoubleEtFilter.cc
  src/HLTEgammaGenericQuadraticFilter.cc
  src/HLTEgammaEtFilter.cc
  src/HLTPMMassFilter.cc
  src/HLTEgammaCaloIsolFilterPairs.cc
  src/HLTEgammaCombMassFilter.cc
  src/HLTEgammaAllCombMassFilter.cc
  src/HLTElectronPixelMatchFilter.cc
  src/HLTElectronMissingHitsFilter.cc
  src/HLTEgammaDoubleEtDeltaPhiFilter.cc
  src/HLTPMDocaFilter.cc
  src/HLTElectronMuonInvMassFilter.cc
  src/HLTEgammaDoubleEtPhiFilter.cc
  src/HLTEgammaL1TMatchFilterRegional.cc
  src/HLTElectronEtFilter.cc
  src/HLTEgammaL1MatchFilterRegional.cc
  src/HLTDisplacedEgammaFilter.cc
  src/HLTEgammaTriggerFilterObjectWrapper.cc
  src/HLTScoutingEgammaProducer.cc
  src/HLTElectronGenericFilter.cc
)

target_include_directories(HLTriggerEgamma PUBLIC /usr/include/boost/iostreams/)
target_include_directories(HLTriggerEgamma PUBLIC /usr/include/python2.7/)
target_include_directories(HLTriggerEgamma PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(HLTriggerEgamma PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HLTriggerEgamma PUBLIC /usr/include/boost/serialization/)
target_include_directories(HLTriggerEgamma PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(HLTriggerEgamma PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HLTriggerEgamma PUBLIC /usr/include/boost/)
target_include_directories(HLTriggerEgamma PUBLIC /usr/include/eigen3/)
target_include_directories(HLTriggerEgamma PUBLIC /usr/include/boost/python/)
target_include_directories(HLTriggerEgamma PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HLTriggerEgamma PUBLIC /usr/include/root/)
target_include_directories(HLTriggerEgamma PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(HLTriggerEgamma PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HLTriggerEgamma PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(HLTriggerEgamma PUBLIC /usr/include/boost/regex/)


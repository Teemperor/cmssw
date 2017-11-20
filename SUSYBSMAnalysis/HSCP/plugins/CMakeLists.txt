add_library(SUSYBSMAnalysisHSCPPlugins OBJECT 
  SimHitShifter.cc
  HSCPHLTFilter.cc
  HSCPDeDxInfoProducer.cc
  Skim_MonoPhotonSkimmer.cc
  Skim_HSCPFilter.cc
  HSCPTreeBuilder.cc
  Skim_ProduceIsolationMap.cc
  Skim_ReduceHcalRecHitCollectionProducer.cc
  HSCParticleProducer.cc
  Skim_UpdatedMuonInnerTrackRef.cc
  Skim_HighPtTrackEcalDetIdProducer.cc
  HSCParticleSelector.cc
  HSCPValidator.cc
  MuonSegmentProducer.cc
)

target_include_directories(SUSYBSMAnalysisHSCPPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(SUSYBSMAnalysisHSCPPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(SUSYBSMAnalysisHSCPPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SUSYBSMAnalysisHSCPPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SUSYBSMAnalysisHSCPPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(SUSYBSMAnalysisHSCPPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SUSYBSMAnalysisHSCPPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(SUSYBSMAnalysisHSCPPlugins PUBLIC /usr/include/boost/)
target_include_directories(SUSYBSMAnalysisHSCPPlugins PUBLIC /usr/include/eigen3/)
target_include_directories(SUSYBSMAnalysisHSCPPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(SUSYBSMAnalysisHSCPPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SUSYBSMAnalysisHSCPPlugins PUBLIC /usr/include/root/)
target_include_directories(SUSYBSMAnalysisHSCPPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(SUSYBSMAnalysisHSCPPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SUSYBSMAnalysisHSCPPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(SUSYBSMAnalysisHSCPPlugins PUBLIC /usr/include/boost/regex/)


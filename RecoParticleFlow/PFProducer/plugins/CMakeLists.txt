add_library(RecoParticleFlowPFProducerPlugins_kdtrees OBJECT 
  kdtrees/KDTreeLinkerTrackHcal.cc
  kdtrees/KDTreeLinkerTrackEcal.cc
  kdtrees/KDTreeLinkerPSEcal.cc
)

target_include_directories(RecoParticleFlowPFProducerPlugins_kdtrees PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoParticleFlowPFProducerPlugins_kdtrees PUBLIC /usr/include/python2.7/)
target_include_directories(RecoParticleFlowPFProducerPlugins_kdtrees PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoParticleFlowPFProducerPlugins_kdtrees PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoParticleFlowPFProducerPlugins_kdtrees PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoParticleFlowPFProducerPlugins_kdtrees PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoParticleFlowPFProducerPlugins_kdtrees PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoParticleFlowPFProducerPlugins_kdtrees PUBLIC /usr/include/boost/)
target_include_directories(RecoParticleFlowPFProducerPlugins_kdtrees PUBLIC /usr/include/eigen3/)
target_include_directories(RecoParticleFlowPFProducerPlugins_kdtrees PUBLIC /usr/include/boost/python/)
target_include_directories(RecoParticleFlowPFProducerPlugins_kdtrees PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoParticleFlowPFProducerPlugins_kdtrees PUBLIC /usr/include/root/)
target_include_directories(RecoParticleFlowPFProducerPlugins_kdtrees PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoParticleFlowPFProducerPlugins_kdtrees PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoParticleFlowPFProducerPlugins_kdtrees PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoParticleFlowPFProducerPlugins_kdtrees PUBLIC /usr/include/boost/regex/)

add_library(RecoParticleFlowPFProducerPlugins_importers OBJECT 
  importers/GeneralTracksImporterWithVeto.cc
  importers/ConversionTrackImporter.cc
  importers/GenericClusterImporter.cc
  importers/LooseNuclearInteractionTrackImporter.cc
  importers/VeryLooseNuclearInteractionTrackImporter.cc
  importers/GSFTrackImporter.cc
  importers/SpecialClusterImporter.cc
  importers/EGPhotonImporter.cc
  importers/V0TrackImporter.cc
  importers/ConvBremTrackImporter.cc
  importers/GeneralTracksImporter.cc
  importers/NuclearInteractionTrackImporter.cc
  importers/SuperClusterImporter.cc
)

target_include_directories(RecoParticleFlowPFProducerPlugins_importers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoParticleFlowPFProducerPlugins_importers PUBLIC /usr/include/python2.7/)
target_include_directories(RecoParticleFlowPFProducerPlugins_importers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoParticleFlowPFProducerPlugins_importers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoParticleFlowPFProducerPlugins_importers PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoParticleFlowPFProducerPlugins_importers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoParticleFlowPFProducerPlugins_importers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoParticleFlowPFProducerPlugins_importers PUBLIC /usr/include/boost/)
target_include_directories(RecoParticleFlowPFProducerPlugins_importers PUBLIC /usr/include/eigen3/)
target_include_directories(RecoParticleFlowPFProducerPlugins_importers PUBLIC /usr/include/boost/python/)
target_include_directories(RecoParticleFlowPFProducerPlugins_importers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoParticleFlowPFProducerPlugins_importers PUBLIC /usr/include/root/)
target_include_directories(RecoParticleFlowPFProducerPlugins_importers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoParticleFlowPFProducerPlugins_importers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoParticleFlowPFProducerPlugins_importers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoParticleFlowPFProducerPlugins_importers PUBLIC /usr/include/boost/regex/)

add_library(RecoParticleFlowPFProducerPlugins_linkers OBJECT 
  linkers/GSFAndGSFLinker.cc
  linkers/SCAndHGCalLinker.cc
  linkers/ECALAndHCALCaloJetLinker.cc
  linkers/HGCalandBREMLinker.cc
  linkers/TrackAndHCALLinker.cc
  linkers/ECALAndHCALLinker.cc
  linkers/GSFAndHCALLinker.cc
  linkers/TrackAndHOLinker.cc
  linkers/TrackAndECALLinker.cc
  linkers/SCAndECALLinker.cc
  linkers/TrackAndTrackLinker.cc
  linkers/GSFAndHGCalLinker.cc
  linkers/HFEMAndHFHADLinker.cc
  linkers/TrackAndGSFLinker.cc
  linkers/ECALAndECALLinker.cc
  linkers/HCALAndHOLinker.cc
  linkers/PreshowerAndECALLinker.cc
  linkers/ECALAndBREMLinker.cc
  linkers/GSFAndECALLinker.cc
  linkers/HCALAndBREMLinker.cc
  linkers/GSFAndBREMLinker.cc
)

target_include_directories(RecoParticleFlowPFProducerPlugins_linkers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoParticleFlowPFProducerPlugins_linkers PUBLIC /usr/include/python2.7/)
target_include_directories(RecoParticleFlowPFProducerPlugins_linkers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoParticleFlowPFProducerPlugins_linkers PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoParticleFlowPFProducerPlugins_linkers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoParticleFlowPFProducerPlugins_linkers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoParticleFlowPFProducerPlugins_linkers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoParticleFlowPFProducerPlugins_linkers PUBLIC /usr/include/boost/)
target_include_directories(RecoParticleFlowPFProducerPlugins_linkers PUBLIC /usr/include/eigen3/)
target_include_directories(RecoParticleFlowPFProducerPlugins_linkers PUBLIC /usr/include/boost/python/)
target_include_directories(RecoParticleFlowPFProducerPlugins_linkers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoParticleFlowPFProducerPlugins_linkers PUBLIC /usr/include/root/)
target_include_directories(RecoParticleFlowPFProducerPlugins_linkers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoParticleFlowPFProducerPlugins_linkers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoParticleFlowPFProducerPlugins_linkers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoParticleFlowPFProducerPlugins_linkers PUBLIC /usr/include/boost/regex/)

add_library(RecoParticleFlowPFProducerPlugins OBJECT 
  PFCandidateListMerger.cc
  PFLinker.cc
  PFCandidateChecker.cc
  PFBlockProducer.cc
  PFElectronTranslator.cc
  PFConcretePFCandidateProducer.cc
  PFPhotonTranslator.cc
  ChargedHadronPFTrackIsolationProducer.cc
  PFCandidateProductFromFwdPtrProducer.cc
  PFCandidateFwdPtrProducer.cc
  EFilter.cc
  PFProducer.cc
  PFEGammaProducer.cc
)

target_include_directories(RecoParticleFlowPFProducerPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoParticleFlowPFProducerPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoParticleFlowPFProducerPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoParticleFlowPFProducerPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoParticleFlowPFProducerPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoParticleFlowPFProducerPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoParticleFlowPFProducerPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoParticleFlowPFProducerPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoParticleFlowPFProducerPlugins PUBLIC /usr/include/eigen3/)
target_include_directories(RecoParticleFlowPFProducerPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoParticleFlowPFProducerPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoParticleFlowPFProducerPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoParticleFlowPFProducerPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoParticleFlowPFProducerPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoParticleFlowPFProducerPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoParticleFlowPFProducerPlugins PUBLIC /usr/include/boost/regex/)


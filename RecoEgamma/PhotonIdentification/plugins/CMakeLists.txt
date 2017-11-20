add_library(RecoEgammaPhotonIdentificationPlugins OBJECT 
  PhotonIDProducer.cc
  PhotonMVAEstimatorRun2Spring15NonTrig.cc
  SealModules.cc
  PhotonMVAEstimatorRun2Phys14NonTrig.cc
  PhotonIDSimpleAnalyzer.cc
  VersionedPhotonIdProducer.cc
  PhotonRegressionValueMapProducer.cc
  PhotonIDValueMapProducer.cc
  PhotonMVAValueMapProducer.cc
)

target_include_directories(RecoEgammaPhotonIdentificationPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoEgammaPhotonIdentificationPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins PUBLIC /usr/include/eigen3/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoEgammaPhotonIdentificationPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoEgammaPhotonIdentificationPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoEgammaPhotonIdentificationPlugins PUBLIC /usr/include/boost/regex/)

add_library(RecoEgammaPhotonIdentificationPlugins_cuts OBJECT 
  cuts/PhoSingleTowerHadOverEmCut.cc
  cuts/PhoAnyPFIsoWithEAAndQuadScalingCut.cc
  cuts/PhoAnyPFIsoWithEAAndExpoScalingCut.cc
  cuts/PhoMVACut.cc
  cuts/PhoFull5x5SigmaIEtaIEtaValueMapCut.cc
  cuts/PhoAnyPFIsoWithEAAndExpoScalingEBCut.cc
  cuts/PhoAnyPFIsoWithEACut.cc
  cuts/PhoFull5x5SigmaIEtaIEtaCut.cc
  cuts/PhoSCEtaMultiRangeCut.cc
  cuts/PhoHadronicOverEMCut.cc
)

target_include_directories(RecoEgammaPhotonIdentificationPlugins_cuts PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins_cuts PUBLIC /usr/include/python2.7/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins_cuts PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins_cuts PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins_cuts PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins_cuts PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins_cuts PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoEgammaPhotonIdentificationPlugins_cuts PUBLIC /usr/include/boost/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins_cuts PUBLIC /usr/include/eigen3/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins_cuts PUBLIC /usr/include/boost/python/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins_cuts PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins_cuts PUBLIC /usr/include/root/)
target_include_directories(RecoEgammaPhotonIdentificationPlugins_cuts PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoEgammaPhotonIdentificationPlugins_cuts PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoEgammaPhotonIdentificationPlugins_cuts PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoEgammaPhotonIdentificationPlugins_cuts PUBLIC /usr/include/boost/regex/)


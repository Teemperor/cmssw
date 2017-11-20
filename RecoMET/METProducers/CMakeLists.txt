add_subdirectory(test)
add_library(RecoMETMETProducers OBJECT 
  src/CaloRecHitsBeamHaloCleaned.cc
  src/BeamHaloSummaryProducer.cc
  src/SealModule.cc
  src/CaloMETProducer.cc
  src/CSCHaloDataProducer.cc
  src/HcalHaloDataProducer.cc
  src/MuonMETValueMapProducer.cc
  src/GenMETProducer.cc
  src/METSignificanceProducer.cc
  src/PFMETProducer.cc
  src/MinMETProducerT.cc
  src/MuonMET.cc
  src/EcalHaloDataProducer.cc
  src/ElseMETProducer.cc
  src/HcalNoiseInfoProducer.cc
  src/MuonTCMETValueMapProducer.cc
  src/PFClusterMETProducer.cc
  src/ParticleFlowForChargedMETProducer.cc
  src/GlobalHaloDataProducer.cc
  src/TCMETProducer.cc
)

target_include_directories(RecoMETMETProducers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoMETMETProducers PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMETMETProducers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoMETMETProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMETMETProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoMETMETProducers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoMETMETProducers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoMETMETProducers PUBLIC /usr/include/boost/)
target_include_directories(RecoMETMETProducers PUBLIC /usr/include/eigen3/)
target_include_directories(RecoMETMETProducers PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMETMETProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMETMETProducers PUBLIC /usr/include/root/)
target_include_directories(RecoMETMETProducers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoMETMETProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMETMETProducers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoMETMETProducers PUBLIC /usr/include/boost/regex/)


add_library(RecoEgammaEgammaPhotonProducers OBJECT 
  src/GEDPhotonProducer.cc
  src/ConversionProducer.cc
  src/ConversionTrackCandidateProducer.cc
  src/ConversionTrackProducer.cc
  src/ConversionTrackMerger.cc
  src/SealModule.cc
  src/ReducedEGProducer.cc
  src/GEDPhotonCoreProducer.cc
  src/ConvertedPhotonProducer.cc
  src/PhotonProducer.cc
  src/TrackProducerWithSCAssociation.cc
  src/PhotonCoreProducer.cc
)

target_include_directories(RecoEgammaEgammaPhotonProducers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoEgammaEgammaPhotonProducers PUBLIC /usr/include/python2.7/)
target_include_directories(RecoEgammaEgammaPhotonProducers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoEgammaEgammaPhotonProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoEgammaEgammaPhotonProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoEgammaEgammaPhotonProducers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoEgammaEgammaPhotonProducers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoEgammaEgammaPhotonProducers PUBLIC /usr/include/boost/)
target_include_directories(RecoEgammaEgammaPhotonProducers PUBLIC /usr/include/eigen3/)
target_include_directories(RecoEgammaEgammaPhotonProducers PUBLIC /usr/include/boost/python/)
target_include_directories(RecoEgammaEgammaPhotonProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoEgammaEgammaPhotonProducers PUBLIC /usr/include/root/)
target_include_directories(RecoEgammaEgammaPhotonProducers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoEgammaEgammaPhotonProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoEgammaEgammaPhotonProducers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoEgammaEgammaPhotonProducers PUBLIC /usr/include/boost/regex/)


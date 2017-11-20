add_library(RecoEcalEgammaClusterAlgos OBJECT 
  src/Multi5x5BremRecoveryClusterAlgo.cc
  src/Multi5x5ClusterAlgo.cc
  src/PreshowerClusterAlgo.cc
  src/PFECALSuperClusterAlgo.cc
  src/PreshowerPhiClusterAlgo.cc
  src/BremRecoveryClusterAlgo.cc
  src/EndcapPiZeroDiscriminatorAlgo.cc
  src/CosmicClusterAlgo.cc
  src/EgammaSCEnergyCorrectionAlgo.cc
  src/HybridClusterAlgo.cc
  src/IslandClusterAlgo.cc
  src/ExampleClusterAlgo.cc
)

target_include_directories(RecoEcalEgammaClusterAlgos PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoEcalEgammaClusterAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(RecoEcalEgammaClusterAlgos PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoEcalEgammaClusterAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoEcalEgammaClusterAlgos PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoEcalEgammaClusterAlgos PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoEcalEgammaClusterAlgos PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoEcalEgammaClusterAlgos PUBLIC /usr/include/boost/)
target_include_directories(RecoEcalEgammaClusterAlgos PUBLIC /usr/include/eigen3/)
target_include_directories(RecoEcalEgammaClusterAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(RecoEcalEgammaClusterAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoEcalEgammaClusterAlgos PUBLIC /usr/include/root/)
target_include_directories(RecoEcalEgammaClusterAlgos PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoEcalEgammaClusterAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoEcalEgammaClusterAlgos PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoEcalEgammaClusterAlgos PUBLIC /usr/include/boost/regex/)


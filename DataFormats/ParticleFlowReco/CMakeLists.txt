add_library(DataFormatsParticleFlowReco OBJECT 
  src/PFSimParticle.cc
  src/CaloWindow.cc
  src/PFTrack.cc
  src/PFDisplacedVertexSeed.cc
  src/PFBlockElementCluster.cc
  src/PFConversion.cc
  src/RecoPFClusterRefCandidate.cc
  src/PFBlockElementTrack.cc
  src/CaloBox.cc
  src/PFCluster.cc
  src/HGCalMultiCluster.cc
  src/PFBlockElementBrem.cc
  src/PFBlockElementGsfTrack.cc
  src/PFRecHitFraction.cc
  src/PFSuperCluster.cc
  src/Calibratable.cc
  src/PFRecHit.cc
  src/PFLayer.cc
  src/GsfPFRecTrack.cc
  src/PFDisplacedVertex.cc
  src/PFBlockElementSuperCluster.cc
  src/PFRecTrack.cc
  src/CaloEllipse.cc
  src/PFBlock.cc
  src/PreId.cc
  src/PFBlockElement.cc
  src/PFDisplacedVertexCandidate.cc
  src/PFTrajectoryPoint.cc
)

target_include_directories(DataFormatsParticleFlowReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsParticleFlowReco PUBLIC /usr/include/root/)
target_include_directories(DataFormatsParticleFlowReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsParticleFlowReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsParticleFlowReco PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsParticleFlowReco PUBLIC /usr/include/boost/regex/)


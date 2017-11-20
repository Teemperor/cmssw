add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoParticleFlowPFTracking OBJECT 
  src/PFTrackAlgoTools.cc
  src/ConvBremHeavyObjectCache.cc
  src/ConvBremPFTrackFinder.cc
  src/PFGsfHelper.cc
  src/CollinearFitAtTM.cc
  src/PFCheckHitPattern.cc
  src/PFDisplacedVertexFinder.cc
  src/PFGeometry.cc
  src/PFTrackTransformer.cc
  src/PFDisplacedVertexCandidateFinder.cc
  src/PFDisplacedVertexHelper.cc
)

target_include_directories(RecoParticleFlowPFTracking PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoParticleFlowPFTracking PUBLIC /usr/include/python2.7/)
target_include_directories(RecoParticleFlowPFTracking PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoParticleFlowPFTracking PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoParticleFlowPFTracking PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoParticleFlowPFTracking PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoParticleFlowPFTracking PUBLIC /usr/include/boost/)
target_include_directories(RecoParticleFlowPFTracking PUBLIC /usr/include/boost/python/)
target_include_directories(RecoParticleFlowPFTracking PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoParticleFlowPFTracking PUBLIC /usr/include/root/)
target_include_directories(RecoParticleFlowPFTracking PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoParticleFlowPFTracking PUBLIC /usr/include/boost/regex/)


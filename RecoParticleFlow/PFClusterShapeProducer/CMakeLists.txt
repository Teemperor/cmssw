add_subdirectory(plugins)
add_library(RecoParticleFlowPFClusterShapeProducer OBJECT 
  src/PFClusterShapeAlgo.cc
)

target_include_directories(RecoParticleFlowPFClusterShapeProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoParticleFlowPFClusterShapeProducer PUBLIC /usr/include/root/)
target_include_directories(RecoParticleFlowPFClusterShapeProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoParticleFlowPFClusterShapeProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoParticleFlowPFClusterShapeProducer PUBLIC /usr/include/boost/)
target_include_directories(RecoParticleFlowPFClusterShapeProducer PUBLIC /usr/include/boost/regex/)


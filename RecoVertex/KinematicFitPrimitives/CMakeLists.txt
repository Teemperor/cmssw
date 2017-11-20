add_subdirectory(test)
add_library(RecoVertexKinematicFitPrimitives OBJECT 
  src/KinematicVertex.cc
  src/KinematicParticleFactoryFromTransientTrack.cc
  src/KinematicParametersError.cc
  src/VirtualKinematicParticleFactory.cc
  src/TransientTrackKinematicStateBuilder.cc
  src/VirtualKinematicParticle.cc
  src/KinematicParticle.cc
  src/MultipleKinematicConstraint.cc
  src/KinematicPerigeeConversions.cc
  src/KinematicState.cc
  src/ParticleKinematicLinearizedTrackState.cc
  src/KinematicParameters.cc
  src/KinematicRefittedTrackState.cc
  src/KinematicTree.cc
  src/TransientTrackKinematicParticle.cc
  src/ParticleKinematicLinearizedTrackStateFactory.cc
  src/PerigeeKinematicState.cc
  src/TrackKinematicStatePropagator.cc
  src/KinematicVertexFactory.cc
)

target_include_directories(RecoVertexKinematicFitPrimitives PUBLIC /usr/include/boost/python/)
target_include_directories(RecoVertexKinematicFitPrimitives PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoVertexKinematicFitPrimitives PUBLIC /usr/include/python2.7/)
target_include_directories(RecoVertexKinematicFitPrimitives PUBLIC /usr/include/root/)
target_include_directories(RecoVertexKinematicFitPrimitives PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoVertexKinematicFitPrimitives PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoVertexKinematicFitPrimitives PUBLIC /usr/include/boost/)
target_include_directories(RecoVertexKinematicFitPrimitives PUBLIC /usr/include/boost/regex/)


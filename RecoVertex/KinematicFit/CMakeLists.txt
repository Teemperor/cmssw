add_library(RecoVertexKinematicFit OBJECT 
  src/VertexKinematicConstraintT.cc
  src/MultiTrackVertexLinkKinematicConstraint.cc
  src/MomentumKinematicConstraint.cc
  src/ConstrainedTreeBuilder.cc
  src/BackToBackKinematicConstraint.cc
  src/ConstrainedTreeBuilderT.cc
  src/SimplePointingConstraint.cc
  src/MassKinematicConstraint.cc
  src/ColinearityKinematicConstraint.cc
  src/MultiTrackMassKinematicConstraint.cc
  src/CombinedKinematicConstraint.cc
  src/TwoTrackMassKinematicConstraint.cc
  src/InputSort.cc
  src/LagrangeParentParticleFitter.cc
  src/LagrangeChildUpdator.cc
  src/PointingKinematicConstraint.cc
  src/MultiTrackPointingKinematicConstraint.cc
  src/KinematicParticleFitter.cc
  src/FinalTreeBuilder.cc
  src/KinematicParticleVertexFitter.cc
  src/KinematicConstrainedVertexUpdator.cc
  src/SmartPointingConstraint.cc
  src/KinematicConstrainedVertexFitter.cc
  src/VertexKinematicConstraint.cc
  src/FourMomentumKinematicConstraint.cc
)

target_include_directories(RecoVertexKinematicFit PUBLIC /usr/include/boost/python/)
target_include_directories(RecoVertexKinematicFit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoVertexKinematicFit PUBLIC /usr/include/python2.7/)
target_include_directories(RecoVertexKinematicFit PUBLIC /usr/include/root/)
target_include_directories(RecoVertexKinematicFit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoVertexKinematicFit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoVertexKinematicFit PUBLIC /usr/include/boost/)
target_include_directories(RecoVertexKinematicFit PUBLIC /usr/include/boost/regex/)


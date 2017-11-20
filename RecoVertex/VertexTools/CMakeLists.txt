add_library(RecoVertexVertexTools OBJECT 
  src/Lms3d.cc
  src/SequentialVertexFitter.cc
  src/SharedTracks.cc
  src/PerigeeLinearizedTrackState.cc
  src/LinearizationPointFinder.cc
  src/FsmwModeFinder3d.cc
  src/LmsModeFinder3d.cc
  src/DeterministicAnnealing.cc
  src/VertexDistanceXY.cc
  src/LinearizedTrackStateFactory.cc
  src/HsmModeFinder3d.cc
  src/VertexDistance3D.cc
  src/SequentialVertexSmoother.cc
  src/hsm_3d.cc
  src/GeometricAnnealing.cc
  src/DummyVertexTrackUpdator.cc
  src/lms_3d.cc
  src/PerigeeRefittedTrackState.cc
  src/SMS.cc
  src/VertexCompatibleWithBeam.cc
  src/DummyTrackToTrackCovCalculator.cc
  src/DummyVertexSmoother.cc
  src/InvariantMassFromVertex.cc
  src/SmsModeFinder3d.cc
  src/VertexDistance.cc
  src/SubsetHsmModeFinder3d.cc
)

target_include_directories(RecoVertexVertexTools PUBLIC /usr/include/boost/python/)
target_include_directories(RecoVertexVertexTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoVertexVertexTools PUBLIC /usr/include/python2.7/)
target_include_directories(RecoVertexVertexTools PUBLIC /usr/include/root/)
target_include_directories(RecoVertexVertexTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoVertexVertexTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoVertexVertexTools PUBLIC /usr/include/boost/)
target_include_directories(RecoVertexVertexTools PUBLIC /usr/include/boost/regex/)


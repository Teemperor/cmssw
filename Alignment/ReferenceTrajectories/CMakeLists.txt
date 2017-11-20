add_subdirectory(plugins)
add_library(AlignmentReferenceTrajectories OBJECT 
  src/TrajectoryFactoryBase.cc
  src/VMatrix.cc
  src/DualReferenceTrajectory.cc
  src/ReferenceTrajectory.cc
  src/BeamSpotTransientTrackingRecHit.cc
  src/TrajectoryFactoryPlugin.cc
  src/GblTrajectory.cc
  src/GblData.cc
  src/TwoBodyDecayTrajectory.cc
  src/TwoBodyDecayTrajectoryState.cc
  src/GblPoint.cc
  src/BorderedBandMatrix.cc
  src/DualBzeroReferenceTrajectory.cc
  src/BzeroReferenceTrajectory.cc
  src/ReferenceTrajectoryBase.cc
  src/MilleBinary.cc
)

target_include_directories(AlignmentReferenceTrajectories PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentReferenceTrajectories PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentReferenceTrajectories PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentReferenceTrajectories PUBLIC /usr/include/root/)
target_include_directories(AlignmentReferenceTrajectories PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentReferenceTrajectories PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentReferenceTrajectories PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentReferenceTrajectories PUBLIC /usr/include/boost/)
target_include_directories(AlignmentReferenceTrajectories PUBLIC /usr/include/eigen3/)
target_include_directories(AlignmentReferenceTrajectories PUBLIC /usr/include/boost/regex/)


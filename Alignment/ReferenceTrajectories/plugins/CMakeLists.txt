add_library(AlignmentReferenceTrajectoriesPlugins OBJECT 
  ReferenceTrajectoryFactory.cc
  CombinedTrajectoryFactory.cc
  DualBzeroTrajectoryFactory.cc
  BzeroReferenceTrajectoryFactory.cc
  DualTrajectoryFactory.cc
  TwoBodyDecayTrajectoryFactory.cc
)

target_include_directories(AlignmentReferenceTrajectoriesPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentReferenceTrajectoriesPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentReferenceTrajectoriesPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentReferenceTrajectoriesPlugins PUBLIC /usr/include/root/)
target_include_directories(AlignmentReferenceTrajectoriesPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentReferenceTrajectoriesPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentReferenceTrajectoriesPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentReferenceTrajectoriesPlugins PUBLIC /usr/include/boost/)
target_include_directories(AlignmentReferenceTrajectoriesPlugins PUBLIC /usr/include/eigen3/)
target_include_directories(AlignmentReferenceTrajectoriesPlugins PUBLIC /usr/include/boost/regex/)


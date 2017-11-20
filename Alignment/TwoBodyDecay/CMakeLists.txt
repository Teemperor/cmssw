add_library(AlignmentTwoBodyDecay OBJECT 
  src/TwoBodyDecayEstimator.cc
  src/TwoBodyDecayLinearizationPointFinder.cc
  src/TwoBodyDecayFitter.cc
  src/TwoBodyDecayModel.cc
  src/TwoBodyDecayDerivatives.cc
)

target_include_directories(AlignmentTwoBodyDecay PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentTwoBodyDecay PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentTwoBodyDecay PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentTwoBodyDecay PUBLIC /usr/include/root/)
target_include_directories(AlignmentTwoBodyDecay PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentTwoBodyDecay PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentTwoBodyDecay PUBLIC /usr/include/boost/)
target_include_directories(AlignmentTwoBodyDecay PUBLIC /usr/include/boost/regex/)


add_subdirectory(test)
add_library(HeavyFlavorAnalysisRecoDecay OBJECT 
  src/BPHFitSelect.cc
  src/BPHRecoBuilder.cc
  src/BPHMomentumSelect.cc
  src/BPHPlusMinusVertex.cc
  src/BPHMultiSelect.cc
  src/BPHRecoSelect.cc
  src/BPHPlusMinusCandidate.cc
  src/BPHDecayMomentum.cc
  src/BPHRecoCandidate.cc
  src/BPHVertexSelect.cc
  src/BPHKinematicFit.cc
  src/BPHDecayVertex.cc
)

target_include_directories(HeavyFlavorAnalysisRecoDecay PUBLIC /usr/include/boost/python/)
target_include_directories(HeavyFlavorAnalysisRecoDecay PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HeavyFlavorAnalysisRecoDecay PUBLIC /usr/include/python2.7/)
target_include_directories(HeavyFlavorAnalysisRecoDecay PUBLIC /usr/include/root/)
target_include_directories(HeavyFlavorAnalysisRecoDecay PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HeavyFlavorAnalysisRecoDecay PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HeavyFlavorAnalysisRecoDecay PUBLIC /usr/include/boost/serialization/)
target_include_directories(HeavyFlavorAnalysisRecoDecay PUBLIC /usr/include/boost/)
target_include_directories(HeavyFlavorAnalysisRecoDecay PUBLIC /usr/include/boost/regex/)


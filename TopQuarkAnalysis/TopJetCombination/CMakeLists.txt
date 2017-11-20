add_subdirectory(plugins)
add_library(TopQuarkAnalysisTopJetCombination OBJECT 
  src/TtSemiLepHypothesis.cc
  src/TtSemiSimpleBestJetComb.cc
  src/TtHadLRJetCombCalc.cc
  src/TtFullHadHypothesis.cc
  src/TtHadLRJetCombObservables.cc
  src/TtHadSimpleBestJetComb.cc
  src/TtFullLepHypothesis.cc
  src/TtSemiLRJetCombCalc.cc
  src/TtSemiLepJetComb.cc
  src/TtSemiLRJetCombObservables.cc
)

target_include_directories(TopQuarkAnalysisTopJetCombination PUBLIC /usr/include/boost/python/)
target_include_directories(TopQuarkAnalysisTopJetCombination PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TopQuarkAnalysisTopJetCombination PUBLIC /usr/include/python2.7/)
target_include_directories(TopQuarkAnalysisTopJetCombination PUBLIC /usr/include/root/)
target_include_directories(TopQuarkAnalysisTopJetCombination PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TopQuarkAnalysisTopJetCombination PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TopQuarkAnalysisTopJetCombination PUBLIC /usr/include/boost/serialization/)
target_include_directories(TopQuarkAnalysisTopJetCombination PUBLIC /usr/include/boost/)
target_include_directories(TopQuarkAnalysisTopJetCombination PUBLIC /usr/include/boost/regex/)


add_library(TopQuarkAnalysisTopJetCombinationPlugins OBJECT 
  SealModule.cc
  TtFullLepHypGenMatch.cc
  TtSemiLepJetCombWMassMaxSumPt.cc
  TtFullHadHypKinFit.cc
  TtSemiLepJetCombMaxSumPtWMass.cc
  TtSemiLepJetCombMVAComputer.cc
  TtFullHadHypGenMatch.cc
  TtSemiLepJetCombGeom.cc
  TtSemiLepJetCombMVATrainer.cc
  TtSemiLepHypHitFit.cc
  TtSemiLepHypGenMatch.cc
  TtSemiLepJetCombWMassDeltaTopMass.cc
  TtSemiLepHypKinFit.cc
  TtFullLepHypKinSolution.cc
)

target_include_directories(TopQuarkAnalysisTopJetCombinationPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(TopQuarkAnalysisTopJetCombinationPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(TopQuarkAnalysisTopJetCombinationPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(TopQuarkAnalysisTopJetCombinationPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TopQuarkAnalysisTopJetCombinationPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(TopQuarkAnalysisTopJetCombinationPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(TopQuarkAnalysisTopJetCombinationPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(TopQuarkAnalysisTopJetCombinationPlugins PUBLIC /usr/include/boost/)
target_include_directories(TopQuarkAnalysisTopJetCombinationPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(TopQuarkAnalysisTopJetCombinationPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TopQuarkAnalysisTopJetCombinationPlugins PUBLIC /usr/include/root/)
target_include_directories(TopQuarkAnalysisTopJetCombinationPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(TopQuarkAnalysisTopJetCombinationPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TopQuarkAnalysisTopJetCombinationPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(TopQuarkAnalysisTopJetCombinationPlugins PUBLIC /usr/include/boost/regex/)


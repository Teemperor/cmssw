add_library(ElectroWeakAnalysisZMuMu_plugins OBJECT 
  ZMuPtScaleAnalyzer.cc
  DebugZMCTruth.cc
  EventVtxInfoNtupleDumper.cc
  ZToMuMuIsoDepositSelector.cc
  ZGoldenFilter.cc
  ZHLTMatchFilter.cc
  BjetAnalyzer.cc
  ZMuMuOverlapExclusion.cc
  ZMuMuIsolationAnalyzer.cc
  GlbMuQualityCutsAnalysis.cc
  ZMuMu_vtxAnalyzer.cc
  ZMuMuEfficiency.cc
  ZToMuMuIsolationSelector.cc
  ZMuMuAnalyzer.cc
  zPdfUnc.cc
  ZToMuMuSelector.cc
  ZHistogrammer.cc
  ZToMuMuFilter.cc
  ZLONLOHistogrammer.cc
  MuTriggerAnalyzer.cc
  ZGlobalVsSAIsolationAnalyzer.cc
  ZMassHistogrammer.cc
  MC_Efficiency_Analyzer.cc
  ZMuMuSaMassHistogram.cc
  ZToLLEdmNtupleDumper.cc
  DimuonMCMatcher.cc
  ZMuMu_radiative_analysis.cc
  ZMuMu_MCanalyzer.cc
  MCAcceptanceAnalyzer.cc
  DimuonStatistics.cc
  triggerEfficiency.cc
  ZMuMuPerformances.cc
  ZMuMuAnalyzer_cynematics.cc
  ZMuMu_efficiencyAnalyzer.cc
  EWKSystUnc.cc
  gamma_radiative_analysis.cc
  ZMCHistogrammer.cc
  dimuonHLTFilterCheck.cc
)

target_include_directories(ElectroWeakAnalysisZMuMu_plugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(ElectroWeakAnalysisZMuMu_plugins PUBLIC /usr/include/python2.7/)
target_include_directories(ElectroWeakAnalysisZMuMu_plugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(ElectroWeakAnalysisZMuMu_plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ElectroWeakAnalysisZMuMu_plugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(ElectroWeakAnalysisZMuMu_plugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(ElectroWeakAnalysisZMuMu_plugins PUBLIC /usr/include/boost/)
target_include_directories(ElectroWeakAnalysisZMuMu_plugins PUBLIC /usr/include/boost/python/)
target_include_directories(ElectroWeakAnalysisZMuMu_plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ElectroWeakAnalysisZMuMu_plugins PUBLIC /usr/include/root/)
target_include_directories(ElectroWeakAnalysisZMuMu_plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ElectroWeakAnalysisZMuMu_plugins PUBLIC /usr/include/boost/regex/)


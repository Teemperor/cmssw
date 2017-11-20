add_subdirectory(plugins)
add_library(TopQuarkAnalysisTopHitFit OBJECT 
  src/Lepjets_Event.cc
  src/PatMuonHitFitTranslator.cc
  src/Constrained_Z.cc
  src/PatElectronHitFitTranslator.cc
  src/Lepjets_Event_Lep.cc
  src/gentop.cc
  src/Constrained_Top.cc
  src/CLHEPHitFitTranslator.cc
  src/Fourvec_Constrainer.cc
  src/matutil.cc
  src/Fit_Result_Vec.cc
  src/Fit_Results.cc
  src/EtaDepResolution.cc
  src/fourvec.cc
  src/Constraint_Intermed.cc
  src/Lepjets_Event_Jet.cc
  src/Fourvec_Event.cc
  src/PatJetHitFitTranslator.cc
  src/PatMETHitFitTranslator.cc
  src/Constraint.cc
  src/Resolution.cc
  src/EtaDepResElement.cc
  src/Top_Decaykin.cc
  src/Objpair.cc
  src/Refcount.cc
  src/Base_Constrainer.cc
  src/Pair_Table.cc
  src/RunHitFit.cc
  src/Vector_Resolution.cc
  src/Top_Fit.cc
  src/Fit_Result.cc
  src/Chisq_Constrainer.cc
  src/Defaults_Text.cc
)

target_include_directories(TopQuarkAnalysisTopHitFit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TopQuarkAnalysisTopHitFit PUBLIC /usr/include/root/)
target_include_directories(TopQuarkAnalysisTopHitFit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TopQuarkAnalysisTopHitFit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TopQuarkAnalysisTopHitFit PUBLIC /usr/include/boost/serialization/)
target_include_directories(TopQuarkAnalysisTopHitFit PUBLIC /usr/include/boost/)
target_include_directories(TopQuarkAnalysisTopHitFit PUBLIC /usr/include/boost/regex/)


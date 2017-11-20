add_library(HLTriggerOfflineSUSYBSM OBJECT 
  src/SUSY_HLT_DoubleMuon_Hadronic.cc
  src/SUSY_HLT_VBF_Mu.cc
  src/SUSY_HLT_PhotonMET.cc
  src/HltSusyExoPostProcessor.cc
  src/SUSY_HLT_alphaT.cc
  src/SUSY_HLT_Muon_Hadronic.cc
  src/SUSY_HLT_DiJet_MET.cc
  src/SUSY_HLT_Electron_BJet.cc
  src/SUSY_HLT_Muon_BJet.cc
  src/SUSY_HLT_Razor.cc
  src/SUSY_HLT_InclusiveHT.cc
  src/SUSY_HLT_SingleLepton.cc
  src/SUSY_HLT_PhotonHT.cc
  src/SUSY_HLT_MuEle_Hadronic.cc
  src/SUSY_HLT_MuonFakes.cc
  src/SUSY_HLT_DoubleEle_Hadronic.cc
  src/SUSY_HLT_ElecFakes.cc
)

target_include_directories(HLTriggerOfflineSUSYBSM PUBLIC /usr/include/boost/iostreams/)
target_include_directories(HLTriggerOfflineSUSYBSM PUBLIC /usr/include/python2.7/)
target_include_directories(HLTriggerOfflineSUSYBSM PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(HLTriggerOfflineSUSYBSM PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(HLTriggerOfflineSUSYBSM PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HLTriggerOfflineSUSYBSM PUBLIC /usr/include/boost/serialization/)
target_include_directories(HLTriggerOfflineSUSYBSM PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(HLTriggerOfflineSUSYBSM PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HLTriggerOfflineSUSYBSM PUBLIC /usr/include/boost/)
target_include_directories(HLTriggerOfflineSUSYBSM PUBLIC /usr/include/eigen3/)
target_include_directories(HLTriggerOfflineSUSYBSM PUBLIC /usr/include/boost/python/)
target_include_directories(HLTriggerOfflineSUSYBSM PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HLTriggerOfflineSUSYBSM PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(HLTriggerOfflineSUSYBSM PUBLIC /usr/include/root/)
target_include_directories(HLTriggerOfflineSUSYBSM PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(HLTriggerOfflineSUSYBSM PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HLTriggerOfflineSUSYBSM PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(HLTriggerOfflineSUSYBSM PUBLIC /usr/include/boost/regex/)


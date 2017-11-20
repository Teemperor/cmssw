add_library(JetMETCorrectionsMCJetPlugins OBJECT 
  SealModule.cc
  CaloMCTruthTreeProducer.cc
  PFMCTruthTreeProducer.cc
)

target_include_directories(JetMETCorrectionsMCJetPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(JetMETCorrectionsMCJetPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(JetMETCorrectionsMCJetPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(JetMETCorrectionsMCJetPlugins PUBLIC /usr/include/root/)
target_include_directories(JetMETCorrectionsMCJetPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(JetMETCorrectionsMCJetPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(JetMETCorrectionsMCJetPlugins PUBLIC /usr/include/boost/)
target_include_directories(JetMETCorrectionsMCJetPlugins PUBLIC /usr/include/boost/regex/)


add_library(JetMETCorrectionsType1MET_plugins OBJECT 
  PFJetMETcorrInputProducer.cc
  Type2CorrectionProducer.cc
  MultShiftMETcorrDBInputProducer.cc
  CorrectedCaloMETProducer.cc
  JetCleanerForType1MET.cc
  Type0PFMETcorrInputProducer.cc
  CaloJetMETcorrInputProducer.cc
  CorrectedPatMETProducer.cc
  MultShiftMETcorrInputProducer.cc
  SysShiftMETcorrInputProducer.cc
  PFchsMETcorrInputProducer.cc
  CorrectedPFMETProducer.cc
  MuonMETcorrInputProducer.cc
  PFCandMETcorrInputProducer.cc
  ScaleCorrMETData.cc
)

target_include_directories(JetMETCorrectionsType1MET_plugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(JetMETCorrectionsType1MET_plugins PUBLIC /usr/include/python2.7/)
target_include_directories(JetMETCorrectionsType1MET_plugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(JetMETCorrectionsType1MET_plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(JetMETCorrectionsType1MET_plugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(JetMETCorrectionsType1MET_plugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(JetMETCorrectionsType1MET_plugins PUBLIC /usr/include/boost/)
target_include_directories(JetMETCorrectionsType1MET_plugins PUBLIC /usr/include/boost/python/)
target_include_directories(JetMETCorrectionsType1MET_plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(JetMETCorrectionsType1MET_plugins PUBLIC /usr/include/root/)
target_include_directories(JetMETCorrectionsType1MET_plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(JetMETCorrectionsType1MET_plugins PUBLIC /usr/include/boost/regex/)


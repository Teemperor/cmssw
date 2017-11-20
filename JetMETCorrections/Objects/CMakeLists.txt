add_library(JetMETCorrectionsObjects OBJECT 
  src/T_EventSetup_JetCorrector.cc
  src/JetCorrector.cc
  src/METCorrectionsRecord.cc
  src/MEtXYcorrectRecord.cc
  src/JetCorrectionsRecord.cc
  src/ChainedJetCorrector.cc
)

target_include_directories(JetMETCorrectionsObjects PUBLIC /usr/include/boost/python/)
target_include_directories(JetMETCorrectionsObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(JetMETCorrectionsObjects PUBLIC /usr/include/python2.7/)
target_include_directories(JetMETCorrectionsObjects PUBLIC /usr/include/root/)
target_include_directories(JetMETCorrectionsObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(JetMETCorrectionsObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(JetMETCorrectionsObjects PUBLIC /usr/include/boost/)
target_include_directories(JetMETCorrectionsObjects PUBLIC /usr/include/boost/regex/)


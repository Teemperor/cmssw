add_library(ValidationEventGenerator_plugins OBJECT 
  BPhysicsSpectrum.cc
  TauValidation.cc
  TTbarSpinCorrHepMCAnalyzer.cc
  DrellYanValidation.cc
  TTbar_GenLepAnalyzer.cc
  WeightManager.cc
  BasicHepMCValidation.cc
  MBUEandQCDValidation.cc
  Module.cc
  BasicGenParticleValidation.cc
  WValidation.cc
  BasicHepMCHeavyIonValidation.cc
  HiggsValidation.cc
  TTbar_GenJetAnalyzer.cc
  DuplicationChecker.cc
  TTbar_Kinematics.cc
  BPhysicsValidation.cc
)

target_include_directories(ValidationEventGenerator_plugins PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationEventGenerator_plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationEventGenerator_plugins PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationEventGenerator_plugins PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(ValidationEventGenerator_plugins PUBLIC /usr/include/root/)
target_include_directories(ValidationEventGenerator_plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationEventGenerator_plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationEventGenerator_plugins PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationEventGenerator_plugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(ValidationEventGenerator_plugins PUBLIC /usr/include/boost/)
target_include_directories(ValidationEventGenerator_plugins PUBLIC /usr/include/boost/regex/)


add_library(JetMETCorrectionsFFTJetObjects OBJECT 
  src/FFTJetLookupTableRcdTypes.cc
  src/FFTJetCorrectorSequenceRcdTypes.cc
  src/FFTGenericScaleCalculator.cc
  src/FFTJetCorrectorSequenceTypes.cc
  src/FFTJetLookupTableSequenceLoader.cc
  src/FFTJetCorrectorSequenceLoader.cc
  src/FFTJetCorrectorParametersLoader.cc
  src/FFTJetCorrectorApp.cc
  src/loadFFTJetInterpolationTable.cc
  src/AbsFFTSpecificScaleCalculator.cc
  src/T_EventSetup_LookupTable.cc
)

target_include_directories(JetMETCorrectionsFFTJetObjects PUBLIC /usr/include/boost/iostreams/)
target_include_directories(JetMETCorrectionsFFTJetObjects PUBLIC /usr/include/python2.7/)
target_include_directories(JetMETCorrectionsFFTJetObjects PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(JetMETCorrectionsFFTJetObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(JetMETCorrectionsFFTJetObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(JetMETCorrectionsFFTJetObjects PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(JetMETCorrectionsFFTJetObjects PUBLIC /usr/include/boost/)
target_include_directories(JetMETCorrectionsFFTJetObjects PUBLIC /usr/include/boost/python/)
target_include_directories(JetMETCorrectionsFFTJetObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(JetMETCorrectionsFFTJetObjects PUBLIC /usr/include/root/)
target_include_directories(JetMETCorrectionsFFTJetObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(JetMETCorrectionsFFTJetObjects PUBLIC /usr/include/boost/regex/)


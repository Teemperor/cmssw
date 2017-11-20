add_library(RecoJetsJetAnalyzers OBJECT 
  src/myFastSimVal.cc
  src/CMSDAS11DijetAnalyzer.cc
  src/JPTJetSelector.cc
  src/JetCorExample.cc
  src/myRawAna.cc
  src/FlavorJetCorrectionExample.cc
  src/CMSDAS11DijetTestAnalyzer.cc
  src/JetToDigiDump.cc
  src/DijetRatio.cc
  src/DijetMass.cc
  src/PartonJetCorrectionExample.cc
  src/SimpleJetDump.cc
  src/JetIdSelector.cc
  src/FFTJetImageRecorder.cc
  src/CaloTowersExample.cc
  src/FFTJetPileupAnalyzer.cc
  src/JetValidation.cc
  src/JetPlotsExample.cc
  src/JetAnaPythia.cc
  src/CalcTopMassExample.cc
  src/ptHatFilter.cc
)

target_include_directories(RecoJetsJetAnalyzers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoJetsJetAnalyzers PUBLIC /usr/include/python2.7/)
target_include_directories(RecoJetsJetAnalyzers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoJetsJetAnalyzers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoJetsJetAnalyzers PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoJetsJetAnalyzers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoJetsJetAnalyzers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoJetsJetAnalyzers PUBLIC /usr/include/boost/)
target_include_directories(RecoJetsJetAnalyzers PUBLIC /usr/include/eigen3/)
target_include_directories(RecoJetsJetAnalyzers PUBLIC /usr/include/boost/python/)
target_include_directories(RecoJetsJetAnalyzers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoJetsJetAnalyzers PUBLIC /usr/include/root/)
target_include_directories(RecoJetsJetAnalyzers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoJetsJetAnalyzers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoJetsJetAnalyzers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoJetsJetAnalyzers PUBLIC /usr/include/boost/regex/)


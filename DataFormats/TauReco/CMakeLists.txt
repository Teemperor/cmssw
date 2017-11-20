add_library(DataFormatsTauReco OBJECT 
  src/PFTauTransverseImpactParameter.cc
  src/BaseTauTagInfo.cc
  src/PFRecoTauChargedHadron.cc
  src/PFTau3ProngSummary.cc
  src/CaloTau.cc
  src/RecoTauPiZero.cc
  src/PFTauDecayMode.cc
  src/PFTau.cc
  src/BaseTau.cc
  src/PFTauTagInfo.cc
  src/CaloTauTagInfo.cc
)

target_include_directories(DataFormatsTauReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsTauReco PUBLIC /usr/include/root/)
target_include_directories(DataFormatsTauReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsTauReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsTauReco PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsTauReco PUBLIC /usr/include/boost/regex/)


add_library(DataFormatsJetReco OBJECT 
  src/PileupJetIdentifier.cc
  src/JetTracksAssociation.cc
  src/PFClusterJet.cc
  src/PFJet.cc
  src/GenJet.cc
  src/JetFloatAssociation.cc
  src/JetExtendedAssociation.cc
  src/Jet.cc
  src/GenericJet.cc
  src/JPTJet.cc
  src/BasicJet.cc
  src/CaloJet.cc
  src/FFTJetProducerSummary.cc
  src/TrackJet.cc
  src/DiscretizedEnergyFlow.cc
)

target_include_directories(DataFormatsJetReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsJetReco PUBLIC /usr/include/root/)
target_include_directories(DataFormatsJetReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsJetReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsJetReco PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsJetReco PUBLIC /usr/include/boost/regex/)


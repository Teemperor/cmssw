add_library(RecoJetsJetAssociationAlgorithms OBJECT 
  src/JetTracksAssociationDR.cc
  src/JetTracksAssociationDRCalo.cc
  src/JetTracksAssociationDRVertex.cc
  src/JetTracksAssociationXtrpCalo.cc
  src/JetTracksAssociationDRVertexAssigned.cc
  src/JetSignalVertexCompatibilityAlgo.cc
  src/JetTracksAssociationExplicit.cc
)

target_include_directories(RecoJetsJetAssociationAlgorithms PUBLIC /usr/include/boost/python/)
target_include_directories(RecoJetsJetAssociationAlgorithms PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoJetsJetAssociationAlgorithms PUBLIC /usr/include/python2.7/)
target_include_directories(RecoJetsJetAssociationAlgorithms PUBLIC /usr/include/root/)
target_include_directories(RecoJetsJetAssociationAlgorithms PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoJetsJetAssociationAlgorithms PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoJetsJetAssociationAlgorithms PUBLIC /usr/include/boost/)
target_include_directories(RecoJetsJetAssociationAlgorithms PUBLIC /usr/include/boost/regex/)


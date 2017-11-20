add_subdirectory(test)
add_library(JetMETCorrectionsJetVertexAssociation OBJECT 
  src/SealModule.cc
  src/JetVertexAssociation.cc
  src/JetVertexMain.cc
)

target_include_directories(JetMETCorrectionsJetVertexAssociation PUBLIC /usr/include/boost/python/)
target_include_directories(JetMETCorrectionsJetVertexAssociation PUBLIC /usr/include/boost/filesystem/)
target_include_directories(JetMETCorrectionsJetVertexAssociation PUBLIC /usr/include/python2.7/)
target_include_directories(JetMETCorrectionsJetVertexAssociation PUBLIC /usr/include/root/)
target_include_directories(JetMETCorrectionsJetVertexAssociation PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(JetMETCorrectionsJetVertexAssociation PUBLIC /home/teemperor/cms/md5/)
target_include_directories(JetMETCorrectionsJetVertexAssociation PUBLIC /usr/include/boost/)
target_include_directories(JetMETCorrectionsJetVertexAssociation PUBLIC /usr/include/boost/regex/)


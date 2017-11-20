add_subdirectory(plugins)
add_library(RecoTauTagTauTagTools OBJECT 
  src/PFCandidateStripMerger.cc
  src/PFCandCommonVertexFitter.cc
  src/PFCandidateMergerBase.cc
  src/CaloTauElementsOperators.cc
  src/PFTauElementsOperators.cc
  src/TauElementsOperators.cc
  src/ECALBounds.cc
  src/TauTagTools.cc
  src/GeneratorTau.cc
)

target_include_directories(RecoTauTagTauTagTools PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTauTagTauTagTools PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoTauTagTauTagTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTauTagTauTagTools PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTauTagTauTagTools PUBLIC /usr/include/root/)
target_include_directories(RecoTauTagTauTagTools PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoTauTagTauTagTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTauTagTauTagTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTauTagTauTagTools PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTauTagTauTagTools PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoTauTagTauTagTools PUBLIC /usr/include/boost/)
target_include_directories(RecoTauTagTauTagTools PUBLIC /usr/include/boost/regex/)


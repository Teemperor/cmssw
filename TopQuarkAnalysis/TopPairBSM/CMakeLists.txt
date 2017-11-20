add_library(TopQuarkAnalysisTopPairBSM OBJECT 
  src/BoostedTopProducer.cc
  src/JetCombinatorics.cc
  src/METzCalculator.cc
)

target_include_directories(TopQuarkAnalysisTopPairBSM PUBLIC /usr/include/boost/iostreams/)
target_include_directories(TopQuarkAnalysisTopPairBSM PUBLIC /usr/include/python2.7/)
target_include_directories(TopQuarkAnalysisTopPairBSM PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(TopQuarkAnalysisTopPairBSM PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TopQuarkAnalysisTopPairBSM PUBLIC /usr/include/boost/serialization/)
target_include_directories(TopQuarkAnalysisTopPairBSM PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(TopQuarkAnalysisTopPairBSM PUBLIC /usr/include/boost/)
target_include_directories(TopQuarkAnalysisTopPairBSM PUBLIC /usr/include/eigen3/)
target_include_directories(TopQuarkAnalysisTopPairBSM PUBLIC /usr/include/boost/python/)
target_include_directories(TopQuarkAnalysisTopPairBSM PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TopQuarkAnalysisTopPairBSM PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(TopQuarkAnalysisTopPairBSM PUBLIC /usr/include/root/)
target_include_directories(TopQuarkAnalysisTopPairBSM PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TopQuarkAnalysisTopPairBSM PUBLIC /usr/include/boost/regex/)


add_subdirectory(test)
add_subdirectory(plugins)
add_library(HeavyFlavorAnalysisSpecificDecay OBJECT 
  src/BPHBdToJPsiKxBuilder.cc
  src/BPHPhiToKKBuilder.cc
  src/BPHBsToJPsiPhiBuilder.cc
  src/BPHParticleMasses.cc
  src/BPHOniaToMuMuBuilder.cc
  src/BPHKx0ToKPiBuilder.cc
  src/BPHBuToJPsiKBuilder.cc
)

target_include_directories(HeavyFlavorAnalysisSpecificDecay PUBLIC /usr/include/boost/python/)
target_include_directories(HeavyFlavorAnalysisSpecificDecay PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HeavyFlavorAnalysisSpecificDecay PUBLIC /usr/include/python2.7/)
target_include_directories(HeavyFlavorAnalysisSpecificDecay PUBLIC /usr/include/root/)
target_include_directories(HeavyFlavorAnalysisSpecificDecay PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HeavyFlavorAnalysisSpecificDecay PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HeavyFlavorAnalysisSpecificDecay PUBLIC /usr/include/boost/serialization/)
target_include_directories(HeavyFlavorAnalysisSpecificDecay PUBLIC /usr/include/boost/)
target_include_directories(HeavyFlavorAnalysisSpecificDecay PUBLIC /usr/include/boost/regex/)


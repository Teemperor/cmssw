add_library(RecoJetsFFTJetAlgorithms OBJECT 
  src/EtaDependentPileup.cc
  src/adjustForPileup.cc
  src/LinInterpolatedTable1D.cc
  src/JetConvergenceDistance.cc
  src/LookupTable2d.cc
  src/EtaAndPtDependentPeakSelector.cc
  src/JetToPeakDistance.cc
)

target_include_directories(RecoJetsFFTJetAlgorithms PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoJetsFFTJetAlgorithms PUBLIC /home/teemperor/cms/ext/fftjet)
target_include_directories(RecoJetsFFTJetAlgorithms PUBLIC /usr/include/root/)
target_include_directories(RecoJetsFFTJetAlgorithms PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoJetsFFTJetAlgorithms PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoJetsFFTJetAlgorithms PUBLIC /usr/include/boost/)
target_include_directories(RecoJetsFFTJetAlgorithms PUBLIC /usr/include/boost/regex/)


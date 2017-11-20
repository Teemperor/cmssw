add_library(RecoJetsFFTWJetProducers_plugins OBJECT 
  FFTJetPatRecoProducer.cc
  FFTJetPileupProcessor.cc
  FFTJetEFlowSmoother.cc
  FFTJetPFPileupCleaner.cc
  FFTJetCorrectionProducer.cc
  FFTJetTreeDump.cc
  FFTJetDijetFilter.cc
  FFTJetVertexAdder.cc
  FFTJetPileupEstimator.cc
  FFTJetProducer.cc
)

target_include_directories(RecoJetsFFTWJetProducers_plugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoJetsFFTWJetProducers_plugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoJetsFFTWJetProducers_plugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoJetsFFTWJetProducers_plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoJetsFFTWJetProducers_plugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoJetsFFTWJetProducers_plugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoJetsFFTWJetProducers_plugins PUBLIC /usr/include/boost/)
target_include_directories(RecoJetsFFTWJetProducers_plugins PUBLIC /home/teemperor/cms/ext/fftjet)
target_include_directories(RecoJetsFFTWJetProducers_plugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoJetsFFTWJetProducers_plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoJetsFFTWJetProducers_plugins PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(RecoJetsFFTWJetProducers_plugins PUBLIC /usr/include/root/)
target_include_directories(RecoJetsFFTWJetProducers_plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoJetsFFTWJetProducers_plugins PUBLIC /usr/include/boost/regex/)


add_library(TopQuarkAnalysisTopEventProducers OBJECT 
  src/TopDecaySubset.cc
  src/SealModule.cc
  src/TopInitSubset.cc
  src/PseudoTopProducer.cc
  src/TtGenEventReco.cc
  src/TtDilepEvtSolutionMaker.cc
  src/TtHadEvtSolutionMaker.cc
  src/StEvtSolutionMaker.cc
  src/TtSemiEvtSolutionMaker.cc
  src/StGenEventReco.cc
)

target_include_directories(TopQuarkAnalysisTopEventProducers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(TopQuarkAnalysisTopEventProducers PUBLIC /usr/include/python2.7/)
target_include_directories(TopQuarkAnalysisTopEventProducers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(TopQuarkAnalysisTopEventProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TopQuarkAnalysisTopEventProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(TopQuarkAnalysisTopEventProducers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(TopQuarkAnalysisTopEventProducers PUBLIC /usr/include/boost/)
target_include_directories(TopQuarkAnalysisTopEventProducers PUBLIC /usr/include/boost/python/)
target_include_directories(TopQuarkAnalysisTopEventProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TopQuarkAnalysisTopEventProducers PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(TopQuarkAnalysisTopEventProducers PUBLIC /usr/include/root/)
target_include_directories(TopQuarkAnalysisTopEventProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TopQuarkAnalysisTopEventProducers PUBLIC /usr/include/boost/regex/)


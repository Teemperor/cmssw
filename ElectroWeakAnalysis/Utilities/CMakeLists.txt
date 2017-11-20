add_library(ElectroWeakAnalysisUtilities OBJECT 
  src/ISRWeightProducer.cc
  src/DistortedMETProducer.cc
  src/DistortedMuonProducerFromDB.cc
  src/SimpleSystematicsAnalyzer.cc
  src/MuonWithPFIsoProducer.cc
  src/PdfWeightProducer.cc
  src/PdfSystematicsAnalyzer.cc
  src/DistortedPFCandProducer.cc
  src/ISRGammaWeightProducer.cc
  src/DistortedMuonProducer.cc
  src/WeakEffectsWeightProducer.cc
  src/FSRWeightProducer.cc
)

target_include_directories(ElectroWeakAnalysisUtilities PUBLIC /usr/include/boost/iostreams/)
target_include_directories(ElectroWeakAnalysisUtilities PUBLIC /usr/include/python2.7/)
target_include_directories(ElectroWeakAnalysisUtilities PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(ElectroWeakAnalysisUtilities PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ElectroWeakAnalysisUtilities PUBLIC /usr/include/boost/serialization/)
target_include_directories(ElectroWeakAnalysisUtilities PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(ElectroWeakAnalysisUtilities PUBLIC /usr/include/boost/)
target_include_directories(ElectroWeakAnalysisUtilities PUBLIC /usr/include/boost/python/)
target_include_directories(ElectroWeakAnalysisUtilities PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ElectroWeakAnalysisUtilities PUBLIC /usr/include/root/)
target_include_directories(ElectroWeakAnalysisUtilities PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ElectroWeakAnalysisUtilities PUBLIC /usr/include/boost/regex/)


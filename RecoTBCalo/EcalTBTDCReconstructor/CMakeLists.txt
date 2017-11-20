add_library(RecoTBCaloEcalTBTDCReconstructor OBJECT 
  src/SealModule.cc
  src/EcalTBH2TDCRecInfoProducer.cc
  src/EcalTBTDCRecInfoAlgo.cc
  src/EcalTBH2TDCRecInfoAlgo.cc
  src/EcalTBTDCRecInfoProducer.cc
  src/EcalTBTDCRawInfoDumper.cc
)

target_include_directories(RecoTBCaloEcalTBTDCReconstructor PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTBCaloEcalTBTDCReconstructor PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTBCaloEcalTBTDCReconstructor PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTBCaloEcalTBTDCReconstructor PUBLIC /usr/include/root/)
target_include_directories(RecoTBCaloEcalTBTDCReconstructor PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTBCaloEcalTBTDCReconstructor PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTBCaloEcalTBTDCReconstructor PUBLIC /usr/include/boost/)
target_include_directories(RecoTBCaloEcalTBTDCReconstructor PUBLIC /usr/include/boost/regex/)


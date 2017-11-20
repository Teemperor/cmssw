add_library(RecoTBCaloEcalTBHodoscopeReconstructor OBJECT 
  src/SealModule.cc
  src/EcalTBHodoscopeRecInfoProducer.cc
  src/EcalTBHodoscopeRecInfoAlgo.cc
  src/EcalTBHodoscopeRawInfoDumper.cc
)

target_include_directories(RecoTBCaloEcalTBHodoscopeReconstructor PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTBCaloEcalTBHodoscopeReconstructor PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTBCaloEcalTBHodoscopeReconstructor PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTBCaloEcalTBHodoscopeReconstructor PUBLIC /usr/include/root/)
target_include_directories(RecoTBCaloEcalTBHodoscopeReconstructor PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTBCaloEcalTBHodoscopeReconstructor PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTBCaloEcalTBHodoscopeReconstructor PUBLIC /usr/include/boost/)
target_include_directories(RecoTBCaloEcalTBHodoscopeReconstructor PUBLIC /usr/include/boost/regex/)


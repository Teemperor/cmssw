add_library(RecoTBCaloEcalTBRecProducers OBJECT 
  src/IsTBH4Type.cc
  src/SealModule.cc
  src/EcalTBWeightUncalibRecHitProducer.cc
)

target_include_directories(RecoTBCaloEcalTBRecProducers PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTBCaloEcalTBRecProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTBCaloEcalTBRecProducers PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTBCaloEcalTBRecProducers PUBLIC /usr/include/root/)
target_include_directories(RecoTBCaloEcalTBRecProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTBCaloEcalTBRecProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTBCaloEcalTBRecProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTBCaloEcalTBRecProducers PUBLIC /usr/include/boost/)
target_include_directories(RecoTBCaloEcalTBRecProducers PUBLIC /usr/include/eigen3/)
target_include_directories(RecoTBCaloEcalTBRecProducers PUBLIC /usr/include/boost/regex/)


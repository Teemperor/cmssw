add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoLocalCaloEcalRecProducers OBJECT 
  src/EcalRecHitWorkerFactory.cc
  src/ESRecHitWorkerFactory.cc
  src/EcalUncalibRecHitWorkerFactory.cc
  src/EcalUncalibRecHitFillDescriptionWorkerFactory.cc
)

target_include_directories(RecoLocalCaloEcalRecProducers PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalCaloEcalRecProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalCaloEcalRecProducers PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalCaloEcalRecProducers PUBLIC /usr/include/root/)
target_include_directories(RecoLocalCaloEcalRecProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalCaloEcalRecProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalCaloEcalRecProducers PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalCaloEcalRecProducers PUBLIC /usr/include/boost/regex/)


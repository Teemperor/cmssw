add_library(RecoLocalCaloEcalRecProducersPlugins OBJECT 
  EcalRecHitWorkerRecover.cc
  EcalUncalibRecHitWorkerGlobal.cc
  EcalRecalibRecHitProducer.cc
  EcalRecHitProducer.cc
  EcalUncalibRecHitWorkerWeights.cc
  EcalDetIdToBeRecoveredProducer.cc
  EcalUncalibRecHitWorkerFixedAlphaBetaFit.cc
  ESRecHitProducer.cc
  EcalUncalibRecHitWorkerMultiFit.cc
  EcalTPSkimmer.cc
  EcalCompactTrigPrimProducer.cc
  EcalDetailedTimeRecHitProducer.cc
  ESRecHitWorker.cc
  EcalUncalibRecHitWorkerMaxSample.cc
  EcalUncalibRecHitWorkerRatio.cc
  EcalUncalibRecHitWorkerAnalFit.cc
  EcalUncalibRecHitProducer.cc
  EcalRecHitWorkerSimple.cc
)

target_include_directories(RecoLocalCaloEcalRecProducersPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalCaloEcalRecProducersPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalCaloEcalRecProducersPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalCaloEcalRecProducersPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoLocalCaloEcalRecProducersPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalCaloEcalRecProducersPlugins PUBLIC /usr/include/eigen3/)
target_include_directories(RecoLocalCaloEcalRecProducersPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalCaloEcalRecProducersPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalCaloEcalRecProducersPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoLocalCaloEcalRecProducersPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoLocalCaloEcalRecProducersPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalCaloEcalRecProducersPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoLocalCaloEcalRecProducersPlugins PUBLIC /usr/include/boost/regex/)


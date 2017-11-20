add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoLocalCaloEcalRecAlgos OBJECT 
  src/EcalSeverityLevelAlgoRcd.cc
  src/EcalSeverityLevelAlgo.cc
  src/PulseChiSqSNNLS.cc
  src/T_EventSetup_SeverityLevelAlgo.cc
  src/ESRecHitAnalyticAlgo.cc
  src/ESRecHitSimAlgo.cc
  src/EcalCleaningAlgo.cc
  src/dummyfile.cc
  src/ESRecHitFitAlgo.cc
  src/EcalUncalibRecHitMultiFitAlgo.cc
)

target_include_directories(RecoLocalCaloEcalRecAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalCaloEcalRecAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalCaloEcalRecAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalCaloEcalRecAlgos PUBLIC /usr/include/root/)
target_include_directories(RecoLocalCaloEcalRecAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalCaloEcalRecAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalCaloEcalRecAlgos PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalCaloEcalRecAlgos PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalCaloEcalRecAlgos PUBLIC /usr/include/eigen3/)
target_include_directories(RecoLocalCaloEcalRecAlgos PUBLIC /usr/include/boost/regex/)


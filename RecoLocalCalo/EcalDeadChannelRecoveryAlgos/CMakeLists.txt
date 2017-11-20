add_subdirectory(test)
add_library(RecoLocalCaloEcalDeadChannelRecoveryAlgos OBJECT 
  src/EcalDeadChannelRecoveryNN.cc
  src/EcalCrystalMatrixProbality.cc
  src/EcalDeadChannelRecoveryAlgos.cc
)

target_include_directories(RecoLocalCaloEcalDeadChannelRecoveryAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalCaloEcalDeadChannelRecoveryAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalCaloEcalDeadChannelRecoveryAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalCaloEcalDeadChannelRecoveryAlgos PUBLIC /usr/include/root/)
target_include_directories(RecoLocalCaloEcalDeadChannelRecoveryAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalCaloEcalDeadChannelRecoveryAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalCaloEcalDeadChannelRecoveryAlgos PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalCaloEcalDeadChannelRecoveryAlgos PUBLIC /usr/include/boost/regex/)


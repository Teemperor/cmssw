add_library(SimCalorimetryHcalZeroSuppressionProducers OBJECT 
  src/SealModule.cc
  src/HcalRealisticZS.cc
  src/HcalZeroSuppressionAlgo.cc
  src/HcalZSAlgoEnergy.cc
  src/HcalZSAlgoRealistic.cc
  src/HcalSimpleAmplitudeZS.cc
)

target_include_directories(SimCalorimetryHcalZeroSuppressionProducers PUBLIC /usr/include/boost/python/)
target_include_directories(SimCalorimetryHcalZeroSuppressionProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimCalorimetryHcalZeroSuppressionProducers PUBLIC /usr/include/python2.7/)
target_include_directories(SimCalorimetryHcalZeroSuppressionProducers PUBLIC /usr/include/root/)
target_include_directories(SimCalorimetryHcalZeroSuppressionProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimCalorimetryHcalZeroSuppressionProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimCalorimetryHcalZeroSuppressionProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimCalorimetryHcalZeroSuppressionProducers PUBLIC /usr/include/boost/)
target_include_directories(SimCalorimetryHcalZeroSuppressionProducers PUBLIC /usr/include/boost/regex/)


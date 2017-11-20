add_library(SimCalorimetryEcalZeroSuppressionProducers OBJECT 
  src/SealModule.cc
  src/EcalZeroSuppressionProducer.cc
  src/ESZeroSuppressionProducer.cc
)

target_include_directories(SimCalorimetryEcalZeroSuppressionProducers PUBLIC /usr/include/python2.7/)
target_include_directories(SimCalorimetryEcalZeroSuppressionProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimCalorimetryEcalZeroSuppressionProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimCalorimetryEcalZeroSuppressionProducers PUBLIC /usr/include/boost/)
target_include_directories(SimCalorimetryEcalZeroSuppressionProducers PUBLIC /usr/include/eigen3/)
target_include_directories(SimCalorimetryEcalZeroSuppressionProducers PUBLIC /usr/include/boost/python/)
target_include_directories(SimCalorimetryEcalZeroSuppressionProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimCalorimetryEcalZeroSuppressionProducers PUBLIC /usr/include/root/)
target_include_directories(SimCalorimetryEcalZeroSuppressionProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimCalorimetryEcalZeroSuppressionProducers PUBLIC /usr/include/boost/regex/)


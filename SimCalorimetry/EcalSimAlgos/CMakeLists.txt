add_library(SimCalorimetryEcalSimAlgos OBJECT 
  src/APDShape.cc
  src/EcalTimeMapDigitizer.cc
  src/EEShape.cc
  src/EcalSignalGenerator.cc
  src/EcalHitResponse.cc
  src/EcalSimParameterMap.cc
  src/EcalShapeBase.cc
  src/ESElectronicsSim.cc
  src/ESHitResponse.cc
  src/EcalCoder.cc
  src/EBShape.cc
  src/ESElectronicsSimFast.cc
  src/EcalCorrelatedNoiseMatrix.cc
  src/ESShape.cc
  src/EBHitResponse.cc
  src/ESDigitizer.cc
  src/EcalElectronicsSim.cc
  src/EcalDigitizers.cc
  src/EEHitResponse.cc
)

target_include_directories(SimCalorimetryEcalSimAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(SimCalorimetryEcalSimAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimCalorimetryEcalSimAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(SimCalorimetryEcalSimAlgos PUBLIC /usr/include/root/)
target_include_directories(SimCalorimetryEcalSimAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimCalorimetryEcalSimAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimCalorimetryEcalSimAlgos PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimCalorimetryEcalSimAlgos PUBLIC /usr/include/boost/)
target_include_directories(SimCalorimetryEcalSimAlgos PUBLIC /usr/include/boost/regex/)


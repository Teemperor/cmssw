add_library(SimCalorimetryHcalSimAlgos OBJECT 
  src/HFSimParameters.cc
  src/HcalCoderFactory.cc
  src/HcalAmplifier.cc
  src/HPDIonFeedbackSim.cc
  src/HcalElectronicsSim.cc
  src/ZDCShape.cc
  src/HcalTDC.cc
  src/HcalShape.cc
  src/HcalSimParameterMap.cc
  src/HFShape.cc
  src/HcalSiPMShape.cc
  src/HcalTimeSlewSim.cc
  src/HcalSignalGenerator.cc
  src/HcalSiPM.cc
  src/HcalSimParameters.cc
  src/HcalShapes.cc
  src/HcalSiPMHitResponse.cc
)

target_include_directories(SimCalorimetryHcalSimAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(SimCalorimetryHcalSimAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimCalorimetryHcalSimAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(SimCalorimetryHcalSimAlgos PUBLIC /usr/include/root/)
target_include_directories(SimCalorimetryHcalSimAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimCalorimetryHcalSimAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimCalorimetryHcalSimAlgos PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimCalorimetryHcalSimAlgos PUBLIC /usr/include/boost/)
target_include_directories(SimCalorimetryHcalSimAlgos PUBLIC /usr/include/boost/regex/)


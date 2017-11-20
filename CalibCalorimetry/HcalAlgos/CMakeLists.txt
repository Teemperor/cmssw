add_subdirectory(test)
add_library(CalibCalorimetryHcalAlgos OBJECT 
  src/LowPassFilterTiming.cc
  src/HcalPulseShape.cc
  src/HcalSiPMRadiationDamage.cc
  src/HcalLogicalMapGenerator.cc
  src/HcalShapeIntegrator.cc
  src/HcalPulseContainmentManager.cc
  src/HcalDbASCIIIO.cc
  src/HcalPulseContainmentCorrection.cc
  src/PadeTableODE.cc
  src/HcalPulseShapes.cc
  src/HcalPulseContainmentAlgo.cc
  src/HcalTimeSlew.cc
  src/HcalSiPMnonlinearity.cc
  src/HcalDbHardcode.cc
  src/HcalDbXml.cc
  src/HcalHardcodeParameters.cc
  src/HcalLedAnalysis.cc
  src/ThirdOrderDelayODE.cc
  src/ConstantStepOdeSolver.cc
  src/HcalPedestalAnalysis.cc
  src/QIE8Simulator.cc
  src/HcalAlgoUtils.cc
  src/HBHERecalibration.cc
)

target_include_directories(CalibCalorimetryHcalAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(CalibCalorimetryHcalAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibCalorimetryHcalAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(CalibCalorimetryHcalAlgos PUBLIC /usr/include/root/)
target_include_directories(CalibCalorimetryHcalAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibCalorimetryHcalAlgos PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibCalorimetryHcalAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibCalorimetryHcalAlgos PUBLIC /usr/include/boost/)
target_include_directories(CalibCalorimetryHcalAlgos PUBLIC /usr/include/boost/regex/)


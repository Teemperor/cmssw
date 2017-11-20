add_library(SimCalorimetryHcalTrigPrimAlgos OBJECT 
  src/HcalTriggerPrimitiveAlgo.cc
  src/HcalFeatureHFEMBit.cc
  src/HcalFinegrainBit.cc
)

target_include_directories(SimCalorimetryHcalTrigPrimAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(SimCalorimetryHcalTrigPrimAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimCalorimetryHcalTrigPrimAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(SimCalorimetryHcalTrigPrimAlgos PUBLIC /usr/include/root/)
target_include_directories(SimCalorimetryHcalTrigPrimAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimCalorimetryHcalTrigPrimAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimCalorimetryHcalTrigPrimAlgos PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimCalorimetryHcalTrigPrimAlgos PUBLIC /usr/include/boost/)
target_include_directories(SimCalorimetryHcalTrigPrimAlgos PUBLIC /usr/include/boost/regex/)


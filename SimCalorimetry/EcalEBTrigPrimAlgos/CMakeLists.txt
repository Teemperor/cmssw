add_library(SimCalorimetryEcalEBTrigPrimAlgos OBJECT 
  src/EcalFenixPeakFinder.cc
  src/EcalFenixStripFormatEB.cc
  src/EcalFenixTcpFormat.cc
  src/EcalEBTrigPrimTestAlgo.cc
  src/EcalFenixAmplitudeFilter.cc
  src/EcalFenixLinearizer.cc
)

target_include_directories(SimCalorimetryEcalEBTrigPrimAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(SimCalorimetryEcalEBTrigPrimAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimCalorimetryEcalEBTrigPrimAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(SimCalorimetryEcalEBTrigPrimAlgos PUBLIC /usr/include/root/)
target_include_directories(SimCalorimetryEcalEBTrigPrimAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimCalorimetryEcalEBTrigPrimAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimCalorimetryEcalEBTrigPrimAlgos PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimCalorimetryEcalEBTrigPrimAlgos PUBLIC /usr/include/boost/)
target_include_directories(SimCalorimetryEcalEBTrigPrimAlgos PUBLIC /usr/include/boost/regex/)


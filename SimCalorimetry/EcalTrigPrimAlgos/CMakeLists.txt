add_library(SimCalorimetryEcalTrigPrimAlgos OBJECT 
  src/EcalFenixEtStrip.cc
  src/EcalFenixPeakFinder.cc
  src/EcalFenixTcpFgvbEE.cc
  src/EcalTrigPrimFunctionalAlgo.cc
  src/EcalFenixStripFormatEB.cc
  src/EcalFenixMaxof2.cc
  src/EcalFenixBypassLin.cc
  src/EcalFenixEtTot.cc
  src/EcalFenixTcpFormat.cc
  src/EcalFenixStripFgvbEE.cc
  src/EcalFenixTcp.cc
  src/EcalFenixFgvbEB.cc
  src/EcalFenixTcpsFgvbEB.cc
  src/EcalFenixAmplitudeFilter.cc
  src/EcalFenixStripFormatEE.cc
  src/EcalFenixLinearizer.cc
  src/EcalFenixStrip.cc
)

target_include_directories(SimCalorimetryEcalTrigPrimAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(SimCalorimetryEcalTrigPrimAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimCalorimetryEcalTrigPrimAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(SimCalorimetryEcalTrigPrimAlgos PUBLIC /usr/include/root/)
target_include_directories(SimCalorimetryEcalTrigPrimAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimCalorimetryEcalTrigPrimAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimCalorimetryEcalTrigPrimAlgos PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimCalorimetryEcalTrigPrimAlgos PUBLIC /usr/include/boost/)
target_include_directories(SimCalorimetryEcalTrigPrimAlgos PUBLIC /usr/include/boost/regex/)


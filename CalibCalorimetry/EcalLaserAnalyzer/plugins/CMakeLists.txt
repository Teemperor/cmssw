add_library(CalibCalorimetryEcalLaserAnalyzerPlugin OBJECT 
  EcalLaserAnalyzerYousi.cc
  EcalLaserAnalyzer2.cc
  EcalMatacqAnalyzer.cc
  EcalPerEvtMatacqAnalyzer.cc
  EcalABAnalyzer.cc
  EcalPerEvtLaserAnalyzer.cc
  EcalLaserAnalyzer.cc
  EcalTestPulseAnalyzer.cc
  EcalStatusAnalyzer.cc
)

target_include_directories(CalibCalorimetryEcalLaserAnalyzerPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(CalibCalorimetryEcalLaserAnalyzerPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibCalorimetryEcalLaserAnalyzerPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(CalibCalorimetryEcalLaserAnalyzerPlugin PUBLIC /usr/include/root/)
target_include_directories(CalibCalorimetryEcalLaserAnalyzerPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibCalorimetryEcalLaserAnalyzerPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibCalorimetryEcalLaserAnalyzerPlugin PUBLIC /usr/include/boost/)
target_include_directories(CalibCalorimetryEcalLaserAnalyzerPlugin PUBLIC /usr/include/boost/regex/)


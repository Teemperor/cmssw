add_library(testDTCalibration OBJECT 
  stubs/DTTimeBoxFitter.cc
  stubs/DTTimeBoxPlotter.cc
  stubs/DTMeanTimerPlotter.cc
)

target_include_directories(testDTCalibration PUBLIC /usr/include/boost/python/)
target_include_directories(testDTCalibration PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDTCalibration PUBLIC /usr/include/python2.7/)
target_include_directories(testDTCalibration PUBLIC /usr/include/root/)
target_include_directories(testDTCalibration PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(testDTCalibration PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDTCalibration PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDTCalibration PUBLIC /usr/include/boost/serialization/)
target_include_directories(testDTCalibration PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testDTCalibration PUBLIC /usr/include/boost/)
target_include_directories(testDTCalibration PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(testDTCalibration PUBLIC /usr/include/boost/regex/)

add_library(testDTCalibrationDBTools OBJECT 
  DBTools/DumpFileToDB.cc
  DBTools/SealModule.cc
  DBTools/FakeTTrig.cc
  DBTools/DumpDBToFile.cc
  DBTools/DTVDriftAnalyzer.cc
  DBTools/DTT0Analyzer.cc
  DBTools/ShiftTTrigDB.cc
  DBTools/DTCalibrationMap.cc
  DBTools/DTTTrigAnalyzer.cc
)

target_include_directories(testDTCalibrationDBTools PUBLIC /usr/include/python2.7/)
target_include_directories(testDTCalibrationDBTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDTCalibrationDBTools PUBLIC /usr/include/boost/serialization/)
target_include_directories(testDTCalibrationDBTools PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testDTCalibrationDBTools PUBLIC /usr/include/boost/)
target_include_directories(testDTCalibrationDBTools PUBLIC /usr/include/boost/python/)
target_include_directories(testDTCalibrationDBTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDTCalibrationDBTools PUBLIC /usr/include/root/)
target_include_directories(testDTCalibrationDBTools PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(testDTCalibrationDBTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDTCalibrationDBTools PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(testDTCalibrationDBTools PUBLIC /usr/include/boost/regex/)


add_subdirectory(bin)
add_subdirectory(test)
add_subdirectory(plugins)
add_library(CalibrationTools OBJECT 
  src/CalibElectron.cc
  src/matrixSaver.cc
  src/calibXMLwriter.cc
  src/EcalRingCalibrationTools.cc
  src/CalibCoeff.cc
  src/GenericHouseholder.cc
  src/Pi0CalibXMLwriter.cc
  src/DetIdAssociator.cc
  src/MinL3AlgoUniv.cc
  src/ZIterativeAlgorithmWithFit.cc
  src/GenericMinL3Algorithm.cc
  src/HouseholderDecomposition.cc
  src/CalibrationCluster.cc
  src/EcalIndexingTools.cc
  src/BlockSolver.cc
  src/MinL3AlgoUnivErr.cc
  src/InvMatrixCommonDefs.cc
  src/TrackAssociator.cc
  src/InvMatrixUtils.cc
  src/MinL3Algorithm.cc
  src/TrackDetMatchInfo.cc
)

target_include_directories(CalibrationTools PUBLIC /usr/include/boost/python/)
target_include_directories(CalibrationTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibrationTools PUBLIC /usr/include/python2.7/)
target_include_directories(CalibrationTools PUBLIC /usr/include/root/)
target_include_directories(CalibrationTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibrationTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibrationTools PUBLIC /usr/include/boost/)
target_include_directories(CalibrationTools PUBLIC /usr/include/boost/regex/)


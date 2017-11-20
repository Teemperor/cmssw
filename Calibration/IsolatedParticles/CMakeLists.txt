add_subdirectory(plugins)
add_library(CalibrationIsolatedParticles OBJECT 
  src/eECALMatrix.cc
  src/FindCaloHit.cc
  src/TrackSelection.cc
  src/DetIdFromEtaPhi.cc
  src/FindDistCone.cc
  src/FindCaloHitCone.cc
  src/MatchingSimTrack.cc
  src/MatrixECALDetIds.cc
  src/DebugInfo.cc
  src/ChargeIsolationExtra.cc
  src/CaloSimInfo.cc
  src/CaloPropagateTrack.cc
  src/ChargeIsolation.cc
  src/MatrixHCALDetIds.cc
  src/eHCALMatrix.cc
  src/GenSimInfo.cc
  src/FindEtaPhi.cc
)

target_include_directories(CalibrationIsolatedParticles PUBLIC /usr/include/python2.7/)
target_include_directories(CalibrationIsolatedParticles PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibrationIsolatedParticles PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibrationIsolatedParticles PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CalibrationIsolatedParticles PUBLIC /usr/include/boost/)
target_include_directories(CalibrationIsolatedParticles PUBLIC /usr/include/eigen3/)
target_include_directories(CalibrationIsolatedParticles PUBLIC /usr/include/boost/python/)
target_include_directories(CalibrationIsolatedParticles PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibrationIsolatedParticles PUBLIC /usr/include/root/)
target_include_directories(CalibrationIsolatedParticles PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CalibrationIsolatedParticles PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibrationIsolatedParticles PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CalibrationIsolatedParticles PUBLIC /usr/include/boost/regex/)


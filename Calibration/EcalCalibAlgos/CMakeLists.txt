add_library(CalibrationEcalCalibAlgos OBJECT 
  src/ElectronCalibrationUniv.cc
  src/InvRingCalib.cc
  src/ZeePlots.cc
  src/ZeeCalibration.cc
  src/PhiSymmetryCalibration.cc
  src/PhiSymmetryCalibration_step2.cc
  src/Pi0FixedMassWindowCalibration.cc
  src/MatrixFillMap.cc
  src/ZeeKinematicTools.cc
  src/EcalGeomPhiSymHelper.cc
  src/IMACalibBlock.cc
  src/L3CalibBlock.cc
  src/ElectronRecalibSuperClusterAssociator.cc
  src/ECALpedestalPCLworker.cc
  src/ECALpedestalPCLHarvester.cc
  src/PhiSymmetryCalibration_step2_SM.cc
  src/VFillMap.cc
  src/EcalEleCalibLooper.cc
  src/ClusterFillMap.cc
  src/ElectronCalibration.cc
  src/miscalibExample.cc
  src/ZeeRescaleFactorPlots.cc
)

target_include_directories(CalibrationEcalCalibAlgos PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CalibrationEcalCalibAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(CalibrationEcalCalibAlgos PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CalibrationEcalCalibAlgos PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(CalibrationEcalCalibAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibrationEcalCalibAlgos PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibrationEcalCalibAlgos PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CalibrationEcalCalibAlgos PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CalibrationEcalCalibAlgos PUBLIC /usr/include/boost/)
target_include_directories(CalibrationEcalCalibAlgos PUBLIC /usr/include/eigen3/)
target_include_directories(CalibrationEcalCalibAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(CalibrationEcalCalibAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibrationEcalCalibAlgos PUBLIC /usr/include/root/)
target_include_directories(CalibrationEcalCalibAlgos PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CalibrationEcalCalibAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibrationEcalCalibAlgos PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CalibrationEcalCalibAlgos PUBLIC /usr/include/boost/regex/)


add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/EgammaAnalysisElectronToolssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/EgammaAnalysis/ElectronTools/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/EgammaAnalysisElectronToolssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/EgammaAnalysis/ElectronTools/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/EgammaAnalysis/ElectronTools/src/classes.h /home/teemperor/cms/cmssw/EgammaAnalysis/ElectronTools/src/classes_def.xml
  COMMENT "Generating ROOT dict EgammaAnalysisElectronToolssrcclassesh")

add_library(EgammaAnalysisElectronTools OBJECT 
  src/EnergyScaleCorrection_class.cc
  src/EGammaMvaEleEstimator.cc
  src/EGammaMvaEleEstimatorCSA14.cc
  src/ElectronEnergyRegressionEvaluate.cc
  src/ElectronEnergyCalibrator.cc
  src/PFIsolationEstimator.cc
  src/SimplePhoton.cc
  src/SuperClusterHelper.cc
  src/ElectronEPcombinator.cc
  src/EcalIsolationCorrector.cc
  src/EGammaCutBasedEleId.cc
  src/SimpleElectron.cc
  src/PhotonEnergyCalibratorRun2.cc
  src/EpCombinationTool.cc
  src/ElectronEnergyCalibratorRun2.cc
  ${CMAKE_BINARY_DIR}/EgammaAnalysisElectronToolssrcclassesh_rflx.cpp
)

target_include_directories(EgammaAnalysisElectronTools PUBLIC /usr/include/boost/iostreams/)
target_include_directories(EgammaAnalysisElectronTools PUBLIC /usr/include/python2.7/)
target_include_directories(EgammaAnalysisElectronTools PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(EgammaAnalysisElectronTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EgammaAnalysisElectronTools PUBLIC /usr/include/boost/serialization/)
target_include_directories(EgammaAnalysisElectronTools PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(EgammaAnalysisElectronTools PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(EgammaAnalysisElectronTools PUBLIC /usr/include/boost/)
target_include_directories(EgammaAnalysisElectronTools PUBLIC /usr/include/eigen3/)
target_include_directories(EgammaAnalysisElectronTools PUBLIC /usr/include/boost/python/)
target_include_directories(EgammaAnalysisElectronTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EgammaAnalysisElectronTools PUBLIC /usr/include/root/)
target_include_directories(EgammaAnalysisElectronTools PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(EgammaAnalysisElectronTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EgammaAnalysisElectronTools PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(EgammaAnalysisElectronTools PUBLIC /usr/include/boost/regex/)


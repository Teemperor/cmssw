add_library(RecoEgammaEgammaElectronAlgos OBJECT 
  src/FTSFromVertexToPointFactory.cc
  src/ElectronHcalHelper.cc
  src/ForwardMeasurementEstimator.cc
  src/SeedFilter.cc
  src/GsfElectronAlgo.cc
  src/SiStripElectronAlgo.cc
  src/PixelMatchNextLayers.cc
  src/EnergyUncertaintyElectronSpecific.cc
  src/GsfElectronAlgoHeavyObjectCache.cc
  src/ElectronClassification.cc
  src/SiStripElectronSeedGenerator.cc
  src/PixelHitMatcher.cc
  src/EgAmbiguityTools.cc
  src/ElectronEnergyCorrector.cc
  src/TrajSeedMatcher.cc
  src/ElectronMomentumCorrector.cc
  src/PixelMatchStartLayers.cc
  src/BarrelMeasurementEstimator.cc
  src/RegressionHelper.cc
  src/ElectronSeedGenerator.cc
)

target_include_directories(RecoEgammaEgammaElectronAlgos PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoEgammaEgammaElectronAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(RecoEgammaEgammaElectronAlgos PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoEgammaEgammaElectronAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoEgammaEgammaElectronAlgos PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoEgammaEgammaElectronAlgos PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoEgammaEgammaElectronAlgos PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoEgammaEgammaElectronAlgos PUBLIC /usr/include/boost/)
target_include_directories(RecoEgammaEgammaElectronAlgos PUBLIC /usr/include/eigen3/)
target_include_directories(RecoEgammaEgammaElectronAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(RecoEgammaEgammaElectronAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoEgammaEgammaElectronAlgos PUBLIC /usr/include/root/)
target_include_directories(RecoEgammaEgammaElectronAlgos PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoEgammaEgammaElectronAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoEgammaEgammaElectronAlgos PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoEgammaEgammaElectronAlgos PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/FTSFromVertexToPointFactory.cc
  src/ElectronHcalHelper.cc
  src/ForwardMeasurementEstimator.cc
  src/SeedFilter.cc
  src/GsfElectronAlgo.cc
  src/SiStripElectronAlgo.cc
  src/PixelMatchNextLayers.cc
  src/EnergyUncertaintyElectronSpecific.cc
  src/GsfElectronAlgoHeavyObjectCache.cc
  src/ElectronClassification.cc
  src/SiStripElectronSeedGenerator.cc
  src/PixelHitMatcher.cc
  src/EgAmbiguityTools.cc
  src/ElectronEnergyCorrector.cc
  src/TrajSeedMatcher.cc
  src/ElectronMomentumCorrector.cc
  src/PixelMatchStartLayers.cc
  src/BarrelMeasurementEstimator.cc
  src/RegressionHelper.cc
  src/ElectronSeedGenerator.cc
PROPERTIES COMPILE_FLAGS "-Ofast")


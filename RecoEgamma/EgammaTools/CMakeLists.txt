add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoEgammaEgammaTools OBJECT 
  src/EcalClusterLocal.cc
  src/ConversionLikelihoodCalculator.cc
  src/ConversionTools.cc
  src/SCEnergyCorrectorSemiParm.cc
  src/BaselinePFSCRegression.cc
  src/EffectiveAreas.cc
  src/ECALPositionCalculator.cc
  src/ConversionFinder.cc
  src/MVAObjectCache.cc
  src/EGEnergyCorrector.cc
  src/EcalRegressionData.cc
  src/HoECalculator.cc
  src/AnyMVAEstimatorRun2Base.cc
)

target_include_directories(RecoEgammaEgammaTools PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoEgammaEgammaTools PUBLIC /usr/include/python2.7/)
target_include_directories(RecoEgammaEgammaTools PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoEgammaEgammaTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoEgammaEgammaTools PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoEgammaEgammaTools PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoEgammaEgammaTools PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoEgammaEgammaTools PUBLIC /usr/include/boost/)
target_include_directories(RecoEgammaEgammaTools PUBLIC /usr/include/eigen3/)
target_include_directories(RecoEgammaEgammaTools PUBLIC /usr/include/boost/python/)
target_include_directories(RecoEgammaEgammaTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoEgammaEgammaTools PUBLIC /usr/include/root/)
target_include_directories(RecoEgammaEgammaTools PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoEgammaEgammaTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoEgammaEgammaTools PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoEgammaEgammaTools PUBLIC /usr/include/boost/regex/)


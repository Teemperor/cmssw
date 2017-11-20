add_library(FastSimulationUtilities OBJECT 
  src/Looses.cc
  src/GaussianTail.cc
  src/SimpleHistogramGenerator.cc
  src/DoubleCrystalBallGenerator.cc
  src/BaseNumericalRandomGenerator.cc
  src/RandomEngineAndDistribution.cc
  src/GammaFunctionGenerator.cc
  src/HistogramGenerator.cc
  src/Histos.cc
)

target_include_directories(FastSimulationUtilities PUBLIC /usr/include/boost/python/)
target_include_directories(FastSimulationUtilities PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimulationUtilities PUBLIC /usr/include/python2.7/)
target_include_directories(FastSimulationUtilities PUBLIC /usr/include/root/)
target_include_directories(FastSimulationUtilities PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimulationUtilities PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimulationUtilities PUBLIC /usr/include/boost/)
target_include_directories(FastSimulationUtilities PUBLIC /usr/include/boost/regex/)


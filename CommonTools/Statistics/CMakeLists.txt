add_library(CommonToolsStatistics OBJECT 
  src/GammaContinuedFraction.cc
  src/SequentialPartitionGenerator.cc
  src/SequentialCombinationGenerator.cc
  src/median.cc
  src/StatisticsException.cc
  src/Accumulator.cc
  src/ChiSquaredProbability.cc
  src/AutocorrelationAnalyzer.cc
  src/GammaLn.cc
  src/hsm_1d.cc
  src/LinearFitErrorsIn2Coord.cc
  src/LinearFit.cc
  src/ChiSquared.cc
  src/lms_1d.cc
  src/RandomMultiGauss.cc
  src/CombinationGenerator.cc
  src/GammaSeries.cc
  src/IncompleteGammaComplement.cc
  src/PartitionGenerator.cc
)

target_include_directories(CommonToolsStatistics PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CommonToolsStatistics PUBLIC /usr/include/root/)
target_include_directories(CommonToolsStatistics PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CommonToolsStatistics PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CommonToolsStatistics PUBLIC /usr/include/boost/)
target_include_directories(CommonToolsStatistics PUBLIC /usr/include/boost/regex/)


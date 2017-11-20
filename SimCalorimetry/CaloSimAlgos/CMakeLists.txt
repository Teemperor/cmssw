add_library(SimCalorimetryCaloSimAlgos OBJECT 
  src/CaloCachedShapeIntegrator.cc
  src/CaloHitResponse.cc
  src/CaloVNoiseSignalGenerator.cc
  src/CaloValidationStatistics.cc
  src/CaloSimParameters.cc
  src/CaloShapeIntegrator.cc
  src/CaloHitAnalyzer.cc
)

target_include_directories(SimCalorimetryCaloSimAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(SimCalorimetryCaloSimAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimCalorimetryCaloSimAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(SimCalorimetryCaloSimAlgos PUBLIC /usr/include/root/)
target_include_directories(SimCalorimetryCaloSimAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimCalorimetryCaloSimAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimCalorimetryCaloSimAlgos PUBLIC /usr/include/boost/)
target_include_directories(SimCalorimetryCaloSimAlgos PUBLIC /usr/include/boost/regex/)


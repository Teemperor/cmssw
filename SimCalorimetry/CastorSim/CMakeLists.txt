add_subdirectory(plugins)
add_library(SimCalorimetryCastorSim OBJECT 
  src/CastorSimParameters.cc
  src/CastorCoderFactory.cc
  src/CastorHitCorrection.cc
  src/CastorSimParameterMap.cc
  src/CastorShape.cc
  src/CastorAmplifier.cc
  src/CastorElectronicsSim.cc
)

target_include_directories(SimCalorimetryCastorSim PUBLIC /usr/include/boost/python/)
target_include_directories(SimCalorimetryCastorSim PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimCalorimetryCastorSim PUBLIC /usr/include/python2.7/)
target_include_directories(SimCalorimetryCastorSim PUBLIC /usr/include/root/)
target_include_directories(SimCalorimetryCastorSim PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimCalorimetryCastorSim PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimCalorimetryCastorSim PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimCalorimetryCastorSim PUBLIC /usr/include/boost/)
target_include_directories(SimCalorimetryCastorSim PUBLIC /usr/include/boost/regex/)


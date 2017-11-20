add_library(SimCalorimetryHGCalSimProducers OBJECT 
  src/HGCDigitizer.cc
  src/HGCEEDigitizer.cc
  src/HGCDigitizerBase.cc
  src/HGCHEbackDigitizer.cc
  src/HGCFEElectronics.cc
  src/HGCHEfrontDigitizer.cc
)

target_include_directories(SimCalorimetryHGCalSimProducers PUBLIC /usr/include/boost/python/)
target_include_directories(SimCalorimetryHGCalSimProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimCalorimetryHGCalSimProducers PUBLIC /usr/include/python2.7/)
target_include_directories(SimCalorimetryHGCalSimProducers PUBLIC /usr/include/root/)
target_include_directories(SimCalorimetryHGCalSimProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimCalorimetryHGCalSimProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimCalorimetryHGCalSimProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimCalorimetryHGCalSimProducers PUBLIC /usr/include/boost/)
target_include_directories(SimCalorimetryHGCalSimProducers PUBLIC /usr/include/boost/regex/)


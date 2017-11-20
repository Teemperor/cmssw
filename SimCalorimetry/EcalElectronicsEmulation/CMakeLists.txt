add_subdirectory(bin)
add_library(SimCalorimetryEcalElectronicsEmulation OBJECT 
  src/SealModules.cc
  src/EcalSimRawData.cc
  src/EcalSimpleProducer.cc
  src/EcalFEtoDigi.cc
)

target_include_directories(SimCalorimetryEcalElectronicsEmulation PUBLIC /usr/include/boost/python/)
target_include_directories(SimCalorimetryEcalElectronicsEmulation PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimCalorimetryEcalElectronicsEmulation PUBLIC /usr/include/python2.7/)
target_include_directories(SimCalorimetryEcalElectronicsEmulation PUBLIC /usr/include/root/)
target_include_directories(SimCalorimetryEcalElectronicsEmulation PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimCalorimetryEcalElectronicsEmulation PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimCalorimetryEcalElectronicsEmulation PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimCalorimetryEcalElectronicsEmulation PUBLIC /usr/include/boost/)
target_include_directories(SimCalorimetryEcalElectronicsEmulation PUBLIC /usr/include/boost/regex/)


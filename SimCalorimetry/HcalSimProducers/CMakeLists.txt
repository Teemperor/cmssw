add_subdirectory(plugins)
add_library(SimCalorimetryHcalSimProducers OBJECT 
  src/HcalDigitizer.cc
  src/HcalHitAnalyzer.cc
  src/HcalDigiProducer.cc
  src/HcalDigiAnalyzer.cc
)

target_include_directories(SimCalorimetryHcalSimProducers PUBLIC /usr/include/boost/python/)
target_include_directories(SimCalorimetryHcalSimProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimCalorimetryHcalSimProducers PUBLIC /usr/include/python2.7/)
target_include_directories(SimCalorimetryHcalSimProducers PUBLIC /usr/include/root/)
target_include_directories(SimCalorimetryHcalSimProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimCalorimetryHcalSimProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimCalorimetryHcalSimProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimCalorimetryHcalSimProducers PUBLIC /usr/include/boost/)
target_include_directories(SimCalorimetryHcalSimProducers PUBLIC /usr/include/boost/regex/)


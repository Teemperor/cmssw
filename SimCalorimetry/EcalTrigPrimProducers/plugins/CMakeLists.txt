add_library(SimCalorimetryEcalTrigPrimProducersPlugins OBJECT 
  EcalTrigPrimProducer.cc
  SealModules.cc
  EcalTrigPrimSpikeESProducer.cc
  EcalTrigPrimESProducer.cc
  EcalTPCondAnalyzer.cc
  EcalTrigPrimAnalyzer.cc
  EcalTPInputAnalyzer.cc
)

target_include_directories(SimCalorimetryEcalTrigPrimProducersPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(SimCalorimetryEcalTrigPrimProducersPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimCalorimetryEcalTrigPrimProducersPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(SimCalorimetryEcalTrigPrimProducersPlugins PUBLIC /usr/include/root/)
target_include_directories(SimCalorimetryEcalTrigPrimProducersPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(SimCalorimetryEcalTrigPrimProducersPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimCalorimetryEcalTrigPrimProducersPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimCalorimetryEcalTrigPrimProducersPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimCalorimetryEcalTrigPrimProducersPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(SimCalorimetryEcalTrigPrimProducersPlugins PUBLIC /usr/include/boost/)
target_include_directories(SimCalorimetryEcalTrigPrimProducersPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(SimCalorimetryEcalTrigPrimProducersPlugins PUBLIC /usr/include/boost/regex/)


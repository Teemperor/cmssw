add_library(RecoLocalCaloHcalRecProducers OBJECT 
  src/HcalHitSelection.cc
  src/SealModule.cc
  src/ZdcHitReconstructor.cc
  src/HFPreReconstructor.cc
  src/HcalHitReconstructor.cc
  src/HBHEPlan1Combiner.cc
  src/HcalSimpleReconstructor.cc
  src/HBHEPhase1Reconstructor.cc
  src/ZdcSimpleReconstructor.cc
  src/HFPhase1Reconstructor.cc
  src/HBHEIsolatedNoiseReflagger.cc
)

target_include_directories(RecoLocalCaloHcalRecProducers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoLocalCaloHcalRecProducers PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalCaloHcalRecProducers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoLocalCaloHcalRecProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalCaloHcalRecProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalCaloHcalRecProducers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoLocalCaloHcalRecProducers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoLocalCaloHcalRecProducers PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalCaloHcalRecProducers PUBLIC /usr/include/eigen3/)
target_include_directories(RecoLocalCaloHcalRecProducers PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalCaloHcalRecProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalCaloHcalRecProducers PUBLIC /usr/include/root/)
target_include_directories(RecoLocalCaloHcalRecProducers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoLocalCaloHcalRecProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalCaloHcalRecProducers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoLocalCaloHcalRecProducers PUBLIC /usr/include/boost/regex/)


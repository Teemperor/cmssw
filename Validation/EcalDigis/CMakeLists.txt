add_library(ValidationEcalDigis OBJECT 
  src/SealModule.cc
  src/EcalSelectiveReadoutValidation.cc
  src/EcalPreshowerDigisValidation.cc
  src/EcalEndcapDigisValidation.cc
  src/EcalDigisValidation.cc
  src/EcalPreshowerNoiseDistrib.cc
  src/EcalMixingModuleValidation.cc
  src/EcalBarrelDigisValidation.cc
  src/CollHandle.cpp
)

target_include_directories(ValidationEcalDigis PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationEcalDigis PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationEcalDigis PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationEcalDigis PUBLIC /usr/include/boost/serialization/)
target_include_directories(ValidationEcalDigis PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(ValidationEcalDigis PUBLIC /usr/include/boost/)
target_include_directories(ValidationEcalDigis PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationEcalDigis PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationEcalDigis PUBLIC /usr/include/root/)
target_include_directories(ValidationEcalDigis PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(ValidationEcalDigis PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationEcalDigis PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(ValidationEcalDigis PUBLIC /usr/include/boost/regex/)


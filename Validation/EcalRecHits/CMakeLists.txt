add_library(ValidationEcalRecHits OBJECT 
  src/SealModule.cc
  src/EcalPreshowerRecHitsValidation.cc
  src/EcalTBValidation.cc
  src/EcalRecHitsValidation.cc
  src/EcalEndcapRecHitsValidation.cc
  src/EcalBarrelRecHitsValidation.cc
)

target_include_directories(ValidationEcalRecHits PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationEcalRecHits PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationEcalRecHits PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationEcalRecHits PUBLIC /usr/include/root/)
target_include_directories(ValidationEcalRecHits PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationEcalRecHits PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationEcalRecHits PUBLIC /usr/include/boost/serialization/)
target_include_directories(ValidationEcalRecHits PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationEcalRecHits PUBLIC /usr/include/boost/)
target_include_directories(ValidationEcalRecHits PUBLIC /usr/include/boost/regex/)


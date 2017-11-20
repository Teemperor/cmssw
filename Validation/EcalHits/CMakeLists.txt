add_library(ValidationEcalHits OBJECT 
  src/module.cc
  src/EcalSimHitsValidation.cc
  src/EcalEndcapSimHitsValidation.cc
  src/EcalSimHitsValidProducer.cc
  src/EcalPreshowerSimHitsValidation.cc
  src/EcalBarrelSimHitsValidation.cc
)

target_include_directories(ValidationEcalHits PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationEcalHits PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationEcalHits PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationEcalHits PUBLIC /usr/include/root/)
target_include_directories(ValidationEcalHits PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(ValidationEcalHits PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationEcalHits PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationEcalHits PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(ValidationEcalHits PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationEcalHits PUBLIC /usr/include/boost/)
target_include_directories(ValidationEcalHits PUBLIC /usr/include/Geant4/)
target_include_directories(ValidationEcalHits PUBLIC /usr/include/boost/regex/)


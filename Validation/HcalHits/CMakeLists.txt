add_subdirectory(test)
add_library(ValidationHcalHits OBJECT 
  src/SimG4HcalValidation.cc
  src/ZdcSimHitStudy.cc
  src/module.cc
  src/SimG4HcalHitJetFinder.cc
  src/HcalSimHitsValidation.cc
  src/HcalSimHitsClient.cc
  src/SimHitsValidationHcal.cc
  src/HcalSimHitStudy.cc
  src/SimG4HcalHitCluster.cc
)

target_include_directories(ValidationHcalHits PUBLIC /usr/include/boost/iostreams/)
target_include_directories(ValidationHcalHits PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationHcalHits PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(ValidationHcalHits PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationHcalHits PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationHcalHits PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(ValidationHcalHits PUBLIC /usr/include/boost/serialization/)
target_include_directories(ValidationHcalHits PUBLIC /usr/include/boost/)
target_include_directories(ValidationHcalHits PUBLIC /usr/include/Geant4/)
target_include_directories(ValidationHcalHits PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationHcalHits PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationHcalHits PUBLIC /usr/include/root/)
target_include_directories(ValidationHcalHits PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationHcalHits PUBLIC /usr/include/boost/regex/)


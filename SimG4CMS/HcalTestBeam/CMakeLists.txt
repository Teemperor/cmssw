add_subdirectory(plugins)
add_library(SimG4CMSHcalTestBeam OBJECT 
  src/HcalTB02HcalNumberingScheme.cc
  src/HcalTB06BeamSD.cc
  src/HcalTBNumberingScheme.cc
  src/HcalTB06Histo.cc
  src/HcalTB04XtalNumberingScheme.cc
  src/HcalTB02SD.cc
  src/HcalTB04Histo.cc
  src/HcalTB02Histo.cc
  src/HcalTB02XtalNumberingScheme.cc
)

target_include_directories(SimG4CMSHcalTestBeam PUBLIC /usr/include/boost/iostreams/)
target_include_directories(SimG4CMSHcalTestBeam PUBLIC /usr/include/python2.7/)
target_include_directories(SimG4CMSHcalTestBeam PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CMSHcalTestBeam PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CMSHcalTestBeam PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CMSHcalTestBeam PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimG4CMSHcalTestBeam PUBLIC /usr/include/boost/)
target_include_directories(SimG4CMSHcalTestBeam PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CMSHcalTestBeam PUBLIC /usr/include/boost/python/)
target_include_directories(SimG4CMSHcalTestBeam PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CMSHcalTestBeam PUBLIC /usr/include/root/)
target_include_directories(SimG4CMSHcalTestBeam PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CMSHcalTestBeam PUBLIC /usr/include/boost/regex/)


add_library(SimG4CMSMuon OBJECT 
  src/module.cc
  src/MuonG4Numbering.cc
  src/MuonEndcapFrameRotation.cc
  src/MuonRPCFrameRotation.cc
  src/MuonSensitiveDetector.cc
  src/MuonGEMFrameRotation.cc
  src/MuonME0FrameRotation.cc
  src/MuonSlaveSD.cc
  src/SimHitPrinter.cc
)

target_include_directories(SimG4CMSMuon PUBLIC /usr/include/python2.7/)
target_include_directories(SimG4CMSMuon PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CMSMuon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CMSMuon PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CMSMuon PUBLIC /usr/include/boost/)
target_include_directories(SimG4CMSMuon PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CMSMuon PUBLIC /usr/include/boost/python/)
target_include_directories(SimG4CMSMuon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CMSMuon PUBLIC /usr/include/root/)
target_include_directories(SimG4CMSMuon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CMSMuon PUBLIC /usr/include/boost/regex/)


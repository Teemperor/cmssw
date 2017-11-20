add_subdirectory(test)
add_subdirectory(plugins)
add_library(SimG4CMSCalo OBJECT 
  src/HFShowerParam.cc
  src/HcalNumberingScheme.cc
  src/HCalSD.cc
  src/HcalTestNumberingScheme.cc
  src/ECalSD.cc
  src/HcalQie.cc
  src/HFShowerLibrary.cc
  src/CaloSD.cc
  src/HFShowerFibreBundle.cc
  src/CaloTrkProcessing.cc
  src/HFShower.cc
  src/HGCMouseBite.cc
  src/HFFibreFiducial.cc
  src/CaloHitID.cc
  src/HFShowerPMT.cc
  src/HGCNumberingScheme.cc
  src/HcalTestAnalysis.cc
  src/HFFibre.cc
  src/EvolutionECAL.cc
  src/CaloG4Hit.cc
  src/HFDarkening.cc
  src/HFCherenkov.cc
  src/CaloMeanResponse.cc
  src/EnergyResolutionVsLumi.cc
  src/HFGflash.cc
  src/HcalTestHistoManager.cc
  src/HcalTestNS.cc
  src/HGCSD.cc
)

target_include_directories(SimG4CMSCalo PUBLIC /usr/include/boost/iostreams/)
target_include_directories(SimG4CMSCalo PUBLIC /usr/include/python2.7/)
target_include_directories(SimG4CMSCalo PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CMSCalo PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CMSCalo PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimG4CMSCalo PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CMSCalo PUBLIC /usr/include/boost/)
target_include_directories(SimG4CMSCalo PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CMSCalo PUBLIC /usr/include/boost/python/)
target_include_directories(SimG4CMSCalo PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CMSCalo PUBLIC /usr/include/root/)
target_include_directories(SimG4CMSCalo PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CMSCalo PUBLIC /usr/include/boost/regex/)


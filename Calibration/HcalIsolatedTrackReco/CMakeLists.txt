add_library(CalibrationHcalIsolatedTrackReco OBJECT 
  src/SealModule.cc
  src/IsolatedEcalPixelTrackCandidateProducer.cc
  src/ECALRegFEDSelector.cc
  src/EcalIsolatedParticleCandidateProducer.cc
  src/IPTCorrector.cc
  src/SubdetFEDSelector.cc
  src/IsolatedPixelTrackCandidateL1TProducer.cc
  src/SiStripRegFEDSelector.cc
  src/IsolatedPixelTrackCandidateProducer.cc
)

target_include_directories(CalibrationHcalIsolatedTrackReco PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CalibrationHcalIsolatedTrackReco PUBLIC /usr/include/python2.7/)
target_include_directories(CalibrationHcalIsolatedTrackReco PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CalibrationHcalIsolatedTrackReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibrationHcalIsolatedTrackReco PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibrationHcalIsolatedTrackReco PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CalibrationHcalIsolatedTrackReco PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CalibrationHcalIsolatedTrackReco PUBLIC /usr/include/boost/)
target_include_directories(CalibrationHcalIsolatedTrackReco PUBLIC /usr/include/eigen3/)
target_include_directories(CalibrationHcalIsolatedTrackReco PUBLIC /usr/include/boost/python/)
target_include_directories(CalibrationHcalIsolatedTrackReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibrationHcalIsolatedTrackReco PUBLIC /usr/include/root/)
target_include_directories(CalibrationHcalIsolatedTrackReco PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CalibrationHcalIsolatedTrackReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibrationHcalIsolatedTrackReco PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CalibrationHcalIsolatedTrackReco PUBLIC /usr/include/boost/regex/)


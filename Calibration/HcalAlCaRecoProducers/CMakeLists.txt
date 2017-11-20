add_subdirectory(plugins)
add_library(CalibrationHcalAlCaRecoProducers OBJECT 
  src/SealModule.cc
  src/AlCaGammaJetProducer.cc
  src/AlCaHOCalibProducer.cc
  src/AlCaDiJetsProducer.cc
  src/ProducerAnalyzer.cc
  src/AlCaEcalHcalReadoutsProducer.cc
  src/AlCaHBHEMuonProducer.cc
  src/AlCaHcalNoiseProducer.cc
  src/AlCaIsoTracksProducer.cc
)

target_include_directories(CalibrationHcalAlCaRecoProducers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CalibrationHcalAlCaRecoProducers PUBLIC /usr/include/python2.7/)
target_include_directories(CalibrationHcalAlCaRecoProducers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CalibrationHcalAlCaRecoProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibrationHcalAlCaRecoProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibrationHcalAlCaRecoProducers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CalibrationHcalAlCaRecoProducers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CalibrationHcalAlCaRecoProducers PUBLIC /usr/include/boost/)
target_include_directories(CalibrationHcalAlCaRecoProducers PUBLIC /usr/include/eigen3/)
target_include_directories(CalibrationHcalAlCaRecoProducers PUBLIC /usr/include/boost/python/)
target_include_directories(CalibrationHcalAlCaRecoProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibrationHcalAlCaRecoProducers PUBLIC /usr/include/root/)
target_include_directories(CalibrationHcalAlCaRecoProducers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CalibrationHcalAlCaRecoProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibrationHcalAlCaRecoProducers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CalibrationHcalAlCaRecoProducers PUBLIC /usr/include/boost/regex/)


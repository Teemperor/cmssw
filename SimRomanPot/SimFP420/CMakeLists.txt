add_subdirectory(plugins)
add_library(SimRomanPotSimFP420 OBJECT 
  src/ChargeDividerFP420.cc
  src/PileUpFP420.cc
  src/DigiConverterFP420.cc
  src/LandauFP420.cc
  src/GaussNoiseFP420.cc
  src/FP420DigiMain.cc
  src/ChargeDrifterFP420.cc
  src/InduceChargeFP420.cc
  src/HitDigitizerFP420.cc
  src/GaussNoiseProducerFP420.cc
  src/ZeroSuppressFP420.cc
)

target_include_directories(SimRomanPotSimFP420 PUBLIC /usr/include/boost/iostreams/)
target_include_directories(SimRomanPotSimFP420 PUBLIC /usr/include/python2.7/)
target_include_directories(SimRomanPotSimFP420 PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(SimRomanPotSimFP420 PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimRomanPotSimFP420 PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimRomanPotSimFP420 PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimRomanPotSimFP420 PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimRomanPotSimFP420 PUBLIC /usr/include/boost/)
target_include_directories(SimRomanPotSimFP420 PUBLIC /usr/include/Geant4/)
target_include_directories(SimRomanPotSimFP420 PUBLIC /usr/include/boost/python/)
target_include_directories(SimRomanPotSimFP420 PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimRomanPotSimFP420 PUBLIC /usr/include/root/)
target_include_directories(SimRomanPotSimFP420 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimRomanPotSimFP420 PUBLIC /usr/include/boost/regex/)


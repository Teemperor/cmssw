add_subdirectory(test)
add_library(CalibFormatsSiStripObjects OBJECT 
  src/SiStripModule.cc
  src/NumberOfDevices.cc
  src/SiStripRegionCabling.cc
  src/SiStripFecCrate.cc
  src/SiStripHashedDetId.cc
  src/SiStripGain.cc
  src/SiStripFec.cc
  src/SiStripDetCabling.cc
  src/SiStripCcu.cc
  src/SiStripQuality.cc
  src/SiStripFecCabling.cc
  src/SiStripDelay.cc
  src/EventSetup_Registration.cc
  src/SiStripRing.cc
)

target_include_directories(CalibFormatsSiStripObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CalibFormatsSiStripObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibFormatsSiStripObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CalibFormatsSiStripObjects PUBLIC /usr/include/root/)
target_include_directories(CalibFormatsSiStripObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibFormatsSiStripObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibFormatsSiStripObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibFormatsSiStripObjects PUBLIC /usr/include/boost/)
target_include_directories(CalibFormatsSiStripObjects PUBLIC /usr/include/boost/regex/)


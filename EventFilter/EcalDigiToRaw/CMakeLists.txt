add_library(EventFilterEcalDigiToRaw OBJECT 
  src/EcalDigiToRaw.cc
  src/SealModule.cc
  src/TCCBlockFormatter.cc
  src/BlockFormatter.cc
  src/TowerBlockFormatter.cc
  src/SRBlockFormatter.cc
)

target_include_directories(EventFilterEcalDigiToRaw PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterEcalDigiToRaw PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterEcalDigiToRaw PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterEcalDigiToRaw PUBLIC /usr/include/root/)
target_include_directories(EventFilterEcalDigiToRaw PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterEcalDigiToRaw PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterEcalDigiToRaw PUBLIC /usr/include/boost/)
target_include_directories(EventFilterEcalDigiToRaw PUBLIC /usr/include/boost/regex/)


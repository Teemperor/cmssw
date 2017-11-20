add_library(SimDataFormatsSimHitMaker OBJECT 
  src/TrackingSlaveSD.cc
  src/CaloSlaveSD.cc
)

target_include_directories(SimDataFormatsSimHitMaker PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsSimHitMaker PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsSimHitMaker PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsSimHitMaker PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsSimHitMaker PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsSimHitMaker PUBLIC /usr/include/boost/regex/)


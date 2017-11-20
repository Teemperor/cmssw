add_library(SimGeneralGFlash OBJECT 
  src/GflashShowino.cc
  src/GflashHistogram.cc
  src/GflashPiKShowerProfile.cc
  src/GflashHadronShowerProfile.cc
  src/GflashKaonMinusShowerProfile.cc
  src/GflashProtonShowerProfile.cc
  src/GflashTrajectoryPoint.cc
  src/GflashEMShowerProfile.cc
  src/GflashTrajectory.cc
  src/GflashAntiProtonShowerProfile.cc
  src/GflashKaonPlusShowerProfile.cc
  src/GflashHit.cc
  src/GflashNameSpace.cc
)

target_include_directories(SimGeneralGFlash PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimGeneralGFlash PUBLIC /usr/include/root/)
target_include_directories(SimGeneralGFlash PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimGeneralGFlash PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimGeneralGFlash PUBLIC /usr/include/boost/)
target_include_directories(SimGeneralGFlash PUBLIC /usr/include/boost/regex/)


add_library(SimG4CoreKillSecondaries OBJECT 
  src/module.cc
  src/KillSecondariesStackingAction.cc
  src/KillSecondariesRunAction.cc
  src/KillSecondariesTrackAction.cc
)

target_include_directories(SimG4CoreKillSecondaries PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CoreKillSecondaries PUBLIC /usr/include/root/)
target_include_directories(SimG4CoreKillSecondaries PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CoreKillSecondaries PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CoreKillSecondaries PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CoreKillSecondaries PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CoreKillSecondaries PUBLIC /usr/include/boost/)
target_include_directories(SimG4CoreKillSecondaries PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CoreKillSecondaries PUBLIC /usr/include/boost/regex/)


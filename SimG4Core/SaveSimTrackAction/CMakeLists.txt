add_library(SimG4CoreSaveSimTrackAction OBJECT 
  src/module.cc
  src/SaveSimTrack.cc
)

target_include_directories(SimG4CoreSaveSimTrackAction PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CoreSaveSimTrackAction PUBLIC /usr/include/root/)
target_include_directories(SimG4CoreSaveSimTrackAction PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CoreSaveSimTrackAction PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CoreSaveSimTrackAction PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CoreSaveSimTrackAction PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CoreSaveSimTrackAction PUBLIC /usr/include/boost/)
target_include_directories(SimG4CoreSaveSimTrackAction PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CoreSaveSimTrackAction PUBLIC /usr/include/boost/regex/)


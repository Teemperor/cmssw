add_subdirectory(test)
add_library(SimG4CoreNotification OBJECT 
  src/TrackInformation.cc
  src/NewTrackAction.cc
  src/TrackInformationExtractor.cc
  src/TrackWithHistory.cc
  src/GenParticleInfoExtractor.cc
  src/G4TrackToParticleID.cc
  src/CurrentG4Track.cc
  src/SimActivityRegistry.cc
  src/CMSSteppingVerbose.cc
)

target_include_directories(SimG4CoreNotification PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CoreNotification PUBLIC /usr/include/root/)
target_include_directories(SimG4CoreNotification PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CoreNotification PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CoreNotification PUBLIC /usr/include/boost/)
target_include_directories(SimG4CoreNotification PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CoreNotification PUBLIC /usr/include/boost/regex/)


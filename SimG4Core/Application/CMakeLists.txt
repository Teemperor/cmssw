add_subdirectory(plugins)
add_library(SimG4CoreApplication OBJECT 
  src/G4SimEvent.cc
  src/RunAction.cc
  src/CustomUIsessionThreadPrefix.cc
  src/PrimaryTransformer.cc
  src/RunManagerMTWorker.cc
  src/ExceptionHandler.cc
  src/TrackingAction.cc
  src/RunManager.cc
  src/ParametrisedEMPhysics.cc
  src/SimRunInterface.cc
  src/GFlashEMShowerModel.cc
  src/SimTrackManager.cc
  src/G4RegionReporter.cc
  src/CustomUIsession.cc
  src/SteppingAction.cc
  src/CustomUIsessionToFile.cc
  src/RunManagerMT.cc
  src/ElectronLimiter.cc
  src/StackingAction.cc
  src/CMSGDMLWriteStructure.cc
  src/GFlashHadronShowerModel.cc
  src/EventAction.cc
  src/OscarMTMasterThread.cc
)

target_include_directories(SimG4CoreApplication PUBLIC /usr/include/python2.7/)
target_include_directories(SimG4CoreApplication PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CoreApplication PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CoreApplication PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CoreApplication PUBLIC /usr/include/boost/)
target_include_directories(SimG4CoreApplication PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CoreApplication PUBLIC /usr/include/boost/python/)
target_include_directories(SimG4CoreApplication PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CoreApplication PUBLIC /usr/include/root/)
target_include_directories(SimG4CoreApplication PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CoreApplication PUBLIC /usr/include/boost/regex/)


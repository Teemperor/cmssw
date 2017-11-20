add_subdirectory(test)
add_subdirectory(plugins)
add_library(SimG4CMSTracker OBJECT 
  src/TkAccumulatingSensitiveDetector.cc
  src/TrackerHitsObject.cc
  src/FakeFrameRotation.cc
  src/TrackerFrameRotation.cc
  src/TrackerG4SimHitNumberingScheme.cc
  src/TouchableToHistory.cc
  src/TkSimHitPrinter.cc
  src/StandardFrameRotation.cc
)

target_include_directories(SimG4CMSTracker PUBLIC /usr/include/python2.7/)
target_include_directories(SimG4CMSTracker PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CMSTracker PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CMSTracker PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CMSTracker PUBLIC /usr/include/boost/)
target_include_directories(SimG4CMSTracker PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CMSTracker PUBLIC /usr/include/boost/python/)
target_include_directories(SimG4CMSTracker PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CMSTracker PUBLIC /usr/include/root/)
target_include_directories(SimG4CMSTracker PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CMSTracker PUBLIC /usr/include/boost/regex/)


add_library(SimG4CoreHelpfulWatchers OBJECT 
  src/module.cc
  src/MonopoleSteppingAction.cc
  src/BeginOfTrackCounter.cc
)

target_include_directories(SimG4CoreHelpfulWatchers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(SimG4CoreHelpfulWatchers PUBLIC /usr/include/python2.7/)
target_include_directories(SimG4CoreHelpfulWatchers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CoreHelpfulWatchers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CoreHelpfulWatchers PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimG4CoreHelpfulWatchers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CoreHelpfulWatchers PUBLIC /usr/include/boost/)
target_include_directories(SimG4CoreHelpfulWatchers PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CoreHelpfulWatchers PUBLIC /usr/include/boost/python/)
target_include_directories(SimG4CoreHelpfulWatchers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CoreHelpfulWatchers PUBLIC /usr/include/root/)
target_include_directories(SimG4CoreHelpfulWatchers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CoreHelpfulWatchers PUBLIC /usr/include/boost/regex/)


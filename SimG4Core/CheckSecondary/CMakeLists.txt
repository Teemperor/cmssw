add_library(SimG4CoreCheckSecondary OBJECT 
  src/CheckSecondary.cc
  src/module.cc
  src/StoreSecondary.cc
  src/TreatSecondary.cc
)

target_include_directories(SimG4CoreCheckSecondary PUBLIC /usr/include/boost/python/)
target_include_directories(SimG4CoreCheckSecondary PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CoreCheckSecondary PUBLIC /usr/include/python2.7/)
target_include_directories(SimG4CoreCheckSecondary PUBLIC /usr/include/root/)
target_include_directories(SimG4CoreCheckSecondary PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CoreCheckSecondary PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CoreCheckSecondary PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CoreCheckSecondary PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CoreCheckSecondary PUBLIC /usr/include/boost/)
target_include_directories(SimG4CoreCheckSecondary PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CoreCheckSecondary PUBLIC /usr/include/boost/regex/)


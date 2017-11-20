add_subdirectory(plugins)
add_library(SimG4CoreGFlash OBJECT 
  src/GflashEMShowerModel.cc
  src/ParametrisedPhysics.cc
  src/GflashHadronWrapperProcess.cc
  src/GflashHadronShowerModel.cc
)

target_include_directories(SimG4CoreGFlash PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CoreGFlash PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CoreGFlash PUBLIC /usr/include/root/)
target_include_directories(SimG4CoreGFlash PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CoreGFlash PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CoreGFlash PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CoreGFlash PUBLIC /usr/include/boost/)
target_include_directories(SimG4CoreGFlash PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CoreGFlash PUBLIC /usr/include/boost/regex/)


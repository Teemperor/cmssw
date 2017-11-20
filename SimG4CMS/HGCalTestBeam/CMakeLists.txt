add_subdirectory(plugins)
add_library(SimG4CMSHGCalTestBeam OBJECT 
  src/HGCalTB16SD01.cc
  src/HGCalTBMB.cc
  src/AHCalDetId.cc
)

target_include_directories(SimG4CMSHGCalTestBeam PUBLIC /usr/include/boost/iostreams/)
target_include_directories(SimG4CMSHGCalTestBeam PUBLIC /usr/include/python2.7/)
target_include_directories(SimG4CMSHGCalTestBeam PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CMSHGCalTestBeam PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CMSHGCalTestBeam PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimG4CMSHGCalTestBeam PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CMSHGCalTestBeam PUBLIC /usr/include/boost/)
target_include_directories(SimG4CMSHGCalTestBeam PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CMSHGCalTestBeam PUBLIC /usr/include/boost/python/)
target_include_directories(SimG4CMSHGCalTestBeam PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CMSHGCalTestBeam PUBLIC /usr/include/root/)
target_include_directories(SimG4CMSHGCalTestBeam PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CMSHGCalTestBeam PUBLIC /usr/include/boost/regex/)


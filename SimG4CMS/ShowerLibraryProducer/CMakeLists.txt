add_subdirectory(bin)
add_subdirectory(test)
add_subdirectory(plugins)
add_library(SimG4CMSShowerLibraryProducer OBJECT 
  src/HFShowerG4Hit.cc
  src/HFWedgeSD.cc
  src/HFChamberSD.cc
  src/CastorShowerLibraryMaker.cc
  src/HcalForwardAnalysis.cc
  src/FiberG4Hit.cc
  src/FiberSD.cc
)

target_include_directories(SimG4CMSShowerLibraryProducer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(SimG4CMSShowerLibraryProducer PUBLIC /usr/include/python2.7/)
target_include_directories(SimG4CMSShowerLibraryProducer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CMSShowerLibraryProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CMSShowerLibraryProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimG4CMSShowerLibraryProducer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CMSShowerLibraryProducer PUBLIC /usr/include/boost/)
target_include_directories(SimG4CMSShowerLibraryProducer PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CMSShowerLibraryProducer PUBLIC /usr/include/boost/python/)
target_include_directories(SimG4CMSShowerLibraryProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CMSShowerLibraryProducer PUBLIC /usr/include/root/)
target_include_directories(SimG4CMSShowerLibraryProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CMSShowerLibraryProducer PUBLIC /usr/include/boost/regex/)


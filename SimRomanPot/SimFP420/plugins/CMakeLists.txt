add_library(SimRomanPotSimFP420Plugins OBJECT 
  module.cc
  DigitizerFP420.cc
)

target_include_directories(SimRomanPotSimFP420Plugins PUBLIC /usr/include/boost/python/)
target_include_directories(SimRomanPotSimFP420Plugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(SimRomanPotSimFP420Plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimRomanPotSimFP420Plugins PUBLIC /usr/include/python2.7/)
target_include_directories(SimRomanPotSimFP420Plugins PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(SimRomanPotSimFP420Plugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimRomanPotSimFP420Plugins PUBLIC /usr/include/root/)
target_include_directories(SimRomanPotSimFP420Plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimRomanPotSimFP420Plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimRomanPotSimFP420Plugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimRomanPotSimFP420Plugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimRomanPotSimFP420Plugins PUBLIC /usr/include/boost/)
target_include_directories(SimRomanPotSimFP420Plugins PUBLIC /usr/include/Geant4/)
target_include_directories(SimRomanPotSimFP420Plugins PUBLIC /usr/include/boost/regex/)


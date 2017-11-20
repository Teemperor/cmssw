add_library(ValidationMuonME0Plugins OBJECT 
  MuonME0SegHarvestor.cc
  Module.cc
  MuonME0DigisHarvestor.cc
)

target_include_directories(ValidationMuonME0Plugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(ValidationMuonME0Plugins PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationMuonME0Plugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(ValidationMuonME0Plugins PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationMuonME0Plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationMuonME0Plugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(ValidationMuonME0Plugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(ValidationMuonME0Plugins PUBLIC /usr/include/boost/)
target_include_directories(ValidationMuonME0Plugins PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationMuonME0Plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationMuonME0Plugins PUBLIC /usr/include/root/)
target_include_directories(ValidationMuonME0Plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationMuonME0Plugins PUBLIC /usr/include/boost/regex/)


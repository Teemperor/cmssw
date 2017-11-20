add_subdirectory(test)
add_subdirectory(plugins)
add_library(ValidationRecoMuon OBJECT 
  src/SealModule.cc
  src/RecoMuonValidator.cc
  src/HTrack.cc
  src/MuonTrackAnalyzer.cc
  src/MuonTrackResidualAnalyzer.cc
  src/GlobalMuonMatchAnalyzer.cc
  src/MuonSeedTrack.cc
)

target_include_directories(ValidationRecoMuon PUBLIC /usr/include/boost/iostreams/)
target_include_directories(ValidationRecoMuon PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationRecoMuon PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(ValidationRecoMuon PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationRecoMuon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationRecoMuon PUBLIC /usr/include/boost/serialization/)
target_include_directories(ValidationRecoMuon PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(ValidationRecoMuon PUBLIC /usr/include/boost/)
target_include_directories(ValidationRecoMuon PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationRecoMuon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationRecoMuon PUBLIC /usr/include/root/)
target_include_directories(ValidationRecoMuon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationRecoMuon PUBLIC /usr/include/boost/regex/)


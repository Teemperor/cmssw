add_subdirectory(test)
add_library(RecoMuonNavigation OBJECT 
  src/MuonNavigationSchool.cc
  src/MuonNavigableLayer.cc
  src/MuonBarrelNavigableLayer.cc
  src/DirectMuonNavigation.cc
  src/MuonEtaRange.cc
  src/MuonForwardNavigableLayer.cc
  src/MuonNavigationPrinter.cc
)

target_include_directories(RecoMuonNavigation PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonNavigation PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonNavigation PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonNavigation PUBLIC /usr/include/root/)
target_include_directories(RecoMuonNavigation PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonNavigation PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonNavigation PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonNavigation PUBLIC /usr/include/boost/regex/)


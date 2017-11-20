add_subdirectory(test)
add_subdirectory(plugins)
add_library(GeometryMuonNumbering OBJECT 
  src/MuonSimHitNumberingScheme.cc
  src/MuonDDDNumbering.cc
  src/MuonNumberingScheme.cc
  src/ES_MuonDDDConstants.cc
  src/MuonDDDConstants.cc
  src/RPCNumberingScheme.cc
  src/MuonBaseNumber.cc
  src/ME0NumberingScheme.cc
  src/CSCNumberingScheme.cc
  src/GEMNumberingScheme.cc
  src/MuonSubDetector.cc
  src/DTNumberingScheme.cc
)

target_include_directories(GeometryMuonNumbering PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryMuonNumbering PUBLIC /usr/include/root/)
target_include_directories(GeometryMuonNumbering PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryMuonNumbering PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryMuonNumbering PUBLIC /usr/include/boost/)
target_include_directories(GeometryMuonNumbering PUBLIC /usr/include/boost/regex/)


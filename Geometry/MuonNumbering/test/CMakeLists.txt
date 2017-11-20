add_library(testGeometryMuonNumbering OBJECT 
  MuonNumberingTester.cc
)

target_include_directories(testGeometryMuonNumbering PUBLIC /usr/include/boost/python/)
target_include_directories(testGeometryMuonNumbering PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testGeometryMuonNumbering PUBLIC /usr/include/python2.7/)
target_include_directories(testGeometryMuonNumbering PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(testGeometryMuonNumbering PUBLIC /usr/include/root/)
target_include_directories(testGeometryMuonNumbering PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testGeometryMuonNumbering PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testGeometryMuonNumbering PUBLIC /usr/include/boost/)
target_include_directories(testGeometryMuonNumbering PUBLIC /usr/include/boost/regex/)


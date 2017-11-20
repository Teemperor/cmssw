add_library(testLeptonAssociator OBJECT 
  testLeptonAssociator.cc
)

target_include_directories(testLeptonAssociator PUBLIC /usr/include/boost/python/)
target_include_directories(testLeptonAssociator PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testLeptonAssociator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testLeptonAssociator PUBLIC /usr/include/python2.7/)
target_include_directories(testLeptonAssociator PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testLeptonAssociator PUBLIC /usr/include/root/)
target_include_directories(testLeptonAssociator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testLeptonAssociator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testLeptonAssociator PUBLIC /usr/include/boost/serialization/)
target_include_directories(testLeptonAssociator PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testLeptonAssociator PUBLIC /usr/include/boost/)
target_include_directories(testLeptonAssociator PUBLIC /usr/include/boost/regex/)

add_library(testMuonAssociator OBJECT 
  testMuonAssociator.cc
)

target_include_directories(testMuonAssociator PUBLIC /usr/include/boost/python/)
target_include_directories(testMuonAssociator PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testMuonAssociator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testMuonAssociator PUBLIC /usr/include/python2.7/)
target_include_directories(testMuonAssociator PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testMuonAssociator PUBLIC /usr/include/root/)
target_include_directories(testMuonAssociator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testMuonAssociator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testMuonAssociator PUBLIC /usr/include/boost/serialization/)
target_include_directories(testMuonAssociator PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testMuonAssociator PUBLIC /usr/include/boost/)
target_include_directories(testMuonAssociator PUBLIC /usr/include/boost/regex/)


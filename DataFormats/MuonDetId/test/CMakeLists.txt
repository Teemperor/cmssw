add_library(testMuonDetId OBJECT 
  testDTDetIds.cc
  testCSCDetId.cc
  testRPCDetId.cc
  testRPCCompDetId.cc
  testCSCTriggerNumbering.cc
  testME0DetId.cc
  testMuonDetId.cpp
)

target_include_directories(testMuonDetId PUBLIC /usr/include/boost/python/)
target_include_directories(testMuonDetId PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testMuonDetId PUBLIC /usr/include/python2.7/)
target_include_directories(testMuonDetId PUBLIC /usr/include/root/)
target_include_directories(testMuonDetId PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testMuonDetId PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testMuonDetId PUBLIC /usr/include/boost/)
target_include_directories(testMuonDetId PUBLIC /usr/include/boost/regex/)

add_library(testCSCDetId OBJECT 
  testCSCDetId.cc
  testMuonDetId.cpp
)

target_include_directories(testCSCDetId PUBLIC /usr/include/boost/python/)
target_include_directories(testCSCDetId PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCSCDetId PUBLIC /usr/include/python2.7/)
target_include_directories(testCSCDetId PUBLIC /usr/include/root/)
target_include_directories(testCSCDetId PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCSCDetId PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCSCDetId PUBLIC /usr/include/boost/)
target_include_directories(testCSCDetId PUBLIC /usr/include/boost/regex/)

add_library(CSCDetIdAnalyzer OBJECT 
  CSCDetIdAnalyzer.cc
)

target_include_directories(CSCDetIdAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(CSCDetIdAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCDetIdAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(CSCDetIdAnalyzer PUBLIC /usr/include/root/)
target_include_directories(CSCDetIdAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCDetIdAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCDetIdAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(CSCDetIdAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(RPCDetIdAnalyzer OBJECT 
  RPCDetIdAnalyzer.cc
)

target_include_directories(RPCDetIdAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(RPCDetIdAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RPCDetIdAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(RPCDetIdAnalyzer PUBLIC /usr/include/root/)
target_include_directories(RPCDetIdAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RPCDetIdAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RPCDetIdAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(RPCDetIdAnalyzer PUBLIC /usr/include/boost/regex/)


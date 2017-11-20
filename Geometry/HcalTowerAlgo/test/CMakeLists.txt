add_library(testHcalTowerAlgoTester OBJECT 
  HcalGeometryDump.cc
  HcalGeometryTester.cc
  HcalGeometryDetIdAnalyzer.cc
  HcalDetIdTester.cc
  CaloTowerGeometryAnalyzer.cc
  HcalGeometryAnalyzer.cc
  HcalGeometryPlan1Tester.cc
)

target_include_directories(testHcalTowerAlgoTester PUBLIC /usr/include/boost/python/)
target_include_directories(testHcalTowerAlgoTester PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testHcalTowerAlgoTester PUBLIC /usr/include/python2.7/)
target_include_directories(testHcalTowerAlgoTester PUBLIC /usr/include/root/)
target_include_directories(testHcalTowerAlgoTester PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testHcalTowerAlgoTester PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testHcalTowerAlgoTester PUBLIC /usr/include/boost/serialization/)
target_include_directories(testHcalTowerAlgoTester PUBLIC /usr/include/boost/)
target_include_directories(testHcalTowerAlgoTester PUBLIC /usr/include/boost/regex/)


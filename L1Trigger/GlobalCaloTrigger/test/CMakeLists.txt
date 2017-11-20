add_library(L1GctTest OBJECT 
  SealModule.cc
  L1GctLutFromFile.cc
  gctTestFirmware.cc
  L1GctTest.cc
  gctTestSingleEvent.cc
  gctTestUsingLhcData.cc
  gctTestHfEtSums.cc
  FakeGctInputTester.cc
  L1GctTestAnalyzer.cc
  FakeGctInputProducer.cc
  gctTestElectrons.cc
  gctTestFunctions.cc
  gctTestHt.cc
  produceTrivialCalibrationLut.cc
  gctTestEnergyAlgos.cc
)

target_include_directories(L1GctTest PUBLIC /usr/include/boost/python/)
target_include_directories(L1GctTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1GctTest PUBLIC /usr/include/python2.7/)
target_include_directories(L1GctTest PUBLIC /usr/include/root/)
target_include_directories(L1GctTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1GctTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1GctTest PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1GctTest PUBLIC /usr/include/boost/)
target_include_directories(L1GctTest PUBLIC /usr/include/boost/regex/)

add_library(checkLut OBJECT 
  checkLut.cpp
  produceTrivialCalibrationLut.cc
  L1GctLutFromFile.cc
)

target_include_directories(checkLut PUBLIC /usr/include/boost/python/)
target_include_directories(checkLut PUBLIC /usr/include/boost/filesystem/)
target_include_directories(checkLut PUBLIC /usr/include/python2.7/)
target_include_directories(checkLut PUBLIC /usr/include/root/)
target_include_directories(checkLut PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(checkLut PUBLIC /home/teemperor/cms/md5/)
target_include_directories(checkLut PUBLIC /usr/include/boost/serialization/)
target_include_directories(checkLut PUBLIC /usr/include/boost/)
target_include_directories(checkLut PUBLIC /usr/include/boost/regex/)

add_library(printMap OBJECT 
  printMap.cpp
)

target_include_directories(printMap PUBLIC /usr/include/boost/python/)
target_include_directories(printMap PUBLIC /usr/include/boost/filesystem/)
target_include_directories(printMap PUBLIC /usr/include/python2.7/)
target_include_directories(printMap PUBLIC /usr/include/root/)
target_include_directories(printMap PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(printMap PUBLIC /home/teemperor/cms/md5/)
target_include_directories(printMap PUBLIC /usr/include/boost/serialization/)
target_include_directories(printMap PUBLIC /usr/include/boost/)
target_include_directories(printMap PUBLIC /usr/include/boost/regex/)

add_library(printLut OBJECT 
  printLut.cpp
  produceTrivialCalibrationLut.cc
)

target_include_directories(printLut PUBLIC /usr/include/boost/python/)
target_include_directories(printLut PUBLIC /usr/include/boost/filesystem/)
target_include_directories(printLut PUBLIC /usr/include/python2.7/)
target_include_directories(printLut PUBLIC /usr/include/root/)
target_include_directories(printLut PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(printLut PUBLIC /home/teemperor/cms/md5/)
target_include_directories(printLut PUBLIC /usr/include/boost/serialization/)
target_include_directories(printLut PUBLIC /usr/include/boost/)
target_include_directories(printLut PUBLIC /usr/include/boost/regex/)

add_library(testGctMap OBJECT 
  testGctMap.cpp
)

target_include_directories(testGctMap PUBLIC /usr/include/boost/python/)
target_include_directories(testGctMap PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testGctMap PUBLIC /usr/include/python2.7/)
target_include_directories(testGctMap PUBLIC /usr/include/root/)
target_include_directories(testGctMap PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testGctMap PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testGctMap PUBLIC /usr/include/boost/serialization/)
target_include_directories(testGctMap PUBLIC /usr/include/boost/)
target_include_directories(testGctMap PUBLIC /usr/include/boost/regex/)

add_library(testEtTypes OBJECT 
  testEtTypes.cpp
)

target_include_directories(testEtTypes PUBLIC /usr/include/boost/python/)
target_include_directories(testEtTypes PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testEtTypes PUBLIC /usr/include/python2.7/)
target_include_directories(testEtTypes PUBLIC /usr/include/root/)
target_include_directories(testEtTypes PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testEtTypes PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testEtTypes PUBLIC /usr/include/boost/serialization/)
target_include_directories(testEtTypes PUBLIC /usr/include/boost/)
target_include_directories(testEtTypes PUBLIC /usr/include/boost/regex/)

add_library(testJetFinder OBJECT 
  testJetFinder.cpp
  produceTrivialCalibrationLut.cc
)

target_include_directories(testJetFinder PUBLIC /usr/include/boost/python/)
target_include_directories(testJetFinder PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testJetFinder PUBLIC /usr/include/python2.7/)
target_include_directories(testJetFinder PUBLIC /usr/include/root/)
target_include_directories(testJetFinder PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testJetFinder PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testJetFinder PUBLIC /usr/include/boost/serialization/)
target_include_directories(testJetFinder PUBLIC /usr/include/boost/)
target_include_directories(testJetFinder PUBLIC /usr/include/boost/regex/)

add_library(testElectronSorter OBJECT 
  testElectronSorter.cpp
)

target_include_directories(testElectronSorter PUBLIC /usr/include/boost/python/)
target_include_directories(testElectronSorter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testElectronSorter PUBLIC /usr/include/python2.7/)
target_include_directories(testElectronSorter PUBLIC /usr/include/root/)
target_include_directories(testElectronSorter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testElectronSorter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testElectronSorter PUBLIC /usr/include/boost/serialization/)
target_include_directories(testElectronSorter PUBLIC /usr/include/boost/)
target_include_directories(testElectronSorter PUBLIC /usr/include/boost/regex/)

add_library(testJetFinalStage OBJECT 
  testJetFinalStage.cpp
  produceTrivialCalibrationLut.cc
)

target_include_directories(testJetFinalStage PUBLIC /usr/include/boost/python/)
target_include_directories(testJetFinalStage PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testJetFinalStage PUBLIC /usr/include/python2.7/)
target_include_directories(testJetFinalStage PUBLIC /usr/include/root/)
target_include_directories(testJetFinalStage PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testJetFinalStage PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testJetFinalStage PUBLIC /usr/include/boost/serialization/)
target_include_directories(testJetFinalStage PUBLIC /usr/include/boost/)
target_include_directories(testJetFinalStage PUBLIC /usr/include/boost/regex/)

add_library(testJetEtCalibrationLut OBJECT 
  testJetEtCalibrationLut.cpp
  produceTrivialCalibrationLut.cc
)

target_include_directories(testJetEtCalibrationLut PUBLIC /usr/include/boost/python/)
target_include_directories(testJetEtCalibrationLut PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testJetEtCalibrationLut PUBLIC /usr/include/python2.7/)
target_include_directories(testJetEtCalibrationLut PUBLIC /usr/include/root/)
target_include_directories(testJetEtCalibrationLut PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testJetEtCalibrationLut PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testJetEtCalibrationLut PUBLIC /usr/include/boost/serialization/)
target_include_directories(testJetEtCalibrationLut PUBLIC /usr/include/boost/)
target_include_directories(testJetEtCalibrationLut PUBLIC /usr/include/boost/regex/)


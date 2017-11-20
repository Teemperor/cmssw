add_subdirectory(test)
add_library(OnlineDBCSCCondDB OBJECT 
  src/CSCChamberTimeCorrectionsValues.cc
  src/SealModule.cc
  src/CSCOnlineDB.cc
  src/CSCCableRead.cc
  src/CSCMap1.cc
  src/CSCAFEBConnectAnalysis.cc
  src/CSCFitAFEBThr.cc
  src/CSCChamberTimeCorrectionsReadTest.cc
  src/CSCAFEBThrAnalysis.cc
  src/CSCThrTurnOnFcn.cc
  src/CSCChamberMapValues.cc
  src/CSCToAFEB.cc
  src/CSCCrateMapValues.cc
  src/CSCChamberIndexValues.cc
  src/CSCDDUMapValues.cc
  src/CSCMap.cc
  src/CSCMap1Read.cc
  src/CSCAFEBAnalyzer.cc
)

target_include_directories(OnlineDBCSCCondDB PUBLIC /home/teemperor/cms/ext/linux-oracle-client/instantclient_12_1/sdk/include)
target_include_directories(OnlineDBCSCCondDB PUBLIC /usr/include/python2.7/)
target_include_directories(OnlineDBCSCCondDB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(OnlineDBCSCCondDB PUBLIC /usr/include/boost/serialization/)
target_include_directories(OnlineDBCSCCondDB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(OnlineDBCSCCondDB PUBLIC /usr/include/boost/)
target_include_directories(OnlineDBCSCCondDB PUBLIC /usr/include/boost/python/)
target_include_directories(OnlineDBCSCCondDB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(OnlineDBCSCCondDB PUBLIC /usr/include/root/)
target_include_directories(OnlineDBCSCCondDB PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(OnlineDBCSCCondDB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(OnlineDBCSCCondDB PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(OnlineDBCSCCondDB PUBLIC /usr/include/boost/regex/)


add_library(OnlineDBCSCCondDB_TestPlugins OBJECT 
  ../src/CSCMap1.cc
  ../src/CSCCableRead.cc
  stubs/CSCChamberIndexPopConAnalyzer.cc
  stubs/CSCCrateMapPopConAnalyzer.cc
  stubs/CSCChamberTimeCorrectionsHandler.cc
  stubs/CSCDDUMapPopConAnalyzer.cc
  stubs/CSCChamberIndexHandler.cc
  stubs/CSCChamberMapPopConAnalyzer.cc
  stubs/CSCChamberMapHandler.cc
  stubs/CSCCrateMapHandler.cc
  stubs/CSCDDUMapHandler.cc
  stubs/CSCChamberTimeCorrectionsPopConAnalyzer.cc
)

target_include_directories(OnlineDBCSCCondDB_TestPlugins PUBLIC /home/teemperor/cms/ext/linux-oracle-client/instantclient_12_1/sdk/include)
target_include_directories(OnlineDBCSCCondDB_TestPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(OnlineDBCSCCondDB_TestPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(OnlineDBCSCCondDB_TestPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(OnlineDBCSCCondDB_TestPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(OnlineDBCSCCondDB_TestPlugins PUBLIC /usr/include/boost/)
target_include_directories(OnlineDBCSCCondDB_TestPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(OnlineDBCSCCondDB_TestPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(OnlineDBCSCCondDB_TestPlugins PUBLIC /usr/include/root/)
target_include_directories(OnlineDBCSCCondDB_TestPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(OnlineDBCSCCondDB_TestPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(OnlineDBCSCCondDB_TestPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(OnlineDBCSCCondDB_TestPlugins PUBLIC /usr/include/boost/regex/)


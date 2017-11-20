add_subdirectory(plugins)
add_library(CondToolsRPC OBJECT 
  src/RPCIDMapSH.cc
  src/RPCRunIOV.cc
  src/L1RPCHwConfigDBWriter.cc
  src/RPCDCCLinkMapHandler.cc
  src/RPCUXCSH.cc
  src/RPCGasSH.cc
  src/RPCStatusSH.cc
  src/RPCDBCom.cc
  src/L1RPCHwConfigSourceHandler.cc
  src/RPCAMCLinkMapHandler.cc
  src/RPCFebmapSH.cc
  src/RPCLBLinkNameParser.cc
  src/RPCVmonSH.cc
  src/RPCDBPerformanceHandler.cc
  src/RPCLBLinkMapHandler.cc
  src/RPCFw.cc
  src/RPCGasMixSH.cc
  src/RPCStripNoisesRcdRead.cc
  src/RPCEMapDBWriter.cc
  src/RPCDBSimSetUp.cc
  src/RPCEMapSourceHandler.cc
  src/RPCTempSH.cc
  src/RPCImonSH.cc
)

target_include_directories(CondToolsRPC PUBLIC /usr/include/python2.7/)
target_include_directories(CondToolsRPC PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondToolsRPC PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondToolsRPC PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondToolsRPC PUBLIC /usr/include/boost/)
target_include_directories(CondToolsRPC PUBLIC /usr/include/boost/python/)
target_include_directories(CondToolsRPC PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondToolsRPC PUBLIC /usr/include/root/)
target_include_directories(CondToolsRPC PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondToolsRPC PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondToolsRPC PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondToolsRPC PUBLIC /usr/include/boost/regex/)


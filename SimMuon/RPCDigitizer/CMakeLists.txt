add_subdirectory(test)
add_subdirectory(plugins)
add_library(SimMuonRPCDigitizer OBJECT 
  src/RPCSimAverageNoise.cc
  src/IRPCDigitizer.cc
  src/SealModule.cc
  src/RPCSimFactory.cc
  src/RPCSynchronizer.cc
  src/RPCSimTriv.cc
  src/RPCSimAverageNoiseEff.cc
  src/RPCandIRPCDigiProducer.cc
  src/RPCSimParam.cc
  src/RPCSim.cc
  src/RPCSimSimple.cc
  src/RPCSimModelTiming.cc
  src/RPCDigiProducer.cc
  src/RPCNeutronWriter.cc
  src/RPCSimAsymmetricCls.cc
  src/RPCDigitizer.cc
  src/RPCSimSetUp.cc
  src/RPCSimAverageNoiseEffCls.cc
  src/RPCSimAverage.cc
)

target_include_directories(SimMuonRPCDigitizer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(SimMuonRPCDigitizer PUBLIC /usr/include/python2.7/)
target_include_directories(SimMuonRPCDigitizer PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(SimMuonRPCDigitizer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimMuonRPCDigitizer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimMuonRPCDigitizer PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimMuonRPCDigitizer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimMuonRPCDigitizer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(SimMuonRPCDigitizer PUBLIC /usr/include/boost/)
target_include_directories(SimMuonRPCDigitizer PUBLIC /usr/include/boost/python/)
target_include_directories(SimMuonRPCDigitizer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimMuonRPCDigitizer PUBLIC /usr/include/root/)
target_include_directories(SimMuonRPCDigitizer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(SimMuonRPCDigitizer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimMuonRPCDigitizer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(SimMuonRPCDigitizer PUBLIC /usr/include/boost/regex/)


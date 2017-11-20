add_subdirectory(plugins)
add_library(DQML1TMonitor OBJECT 
  src/L1TRCT.cc
  src/L1TStage2EMTF.cc
  src/L1TFED.cc
  src/L1TStage2uGMT.cc
  src/L1TRPCTF.cc
  src/L1TStage2CaloLayer2.cc
  src/L1TdeCSCTF.cc
  src/L1TdeStage2EMTF.cc
  src/L1TDTTF.cc
  src/L1TRPCTPG.cc
  src/L1GtHwValidation.cc
  src/L1TCSCTF.cc
  src/L1TStage2MuonComp.cc
  src/L1TPUM.cc
  src/BxTiming.cc
  src/L1TMP7ZeroSupp.cc
  src/L1TdeStage2CaloLayer1.cc
  src/L1TdeRCT.cc
  src/L1TOMDSHelper.cc
  src/L1TDEMON.cc
  src/L1TBPTX.cc
  src/L1TMenuHelper.cc
  src/L1TdeGCT.cc
  src/L1TStage2CaloLayer1.cc
  src/L1TStage2uGMTMuon.cc
  src/L1TGMT.cc
  src/L1TStage2uGT.cc
  src/L1TCSCTPG.cc
  src/L1TStage2BMTF.cc
  src/L1TRate.cc
  src/L1THIonImp.cc
  src/L1TGT.cc
  src/L1TCompare.cc
  src/L1TStage2OMTF.cc
  src/L1TGCT.cc
  src/L1TDTTPG.cc
  src/L1ExtraDQM.cc
  src/L1TStage2RegionalMuonCandComp.cc
  src/L1TSync.cc
)

target_include_directories(DQML1TMonitor PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DQML1TMonitor PUBLIC /usr/include/python2.7/)
target_include_directories(DQML1TMonitor PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(DQML1TMonitor PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DQML1TMonitor PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQML1TMonitor PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQML1TMonitor PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQML1TMonitor PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DQML1TMonitor PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQML1TMonitor PUBLIC /usr/include/boost/)
target_include_directories(DQML1TMonitor PUBLIC /usr/include/boost/python/)
target_include_directories(DQML1TMonitor PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQML1TMonitor PUBLIC /usr/include/root/)
target_include_directories(DQML1TMonitor PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQML1TMonitor PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQML1TMonitor PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQML1TMonitor PUBLIC /usr/include/boost/regex/)


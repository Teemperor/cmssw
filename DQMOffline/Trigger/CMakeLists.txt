add_subdirectory(plugins)
add_library(DQMOfflineTrigger OBJECT 
  src/TopDiLeptonHLTOfflineDQM.cc
  src/SealModule.cc
  src/HLTInclusiveVBFSource.cc
  src/HLTTauCertifier.cc
  src/EgHLTOfflineSummaryClient.cc
  src/BTVHLTOfflineSource.cc
  src/HLTTauDQMPlotter.cc
  src/GeneralHLTOffline.cc
  src/EgHLTEgCutCodes.cc
  src/EgHLTBinData.cc
  src/HotlineDQM.cc
  src/HeavyIonUCCDQM.cc
  src/EgHLTPhoHLTFilterMon.cc
  src/EgHLTOffEvt.cc
  src/EgHLTEgCutValues.cc
  src/EgHLTComCodes.cc
  src/JetMETHLTOfflineClient.cc
  src/HLTTauDQMPathPlotter.cc
  src/HLTTauDQMPathSummaryPlotter.cc
  src/EgHLTOfflineClient.cc
  src/TopHLTOfflineDQMHelper.cc
  src/HLTTauDQMOfflineSource.cc
  src/FSQDiJetAve.cc
  src/EgHLTTrigCodes.cc
  src/HLTTauRefProducer.cc
  src/EgHLTOffEgSel.cc
  src/EgHLTMonElemFuncs.cc
  src/EgHLTDQMCut.cc
  src/EgHLTTrigTools.cc
  src/DQMOfflineHLTEventInfoClient.cc
  src/HigPhotonJetHLTOfflineSource.cc
  src/EgHLTOffEle.cc
  src/JetMETHLTOfflineSource.cc
  src/EgHLTOffHelper.cc
  src/EgHLTEleHLTFilterMon.cc
  src/HLTInclusiveVBFClient.cc
  src/HLTMuonMatchAndPlotContainer.cc
  src/HLTTauPostProcessor.cc
  src/HLTOverallSummary.cc
  src/HLTMuonMatchAndPlot.cc
  src/EventShapeDQM.cc
  src/EgHLTOfflineSource.cc
  src/HLTMuonCertSummary.cc
  src/HLTMuonOfflineAnalyzer.cc
  src/HLTTauDQML1Plotter.cc
  src/HLTTauDQMPath.cc
  src/EgHLTOffPho.cc
  src/TopSingleLeptonHLTOfflineDQM.cc
)

target_include_directories(DQMOfflineTrigger PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DQMOfflineTrigger PUBLIC /usr/include/python2.7/)
target_include_directories(DQMOfflineTrigger PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DQMOfflineTrigger PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMOfflineTrigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMOfflineTrigger PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMOfflineTrigger PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DQMOfflineTrigger PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQMOfflineTrigger PUBLIC /usr/include/boost/)
target_include_directories(DQMOfflineTrigger PUBLIC /usr/include/eigen3/)
target_include_directories(DQMOfflineTrigger PUBLIC /usr/include/boost/python/)
target_include_directories(DQMOfflineTrigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMOfflineTrigger PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(DQMOfflineTrigger PUBLIC /usr/include/root/)
target_include_directories(DQMOfflineTrigger PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQMOfflineTrigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMOfflineTrigger PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQMOfflineTrigger PUBLIC /usr/include/boost/regex/)


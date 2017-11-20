add_library(DPGAnalysisSiStripToolsPlugins OBJECT 
  MultiplicityCorrelator.cc
  APVShotsFilter.cc
  FromClusterSummaryMultiplicityProducer.cc
  ByMultiplicityEventFilter.cc
  DetIdSelectorTest.cc
  TrackerDpgAnalysis.cc
  APVShotsAnalyzer.cc
  L1ABCDebugger.cc
  OverlapProblemTSOSPositionFilter.cc
  APVCyclePhaseProducerFromL1ABC.cc
  CommonModeAnalyzer.cc
  OccupancyPlots.cc
  SiStripDetWithSomething.cc
  MultiplicityInvestigator.cc
  OverlapProblemTSOSAnalyzer.cc
  FEDBadModuleFilter.cc
  SiPixelQualityHistory.cc
  ConfigurableAPVCyclePhaseProducer.cc
  TrackCount.cc
  APVCyclePhaseProducerFromL1TS.cc
  MultiplicityProducer.cc
  EventWithHistoryEDFilter.cc
  APVCyclePhaseMonitor.cc
  LargeEvents.cc
  APVCyclePhaseDebuggerFromL1TS.cc
  DuplicateRecHits.cc
  BigEventsDebugger.cc
  EventWithHistoryProducer.cc
  MultiplicityTimeCorrelations.cc
  SeedMultiplicityAnalyzer.cc
  OverlapProblemTPAnalyzer.cc
  SiStripQualityHistory.cc
  EventTimeDistribution.cc
  EventWithHistoryProducerFromL1ABC.cc
)

target_include_directories(DPGAnalysisSiStripToolsPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DPGAnalysisSiStripToolsPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(DPGAnalysisSiStripToolsPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DPGAnalysisSiStripToolsPlugins PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DPGAnalysisSiStripToolsPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DPGAnalysisSiStripToolsPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(DPGAnalysisSiStripToolsPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DPGAnalysisSiStripToolsPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DPGAnalysisSiStripToolsPlugins PUBLIC /usr/include/boost/)
target_include_directories(DPGAnalysisSiStripToolsPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(DPGAnalysisSiStripToolsPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DPGAnalysisSiStripToolsPlugins PUBLIC /usr/include/root/)
target_include_directories(DPGAnalysisSiStripToolsPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DPGAnalysisSiStripToolsPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DPGAnalysisSiStripToolsPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DPGAnalysisSiStripToolsPlugins PUBLIC /usr/include/boost/regex/)


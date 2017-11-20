add_subdirectory(plugins)
add_library(DQMDTMonitorModule OBJECT 
  src/DTEfficiencyTask.cc
  src/DTDCSByLumiTask.cc
  src/DTNoiseTask.cc
  src/DTLocalTriggerBaseTask.cc
  src/DTDataIntegrityTask.cc
  src/DTLocalTriggerSynchTask.cc
  src/DTChamberEfficiencyTask.cc
  src/DTCalibValidation.cc
  src/DTResolutionAnalysisTask.cc
  src/DTTimeEvolutionHisto.cc
  src/DTSegmentAnalysisTask.cc
  src/DTTrigGeomUtils.cc
  src/DTRunConditionVar.cc
  src/DTTriggerEfficiencyTask.cc
  src/DTDigiTask.cc
  src/DTScalerInfoTask.cc
  src/DTLocalTriggerTask.cc
  src/DTLocalTriggerLutTask.cc
  src/DTChamberEfficiency.cc
)

target_include_directories(DQMDTMonitorModule PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DQMDTMonitorModule PUBLIC /usr/include/python2.7/)
target_include_directories(DQMDTMonitorModule PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(DQMDTMonitorModule PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DQMDTMonitorModule PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMDTMonitorModule PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMDTMonitorModule PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMDTMonitorModule PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DQMDTMonitorModule PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQMDTMonitorModule PUBLIC /usr/include/boost/)
target_include_directories(DQMDTMonitorModule PUBLIC /usr/include/boost/python/)
target_include_directories(DQMDTMonitorModule PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMDTMonitorModule PUBLIC /usr/include/root/)
target_include_directories(DQMDTMonitorModule PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQMDTMonitorModule PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMDTMonitorModule PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQMDTMonitorModule PUBLIC /usr/include/boost/regex/)


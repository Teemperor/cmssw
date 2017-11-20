add_subdirectory(plugins)
add_library(DQMEcalMonitorTasks OBJECT 
  src/TestPulseTask.cc
  src/OccupancyTask.cc
  src/RecoSummaryTask.cc
  src/PresampleTask.cc
  src/EnergyTask.cc
  src/TrigPrimTask.cc
  src/PedestalTask.cc
  src/LedTask.cc
  src/ClusterTask.cc
  src/SelectiveReadoutTask.cc
  src/RawDataTask.cc
  src/PNDiodeTask.cc
  src/DQWorkerTask.cc
  src/TimingTask.cc
  src/LaserTask.cc
  src/IntegrityTask.cc
)

target_include_directories(DQMEcalMonitorTasks PUBLIC /usr/include/python2.7/)
target_include_directories(DQMEcalMonitorTasks PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMEcalMonitorTasks PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMEcalMonitorTasks PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMEcalMonitorTasks PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQMEcalMonitorTasks PUBLIC /usr/include/boost/)
target_include_directories(DQMEcalMonitorTasks PUBLIC /usr/include/eigen3/)
target_include_directories(DQMEcalMonitorTasks PUBLIC /usr/include/boost/python/)
target_include_directories(DQMEcalMonitorTasks PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMEcalMonitorTasks PUBLIC /usr/include/root/)
target_include_directories(DQMEcalMonitorTasks PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQMEcalMonitorTasks PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMEcalMonitorTasks PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQMEcalMonitorTasks PUBLIC /usr/include/boost/regex/)


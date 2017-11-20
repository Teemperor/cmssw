add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoEcalEgammaCoreTools OBJECT 
  src/EcalTools.cc
  src/EcalClusterPUCleaningTools.cc
  src/SuperClusterShapeAlgo.cc
  src/EcalNextToDeadChannelRcd.cc
  src/BremRecoveryPhiRoadAlgo.cc
  src/ClusterShapeAlgo.cc
  src/EcalClusterLazyTools.cc
  src/Mustache.cc
  src/EcalClusterSeverityLevelAlgo.cc
  src/T_EventSetup_EcalNextToDeadChannel.cc
  src/EcalClusterFunctionFactory.cc
  src/PositionCalc.cc
)

target_include_directories(RecoEcalEgammaCoreTools PUBLIC /usr/include/python2.7/)
target_include_directories(RecoEcalEgammaCoreTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoEcalEgammaCoreTools PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoEcalEgammaCoreTools PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoEcalEgammaCoreTools PUBLIC /usr/include/boost/)
target_include_directories(RecoEcalEgammaCoreTools PUBLIC /usr/include/eigen3/)
target_include_directories(RecoEcalEgammaCoreTools PUBLIC /usr/include/boost/python/)
target_include_directories(RecoEcalEgammaCoreTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoEcalEgammaCoreTools PUBLIC /usr/include/root/)
target_include_directories(RecoEcalEgammaCoreTools PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoEcalEgammaCoreTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoEcalEgammaCoreTools PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoEcalEgammaCoreTools PUBLIC /usr/include/boost/regex/)


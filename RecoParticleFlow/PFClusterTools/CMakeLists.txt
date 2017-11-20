add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/RecoParticleFlowPFClusterToolssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/RecoParticleFlow/PFClusterTools/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/RecoParticleFlowPFClusterToolssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/RecoParticleFlow/PFClusterTools/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/RecoParticleFlow/PFClusterTools/src/classes.h /home/teemperor/cms/cmssw/RecoParticleFlow/PFClusterTools/src/classes_def.xml
  COMMENT "Generating ROOT dict RecoParticleFlowPFClusterToolssrcclassesh")

add_library(RecoParticleFlowPFClusterTools OBJECT 
  src/PFEnergyCalibration.cc
  src/Utils.cc
  src/DetectorElement.cc
  src/LinearCalibrator.cc
  src/PFResolutionMapManager.cc
  src/Calibrator.cc
  src/PFToolsException.cc
  src/LinkByRecHit.cc
  src/PFEnergyCalibrationHF.cc
  src/ParticleDeposit.cc
  src/PFClusterCalibration.cc
  src/Erl_mlp.cc
  src/Deposition.cc
  src/TreeUtility.cc
  src/PFPhotonClusters.cc
  src/PFClusterWidthAlgo.cc
  src/IO.cc
  src/PFSCEnergyCalibration.cc
  src/PFResolutionMap.cc
  src/CalibCompare.cc
  src/ClusterClusterMapping.cc
  src/SpaceVoxel.cc
  src/Exercises3.cc
  src/PFEnergyResolution.cc
  src/SpaceManager.cc
  ${CMAKE_BINARY_DIR}/RecoParticleFlowPFClusterToolssrcclassesh_rflx.cpp
)

target_include_directories(RecoParticleFlowPFClusterTools PUBLIC /usr/include/boost/python/)
target_include_directories(RecoParticleFlowPFClusterTools PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoParticleFlowPFClusterTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoParticleFlowPFClusterTools PUBLIC /usr/include/python2.7/)
target_include_directories(RecoParticleFlowPFClusterTools PUBLIC /usr/include/root/)
target_include_directories(RecoParticleFlowPFClusterTools PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoParticleFlowPFClusterTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoParticleFlowPFClusterTools PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoParticleFlowPFClusterTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoParticleFlowPFClusterTools PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoParticleFlowPFClusterTools PUBLIC /usr/include/boost/)
target_include_directories(RecoParticleFlowPFClusterTools PUBLIC /usr/include/boost/regex/)


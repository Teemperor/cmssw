add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsL1Triggersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/L1Trigger/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsL1Triggersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/L1Trigger/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/L1Trigger/src/classes.h /home/teemperor/cms/cmssw/DataFormats/L1Trigger/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsL1Triggersrcclassesh")

add_library(DataFormatsL1Trigger OBJECT 
  src/CaloSpare.cc
  src/L1MonitorDigi.cc
  src/L1EtMissParticle.cc
  src/L1Candidate.cc
  src/Tau.cc
  src/L1MuonParticle.cc
  src/Jet.cc
  src/L1TriggerError.cc
  src/L1DataEmulRecord.cc
  src/EGamma.cc
  src/L1ParticleMap.cc
  src/L1HFRings.cc
  src/L1EmParticle.cc
  src/L1DataEmulDigi.cc
  src/Muon.cc
  src/HOTPDigiTwinMux.cc
  src/EtSum.cc
  src/L1DataEmulResult.cc
  src/L1JetParticle.cc
  src/EtSumHelper.cc
  ${CMAKE_BINARY_DIR}/DataFormatsL1Triggersrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsL1Trigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsL1Trigger PUBLIC /usr/include/root/)
target_include_directories(DataFormatsL1Trigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsL1Trigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsL1Trigger PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsL1Trigger PUBLIC /usr/include/boost/regex/)


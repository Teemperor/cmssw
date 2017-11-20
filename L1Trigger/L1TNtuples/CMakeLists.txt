add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/L1TriggerL1TNtuplessrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/L1Trigger/L1TNtuples/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/L1TriggerL1TNtuplessrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/L1Trigger/L1TNtuples/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/L1Trigger/L1TNtuples/src/classes.h /home/teemperor/cms/cmssw/L1Trigger/L1TNtuples/src/classes_def.xml
  COMMENT "Generating ROOT dict L1TriggerL1TNtuplessrcclassesh")

add_library(L1TriggerL1TNtuples OBJECT 
  src/L1AnalysisRecoRpcHit.cc
  src/L1AnalysisRCT.cc
  src/L1AnalysisL1UpgradeTfMuon.cc
  src/L1AnalysisL1Extra.cc
  src/L1AnalysisL1Upgrade.cc
  src/L1AnalysisRecoMet.cc
  src/L1AnalysisRecoTau.cc
  src/L1AnalysisSimulation.cc
  src/L1AnalysisBMTFInputs.cc
  src/L1AnalysisRecoJet.cc
  src/L1AnalysisRecoMuon.cc
  src/L1AnalysisDTTF.cc
  src/L1AnalysisGT.cc
  src/L1AnalysisRecoTrack.cc
  src/L1AnalysisRecoCluster.cc
  src/L1AnalysisGCT.cc
  src/L1AnalysisCSCTF.cc
  src/L1AnalysisEvent.cc
  src/L1AnalysisRecoMuon2.cc
  src/L1AnalysisRecoElectron.cc
  src/L1AnalysisL1HO.cc
  src/L1AnalysisCaloTP.cc
  src/L1AnalysisGMT.cc
  src/L1AnalysisL1Menu.cc
  ${CMAKE_BINARY_DIR}/L1TriggerL1TNtuplessrcclassesh_rflx.cpp
)

target_include_directories(L1TriggerL1TNtuples PUBLIC /usr/include/boost/iostreams/)
target_include_directories(L1TriggerL1TNtuples PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerL1TNtuples PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(L1TriggerL1TNtuples PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerL1TNtuples PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerL1TNtuples PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(L1TriggerL1TNtuples PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerL1TNtuples PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerL1TNtuples PUBLIC /usr/include/eigen3/)
target_include_directories(L1TriggerL1TNtuples PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerL1TNtuples PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerL1TNtuples PUBLIC /usr/include/root/)
target_include_directories(L1TriggerL1TNtuples PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerL1TNtuples PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerL1TNtuples PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerL1TNtuples PUBLIC /usr/include/boost/regex/)


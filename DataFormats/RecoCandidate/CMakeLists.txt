add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsRecoCandidatesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/RecoCandidate/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsRecoCandidatesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/RecoCandidate/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/RecoCandidate/src/classes.h /home/teemperor/cms/cmssw/DataFormats/RecoCandidate/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsRecoCandidatesrcclassesh")

add_library(DataFormatsRecoCandidate OBJECT 
  src/IsoDeposit.cc
  src/RecoChargedCandidate.cc
  src/RecoEcalCandidate.cc
  src/IsoDepositVetos.cc
  src/CaloRecHitCandidate.cc
  src/RecoChargedRefCandidate.cc
  src/RecoStandAloneMuonCandidate.cc
  src/RecoCaloTowerCandidate.cc
  src/RecoCandidate.cc
  ${CMAKE_BINARY_DIR}/DataFormatsRecoCandidatesrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsRecoCandidate PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsRecoCandidate PUBLIC /usr/include/root/)
target_include_directories(DataFormatsRecoCandidate PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsRecoCandidate PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsRecoCandidate PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsRecoCandidate PUBLIC /usr/include/boost/regex/)


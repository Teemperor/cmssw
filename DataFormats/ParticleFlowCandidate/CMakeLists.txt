add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsParticleFlowCandidatesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/ParticleFlowCandidate/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsParticleFlowCandidatesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/ParticleFlowCandidate/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/ParticleFlowCandidate/src/classes.h /home/teemperor/cms/cmssw/DataFormats/ParticleFlowCandidate/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsParticleFlowCandidatesrcclassesh")

add_library(DataFormatsParticleFlowCandidate OBJECT 
  src/PFCandidate.cc
  src/PFCandidateElectronExtra.cc
  src/IsolatedPFCandidate.cc
  src/PFCandidateEGammaExtra.cc
  src/PFCandidatePhotonExtra.cc
  src/PileUpPFCandidate.cc
  ${CMAKE_BINARY_DIR}/DataFormatsParticleFlowCandidatesrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsParticleFlowCandidate PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsParticleFlowCandidate PUBLIC /usr/include/root/)
target_include_directories(DataFormatsParticleFlowCandidate PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsParticleFlowCandidate PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsParticleFlowCandidate PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsParticleFlowCandidate PUBLIC /usr/include/boost/regex/)


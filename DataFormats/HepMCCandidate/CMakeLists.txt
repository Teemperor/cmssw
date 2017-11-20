add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsHepMCCandidatesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/HepMCCandidate/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsHepMCCandidatesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/HepMCCandidate/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/HepMCCandidate/src/classes.h /home/teemperor/cms/cmssw/DataFormats/HepMCCandidate/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsHepMCCandidatesrcclassesh")

add_library(DataFormatsHepMCCandidate OBJECT 
  src/GenParticle.cc
  src/GenStatusFlags.cc
  src/FlavorHistoryEvent.cc
  src/FlavorHistory.cc
  ${CMAKE_BINARY_DIR}/DataFormatsHepMCCandidatesrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsHepMCCandidate PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsHepMCCandidate PUBLIC /usr/include/root/)
target_include_directories(DataFormatsHepMCCandidate PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsHepMCCandidate PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsHepMCCandidate PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsHepMCCandidate PUBLIC /usr/include/boost/regex/)


add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsCandidatesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/Candidate/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsCandidatesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/Candidate/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/Candidate/src/classes.h /home/teemperor/cms/cmssw/DataFormats/Candidate/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsCandidatesrcclassesh")

add_library(DataFormatsCandidate OBJECT 
  src/NamedCompositeCandidate.cc
  src/VertexCompositeCandidate.cc
  src/LeafRefCandidateT.cc
  src/Candidate.cc
  src/ShallowClonePtrCandidate.cc
  src/CompositeRefCandidate.cc
  src/CompositeCandidate.cc
  src/Particle.cc
  src/VertexCompositePtrCandidate.cc
  src/CompositeRefBaseCandidate.cc
  src/LeafCandidate.cc
  src/OverlapChecker.cc
  src/ShallowCloneCandidate.cc
  src/CompositePtrCandidate.cc
  ${CMAKE_BINARY_DIR}/DataFormatsCandidatesrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsCandidate PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsCandidate PUBLIC /usr/include/root/)
target_include_directories(DataFormatsCandidate PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsCandidate PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsCandidate PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsCandidate PUBLIC /usr/include/boost/regex/)


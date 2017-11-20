add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsTrackCandidatesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/TrackCandidate/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsTrackCandidatesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/TrackCandidate/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/TrackCandidate/src/classes.h /home/teemperor/cms/cmssw/DataFormats/TrackCandidate/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsTrackCandidatesrcclassesh")

add_library(DataFormatsTrackCandidate OBJECT 
  ${CMAKE_BINARY_DIR}/DataFormatsTrackCandidatesrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsTrackCandidate PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsTrackCandidate PUBLIC /usr/include/root/)
target_include_directories(DataFormatsTrackCandidate PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsTrackCandidate PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsTrackCandidate PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsTrackCandidate PUBLIC /usr/include/boost/regex/)


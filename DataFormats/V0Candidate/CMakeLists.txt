add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsV0Candidatesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/V0Candidate/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsV0Candidatesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/V0Candidate/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/V0Candidate/src/classes.h /home/teemperor/cms/cmssw/DataFormats/V0Candidate/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsV0Candidatesrcclassesh")

add_library(DataFormatsV0Candidate OBJECT 
  src/V0Candidate.cc
  ${CMAKE_BINARY_DIR}/DataFormatsV0Candidatesrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsV0Candidate PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsV0Candidate PUBLIC /usr/include/root/)
target_include_directories(DataFormatsV0Candidate PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsV0Candidate PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsV0Candidate PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsV0Candidate PUBLIC /usr/include/boost/regex/)


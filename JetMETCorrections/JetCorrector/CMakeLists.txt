add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/JetMETCorrectionsJetCorrectorsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/JetMETCorrections/JetCorrector/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/JetMETCorrectionsJetCorrectorsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/JetMETCorrections/JetCorrector/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/JetMETCorrections/JetCorrector/src/classes.h /home/teemperor/cms/cmssw/JetMETCorrections/JetCorrector/src/classes_def.xml
  COMMENT "Generating ROOT dict JetMETCorrectionsJetCorrectorsrcclassesh")

add_library(JetMETCorrectionsJetCorrector OBJECT 
  src/JetCorrector.cc
  src/JetCorrectorImpl.cc
  ${CMAKE_BINARY_DIR}/JetMETCorrectionsJetCorrectorsrcclassesh_rflx.cpp
)

target_include_directories(JetMETCorrectionsJetCorrector PUBLIC /usr/include/boost/filesystem/)
target_include_directories(JetMETCorrectionsJetCorrector PUBLIC /usr/include/root/)
target_include_directories(JetMETCorrectionsJetCorrector PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(JetMETCorrectionsJetCorrector PUBLIC /home/teemperor/cms/md5/)
target_include_directories(JetMETCorrectionsJetCorrector PUBLIC /usr/include/boost/)
target_include_directories(JetMETCorrectionsJetCorrector PUBLIC /usr/include/boost/regex/)


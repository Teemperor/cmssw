add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/AnalysisDataFormatsTopObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/AnalysisDataFormats/TopObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/AnalysisDataFormatsTopObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/AnalysisDataFormats/TopObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/AnalysisDataFormats/TopObjects/src/classes.h /home/teemperor/cms/cmssw/AnalysisDataFormats/TopObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict AnalysisDataFormatsTopObjectssrcclassesh")

add_library(AnalysisDataFormatsTopObjects OBJECT 
  src/TtSemiLepEvtPartons.cc
  src/TtSemiLeptonicEvent.cc
  src/StGenEvent.cc
  src/TtGenEvent.cc
  src/TtFullHadEvtPartons.cc
  src/TopGenEvent.cc
  src/TtDilepEvtSolution.cc
  src/TtFullLeptonicEvent.cc
  src/TtFullHadronicEvent.cc
  src/TtFullLepEvtPartons.cc
  src/TtEventPartons.cc
  src/StEvtSolution.cc
  src/TtEvent.cc
  src/TtSemiEvtSolution.cc
  src/TtHadEvtSolution.cc
  ${CMAKE_BINARY_DIR}/AnalysisDataFormatsTopObjectssrcclassesh_rflx.cpp
)

target_include_directories(AnalysisDataFormatsTopObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AnalysisDataFormatsTopObjects PUBLIC /usr/include/root/)
target_include_directories(AnalysisDataFormatsTopObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AnalysisDataFormatsTopObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AnalysisDataFormatsTopObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(AnalysisDataFormatsTopObjects PUBLIC /usr/include/boost/)
target_include_directories(AnalysisDataFormatsTopObjects PUBLIC /usr/include/boost/regex/)


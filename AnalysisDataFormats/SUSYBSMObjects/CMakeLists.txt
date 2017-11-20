add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/AnalysisDataFormatsSUSYBSMObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/AnalysisDataFormats/SUSYBSMObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/AnalysisDataFormatsSUSYBSMObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/AnalysisDataFormats/SUSYBSMObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/AnalysisDataFormats/SUSYBSMObjects/src/classes.h /home/teemperor/cms/cmssw/AnalysisDataFormats/SUSYBSMObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict AnalysisDataFormatsSUSYBSMObjectssrcclassesh")

add_library(AnalysisDataFormatsSUSYBSMObjects OBJECT 
  src/HSCParticle.cc
  ${CMAKE_BINARY_DIR}/AnalysisDataFormatsSUSYBSMObjectssrcclassesh_rflx.cpp
)

target_include_directories(AnalysisDataFormatsSUSYBSMObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AnalysisDataFormatsSUSYBSMObjects PUBLIC /usr/include/root/)
target_include_directories(AnalysisDataFormatsSUSYBSMObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AnalysisDataFormatsSUSYBSMObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AnalysisDataFormatsSUSYBSMObjects PUBLIC /usr/include/boost/)
target_include_directories(AnalysisDataFormatsSUSYBSMObjects PUBLIC /usr/include/boost/regex/)


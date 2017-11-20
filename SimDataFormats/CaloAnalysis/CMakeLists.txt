add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsCaloAnalysissrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/CaloAnalysis/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsCaloAnalysissrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/CaloAnalysis/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/CaloAnalysis/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/CaloAnalysis/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsCaloAnalysissrcclassesh")

add_library(SimDataFormatsCaloAnalysis OBJECT 
  src/CaloParticle.cc
  src/SimCluster.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsCaloAnalysissrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsCaloAnalysis PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsCaloAnalysis PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsCaloAnalysis PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsCaloAnalysis PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsCaloAnalysis PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsCaloAnalysis PUBLIC /usr/include/boost/regex/)

